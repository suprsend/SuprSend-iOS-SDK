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
             checksum: "adbb11b16f387892ec0500c1f7af301a7a274303597d5d9a6a8442f1bd9ed4f5"
           ),
    ]
)
