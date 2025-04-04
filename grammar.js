/**
 * @file Chariot DSL Tree Sitter
 * @author WuX <wux@thenest.dev>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "chariot",

  rules: {
    source_file: ($) => repeat(choice($.recipe, $.directives, $.comment)),

    comment: ($) => choice(seq("//", /(\\+(.|\r?\n)|[^\\\n])*/)),

    // Directives
    directives: ($) => choice($.import_directive),
    import_directive: ($) => seq("@import", $.to_eol),

    // Helpers
    to_eol: ($) => /[^\n]*/,
    block: ($) => seq("{", optional($.block_contents), "}"),
    block_embed: ($) => seq("@(", /[^\)]*/, ")"),
    block_contents: ($) =>
      repeat1(choice($.block_embed, seq("{", $.block_contents, "}"), /[^\}]/)),
    dependency: ($) =>
      seq(choice("source/", "target/", "host/", "image/"), $.recipe_name),
    dependencies: ($) => seq("[", repeat($.dependency), "]"),

    recipe_name: ($) => /[_a-zA-Z][_\.\-a-zA-Z0-9]*/,

    // Recipes
    recipe: ($) =>
      choice(
        seq("source/", $.recipe_name, $.source_rules),
        seq("target/", $.recipe_name, $.common_rules),
        seq("host/", $.recipe_name, $.common_rules),
      ),

    source_rules: ($) => seq("{", repeat($.source_rule), "}"),
    source_rule: ($) =>
      choice(
        seq(field("key", "url"), ":", $.to_eol),
        seq(
          field("key", "type"),
          ":",
          choice("tar.gz", "tar.xz", "git", "local"),
        ),
        seq(field("key", "patch"), ":", $.to_eol),
        seq(field("key", "b2sum"), ":", $.to_eol),
        seq(field("key", "commit"), ":", $.to_eol),
        seq(field("key", "dependencies"), $.dependencies),
        seq(field("key", "strap"), $.block),
      ),

    common_rules: ($) => seq("{", repeat($.common_rule), "}"),
    common_rule: ($) =>
      choice(
        seq(field("key", "source"), ":", $.recipe_name),
        seq(field("key", "dependencies"), $.dependencies),
        seq(field("key", "configure"), $.block),
        seq(field("key", "build"), $.block),
        seq(field("key", "install"), $.block),
      ),
  },
});
