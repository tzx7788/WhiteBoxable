import XCTest
@testable import WhiteBoxable


struct XorTable: WhiteBoxable {
    let outputLength: Int = 1
    let name = "aaa"
    func value(input: UInt8) -> [UInt8] {
        let a = ( input >> 4 ) & 0xf
        let b = input & 0xf
        return [UInt8(a ^ b)]
    }
}

class WhiteBoxableTests: XCTestCase {
    func testExample() {
        let xorTable = XorTable()
        print(cfunc(whitebox: xorTable))
    }


    static var allTests : [(String, (WhiteBoxableTests) -> () throws -> Void)] {
        return [
            ("testExample", testExample),
        ]
    }
}
