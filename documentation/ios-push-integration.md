## Step 1: Add capabilities in iOS application

1. Inside Targets select **signing and capabilities** 
2. Click on **+capabilities**  and select **Push Notifications** and **Background Modes**

![](https://files.readme.io/29bafbe-Screenshot_2022-05-19_at_5.48.52_PM.png)

3. In Background Modes, select **Remote Notifications** option. We use background notifications to receive delivery reports when your app is in quit and background state. Refer [doc](https://developer.apple.com/documentation/usernotifications/setting_up_a_remote_notification_server/pushing_background_updates_to_your_app) to know more about background notification

![](https://files.readme.io/75c5310-Screenshot_2022-09-27_at_1.48.11_PM.png)

<br />

## Step 2: Register for push notification in AppDelegate.swift file

Call _registerForPushNotifications_  method below the SuprSend sdk initialized code which will register the iOS device for push service

```objectivec AppDelegate.swift
SuprSend.shared.configureWith(configuration: suprSendConfiguration, launchOptions: launchOptions) // init code which is already added at time of initialisation
var options: UNAuthorizationOptions = [.badge, .alert, .sound] // Add this
SuprSend.shared.registerForPushNotifications(options: options) // Add this
```

## Asking User to send push notifications

There are 2 ways in which your app can prompt users to allow push notifications on their devices:

1. Explicit Authorization
2. Provisional Authorization

<br />

### 1\. Explicit Authorization

Explicit authorization allows you to display alerts, add a badge to the app icon, or play sounds whenever a notification is delivered. In this type of authorization, the request is made the first time user launches your app. If the user denies the request, you can't send subsequent prompts to send the notification.

![](https://files.readme.io/8538f91-app_permission.png)

<br />

> 📘 Default Authorization method
> 
> Explicit authorization is our default authorization method as it automatically sets alert, sound and badge as soon as the user allows this request.

<br />

### 2\. Provisional Authorization (Supported in iOS 12.0 and above)

Provisional notifications are sent quietly to the users —they don’t interrupt the user with a sound or banner. Also, they will not be shown when your app is in foreground. First time this type of notifications are sent, user is asked to "Keep" or "Turn off" the notifications. If they click on "Keep", the further notifications continue to be sent

![](https://files.readme.io/0367021-provisional.png)


Add below code in `AppDelegate.swift` file for provisional authorization instead of the above one

```swift AppDelegate.swift
SuprSend.shared.configureWith(configuration: suprSendConfiguration, launchOptions: launchOptions) // init code which is already added at time of initialisation

var options: UNAuthorizationOptions = [.badge, .alert, .sound]

// If you want to use provisional authorization
if #available(iOS 12.0, *) {
  options = [.badge, .alert, .sound, .provisional]
}
SuprSend.shared.registerForPushNotifications(options: options)
```

<br />

## Step 4: Enable sending and tracking of push notifications

Receiving iOS APNS token sending to backend and listening for push notification and tracking user notification clicks can be done using the following snippet of code. Directly copy and paste it at end of the AppDelegate.swift file inside _AppDelegate_ class

```swift AppDelegate.swift
override func application(_ application: UIApplication, didRegisterForRemoteNotificationsWithDeviceToken deviceToken: Data) {
  let tokenParts = deviceToken.map { data in String(format: "%02.2hhx", data) }
  let  token = tokenParts.joined()
  SuprSend.shared.setPushNotificationToken(token: token)  // Send APNS Token to SuprSend
}

@available(iOS 10.0, *)
override func userNotificationCenter(
  _ center: UNUserNotificationCenter,
  didReceive response: UNNotificationResponse,
  withCompletionHandler completionHandler: @escaping () -> Void
) {
  if response.isSuprSendNotification() {
    SuprSend.shared.userNotificationCenter(center, didReceive: response)
  }
  completionHandler()
}
    
override func application(_ application: UIApplication, didReceiveRemoteNotification userInfo: [AnyHashable : Any]){
  SuprSend.shared.application(application, didReceiveRemoteNotification: userInfo)
}
    
@available(iOS 10.0, *)
override func userNotificationCenter(_ center: UNUserNotificationCenter, willPresent notification: UNNotification, withCompletionHandler completionHandler: @escaping (UNNotificationPresentationOptions) -> Void) {
  if #available(iOS 14.0, *) {
    completionHandler([.banner, .badge, .sound])
  } else {
    completionHandler([.alert, .badge, .sound])
  }
}
```

<br />

> 🚧 Testing notification in development mode
> 
> iOS Push notifications only work on real devices so while developing/testing use real device to test it instead of simulators

## Step 5: Adding support for Notification service.

For better notification status (delivered, seen) tracking this step is needed.

1. In Xcode go to **File > New > Target**. 
2. Select Notification Service Extension from the template list.
3. Then in Next popup give it any product name, select your team, select swift language and click finish.

![](https://files.readme.io/2545534-Screenshot_2022-09-27_at_8.23.30_PM.png)

<br />

4. After clicking on "Finish", a folder will be created with your given product name. Inside that there will be **NotificationService.swift** file like below. 

![](https://files.readme.io/507d91a-Screenshot_2022-09-27_at_8.30.25_PM.png)

<br />

5. In your project podFile add following snippet to add support for notification service to access SuprSend SDK methods. In below snippet replace <your notification service name> with name you given to notification service while creating it.

```
target '<your notification service name>' do
  pod 'SuprsendCore'
  pod 'SuprSendSdk'
end
```

![](https://files.readme.io/d33de71c2e154a8622ee0ebf51e1d8747715b5496215b73db289fe6010c525be-Screenshot_2024-09-03_at_2.08.29_PM.png)



6. Replace the content in **NotificationService.swift** file with below code to start sending push notifications with image

```swift NotificationService.swift
import UserNotifications
import UIKit

class NotificationService: UNNotificationServiceExtension {
var contentHandler: ((UNNotificationContent) -> Void)?
var modifiedNotificationContent: UNMutableNotificationContent?
  
private func track(request: UNNotificationRequest, withContentHandler contentHandler: @escaping (UNNotificationContent) -> Void) {
          
  let suprSendConfiguration = SuprSendSDKConfiguration(
    withKey: "your workspace key",
    secret: "your workspace secret"
  )

  SuprSend.shared.configureWith(configuration: suprSendConfiguration , launchOptions: [:])
  SuprSend.shared.didReceive(request, withContentHandler: contentHandler)
}

override func didReceive(_ request: UNNotificationRequest, withContentHandler contentHandler: @escaping (UNNotificationContent) -> Void) {
    self.contentHandler = contentHandler
    modifiedNotificationContent = (request.content.mutableCopy() as? UNMutableNotificationContent)
    
    track(request: request, withContentHandler: contentHandler)
  
    if let modifiedNotificationContent = modifiedNotificationContent {
        // Modify the notification content here...
        // 1
        guard let imageURLString =
                modifiedNotificationContent.userInfo["image_url"] as? String else {
            contentHandler(modifiedNotificationContent)
            return
        }
        
        getMediaAttachment(for: imageURLString) { [weak self] image in
            guard let self = self, let image = image, let fileURL = self.saveImageAttachment(
                image: image,
                forIdentifier: "attachment.png")
            else {
                contentHandler(modifiedNotificationContent)
                return
            }
            
            let imageAttachment = try? UNNotificationAttachment(
                identifier: "image",
                url: fileURL,
                options: nil)
            
            if let imageAttachment = imageAttachment {
                modifiedNotificationContent.attachments = [imageAttachment]
            }
            
            contentHandler(modifiedNotificationContent)
        }
    }
}

override func serviceExtensionTimeWillExpire() {
    // Called just before the extension will be terminated by the system.
    // Use this as an opportunity to deliver your "best attempt" at modified content, otherwise the original push payload will be used.
    if let contentHandler = contentHandler, let bestAttemptContent =  modifiedNotificationContent {
        contentHandler(bestAttemptContent)
    }
    
}

}

extension NotificationService {

private func saveImageAttachment(image: UIImage, forIdentifier identifier: String
) -> URL? {
  let tempDirectory = URL(fileURLWithPath: NSTemporaryDirectory())
  let directoryPath = tempDirectory.appendingPathComponent(
    ProcessInfo.processInfo.globallyUniqueString,
    isDirectory: true)

  do {
    try FileManager.default.createDirectory(
      at: directoryPath,
      withIntermediateDirectories: true,
      attributes: nil)

    let fileURL = directoryPath.appendingPathComponent(identifier)

    guard let imageData = image.pngData() else {
      return nil
    }

    try imageData.write(to: fileURL)
      return fileURL
    } catch {
      return nil
  }
}

private func getMediaAttachment(for urlString: String, completion: @escaping (UIImage?) -> Void
) {
    // 1
    guard let url = URL(string: urlString) else {
        completion(nil)
        return
    }
    
    let task = URLSession.shared.dataTask(with: url) { data, response, error in
        if error != nil {
            completion(nil)
            return
        }
        
        guard let data = data else {
            completion(nil)
            return
        }
        
        guard let image = UIImage(data: data) else {
            completion(nil)
            return
        }
        completion(image)
    }
    task.resume()
}
}

```

You are now all set to send push notifications. All you have to do is add iOS vendor configuration on SuprSend dashboard and your push notifications will be configured. Please refer [vendor integration guide](https://docs.suprsend.com/docs/ios-push-vendor-integration) to integrate your apns push service