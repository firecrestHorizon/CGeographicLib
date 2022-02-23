// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "CGeographicLib",
    platforms: [.macOS(.v11)],
    products: [
      .library(name: "CGeographicLib", targets: ["CGeographicLib"])
    ],
    targets: [
      .systemLibrary(name: "geographiclib",
                     pkgConfig: "geographiclib",
                     providers: [
                      .brew(["geographiclib"])
                     ]),
      .target(name: "CGeographicLib", dependencies: ["geographiclib"])
    ],
    cxxLanguageStandard: .cxx20
)
