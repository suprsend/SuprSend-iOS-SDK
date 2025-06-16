In this section, we'll cover how to send events to the Suprsend platform for both iOS and Android application

## Pre-requisites

1. [Integrate iOS SDK](https://github.com/suprsend/SuprSend-iOS-SDK/blob/main/documentation/integration.md)
2. [Create User Profile](https://github.com/suprsend/SuprSend-iOS-SDK/blob/main/documentation/user-profile.md)
3. [Create Template on SuprSend platform](https://docs.suprsend.com/docs/templates) - if you want to trigger workflow by passing the event
4. [Create Workflow on SuprSend Platform](https://docs.suprsend.com/docs/workflows#create-workflow) - if you want to trigger workflow by passing the event

<br>

## Create Workflow on SuprSend Platform

For Event based workflow trigger, you'll have to create the workflow on SuprSend Platform.
<br>

![](https://files.readme.io/d95d579-Frame_2.png)

<br>

## Sending Events to SuprSend

Once the workflow is configured, you can pass the `Event Name` ( `GROCERY_PURCHASED` in above example) defined in workflow configuration from your SDK and the related workflow will be triggered. Variables added in the template should be passed as event `properties`

You can send Events from your app to SuprSend platform by using `ssApi.track()` method  
<br>

```kotlin
//method
ssApi.track(eventName: String) //for single event
ssApi.track(eventName: String, properties: JSONObject) //for event with multiple properties

//Sample values 
ssApi.track(eventName = "Home Screen Viewed") //for single event

//for event with multiple properties
ssApi.track(
            eventName = "product_viewed",
            properties = JSONObject().apply {
              put("product_id", "P1")
              put("product_name", "Car")
              put("amount", $1000)
            }
        )
```

<br>

> ❗️ Naming Guideline
> 
> When you create an Event or a property, please ensure that the Event Name or Property Name does not start with **`$`** or **`ss_`**, as we have reserved these symbols for our internal events and property names.

<br>

### System Events tracked by SuprSend

There are some system events tracked by SuprSend SDK by default. These are some basic events, as well as events that are necessary for tracking notifications related activity (like delivered, clicked, etc).  
You are not required to do anything here.

| Event Name                | Description                                                                                                                                                                                                                                                                                       |
|---------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| $app_installed            | $app_installed will get tracked when user launches their app for the first time.  <br><br>FYI cases in which it will also get called:  <br><br>1. When user launches the app for the first time.  <br>2. When user uninstalls the app and installs it again.  <br>3. When user launches the app for the first time on different devices.  <br>4. When user clears the app cache and relaunches the app. |
| $app_launched             | Gets tracked when user launches the app each time.                                                                                                                                                                                                                                                |
| $user_login               | Gets tracked when user logs in inside the app.                                                                                                                                                                                                                                                    |
| $user_logout              | Gets tracked when user logs in to the app. *(Note: this seems like it should be "logs out")*                                                                                                                                                                                                     |
| $notification_delivered   | Will get tracked when the SuprSend notification payload is received at SDK end.                                                                                                                                                                                                                  |
| $notification_clicked     | Will get tracked when user either clicks the notification body or any action button in the notification.                                                                                                                                                                                          |
| $notification_dismissed   | Will get tracked when user dismisses the notification by left swiping the notification or by clicking on "Clear All" button.                                                                                                                                                                     |



<br>

## Advanced Concepts

### 1. Super Properties

Super properties are data that are always sent with events data. These super properties will be sent in each event after calling this method. Super properties will be stored in local storage, and will persist across invocations of app. 

#### Set Super Property

There are some super properties that SuprSend SDK will send by default. Developer can set custom super properties as well with `ssApi.getUser().setSuperProperty()` method

```kotlin
//method

//for setting single super property
ssApi.getUser().setSuperProperty(key: String, value: Any)
//for setting multiple super properties
ssApi.getUser().setSuperProperties(jsonObject: JSONObject) 


//Example

//for setting single super property
ssApi.getUser().setSuperProperty("Location", "San Francisco")
//for setting multiple super properties
ssApi.getUser().setSuperProperties(JSONObject().apply {
    put("Location","XYZ")
    put("Pincode", 1234567)
    put("Amount", "$99.99")
})
```

<br>

Default Super properties tracked by SuprSend SDK:

| Super Property      | Description                     | Sample Value     |
| :------------------ | :------------------------------ | :--------------- |
| $app_version_string | Version of your app             | 0.0.1            |
| $app_build_number   | Build number of your app        | 2                |
| $os                 | Operating system of the user    | iOS              |
| $os_version         | Version of the operating system | 15.6.1           |
| $model              | Model of the user's device      | iPhone           |
| $deviceId           | Device id                       | 89eead05a0150146 |
| $ss_sdk_version     | SuprSend SDK version            | 0.1.31           |

<br>

#### Unset Super Property

There are unset custom super properties with `ssApi.getUser().unSetSuperProperty()` method.  This method will stop calling that property with every event trigger. 

```kotlin
//method
ssApi.getUser().unSetSuperProperty(key: String) 

//Example
ssApi.getUser().unSetSuperProperty(listOf("Location","Pincode","Amount"))

```

<br>

### 2. Special Events

Special events are some best use case events defined by SuprSend. You could call these events with some of their pre-defined properties.

#### 1. Purchase Made

You can call purchase made event if user is doing a transaction on your platform. You can pass property values like product id, product name, and amount in the event.

```kotlin
ssApi.purchaseMade(properties: JSONObject)
ssApi.purchaseMade(JSONObject().apply {
            put("product_id", "P1")
            put("product_name", "Car")
            put("amount", "$15000")
        })
```

<br>

### 3. Flush Events

SuprSend SDK automatically flushes events at an interval of 5 seconds, and on certain activities like app relaunch, etc.  
If you wish to flush a time sensitive event to SuprSend immediately, you can use the `suprSendApi.flush()` method.

All the system tracked events are flushed immediately

```javascript
suprSendApi.flush();
```

<br>