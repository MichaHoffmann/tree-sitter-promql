#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_float_literal = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_LBRACE = 4,
  anon_sym_COMMA = 5,
  anon_sym_RBRACE = 6,
  anon_sym_EQ = 7,
  anon_sym_BANG_EQ = 8,
  anon_sym_EQ_TILDE = 9,
  anon_sym_BANG_TILDE = 10,
  sym_metric_name = 11,
  sym_label_name = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_rate = 15,
  anon_sym_label_join = 16,
  anon_sym_histogram_quantile = 17,
  sym__double_quoted_string = 18,
  sym__single_quoted_string = 19,
  aux_sym__duration_token1 = 20,
  anon_sym_ms = 21,
  anon_sym_s = 22,
  anon_sym_m = 23,
  anon_sym_h = 24,
  anon_sym_d = 25,
  anon_sym_w = 26,
  anon_sym_y = 27,
  sym_comment = 28,
  sym_query = 29,
  sym__query_expression = 30,
  sym__literal_expression = 31,
  sym_string_literal = 32,
  sym__timeseries_selector_expression = 33,
  sym_instant_vector_selector = 34,
  sym_range_vector_selector = 35,
  sym_range_selection = 36,
  sym__series_matcher = 37,
  sym_label_selectors = 38,
  sym_label_matcher = 39,
  sym_label_value = 40,
  sym__function_expression = 41,
  sym_function_call = 42,
  sym_function_name = 43,
  sym_function_args = 44,
  sym__quoted_string = 45,
  aux_sym__duration = 46,
  aux_sym_label_selectors_repeat1 = 47,
  aux_sym_function_args_repeat1 = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_float_literal] = "float_literal",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_TILDE] = "=~",
  [anon_sym_BANG_TILDE] = "!~",
  [sym_metric_name] = "metric_name",
  [sym_label_name] = "label_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_rate] = "rate",
  [anon_sym_label_join] = "label_join",
  [anon_sym_histogram_quantile] = "histogram_quantile",
  [sym__double_quoted_string] = "_double_quoted_string",
  [sym__single_quoted_string] = "_single_quoted_string",
  [aux_sym__duration_token1] = "_duration_token1",
  [anon_sym_ms] = "ms",
  [anon_sym_s] = "s",
  [anon_sym_m] = "m",
  [anon_sym_h] = "h",
  [anon_sym_d] = "d",
  [anon_sym_w] = "w",
  [anon_sym_y] = "y",
  [sym_comment] = "comment",
  [sym_query] = "query",
  [sym__query_expression] = "_query_expression",
  [sym__literal_expression] = "_literal_expression",
  [sym_string_literal] = "string_literal",
  [sym__timeseries_selector_expression] = "_timeseries_selector_expression",
  [sym_instant_vector_selector] = "instant_vector_selector",
  [sym_range_vector_selector] = "range_vector_selector",
  [sym_range_selection] = "range_selection",
  [sym__series_matcher] = "_series_matcher",
  [sym_label_selectors] = "label_selectors",
  [sym_label_matcher] = "label_matcher",
  [sym_label_value] = "label_value",
  [sym__function_expression] = "_function_expression",
  [sym_function_call] = "function_call",
  [sym_function_name] = "function_name",
  [sym_function_args] = "function_args",
  [sym__quoted_string] = "_quoted_string",
  [aux_sym__duration] = "_duration",
  [aux_sym_label_selectors_repeat1] = "label_selectors_repeat1",
  [aux_sym_function_args_repeat1] = "function_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [sym_metric_name] = sym_metric_name,
  [sym_label_name] = sym_label_name,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_rate] = anon_sym_rate,
  [anon_sym_label_join] = anon_sym_label_join,
  [anon_sym_histogram_quantile] = anon_sym_histogram_quantile,
  [sym__double_quoted_string] = sym__double_quoted_string,
  [sym__single_quoted_string] = sym__single_quoted_string,
  [aux_sym__duration_token1] = aux_sym__duration_token1,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_y] = anon_sym_y,
  [sym_comment] = sym_comment,
  [sym_query] = sym_query,
  [sym__query_expression] = sym__query_expression,
  [sym__literal_expression] = sym__literal_expression,
  [sym_string_literal] = sym_string_literal,
  [sym__timeseries_selector_expression] = sym__timeseries_selector_expression,
  [sym_instant_vector_selector] = sym_instant_vector_selector,
  [sym_range_vector_selector] = sym_range_vector_selector,
  [sym_range_selection] = sym_range_selection,
  [sym__series_matcher] = sym__series_matcher,
  [sym_label_selectors] = sym_label_selectors,
  [sym_label_matcher] = sym_label_matcher,
  [sym_label_value] = sym_label_value,
  [sym__function_expression] = sym__function_expression,
  [sym_function_call] = sym_function_call,
  [sym_function_name] = sym_function_name,
  [sym_function_args] = sym_function_args,
  [sym__quoted_string] = sym__quoted_string,
  [aux_sym__duration] = aux_sym__duration,
  [aux_sym_label_selectors_repeat1] = aux_sym_label_selectors_repeat1,
  [aux_sym_function_args_repeat1] = aux_sym_function_args_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_metric_name] = {
    .visible = true,
    .named = true,
  },
  [sym_label_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label_join] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_histogram_quantile] = {
    .visible = true,
    .named = false,
  },
  [sym__double_quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__single_quoted_string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__duration_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym__query_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__literal_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__timeseries_selector_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_instant_vector_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_range_vector_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_range_selection] = {
    .visible = true,
    .named = true,
  },
  [sym__series_matcher] = {
    .visible = false,
    .named = true,
  },
  [sym_label_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_label_matcher] = {
    .visible = true,
    .named = true,
  },
  [sym_label_value] = {
    .visible = true,
    .named = true,
  },
  [sym__function_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_function_args] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__duration] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_args_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 'h') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 'w') ADVANCE(120);
      if (lookahead == 'y') ADVANCE(121);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '}') ADVANCE(63);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(11);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == 'h') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 'h') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 'w') ADVANCE(120);
      if (lookahead == 'y') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(123);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '~') ADVANCE(67);
      END_STATE();
    case 13:
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(3);
      END_STATE();
    case 14:
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\'' || ')' < lookahead)) ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'j') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'q') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 43:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '~') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == '_') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'a') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'a') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'a') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'a') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'b') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'g') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'i') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'i') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'i') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'j') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'l') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'l') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'm') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'n') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'n') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'o') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'o') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'q') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 's') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 't') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 't') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'u') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_metric_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_metric_name);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_label_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_rate);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_rate);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_label_join);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_label_join);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_histogram_quantile);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_histogram_quantile);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__double_quoted_string);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__single_quoted_string);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__duration_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_rate] = ACTIONS(1),
    [anon_sym_label_join] = ACTIONS(1),
    [anon_sym_histogram_quantile] = ACTIONS(1),
    [sym__double_quoted_string] = ACTIONS(1),
    [sym__single_quoted_string] = ACTIONS(1),
    [aux_sym__duration_token1] = ACTIONS(1),
    [anon_sym_ms] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_query] = STATE(36),
    [sym__query_expression] = STATE(34),
    [sym__literal_expression] = STATE(34),
    [sym_string_literal] = STATE(34),
    [sym__timeseries_selector_expression] = STATE(34),
    [sym_instant_vector_selector] = STATE(34),
    [sym_range_vector_selector] = STATE(34),
    [sym__series_matcher] = STATE(6),
    [sym__function_expression] = STATE(34),
    [sym_function_call] = STATE(34),
    [sym_function_name] = STATE(35),
    [sym__quoted_string] = STATE(26),
    [sym_float_literal] = ACTIONS(5),
    [sym_metric_name] = ACTIONS(7),
    [anon_sym_rate] = ACTIONS(9),
    [anon_sym_label_join] = ACTIONS(9),
    [anon_sym_histogram_quantile] = ACTIONS(9),
    [sym__double_quoted_string] = ACTIONS(11),
    [sym__single_quoted_string] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_metric_name,
    ACTIONS(13), 1,
      sym_float_literal,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym__series_matcher,
    STATE(26), 1,
      sym__quoted_string,
    STATE(35), 1,
      sym_function_name,
    STATE(38), 1,
      sym_function_args,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(9), 3,
      anon_sym_rate,
      anon_sym_label_join,
      anon_sym_histogram_quantile,
    STATE(20), 8,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
  [44] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_metric_name,
    ACTIONS(17), 1,
      sym_float_literal,
    STATE(6), 1,
      sym__series_matcher,
    STATE(26), 1,
      sym__quoted_string,
    STATE(35), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(9), 3,
      anon_sym_rate,
      anon_sym_label_join,
      anon_sym_histogram_quantile,
    STATE(33), 8,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
  [82] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_m,
    ACTIONS(19), 6,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_h,
      anon_sym_d,
      anon_sym_w,
      anon_sym_y,
  [97] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_label_selectors,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_range_selection,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(30), 1,
      sym_label_value,
    STATE(31), 1,
      sym__quoted_string,
    ACTIONS(35), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_EQ,
    ACTIONS(41), 3,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    ACTIONS(47), 1,
      aux_sym__duration_token1,
    STATE(24), 1,
      aux_sym__duration,
  [207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      sym_label_name,
    STATE(18), 1,
      sym_label_matcher,
  [229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_function_args_repeat1,
  [242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_label_selectors_repeat1,
  [264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_function_args_repeat1,
  [286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_label_selectors_repeat1,
  [299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_function_args_repeat1,
  [321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    ACTIONS(83), 1,
      aux_sym__duration_token1,
    STATE(24), 1,
      aux_sym__duration,
  [334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_label_selectors_repeat1,
  [347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_RBRACK,
      aux_sym__duration_token1,
  [364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      aux_sym__duration_token1,
    STATE(13), 1,
      aux_sym__duration,
  [374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_label_name,
    STATE(32), 1,
      sym_label_matcher,
  [384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
  [430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
  [437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
  [444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 113,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 148,
  [SMALL_STATE(10)] = 162,
  [SMALL_STATE(11)] = 172,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 194,
  [SMALL_STATE(14)] = 207,
  [SMALL_STATE(15)] = 216,
  [SMALL_STATE(16)] = 229,
  [SMALL_STATE(17)] = 242,
  [SMALL_STATE(18)] = 251,
  [SMALL_STATE(19)] = 264,
  [SMALL_STATE(20)] = 273,
  [SMALL_STATE(21)] = 286,
  [SMALL_STATE(22)] = 299,
  [SMALL_STATE(23)] = 308,
  [SMALL_STATE(24)] = 321,
  [SMALL_STATE(25)] = 334,
  [SMALL_STATE(26)] = 347,
  [SMALL_STATE(27)] = 356,
  [SMALL_STATE(28)] = 364,
  [SMALL_STATE(29)] = 374,
  [SMALL_STATE(30)] = 384,
  [SMALL_STATE(31)] = 392,
  [SMALL_STATE(32)] = 400,
  [SMALL_STATE(33)] = 408,
  [SMALL_STATE(34)] = 416,
  [SMALL_STATE(35)] = 423,
  [SMALL_STATE(36)] = 430,
  [SMALL_STATE(37)] = 437,
  [SMALL_STATE(38)] = 444,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__series_matcher, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instant_vector_selector, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__series_matcher, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_selection, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_vector_selector, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_label_selectors_repeat1, 2), SHIFT_REPEAT(29),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_selectors_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__duration, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__duration, 2), SHIFT_REPEAT(4),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_matcher, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_value, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [98] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_promql(void) {
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
