#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_BSLASH = 6,
  anon_sym_SLASH = 7,
  anon_sym_PIPE = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_EQ = 11,
  sym_literal_unquoted_cat = 12,
  sym_literal_unquoted_feat = 13,
  sym_literal_quoted = 14,
  sym_source_file = 15,
  sym_cat_funcapp = 16,
  sym_cat_functor_arg_list = 17,
  sym_cat_left = 18,
  sym_cat_right = 19,
  sym_cat_middle = 20,
  sym_cat_uniq = 21,
  sym_cat_name = 22,
  sym_feature_list = 23,
  sym_feature = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_cat_functor_arg_list_repeat1 = 26,
  aux_sym_feature_list_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_literal_unquoted_cat] = "literal_unquoted_cat",
  [sym_literal_unquoted_feat] = "literal_unquoted_feat",
  [sym_literal_quoted] = "literal_quoted",
  [sym_source_file] = "source_file",
  [sym_cat_funcapp] = "cat_funcapp",
  [sym_cat_functor_arg_list] = "cat_functor_arg_list",
  [sym_cat_left] = "cat_left",
  [sym_cat_right] = "cat_right",
  [sym_cat_middle] = "cat_middle",
  [sym_cat_uniq] = "cat_uniq",
  [sym_cat_name] = "cat_name",
  [sym_feature_list] = "feature_list",
  [sym_feature] = "feature",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_cat_functor_arg_list_repeat1] = "cat_functor_arg_list_repeat1",
  [aux_sym_feature_list_repeat1] = "feature_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_literal_unquoted_cat] = sym_literal_unquoted_cat,
  [sym_literal_unquoted_feat] = sym_literal_unquoted_feat,
  [sym_literal_quoted] = sym_literal_quoted,
  [sym_source_file] = sym_source_file,
  [sym_cat_funcapp] = sym_cat_funcapp,
  [sym_cat_functor_arg_list] = sym_cat_functor_arg_list,
  [sym_cat_left] = sym_cat_left,
  [sym_cat_right] = sym_cat_right,
  [sym_cat_middle] = sym_cat_middle,
  [sym_cat_uniq] = sym_cat_uniq,
  [sym_cat_name] = sym_cat_name,
  [sym_feature_list] = sym_feature_list,
  [sym_feature] = sym_feature,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_cat_functor_arg_list_repeat1] = aux_sym_cat_functor_arg_list_repeat1,
  [aux_sym_feature_list_repeat1] = aux_sym_feature_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_literal_unquoted_cat] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_unquoted_feat] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_cat_funcapp] = {
    .visible = true,
    .named = true,
  },
  [sym_cat_functor_arg_list] = {
    .visible = true,
    .named = true,
  },
  [sym_cat_left] = {
    .visible = true,
    .named = true,
  },
  [sym_cat_right] = {
    .visible = true,
    .named = true,
  },
  [sym_cat_middle] = {
    .visible = true,
    .named = true,
  },
  [sym_cat_uniq] = {
    .visible = true,
    .named = true,
  },
  [sym_cat_name] = {
    .visible = true,
    .named = true,
  },
  [sym_feature_list] = {
    .visible = true,
    .named = true,
  },
  [sym_feature] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cat_functor_arg_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_feature_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_antecedent = 1,
  field_arguments = 2,
  field_consequent = 3,
  field_functor = 4,
  field_key = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_antecedent] = "antecedent",
  [field_arguments] = "arguments",
  [field_consequent] = "consequent",
  [field_functor] = "functor",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_arguments, 1},
    {field_functor, 0},
  [2] =
    {field_antecedent, 0},
    {field_consequent, 2},
  [4] =
    {field_antecedent, 2},
    {field_consequent, 0},
  [6] =
    {field_key, 0},
  [7] =
    {field_antecedent, 0},
    {field_consequent, 3},
  [9] =
    {field_antecedent, 3},
    {field_consequent, 0},
  [11] =
    {field_key, 0},
    {field_value, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '\'', 2,
        '(', 10,
        ')', 12,
        ',', 11,
        '/', 14,
        '<', 8,
        '=', 18,
        '>', 9,
        '[', 16,
        '\\', 13,
        ']', 17,
        '|', 15,
      );
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '~') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '~') ADVANCE(3);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'' ||
          lookahead == '~') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '\'', 2,
        '(', 10,
        ')', 12,
        ',', 11,
        '/', 14,
        '<', 8,
        '>', 9,
        '[', 16,
        '\\', 13,
        '|', 15,
        '~', 4,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(19);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_literal_unquoted_cat);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '/' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_literal_unquoted_feat);
      if (lookahead == '~') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_literal_quoted);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_literal_quoted] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym_cat_funcapp] = STATE(35),
    [sym_cat_left] = STATE(35),
    [sym_cat_right] = STATE(35),
    [sym_cat_middle] = STATE(35),
    [sym_cat_uniq] = STATE(35),
    [sym_cat_name] = STATE(21),
    [anon_sym_LT] = ACTIONS(3),
    [sym_literal_unquoted_cat] = ACTIONS(5),
    [sym_literal_quoted] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    STATE(2), 2,
      sym_feature_list,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 11,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      sym_literal_unquoted_cat,
      sym_literal_quoted,
  [21] = 7,
    ACTIONS(3), 1,
      anon_sym_LT,
    ACTIONS(12), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_cat_name,
    STATE(32), 1,
      sym_source_file,
    ACTIONS(5), 2,
      sym_literal_unquoted_cat,
      sym_literal_quoted,
    STATE(2), 2,
      sym_feature_list,
      aux_sym_source_file_repeat1,
    STATE(35), 5,
      sym_cat_funcapp,
      sym_cat_left,
      sym_cat_right,
      sym_cat_middle,
      sym_cat_uniq,
  [49] = 7,
    ACTIONS(3), 1,
      anon_sym_LT,
    ACTIONS(12), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_cat_name,
    STATE(31), 1,
      sym_source_file,
    ACTIONS(5), 2,
      sym_literal_unquoted_cat,
      sym_literal_quoted,
    STATE(2), 2,
      sym_feature_list,
      aux_sym_source_file_repeat1,
    STATE(35), 5,
      sym_cat_funcapp,
      sym_cat_left,
      sym_cat_right,
      sym_cat_middle,
      sym_cat_uniq,
  [77] = 7,
    ACTIONS(3), 1,
      anon_sym_LT,
    ACTIONS(12), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_cat_name,
    STATE(30), 1,
      sym_source_file,
    ACTIONS(5), 2,
      sym_literal_unquoted_cat,
      sym_literal_quoted,
    STATE(2), 2,
      sym_feature_list,
      aux_sym_source_file_repeat1,
    STATE(35), 5,
      sym_cat_funcapp,
      sym_cat_left,
      sym_cat_right,
      sym_cat_middle,
      sym_cat_uniq,
  [105] = 7,
    ACTIONS(3), 1,
      anon_sym_LT,
    ACTIONS(12), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_cat_name,
    STATE(27), 1,
      sym_source_file,
    ACTIONS(5), 2,
      sym_literal_unquoted_cat,
      sym_literal_quoted,
    STATE(5), 2,
      sym_feature_list,
      aux_sym_source_file_repeat1,
    STATE(35), 5,
      sym_cat_funcapp,
      sym_cat_left,
      sym_cat_right,
      sym_cat_middle,
      sym_cat_uniq,
  [133] = 7,
    ACTIONS(3), 1,
      anon_sym_LT,
    ACTIONS(12), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_cat_name,
    STATE(26), 1,
      sym_source_file,
    ACTIONS(5), 2,
      sym_literal_unquoted_cat,
      sym_literal_quoted,
    STATE(4), 2,
      sym_feature_list,
      aux_sym_source_file_repeat1,
    STATE(35), 5,
      sym_cat_funcapp,
      sym_cat_left,
      sym_cat_right,
      sym_cat_middle,
      sym_cat_uniq,
  [161] = 7,
    ACTIONS(3), 1,
      anon_sym_LT,
    ACTIONS(12), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_cat_name,
    STATE(33), 1,
      sym_source_file,
    ACTIONS(5), 2,
      sym_literal_unquoted_cat,
      sym_literal_quoted,
    STATE(3), 2,
      sym_feature_list,
      aux_sym_source_file_repeat1,
    STATE(35), 5,
      sym_cat_funcapp,
      sym_cat_left,
      sym_cat_right,
      sym_cat_middle,
      sym_cat_uniq,
  [189] = 1,
    ACTIONS(14), 12,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      sym_literal_unquoted_cat,
      sym_literal_quoted,
  [204] = 1,
    ACTIONS(16), 12,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      sym_literal_unquoted_cat,
      sym_literal_quoted,
  [219] = 1,
    ACTIONS(18), 12,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      sym_literal_unquoted_cat,
      sym_literal_quoted,
  [234] = 1,
    ACTIONS(20), 12,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      sym_literal_unquoted_cat,
      sym_literal_quoted,
  [249] = 3,
    ACTIONS(12), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym_feature_list,
      aux_sym_source_file_repeat1,
    ACTIONS(22), 8,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [267] = 3,
    ACTIONS(12), 1,
      anon_sym_LBRACK,
    STATE(2), 2,
      sym_feature_list,
      aux_sym_source_file_repeat1,
    ACTIONS(24), 8,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [285] = 3,
    ACTIONS(12), 1,
      anon_sym_LBRACK,
    STATE(17), 2,
      sym_feature_list,
      aux_sym_source_file_repeat1,
    ACTIONS(26), 8,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [303] = 6,
    ACTIONS(3), 1,
      anon_sym_LT,
    ACTIONS(28), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_cat_name,
    STATE(37), 1,
      sym_source_file,
    ACTIONS(5), 2,
      sym_literal_unquoted_cat,
      sym_literal_quoted,
    STATE(35), 5,
      sym_cat_funcapp,
      sym_cat_left,
      sym_cat_right,
      sym_cat_middle,
      sym_cat_uniq,
  [327] = 3,
    ACTIONS(12), 1,
      anon_sym_LBRACK,
    STATE(2), 2,
      sym_feature_list,
      aux_sym_source_file_repeat1,
    ACTIONS(30), 8,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [345] = 3,
    ACTIONS(12), 1,
      anon_sym_LBRACK,
    STATE(2), 2,
      sym_feature_list,
      aux_sym_source_file_repeat1,
    ACTIONS(32), 8,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [363] = 6,
    ACTIONS(3), 1,
      anon_sym_LT,
    ACTIONS(34), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_cat_name,
    STATE(36), 1,
      sym_source_file,
    ACTIONS(5), 2,
      sym_literal_unquoted_cat,
      sym_literal_quoted,
    STATE(35), 5,
      sym_cat_funcapp,
      sym_cat_left,
      sym_cat_right,
      sym_cat_middle,
      sym_cat_uniq,
  [387] = 6,
    ACTIONS(3), 1,
      anon_sym_LT,
    ACTIONS(36), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_cat_name,
    STATE(37), 1,
      sym_source_file,
    ACTIONS(5), 2,
      sym_literal_unquoted_cat,
      sym_literal_quoted,
    STATE(35), 5,
      sym_cat_funcapp,
      sym_cat_left,
      sym_cat_right,
      sym_cat_middle,
      sym_cat_uniq,
  [411] = 3,
    ACTIONS(12), 1,
      anon_sym_LBRACK,
    STATE(14), 2,
      sym_feature_list,
      aux_sym_source_file_repeat1,
    ACTIONS(38), 8,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [429] = 5,
    ACTIONS(3), 1,
      anon_sym_LT,
    STATE(21), 1,
      sym_cat_name,
    STATE(38), 1,
      sym_source_file,
    ACTIONS(5), 2,
      sym_literal_unquoted_cat,
      sym_literal_quoted,
    STATE(35), 5,
      sym_cat_funcapp,
      sym_cat_left,
      sym_cat_right,
      sym_cat_middle,
      sym_cat_uniq,
  [450] = 5,
    ACTIONS(3), 1,
      anon_sym_LT,
    STATE(21), 1,
      sym_cat_name,
    STATE(37), 1,
      sym_source_file,
    ACTIONS(5), 2,
      sym_literal_unquoted_cat,
      sym_literal_quoted,
    STATE(35), 5,
      sym_cat_funcapp,
      sym_cat_left,
      sym_cat_right,
      sym_cat_middle,
      sym_cat_uniq,
  [471] = 1,
    ACTIONS(40), 9,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
  [483] = 1,
    ACTIONS(42), 9,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
  [495] = 3,
    ACTIONS(46), 1,
      anon_sym_PIPE,
    STATE(13), 1,
      sym_cat_functor_arg_list,
    ACTIONS(44), 7,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
  [511] = 5,
    ACTIONS(46), 1,
      anon_sym_PIPE,
    ACTIONS(50), 1,
      anon_sym_BSLASH,
    ACTIONS(52), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      sym_cat_functor_arg_list,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [531] = 1,
    ACTIONS(54), 9,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
  [543] = 1,
    ACTIONS(56), 9,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
  [555] = 5,
    ACTIONS(46), 1,
      anon_sym_PIPE,
    ACTIONS(50), 1,
      anon_sym_BSLASH,
    ACTIONS(52), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      sym_cat_functor_arg_list,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [575] = 3,
    ACTIONS(46), 1,
      anon_sym_PIPE,
    STATE(13), 1,
      sym_cat_functor_arg_list,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
  [591] = 2,
    STATE(13), 1,
      sym_cat_functor_arg_list,
    ACTIONS(62), 8,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [605] = 2,
    STATE(13), 1,
      sym_cat_functor_arg_list,
    ACTIONS(64), 8,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [619] = 1,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
  [631] = 1,
    ACTIONS(68), 8,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [642] = 8,
    ACTIONS(46), 1,
      anon_sym_PIPE,
    ACTIONS(50), 1,
      anon_sym_BSLASH,
    ACTIONS(52), 1,
      anon_sym_SLASH,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_cat_functor_arg_list,
    STATE(47), 1,
      aux_sym_cat_functor_arg_list_repeat1,
  [667] = 6,
    ACTIONS(46), 1,
      anon_sym_PIPE,
    ACTIONS(50), 1,
      anon_sym_BSLASH,
    ACTIONS(52), 1,
      anon_sym_SLASH,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_cat_functor_arg_list,
    ACTIONS(76), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [687] = 6,
    ACTIONS(46), 1,
      anon_sym_PIPE,
    ACTIONS(50), 1,
      anon_sym_BSLASH,
    ACTIONS(52), 1,
      anon_sym_SLASH,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(78), 1,
      anon_sym_GT,
    STATE(13), 1,
      sym_cat_functor_arg_list,
  [706] = 6,
    ACTIONS(46), 1,
      anon_sym_PIPE,
    ACTIONS(50), 1,
      anon_sym_BSLASH,
    ACTIONS(52), 1,
      anon_sym_SLASH,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_cat_functor_arg_list,
  [725] = 3,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      sym_feature,
    ACTIONS(84), 2,
      sym_literal_unquoted_feat,
      sym_literal_quoted,
  [736] = 3,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      sym_feature,
    ACTIONS(84), 2,
      sym_literal_unquoted_feat,
      sym_literal_quoted,
  [747] = 3,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      sym_feature,
    ACTIONS(84), 2,
      sym_literal_unquoted_feat,
      sym_literal_quoted,
  [758] = 3,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_feature_list_repeat1,
  [768] = 3,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_cat_functor_arg_list_repeat1,
  [778] = 2,
    ACTIONS(97), 1,
      anon_sym_EQ,
    ACTIONS(95), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [786] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_feature_list_repeat1,
  [796] = 3,
    ACTIONS(28), 1,
      anon_sym_RPAREN,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_cat_functor_arg_list_repeat1,
  [806] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_feature_list_repeat1,
  [816] = 2,
    STATE(51), 1,
      sym_feature,
    ACTIONS(84), 2,
      sym_literal_unquoted_feat,
      sym_literal_quoted,
  [824] = 1,
    ACTIONS(110), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [829] = 1,
    ACTIONS(102), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [834] = 1,
    ACTIONS(112), 2,
      sym_literal_unquoted_feat,
      sym_literal_quoted,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 49,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 105,
  [SMALL_STATE(7)] = 133,
  [SMALL_STATE(8)] = 161,
  [SMALL_STATE(9)] = 189,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 219,
  [SMALL_STATE(12)] = 234,
  [SMALL_STATE(13)] = 249,
  [SMALL_STATE(14)] = 267,
  [SMALL_STATE(15)] = 285,
  [SMALL_STATE(16)] = 303,
  [SMALL_STATE(17)] = 327,
  [SMALL_STATE(18)] = 345,
  [SMALL_STATE(19)] = 363,
  [SMALL_STATE(20)] = 387,
  [SMALL_STATE(21)] = 411,
  [SMALL_STATE(22)] = 429,
  [SMALL_STATE(23)] = 450,
  [SMALL_STATE(24)] = 471,
  [SMALL_STATE(25)] = 483,
  [SMALL_STATE(26)] = 495,
  [SMALL_STATE(27)] = 511,
  [SMALL_STATE(28)] = 531,
  [SMALL_STATE(29)] = 543,
  [SMALL_STATE(30)] = 555,
  [SMALL_STATE(31)] = 575,
  [SMALL_STATE(32)] = 591,
  [SMALL_STATE(33)] = 605,
  [SMALL_STATE(34)] = 619,
  [SMALL_STATE(35)] = 631,
  [SMALL_STATE(36)] = 642,
  [SMALL_STATE(37)] = 667,
  [SMALL_STATE(38)] = 687,
  [SMALL_STATE(39)] = 706,
  [SMALL_STATE(40)] = 725,
  [SMALL_STATE(41)] = 736,
  [SMALL_STATE(42)] = 747,
  [SMALL_STATE(43)] = 758,
  [SMALL_STATE(44)] = 768,
  [SMALL_STATE(45)] = 778,
  [SMALL_STATE(46)] = 786,
  [SMALL_STATE(47)] = 796,
  [SMALL_STATE(48)] = 806,
  [SMALL_STATE(49)] = 816,
  [SMALL_STATE(50)] = 824,
  [SMALL_STATE(51)] = 829,
  [SMALL_STATE(52)] = 834,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [12] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_list, 5, 0, 0),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_list, 2, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_list, 4, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_list, 3, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat_funcapp, 2, 0, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat_uniq, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat_funcapp, 3, 0, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat_uniq, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat_functor_arg_list, 4, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat_name, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat_right, 3, 0, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat_left, 3, 0, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat_functor_arg_list, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat_functor_arg_list, 5, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat_left, 4, 0, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat_right, 4, 0, 6),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat_middle, 4, 0, 6),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat_middle, 3, 0, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat_functor_arg_list, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cat_functor_arg_list_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [80] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cat_functor_arg_list_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 1, 0, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_list_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feature_list_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 3, 0, 7),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
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

TS_PUBLIC const TSLanguage *tree_sitter_CategorialGrammarIconic(void) {
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
