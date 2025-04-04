import XCTest
import SwiftTreeSitter
import TreeSitterChariot

final class TreeSitterChariotTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_chariot())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Chariot grammar")
    }
}
