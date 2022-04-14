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
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        .binaryTarget(
             name: "SuprSendSdk",
             url: "https://github.com/suprsend/SuprSend-iOS-XCFramework/releases/download/1.0.0/SuprSendSdk.xcframework.zip",
             checksum: "532ce0cdb597552cd4c33d4493823b25371562b5b89209220dc12a40cdd64944"
           ),
    ]
)
