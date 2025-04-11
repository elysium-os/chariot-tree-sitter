#include <tree_sitter/parser.h>
#include <ctype.h>
#include <stdio.h>

#define SYMBOL_CLOSE_TAG 0
#define SYMBOL_CODE 1
#define ERROR_SENTINEL 2

void *tree_sitter_chariot_external_scanner_create() { return NULL; }
void tree_sitter_chariot_external_scanner_destroy(void *payload) {}
void tree_sitter_chariot_external_scanner_reset(void *payload) {}
unsigned tree_sitter_chariot_external_scanner_serialize(void *payload, char *buffer) { return 0; }
void tree_sitter_chariot_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

static bool read_end_tag(TSLexer *lexer) {
    if(lexer->lookahead != '<') return false;
    lexer->advance(lexer, false);

    if(lexer->lookahead != '/') return false;
    lexer->advance(lexer, false);

    while(isalpha(lexer->lookahead) != 0) lexer->advance(lexer, false);

    if(lexer->lookahead != '>') return false;
    lexer->advance(lexer, false);

    return true;
}

bool tree_sitter_chariot_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if(valid_symbols[ERROR_SENTINEL]) return false;

    if(valid_symbols[SYMBOL_CODE]) {
        size_t size = 0;
        while(true) {
            if(lexer->eof(lexer)) {
                if(size == 0) return false;
                lexer->mark_end(lexer);
                lexer->result_symbol = SYMBOL_CODE;
                return true;
            }

            if(lexer->lookahead == '<') {
                lexer->mark_end(lexer);
                bool is_end = read_end_tag(lexer);
                if(is_end) {
                    if(size != 0) {
                        lexer->result_symbol = SYMBOL_CODE;
                        return true;
                    }
                    if(valid_symbols[SYMBOL_CLOSE_TAG]) {
                        lexer->mark_end(lexer);
                        lexer->result_symbol = SYMBOL_CLOSE_TAG;
                        return true;
                    }
                    return false;
                }
            }

            lexer->advance(lexer, false);
            size++;
        }
    }

    if(valid_symbols[SYMBOL_CLOSE_TAG]) {
        while(isspace(lexer->lookahead)) lexer->advance(lexer, true);
        if(read_end_tag(lexer)) {
            lexer->result_symbol = SYMBOL_CLOSE_TAG;
            return true;
        }
        return false;
    }

    return false;
}