# Installation

There are two ways you can install SuprSend SDK into your app.

- Using Cocoapods
- Manual Installation

## Using Cocoapods

### Step 1: Add the below pods to your pod file.

```ruby Podfile
pod 'SuprsendCore'  
pod 'SuprSendSdk'
```

![](https://files.readme.io/340777d-Screen_Shot_2022-09-26_at_5.09.01_PM.png)

<br>

### Step 2: Install pods in the project using the below command in the terminal.

```ruby Shell
pod install
```

## Manual Integration

Follow the below steps to do manual integration of SuprSend SDK in the iOS application.

1. Download 2 zip files: [SuprSendSdk.xcframework.zip](https://github.com/suprsend/SuprSend-iOS-XCFramework/releases/download/1.0.0/SuprSendSdk.xcframework.zip) and [SuprsendCore.xcframework.zip](https://github.com/suprsend/SuprSend-iOS-XCFramework/releases/download/1.0.0/SuprsendCore.xcframework.zip) and unzip them.
2. Move them to your project folder.
3. Select your project target and move to the section **_Frameworks, Libraries, and Embedded Content_**

![](https://files.readme.io/0fbe367-Screenshot_2022-04-08_at_13.45.44.png "Screenshot 2022-04-08 at 13.45.44.png")

4. Click on the **_+ button --> Add Other --> Add Files_**

![](https://files.readme.io/85d0b8f-Screenshot_2022-04-08_at_13.47.32.png "Screenshot 2022-04-08 at 13.45.44.png")


5. Navigate to your project folder and select **_SuprSendSdk.xcframework_** and **_SuprsendCore.xcframework_**.

# Initialization

1. Add the below lines of code in your **_AppDelegate.swift_**.

```swift AppDelegate.swift
import SuprSendSdk 

// inside application didFinishLaunchingWithOptions method
let suprSendConfiguration = SuprSendSDKConfiguration(withKey: "<your_workspace_key>", secret:"<your_workspace_secret>")
SuprSend.shared.configureWith(configuration: suprSendConfiguration, launchOptions: launchOptions)   
```

2. Replace **_\<your_workspace_key>_** and **_\<your_workspace_secret>_** with your project workspace key and workspace secret, which you can find in the SuprSend dashboard.