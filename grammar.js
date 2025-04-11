/**
 * @file Chariot DSL Tree Sitter
 * @author WuX <wux@thenest.dev>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "chariot",

  externals: ($) => [
    $.close_tag,
    $.code,
    $.error_sentinel
  ],

  rules: {
    source_file: ($) => repeat(seq($.recipe_ref, $.object)),

    // Tokens
    tok_identifier: ($) => /[a-zA-Z][_\.\-a-zA-Z0-9]*/,
    tok_string: ($) => /"[^"]*"/,
    tok_code_block: ($) => seq('<', alias(/[a-zA-Z]*/, $.lang), '>', alias(repeat($.code), $.content), $.close_tag),

    // Fragments
    fragment: ($) => choice(
      $.list,
      $.object,
      $.string,
      $.recipe_ref,
      $.code_block
    ),

    string: ($) => $.tok_string,
    code_block: ($) => $.tok_code_block,
    recipe_ref: ($) => seq($.tok_identifier, '/', $.tok_identifier),
    object: ($) => seq('{', repeat(seq($.tok_identifier, ':', $.fragment, optional(','))), '}'),
    list: ($) => seq('[', repeat(seq($.fragment, optional(','))), ']')
  },
});
