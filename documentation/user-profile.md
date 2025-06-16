## Pre-requisites

[Integrate iOS SDK](https://github.com/suprsend/SuprSend-iOS-SDK/blob/main/documentation/integration.md)

<br>

## How Suprsend identifies a user

Suprsend identifies users by unique identifier `distinct_id`. The identifier for a user is important as we use this key to create a user profile and all the information related to a user, like channel preferences, is attached to that profile. It's best to send the users`distinct_id` from your database to map it across different devices and platforms. You can view the user profile by searching `distinct_id` on the Subscribers page in SuprSend Dashboard.

**Please note:** You cannot change a user's ID once it has been set, so we recommend you use a non-transient ID like a primary key rather than a phone number or email address.

<br>

## Step 1: Create/Identify a new user

You can identify a user using the`SuprSend.shared.identify()` method.

Call this method as soon as you know the identity of a user, that is after login authentication. If you don't call this method, the user will be identified using distinct_id (UUID) that SDK generates internally.

When you call this method, we internally create an event called **$user_login**. You can see this event on the SuprSend workflows event list and you can configure a workflow on it.

```kotlin Swift
SuprSend.shared.identify(identity: distinct_id)
 
//Example
SuprSend.shared.identify(identity: "291XXXXX-62XX-4dXX-b2XX");
SuprSend.shared.identify(identity: "johndoe@suprsend.com");
```


<br> 

## Step 2: Call reset to clear user data on log-out

As soon as the user logs out, call `SuprSend.shared.reset()` method to clear data attributed to a user. This will generate a new random `distinct_id` and clear all super properties. This allows you to handle multiple users on a single device.

When you call this method, we internally create an event called **$user_logout**. You can see this event on the SuprSend workflows event list and you can configure a workflow on it.

```swift Swift
SuprSend.shared.reset(unsubscribeNotification: true) // unsubscribeNotification flag is needed to be set true so that push token will be detatched from user after logout
```

<br>

> 🚧 Mandatory to call reset on logout
> 
> Don't forget to call reset on user logout. If not called, user id will not reset and multiple tokens and channels will get added to the user_id who logged in first on the device.