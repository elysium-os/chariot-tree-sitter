// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterChariot",
    products: [
        .library(name: "TreeSitterChariot", targets: ["TreeSitterChariot"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterChariot",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterChariotTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterChariot",
            ],
            path: "bindings/swift/TreeSitterChariotTests"
        )
    ],
    cLanguageStandard: .c11
)
