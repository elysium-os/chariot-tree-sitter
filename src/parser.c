#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_ATimport = 3,
  sym_to_eol = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  aux_sym_block_contents_token1 = 7,
  anon_sym_source = 8,
  anon_sym_target = 9,
  anon_sym_host = 10,
  anon_sym_image = 11,
  anon_sym_SLASH = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  sym_recipe_name = 15,
  anon_sym_source_SLASH = 16,
  anon_sym_target_SLASH = 17,
  anon_sym_host_SLASH = 18,
  anon_sym_url = 19,
  anon_sym_COLON = 20,
  anon_sym_type = 21,
  anon_sym_tar_DOTgz = 22,
  anon_sym_tar_DOTxz = 23,
  anon_sym_git = 24,
  anon_sym_local = 25,
  anon_sym_patch = 26,
  anon_sym_b2sum = 27,
  anon_sym_commit = 28,
  anon_sym_dependencies = 29,
  anon_sym_strap = 30,
  anon_sym_configure = 31,
  anon_sym_build = 32,
  anon_sym_install = 33,
  sym_source_file = 34,
  sym_comment = 35,
  sym_directives = 36,
  sym_import_directive = 37,
  sym_block = 38,
  sym_block_contents = 39,
  sym_dependency = 40,
  sym_dependencies = 41,
  sym_recipe = 42,
  sym_source_rules = 43,
  sym_source_rule = 44,
  sym_common_rules = 45,
  sym_common_rule = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_block_contents_repeat1 = 48,
  aux_sym_dependencies_repeat1 = 49,
  aux_sym_source_rules_repeat1 = 50,
  aux_sym_common_rules_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_ATimport] = "@import",
  [sym_to_eol] = "to_eol",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_block_contents_token1] = "block_contents_token1",
  [anon_sym_source] = "source",
  [anon_sym_target] = "target",
  [anon_sym_host] = "host",
  [anon_sym_image] = "image",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_recipe_name] = "recipe_name",
  [anon_sym_source_SLASH] = "source/",
  [anon_sym_target_SLASH] = "target/",
  [anon_sym_host_SLASH] = "host/",
  [anon_sym_url] = "url",
  [anon_sym_COLON] = ":",
  [anon_sym_type] = "type",
  [anon_sym_tar_DOTgz] = "tar.gz",
  [anon_sym_tar_DOTxz] = "tar.xz",
  [anon_sym_git] = "git",
  [anon_sym_local] = "local",
  [anon_sym_patch] = "patch",
  [anon_sym_b2sum] = "b2sum",
  [anon_sym_commit] = "commit",
  [anon_sym_dependencies] = "dependencies",
  [anon_sym_strap] = "strap",
  [anon_sym_configure] = "configure",
  [anon_sym_build] = "build",
  [anon_sym_install] = "install",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_directives] = "directives",
  [sym_import_directive] = "import_directive",
  [sym_block] = "block",
  [sym_block_contents] = "block_contents",
  [sym_dependency] = "dependency",
  [sym_dependencies] = "dependencies",
  [sym_recipe] = "recipe",
  [sym_source_rules] = "source_rules",
  [sym_source_rule] = "source_rule",
  [sym_common_rules] = "common_rules",
  [sym_common_rule] = "common_rule",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_contents_repeat1] = "block_contents_repeat1",
  [aux_sym_dependencies_repeat1] = "dependencies_repeat1",
  [aux_sym_source_rules_repeat1] = "source_rules_repeat1",
  [aux_sym_common_rules_repeat1] = "common_rules_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [sym_to_eol] = sym_to_eol,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_block_contents_token1] = aux_sym_block_contents_token1,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_target] = anon_sym_target,
  [anon_sym_host] = anon_sym_host,
  [anon_sym_image] = anon_sym_image,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_recipe_name] = sym_recipe_name,
  [anon_sym_source_SLASH] = anon_sym_source_SLASH,
  [anon_sym_target_SLASH] = anon_sym_target_SLASH,
  [anon_sym_host_SLASH] = anon_sym_host_SLASH,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_tar_DOTgz] = anon_sym_tar_DOTgz,
  [anon_sym_tar_DOTxz] = anon_sym_tar_DOTxz,
  [anon_sym_git] = anon_sym_git,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_patch] = anon_sym_patch,
  [anon_sym_b2sum] = anon_sym_b2sum,
  [anon_sym_commit] = anon_sym_commit,
  [anon_sym_dependencies] = anon_sym_dependencies,
  [anon_sym_strap] = anon_sym_strap,
  [anon_sym_configure] = anon_sym_configure,
  [anon_sym_build] = anon_sym_build,
  [anon_sym_install] = anon_sym_install,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_directives] = sym_directives,
  [sym_import_directive] = sym_import_directive,
  [sym_block] = sym_block,
  [sym_block_contents] = sym_block_contents,
  [sym_dependency] = sym_dependency,
  [sym_dependencies] = sym_dependencies,
  [sym_recipe] = sym_recipe,
  [sym_source_rules] = sym_source_rules,
  [sym_source_rule] = sym_source_rule,
  [sym_common_rules] = sym_common_rules,
  [sym_common_rule] = sym_common_rule,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_contents_repeat1] = aux_sym_block_contents_repeat1,
  [aux_sym_dependencies_repeat1] = aux_sym_dependencies_repeat1,
  [aux_sym_source_rules_repeat1] = aux_sym_source_rules_repeat1,
  [aux_sym_common_rules_repeat1] = aux_sym_common_rules_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [sym_to_eol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_contents_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_host] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_recipe_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_source_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_host_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tar_DOTgz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tar_DOTxz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_git] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b2sum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dependencies] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_configure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_build] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_install] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directives] = {
    .visible = true,
    .named = true,
  },
  [sym_import_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_contents] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_dependencies] = {
    .visible = true,
    .named = true,
  },
  [sym_recipe] = {
    .visible = true,
    .named = true,
  },
  [sym_source_rules] = {
    .visible = true,
    .named = true,
  },
  [sym_source_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_common_rules] = {
    .visible = true,
    .named = true,
  },
  [sym_common_rule] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_contents_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dependencies_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_rules_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_common_rules_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_b2sum = 1,
  field_build = 2,
  field_commit = 3,
  field_configure = 4,
  field_dependencies = 5,
  field_install = 6,
  field_patch = 7,
  field_source = 8,
  field_strap = 9,
  field_type = 10,
  field_url = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_b2sum] = "b2sum",
  [field_build] = "build",
  [field_commit] = "commit",
  [field_configure] = "configure",
  [field_dependencies] = "dependencies",
  [field_install] = "install",
  [field_patch] = "patch",
  [field_source] = "source",
  [field_strap] = "strap",
  [field_type] = "type",
  [field_url] = "url",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 3},
  [7] = {.index = 13, .length = 3},
  [8] = {.index = 16, .length = 3},
  [9] = {.index = 19, .length = 3},
  [10] = {.index = 22, .length = 3},
  [11] = {.index = 25, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_dependencies, 0},
    {field_dependencies, 1},
  [2] =
    {field_strap, 0},
    {field_strap, 1},
  [4] =
    {field_configure, 0},
    {field_configure, 1},
  [6] =
    {field_build, 0},
    {field_build, 1},
  [8] =
    {field_install, 0},
    {field_install, 1},
  [10] =
    {field_url, 0},
    {field_url, 1},
    {field_url, 2},
  [13] =
    {field_type, 0},
    {field_type, 1},
    {field_type, 2},
  [16] =
    {field_patch, 0},
    {field_patch, 1},
    {field_patch, 2},
  [19] =
    {field_b2sum, 0},
    {field_b2sum, 1},
    {field_b2sum, 2},
  [22] =
    {field_commit, 0},
    {field_commit, 1},
    {field_commit, 2},
  [25] =
    {field_source, 0},
    {field_source, 1},
    {field_source, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(99);
      ADVANCE_MAP(
        '/', 117,
        ':', 125,
        '@', 40,
        '[', 118,
        ']', 119,
        'b', 8,
        'c', 60,
        'd', 23,
        'g', 41,
        'h', 61,
        'i', 52,
        'l', 58,
        'p', 10,
        's', 59,
        't', 11,
        'u', 69,
        '{', 108,
        '}', 109,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(123);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(121);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(122);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 95:
      if (lookahead == 'z') ADVANCE(127);
      END_STATE();
    case 96:
      if (lookahead == 'z') ADVANCE(128);
      END_STATE();
    case 97:
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 98:
      if (eof) ADVANCE(99);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\r') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_ATimport);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_to_eol);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_to_eol);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_block_contents_token1);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_block_contents_token1);
      if (lookahead == '{') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_target);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_host);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(100);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_recipe_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_source_SLASH);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_target_SLASH);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_host_SLASH);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_tar_DOTgz);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_tar_DOTxz);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_git);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_b2sum);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_commit);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_strap);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_configure);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_build);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_install);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 98},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 98},
  [7] = {.lex_state = 98},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 98},
  [25] = {.lex_state = 98},
  [26] = {.lex_state = 98},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 98},
  [32] = {.lex_state = 98},
  [33] = {.lex_state = 98},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 98},
  [36] = {.lex_state = 98},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 97},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 97},
  [41] = {.lex_state = 97},
  [42] = {.lex_state = 97},
  [43] = {.lex_state = 97},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 106},
  [53] = {.lex_state = 106},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 106},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 102},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 106},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 106},
  [71] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_target] = ACTIONS(1),
    [anon_sym_host] = ACTIONS(1),
    [anon_sym_image] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_tar_DOTgz] = ACTIONS(1),
    [anon_sym_tar_DOTxz] = ACTIONS(1),
    [anon_sym_git] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [anon_sym_b2sum] = ACTIONS(1),
    [anon_sym_commit] = ACTIONS(1),
    [anon_sym_dependencies] = ACTIONS(1),
    [anon_sym_strap] = ACTIONS(1),
    [anon_sym_configure] = ACTIONS(1),
    [anon_sym_build] = ACTIONS(1),
    [anon_sym_install] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(60),
    [sym_comment] = STATE(7),
    [sym_directives] = STATE(7),
    [sym_import_directive] = STATE(24),
    [sym_recipe] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_source_SLASH] = ACTIONS(9),
    [anon_sym_target_SLASH] = ACTIONS(11),
    [anon_sym_host_SLASH] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(13), 12,
      anon_sym_RBRACE,
      anon_sym_source,
      anon_sym_url,
      anon_sym_type,
      anon_sym_patch,
      anon_sym_b2sum,
      anon_sym_commit,
      anon_sym_dependencies,
      anon_sym_strap,
      anon_sym_configure,
      anon_sym_build,
      anon_sym_install,
  [15] = 1,
    ACTIONS(15), 12,
      anon_sym_RBRACE,
      anon_sym_source,
      anon_sym_url,
      anon_sym_type,
      anon_sym_patch,
      anon_sym_b2sum,
      anon_sym_commit,
      anon_sym_dependencies,
      anon_sym_strap,
      anon_sym_configure,
      anon_sym_build,
      anon_sym_install,
  [30] = 1,
    ACTIONS(17), 12,
      anon_sym_RBRACE,
      anon_sym_source,
      anon_sym_url,
      anon_sym_type,
      anon_sym_patch,
      anon_sym_b2sum,
      anon_sym_commit,
      anon_sym_dependencies,
      anon_sym_strap,
      anon_sym_configure,
      anon_sym_build,
      anon_sym_install,
  [45] = 1,
    ACTIONS(19), 12,
      anon_sym_RBRACE,
      anon_sym_source,
      anon_sym_url,
      anon_sym_type,
      anon_sym_patch,
      anon_sym_b2sum,
      anon_sym_commit,
      anon_sym_dependencies,
      anon_sym_strap,
      anon_sym_configure,
      anon_sym_build,
      anon_sym_install,
  [60] = 7,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(26), 1,
      anon_sym_ATimport,
    ACTIONS(29), 1,
      anon_sym_source_SLASH,
    STATE(24), 1,
      sym_import_directive,
    ACTIONS(32), 2,
      anon_sym_target_SLASH,
      anon_sym_host_SLASH,
    STATE(6), 4,
      sym_comment,
      sym_directives,
      sym_recipe,
      aux_sym_source_file_repeat1,
  [86] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_ATimport,
    ACTIONS(9), 1,
      anon_sym_source_SLASH,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_import_directive,
    ACTIONS(11), 2,
      anon_sym_target_SLASH,
      anon_sym_host_SLASH,
    STATE(6), 4,
      sym_comment,
      sym_directives,
      sym_recipe,
      aux_sym_source_file_repeat1,
  [112] = 9,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_url,
    ACTIONS(41), 1,
      anon_sym_type,
    ACTIONS(43), 1,
      anon_sym_patch,
    ACTIONS(45), 1,
      anon_sym_b2sum,
    ACTIONS(47), 1,
      anon_sym_commit,
    ACTIONS(49), 1,
      anon_sym_dependencies,
    ACTIONS(51), 1,
      anon_sym_strap,
    STATE(10), 2,
      sym_source_rule,
      aux_sym_source_rules_repeat1,
  [141] = 9,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_url,
    ACTIONS(58), 1,
      anon_sym_type,
    ACTIONS(61), 1,
      anon_sym_patch,
    ACTIONS(64), 1,
      anon_sym_b2sum,
    ACTIONS(67), 1,
      anon_sym_commit,
    ACTIONS(70), 1,
      anon_sym_dependencies,
    ACTIONS(73), 1,
      anon_sym_strap,
    STATE(9), 2,
      sym_source_rule,
      aux_sym_source_rules_repeat1,
  [170] = 9,
    ACTIONS(39), 1,
      anon_sym_url,
    ACTIONS(41), 1,
      anon_sym_type,
    ACTIONS(43), 1,
      anon_sym_patch,
    ACTIONS(45), 1,
      anon_sym_b2sum,
    ACTIONS(47), 1,
      anon_sym_commit,
    ACTIONS(49), 1,
      anon_sym_dependencies,
    ACTIONS(51), 1,
      anon_sym_strap,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_source_rule,
      aux_sym_source_rules_repeat1,
  [199] = 1,
    ACTIONS(78), 8,
      anon_sym_RBRACE,
      anon_sym_url,
      anon_sym_type,
      anon_sym_patch,
      anon_sym_b2sum,
      anon_sym_commit,
      anon_sym_dependencies,
      anon_sym_strap,
  [210] = 1,
    ACTIONS(80), 8,
      anon_sym_RBRACE,
      anon_sym_url,
      anon_sym_type,
      anon_sym_patch,
      anon_sym_b2sum,
      anon_sym_commit,
      anon_sym_dependencies,
      anon_sym_strap,
  [221] = 1,
    ACTIONS(82), 8,
      anon_sym_RBRACE,
      anon_sym_url,
      anon_sym_type,
      anon_sym_patch,
      anon_sym_b2sum,
      anon_sym_commit,
      anon_sym_dependencies,
      anon_sym_strap,
  [232] = 7,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      anon_sym_source,
    ACTIONS(89), 1,
      anon_sym_dependencies,
    ACTIONS(92), 1,
      anon_sym_configure,
    ACTIONS(95), 1,
      anon_sym_build,
    ACTIONS(98), 1,
      anon_sym_install,
    STATE(14), 2,
      sym_common_rule,
      aux_sym_common_rules_repeat1,
  [255] = 1,
    ACTIONS(101), 8,
      anon_sym_RBRACE,
      anon_sym_url,
      anon_sym_type,
      anon_sym_patch,
      anon_sym_b2sum,
      anon_sym_commit,
      anon_sym_dependencies,
      anon_sym_strap,
  [266] = 1,
    ACTIONS(103), 8,
      anon_sym_RBRACE,
      anon_sym_url,
      anon_sym_type,
      anon_sym_patch,
      anon_sym_b2sum,
      anon_sym_commit,
      anon_sym_dependencies,
      anon_sym_strap,
  [277] = 1,
    ACTIONS(105), 8,
      anon_sym_RBRACE,
      anon_sym_url,
      anon_sym_type,
      anon_sym_patch,
      anon_sym_b2sum,
      anon_sym_commit,
      anon_sym_dependencies,
      anon_sym_strap,
  [288] = 1,
    ACTIONS(107), 8,
      anon_sym_RBRACE,
      anon_sym_url,
      anon_sym_type,
      anon_sym_patch,
      anon_sym_b2sum,
      anon_sym_commit,
      anon_sym_dependencies,
      anon_sym_strap,
  [299] = 7,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 1,
      anon_sym_source,
    ACTIONS(113), 1,
      anon_sym_dependencies,
    ACTIONS(115), 1,
      anon_sym_configure,
    ACTIONS(117), 1,
      anon_sym_build,
    ACTIONS(119), 1,
      anon_sym_install,
    STATE(20), 2,
      sym_common_rule,
      aux_sym_common_rules_repeat1,
  [322] = 7,
    ACTIONS(111), 1,
      anon_sym_source,
    ACTIONS(113), 1,
      anon_sym_dependencies,
    ACTIONS(115), 1,
      anon_sym_configure,
    ACTIONS(117), 1,
      anon_sym_build,
    ACTIONS(119), 1,
      anon_sym_install,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym_common_rule,
      aux_sym_common_rules_repeat1,
  [345] = 3,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    STATE(22), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
    ACTIONS(123), 4,
      anon_sym_source,
      anon_sym_target,
      anon_sym_host,
      anon_sym_image,
  [359] = 3,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(23), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
    ACTIONS(123), 4,
      anon_sym_source,
      anon_sym_target,
      anon_sym_host,
      anon_sym_image,
  [373] = 3,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(23), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
    ACTIONS(129), 4,
      anon_sym_source,
      anon_sym_target,
      anon_sym_host,
      anon_sym_image,
  [387] = 1,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_ATimport,
      anon_sym_source_SLASH,
      anon_sym_target_SLASH,
      anon_sym_host_SLASH,
  [396] = 1,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_ATimport,
      anon_sym_source_SLASH,
      anon_sym_target_SLASH,
      anon_sym_host_SLASH,
  [405] = 1,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_ATimport,
      anon_sym_source_SLASH,
      anon_sym_target_SLASH,
      anon_sym_host_SLASH,
  [414] = 1,
    ACTIONS(140), 6,
      anon_sym_RBRACE,
      anon_sym_source,
      anon_sym_dependencies,
      anon_sym_configure,
      anon_sym_build,
      anon_sym_install,
  [423] = 1,
    ACTIONS(142), 6,
      anon_sym_RBRACE,
      anon_sym_source,
      anon_sym_dependencies,
      anon_sym_configure,
      anon_sym_build,
      anon_sym_install,
  [432] = 1,
    ACTIONS(144), 6,
      anon_sym_RBRACE,
      anon_sym_source,
      anon_sym_dependencies,
      anon_sym_configure,
      anon_sym_build,
      anon_sym_install,
  [441] = 1,
    ACTIONS(146), 6,
      anon_sym_RBRACE,
      anon_sym_source,
      anon_sym_dependencies,
      anon_sym_configure,
      anon_sym_build,
      anon_sym_install,
  [450] = 1,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_ATimport,
      anon_sym_source_SLASH,
      anon_sym_target_SLASH,
      anon_sym_host_SLASH,
  [459] = 1,
    ACTIONS(150), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_ATimport,
      anon_sym_source_SLASH,
      anon_sym_target_SLASH,
      anon_sym_host_SLASH,
  [468] = 1,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_ATimport,
      anon_sym_source_SLASH,
      anon_sym_target_SLASH,
      anon_sym_host_SLASH,
  [477] = 1,
    ACTIONS(154), 6,
      anon_sym_RBRACE,
      anon_sym_source,
      anon_sym_dependencies,
      anon_sym_configure,
      anon_sym_build,
      anon_sym_install,
  [486] = 1,
    ACTIONS(156), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_ATimport,
      anon_sym_source_SLASH,
      anon_sym_target_SLASH,
      anon_sym_host_SLASH,
  [495] = 1,
    ACTIONS(158), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_ATimport,
      anon_sym_source_SLASH,
      anon_sym_target_SLASH,
      anon_sym_host_SLASH,
  [504] = 1,
    ACTIONS(160), 5,
      anon_sym_source,
      anon_sym_target,
      anon_sym_host,
      anon_sym_image,
      anon_sym_RBRACK,
  [512] = 5,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(166), 1,
      aux_sym_block_contents_token1,
    STATE(40), 1,
      aux_sym_block_contents_repeat1,
    STATE(61), 1,
      sym_block_contents,
  [528] = 1,
    ACTIONS(168), 4,
      anon_sym_tar_DOTgz,
      anon_sym_tar_DOTxz,
      anon_sym_git,
      anon_sym_local,
  [535] = 4,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(172), 1,
      aux_sym_block_contents_token1,
    STATE(42), 1,
      aux_sym_block_contents_repeat1,
  [548] = 4,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      aux_sym_block_contents_token1,
    STATE(40), 1,
      aux_sym_block_contents_repeat1,
    STATE(67), 1,
      sym_block_contents,
  [561] = 4,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 1,
      aux_sym_block_contents_token1,
    STATE(42), 1,
      aux_sym_block_contents_repeat1,
  [574] = 1,
    ACTIONS(182), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_block_contents_token1,
  [580] = 2,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      sym_dependencies,
  [587] = 2,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_dependencies,
  [594] = 2,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_source_rules,
  [601] = 2,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
  [608] = 2,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_block,
  [615] = 2,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_block,
  [622] = 2,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_block,
  [629] = 2,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_common_rules,
  [636] = 1,
    ACTIONS(192), 1,
      sym_to_eol,
  [640] = 1,
    ACTIONS(194), 1,
      sym_to_eol,
  [644] = 1,
    ACTIONS(196), 1,
      anon_sym_COLON,
  [648] = 1,
    ACTIONS(198), 1,
      anon_sym_COLON,
  [652] = 1,
    ACTIONS(200), 1,
      anon_sym_SLASH,
  [656] = 1,
    ACTIONS(202), 1,
      anon_sym_COLON,
  [660] = 1,
    ACTIONS(204), 1,
      anon_sym_COLON,
  [664] = 1,
    ACTIONS(206), 1,
      sym_recipe_name,
  [668] = 1,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
  [672] = 1,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
  [676] = 1,
    ACTIONS(212), 1,
      sym_recipe_name,
  [680] = 1,
    ACTIONS(214), 1,
      sym_to_eol,
  [684] = 1,
    ACTIONS(216), 1,
      sym_recipe_name,
  [688] = 1,
    ACTIONS(218), 1,
      anon_sym_COLON,
  [692] = 1,
    ACTIONS(220), 1,
      aux_sym_comment_token1,
  [696] = 1,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
  [700] = 1,
    ACTIONS(224), 1,
      sym_to_eol,
  [704] = 1,
    ACTIONS(226), 1,
      sym_recipe_name,
  [708] = 1,
    ACTIONS(228), 1,
      sym_to_eol,
  [712] = 1,
    ACTIONS(230), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 86,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 199,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 221,
  [SMALL_STATE(14)] = 232,
  [SMALL_STATE(15)] = 255,
  [SMALL_STATE(16)] = 266,
  [SMALL_STATE(17)] = 277,
  [SMALL_STATE(18)] = 288,
  [SMALL_STATE(19)] = 299,
  [SMALL_STATE(20)] = 322,
  [SMALL_STATE(21)] = 345,
  [SMALL_STATE(22)] = 359,
  [SMALL_STATE(23)] = 373,
  [SMALL_STATE(24)] = 387,
  [SMALL_STATE(25)] = 396,
  [SMALL_STATE(26)] = 405,
  [SMALL_STATE(27)] = 414,
  [SMALL_STATE(28)] = 423,
  [SMALL_STATE(29)] = 432,
  [SMALL_STATE(30)] = 441,
  [SMALL_STATE(31)] = 450,
  [SMALL_STATE(32)] = 459,
  [SMALL_STATE(33)] = 468,
  [SMALL_STATE(34)] = 477,
  [SMALL_STATE(35)] = 486,
  [SMALL_STATE(36)] = 495,
  [SMALL_STATE(37)] = 504,
  [SMALL_STATE(38)] = 512,
  [SMALL_STATE(39)] = 528,
  [SMALL_STATE(40)] = 535,
  [SMALL_STATE(41)] = 548,
  [SMALL_STATE(42)] = 561,
  [SMALL_STATE(43)] = 574,
  [SMALL_STATE(44)] = 580,
  [SMALL_STATE(45)] = 587,
  [SMALL_STATE(46)] = 594,
  [SMALL_STATE(47)] = 601,
  [SMALL_STATE(48)] = 608,
  [SMALL_STATE(49)] = 615,
  [SMALL_STATE(50)] = 622,
  [SMALL_STATE(51)] = 629,
  [SMALL_STATE(52)] = 636,
  [SMALL_STATE(53)] = 640,
  [SMALL_STATE(54)] = 644,
  [SMALL_STATE(55)] = 648,
  [SMALL_STATE(56)] = 652,
  [SMALL_STATE(57)] = 656,
  [SMALL_STATE(58)] = 660,
  [SMALL_STATE(59)] = 664,
  [SMALL_STATE(60)] = 668,
  [SMALL_STATE(61)] = 672,
  [SMALL_STATE(62)] = 676,
  [SMALL_STATE(63)] = 680,
  [SMALL_STATE(64)] = 684,
  [SMALL_STATE(65)] = 688,
  [SMALL_STATE(66)] = 692,
  [SMALL_STATE(67)] = 696,
  [SMALL_STATE(68)] = 700,
  [SMALL_STATE(69)] = 704,
  [SMALL_STATE(70)] = 708,
  [SMALL_STATE(71)] = 712,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 2, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_rules_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_rule, 3, 0, 10),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_rule, 2, 0, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_rule, 2, 0, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_common_rules_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_rule, 3, 0, 6),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_rule, 3, 0, 7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_rule, 3, 0, 8),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_rule, 3, 0, 9),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directives, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_rules, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_rule, 2, 0, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_rule, 2, 0, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_rule, 2, 0, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_rule, 2, 0, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_rules, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_rule, 3, 0, 11),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_rules, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_rules, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_contents, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_contents_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_contents_repeat1, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [208] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_chariot(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
