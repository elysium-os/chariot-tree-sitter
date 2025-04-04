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
    block_contents: ($) =>
      repeat1(choice(seq("{", $.block_contents, "}"), /[^\}]/)),
    dependency: ($) =>
      seq(choice("source", "target", "host", "image"), "/", $.recipe_name),
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
        field("url", seq("url", ":", $.to_eol)),
        field(
          "type",
          seq("type", ":", choice("tar.gz", "tar.xz", "git", "local")),
        ),
        field("patch", seq("patch", ":", $.to_eol)),
        field("b2sum", seq("b2sum", ":", $.to_eol)),
        field("commit", seq("commit", ":", $.to_eol)),
        field("dependencies", seq("dependencies", $.dependencies)),
        field("strap", seq("strap", $.block)),
      ),

    common_rules: ($) => seq("{", repeat($.common_rule), "}"),
    common_rule: ($) =>
      choice(
        field("source", seq("source", ":", $.recipe_name)),
        field("dependencies", seq("dependencies", $.dependencies)),
        field("configure", seq("configure", $.block)),
        field("build", seq("build", $.block)),
        field("install", seq("install", $.block)),
      ),
  },
});
