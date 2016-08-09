import PackageDescription

let package = Package(
    name: "WhiteBoxable",
    dependencies: [
        .Package(url: "https://github.com/tzx7788/BitMatrix.git", majorVersion: 1),
        .Package(url: "https://github.com/tzx7788/FourBitEncode.git", majorVersion: 1),
    ]
)
