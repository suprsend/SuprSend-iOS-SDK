// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "SuprSendSdk",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "SuprSendSdk",
            targets: ["SuprSendSdk"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
         .package(url: "https://github.com/surajshindalkar/sharedPackage.git", from: "1.0.0"),
    ],
    targets: [
        .binaryTarget(
             name: "SuprSendSdk",
             url: "https://github.com/suprsend/SuprSend-iOS-XCFramework/releases/download/1.0.0/SuprSendSdk.xcframework.zip",
             checksum: "f3f28efc1f23ef1cee9f8a54e501ce8f204d94e87a2303b1abcf3400dcbbda33"
           ),
    ]
)
