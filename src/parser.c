#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 150
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  sym_float_literal = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_offset = 6,
  anon_sym_DASH = 7,
  anon_sym_AT = 8,
  anon_sym_start_LPAREN_RPAREN = 9,
  anon_sym_end_LPAREN_RPAREN = 10,
  aux_sym_at_token1 = 11,
  anon_sym_LBRACE = 12,
  anon_sym_COMMA = 13,
  anon_sym_RBRACE = 14,
  anon_sym_EQ = 15,
  anon_sym_BANG_EQ = 16,
  anon_sym_EQ_TILDE = 17,
  anon_sym_BANG_TILDE = 18,
  anon_sym_by = 19,
  anon_sym_without = 20,
  anon_sym_CARET = 21,
  anon_sym_STAR = 22,
  anon_sym_SLASH = 23,
  anon_sym_PERCENT = 24,
  anon_sym_PLUS = 25,
  anon_sym_EQ_EQ = 26,
  anon_sym_GT = 27,
  anon_sym_GT_EQ = 28,
  anon_sym_LT = 29,
  anon_sym_LT_EQ = 30,
  anon_sym_bool = 31,
  anon_sym_and = 32,
  anon_sym_or = 33,
  anon_sym_unless = 34,
  anon_sym_atan2 = 35,
  anon_sym_on = 36,
  anon_sym_ignoring = 37,
  anon_sym_group_left = 38,
  anon_sym_group_right = 39,
  anon_sym_COLON = 40,
  sym__double_quoted_string = 41,
  sym__single_quoted_string = 42,
  aux_sym__duration_token1 = 43,
  anon_sym_ms = 44,
  anon_sym_s = 45,
  anon_sym_m = 46,
  anon_sym_h = 47,
  anon_sym_d = 48,
  anon_sym_w = 49,
  anon_sym_y = 50,
  sym__identifier = 51,
  sym_comment = 52,
  sym_query = 53,
  sym__query = 54,
  sym__query_expression = 55,
  sym__literal_expression = 56,
  sym_string_literal = 57,
  sym__selector_expression = 58,
  sym_instant_vector_selector = 59,
  sym_range_vector_selector = 60,
  sym_range_selection = 61,
  sym_modifier = 62,
  sym_offset = 63,
  sym_at = 64,
  sym__series_matcher = 65,
  sym_label_selectors = 66,
  sym_label_matcher = 67,
  sym_metric_name = 68,
  sym_label_name = 69,
  sym_label_value = 70,
  sym__call_expression = 71,
  sym_function_call = 72,
  sym_function_name = 73,
  sym_function_args = 74,
  sym_grouping = 75,
  sym__operator_expression = 76,
  sym_binary_expression = 77,
  sym_binary_grouping = 78,
  sym__subquery_expression = 79,
  sym_subquery = 80,
  sym_subquery_range_selection = 81,
  sym__quoted_string = 82,
  aux_sym__duration = 83,
  aux_sym_label_selectors_repeat1 = 84,
  aux_sym_function_args_repeat1 = 85,
  aux_sym_grouping_repeat1 = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_float_literal] = "float_literal",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_offset] = "offset",
  [anon_sym_DASH] = "-",
  [anon_sym_AT] = "@",
  [anon_sym_start_LPAREN_RPAREN] = "start()",
  [anon_sym_end_LPAREN_RPAREN] = "end()",
  [aux_sym_at_token1] = "at_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_TILDE] = "=~",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_by] = "by",
  [anon_sym_without] = "without",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_bool] = "bool",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_unless] = "unless",
  [anon_sym_atan2] = "atan2",
  [anon_sym_on] = "on",
  [anon_sym_ignoring] = "ignoring",
  [anon_sym_group_left] = "group_left",
  [anon_sym_group_right] = "group_right",
  [anon_sym_COLON] = ":",
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
  [sym__identifier] = "_identifier",
  [sym_comment] = "comment",
  [sym_query] = "query",
  [sym__query] = "_query",
  [sym__query_expression] = "_query_expression",
  [sym__literal_expression] = "_literal_expression",
  [sym_string_literal] = "string_literal",
  [sym__selector_expression] = "_selector_expression",
  [sym_instant_vector_selector] = "instant_vector_selector",
  [sym_range_vector_selector] = "range_vector_selector",
  [sym_range_selection] = "range_selection",
  [sym_modifier] = "modifier",
  [sym_offset] = "offset",
  [sym_at] = "at",
  [sym__series_matcher] = "_series_matcher",
  [sym_label_selectors] = "label_selectors",
  [sym_label_matcher] = "label_matcher",
  [sym_metric_name] = "metric_name",
  [sym_label_name] = "label_name",
  [sym_label_value] = "label_value",
  [sym__call_expression] = "_call_expression",
  [sym_function_call] = "function_call",
  [sym_function_name] = "function_name",
  [sym_function_args] = "function_args",
  [sym_grouping] = "grouping",
  [sym__operator_expression] = "_operator_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_binary_grouping] = "binary_grouping",
  [sym__subquery_expression] = "_subquery_expression",
  [sym_subquery] = "subquery",
  [sym_subquery_range_selection] = "subquery_range_selection",
  [sym__quoted_string] = "_quoted_string",
  [aux_sym__duration] = "_duration",
  [aux_sym_label_selectors_repeat1] = "label_selectors_repeat1",
  [aux_sym_function_args_repeat1] = "function_args_repeat1",
  [aux_sym_grouping_repeat1] = "grouping_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_offset] = anon_sym_offset,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_start_LPAREN_RPAREN] = anon_sym_start_LPAREN_RPAREN,
  [anon_sym_end_LPAREN_RPAREN] = anon_sym_end_LPAREN_RPAREN,
  [aux_sym_at_token1] = aux_sym_at_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_without] = anon_sym_without,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_atan2] = anon_sym_atan2,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_ignoring] = anon_sym_ignoring,
  [anon_sym_group_left] = anon_sym_group_left,
  [anon_sym_group_right] = anon_sym_group_right,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym__identifier] = sym__identifier,
  [sym_comment] = sym_comment,
  [sym_query] = sym_query,
  [sym__query] = sym__query,
  [sym__query_expression] = sym__query_expression,
  [sym__literal_expression] = sym__literal_expression,
  [sym_string_literal] = sym_string_literal,
  [sym__selector_expression] = sym__selector_expression,
  [sym_instant_vector_selector] = sym_instant_vector_selector,
  [sym_range_vector_selector] = sym_range_vector_selector,
  [sym_range_selection] = sym_range_selection,
  [sym_modifier] = sym_modifier,
  [sym_offset] = sym_offset,
  [sym_at] = sym_at,
  [sym__series_matcher] = sym__series_matcher,
  [sym_label_selectors] = sym_label_selectors,
  [sym_label_matcher] = sym_label_matcher,
  [sym_metric_name] = sym_metric_name,
  [sym_label_name] = sym_label_name,
  [sym_label_value] = sym_label_value,
  [sym__call_expression] = sym__call_expression,
  [sym_function_call] = sym_function_call,
  [sym_function_name] = sym_function_name,
  [sym_function_args] = sym_function_args,
  [sym_grouping] = sym_grouping,
  [sym__operator_expression] = sym__operator_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_binary_grouping] = sym_binary_grouping,
  [sym__subquery_expression] = sym__subquery_expression,
  [sym_subquery] = sym_subquery,
  [sym_subquery_range_selection] = sym_subquery_range_selection,
  [sym__quoted_string] = sym__quoted_string,
  [aux_sym__duration] = aux_sym__duration,
  [aux_sym_label_selectors_repeat1] = aux_sym_label_selectors_repeat1,
  [aux_sym_function_args_repeat1] = aux_sym_function_args_repeat1,
  [aux_sym_grouping_repeat1] = aux_sym_grouping_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_offset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_start_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_at_token1] = {
    .visible = false,
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
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_without] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atan2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignoring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
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
  [sym__selector_expression] = {
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
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_at] = {
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
  [sym_metric_name] = {
    .visible = true,
    .named = true,
  },
  [sym_label_name] = {
    .visible = true,
    .named = true,
  },
  [sym_label_value] = {
    .visible = true,
    .named = true,
  },
  [sym__call_expression] = {
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
  [sym_grouping] = {
    .visible = true,
    .named = true,
  },
  [sym__operator_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_grouping] = {
    .visible = true,
    .named = true,
  },
  [sym__subquery_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_subquery] = {
    .visible = true,
    .named = true,
  },
  [sym_subquery_range_selection] = {
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
  [aux_sym_grouping_repeat1] = {
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
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(81);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == ':') ADVANCE(133);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(115);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == '^') ADVANCE(109);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(57);
      if (lookahead == 'h') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(146);
      if (lookahead == 'y') ADVANCE(147);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == '=') ADVANCE(103);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == 'I') ADVANCE(174);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == 'I') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == 'g') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead == 'h') ADVANCE(143);
      if (lookahead == 'm') ADVANCE(142);
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == 'w') ADVANCE(145);
      if (lookahead == 'y') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(97);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(124);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == '~') ADVANCE(106);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(114);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 71:
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 74:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(112);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(133);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(115);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == '^') ADVANCE(109);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(38);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(80)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_offset);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_start_LPAREN_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_end_LPAREN_RPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_at_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(114);
      if (lookahead == '~') ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '~') ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_without);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_atan2);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_on);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_ignoring);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_ignoring);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_group_left);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_group_left);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_group_right);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_group_right);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__double_quoted_string);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__double_quoted_string);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__single_quoted_string);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__single_quoted_string);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__duration_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(161);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 80},
  [4] = {.lex_state = 80},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 80},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 80},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 80},
  [14] = {.lex_state = 80},
  [15] = {.lex_state = 80},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 80},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 80},
  [20] = {.lex_state = 80},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 80},
  [23] = {.lex_state = 80},
  [24] = {.lex_state = 80},
  [25] = {.lex_state = 80},
  [26] = {.lex_state = 80},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 80},
  [29] = {.lex_state = 80},
  [30] = {.lex_state = 80},
  [31] = {.lex_state = 80},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 80},
  [35] = {.lex_state = 80},
  [36] = {.lex_state = 80},
  [37] = {.lex_state = 80},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 80},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 80},
  [46] = {.lex_state = 80},
  [47] = {.lex_state = 80},
  [48] = {.lex_state = 80},
  [49] = {.lex_state = 80},
  [50] = {.lex_state = 80},
  [51] = {.lex_state = 80},
  [52] = {.lex_state = 80},
  [53] = {.lex_state = 80},
  [54] = {.lex_state = 80},
  [55] = {.lex_state = 80},
  [56] = {.lex_state = 80},
  [57] = {.lex_state = 80},
  [58] = {.lex_state = 80},
  [59] = {.lex_state = 80},
  [60] = {.lex_state = 80},
  [61] = {.lex_state = 80},
  [62] = {.lex_state = 80},
  [63] = {.lex_state = 80},
  [64] = {.lex_state = 80},
  [65] = {.lex_state = 80},
  [66] = {.lex_state = 80},
  [67] = {.lex_state = 80},
  [68] = {.lex_state = 80},
  [69] = {.lex_state = 80},
  [70] = {.lex_state = 80},
  [71] = {.lex_state = 80},
  [72] = {.lex_state = 80},
  [73] = {.lex_state = 80},
  [74] = {.lex_state = 80},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 80},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 80},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 80},
  [114] = {.lex_state = 80},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 80},
  [135] = {.lex_state = 80},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 80},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 80},
  [146] = {.lex_state = 80},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_offset] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_start_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_end_LPAREN_RPAREN] = ACTIONS(1),
    [aux_sym_at_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_without] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_atan2] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_ignoring] = ACTIONS(1),
    [anon_sym_group_left] = ACTIONS(1),
    [anon_sym_group_right] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_query] = STATE(149),
    [sym__query] = STATE(72),
    [sym__query_expression] = STATE(72),
    [sym__literal_expression] = STATE(72),
    [sym_string_literal] = STATE(72),
    [sym__selector_expression] = STATE(72),
    [sym_instant_vector_selector] = STATE(72),
    [sym_range_vector_selector] = STATE(72),
    [sym__series_matcher] = STATE(4),
    [sym_metric_name] = STATE(14),
    [sym__call_expression] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_function_name] = STATE(81),
    [sym__operator_expression] = STATE(72),
    [sym_binary_expression] = STATE(72),
    [sym__subquery_expression] = STATE(72),
    [sym_subquery] = STATE(72),
    [sym__quoted_string] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_float_literal] = ACTIONS(7),
    [sym__double_quoted_string] = ACTIONS(9),
    [sym__single_quoted_string] = ACTIONS(9),
    [sym__identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(13), 1,
      sym_float_literal,
    ACTIONS(15), 1,
      anon_sym_bool,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(41), 1,
      sym_binary_grouping,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(17), 2,
      anon_sym_on,
      anon_sym_ignoring,
    STATE(47), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [54] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(21), 3,
      anon_sym_LPAREN,
      anon_sym_by,
      anon_sym_without,
    ACTIONS(19), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [90] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(30), 1,
      anon_sym_offset,
    ACTIONS(32), 1,
      anon_sym_AT,
    STATE(9), 1,
      sym_range_selection,
    STATE(25), 1,
      sym_offset,
    STATE(26), 1,
      sym_at,
    STATE(64), 1,
      sym_modifier,
    ACTIONS(34), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 17,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [138] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(36), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(43), 1,
      sym_binary_grouping,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(17), 2,
      anon_sym_on,
      anon_sym_ignoring,
    STATE(48), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [189] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(38), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(32), 1,
      sym_binary_grouping,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(17), 2,
      anon_sym_on,
      anon_sym_ignoring,
    STATE(61), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [240] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      aux_sym__duration_token1,
    STATE(7), 1,
      aux_sym__duration,
    ACTIONS(42), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(40), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_COLON,
  [277] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(47), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(38), 1,
      sym_binary_grouping,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(17), 2,
      anon_sym_on,
      anon_sym_ignoring,
    STATE(45), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [328] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_offset,
    ACTIONS(32), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym_offset,
    STATE(26), 1,
      sym_at,
    STATE(71), 1,
      sym_modifier,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [371] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(53), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(33), 1,
      sym_binary_grouping,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(17), 2,
      anon_sym_on,
      anon_sym_ignoring,
    STATE(49), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [422] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(55), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(40), 1,
      sym_binary_grouping,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(17), 2,
      anon_sym_on,
      anon_sym_ignoring,
    STATE(50), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [473] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(57), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(44), 1,
      sym_binary_grouping,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(17), 2,
      anon_sym_on,
      anon_sym_ignoring,
    STATE(51), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [524] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_offset,
    ACTIONS(32), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym_offset,
    STATE(26), 1,
      sym_at,
    STATE(66), 1,
      sym_modifier,
    ACTIONS(61), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [567] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_label_selectors,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(40), 22,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_COLON,
      aux_sym__duration_token1,
  [635] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    STATE(65), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [682] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(70), 1,
      sym_grouping,
    ACTIONS(75), 2,
      anon_sym_by,
      anon_sym_without,
    ACTIONS(77), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [717] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    STATE(62), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [764] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym__duration_token1,
    STATE(7), 1,
      aux_sym__duration,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym__duration_token1,
    STATE(7), 1,
      aux_sym__duration,
    ACTIONS(91), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [834] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(71), 1,
      sym_float_literal,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    STATE(65), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_by,
      anon_sym_without,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(99), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_by,
      anon_sym_without,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(103), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [971] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_AT,
    STATE(69), 1,
      sym_at,
    ACTIONS(109), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1005] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_offset,
    STATE(69), 1,
      sym_offset,
    ACTIONS(109), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1039] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(111), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(68), 1,
      sym__quoted_string,
    STATE(73), 1,
      sym__query,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    STATE(74), 12,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [1085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(121), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1205] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(129), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    STATE(53), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [1249] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(131), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    STATE(59), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [1293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(137), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_by,
      anon_sym_without,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(141), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1413] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(149), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    STATE(63), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [1457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_by,
      anon_sym_without,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1487] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(155), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    STATE(58), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [1531] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(38), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    STATE(61), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [1575] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(71), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    STATE(65), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [1619] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(157), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    STATE(60), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [1663] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(159), 1,
      sym_float_literal,
    STATE(4), 1,
      sym__series_matcher,
    STATE(14), 1,
      sym_metric_name,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_function_name,
    ACTIONS(9), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    STATE(57), 13,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__call_expression,
      sym_function_call,
      sym__operator_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [1707] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    STATE(13), 1,
      sym_subquery_range_selection,
    ACTIONS(167), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(165), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 14,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(169), 19,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1771] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    STATE(13), 1,
      sym_subquery_range_selection,
    ACTIONS(167), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(13), 1,
      sym_subquery_range_selection,
    ACTIONS(167), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1839] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    STATE(13), 1,
      sym_subquery_range_selection,
    ACTIONS(167), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 17,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1872] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    STATE(13), 1,
      sym_subquery_range_selection,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(177), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(165), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(175), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(161), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1911] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    STATE(13), 1,
      sym_subquery_range_selection,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(177), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(165), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(179), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(175), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_atan2,
  [1952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 19,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1981] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    STATE(13), 1,
      sym_subquery_range_selection,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(187), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(165), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(185), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(189), 19,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 19,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2105] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    STATE(13), 1,
      sym_subquery_range_selection,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(177), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(165), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(179), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(175), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_atan2,
  [2146] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    STATE(13), 1,
      sym_subquery_range_selection,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(177), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(165), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(175), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(201), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2185] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    STATE(13), 1,
      sym_subquery_range_selection,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 17,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(13), 1,
      sym_subquery_range_selection,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2249] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    STATE(13), 1,
      sym_subquery_range_selection,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(165), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(201), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2286] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_atan2,
    STATE(13), 1,
      sym_subquery_range_selection,
    STATE(120), 1,
      aux_sym_function_args_repeat1,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(177), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(165), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(179), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(175), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2335] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    STATE(13), 1,
      sym_subquery_range_selection,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(165), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(201), 14,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(213), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2398] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_atan2,
    STATE(13), 1,
      sym_subquery_range_selection,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(177), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(217), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(165), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(179), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(175), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(219), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(223), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(227), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(231), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(235), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(239), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2610] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_atan2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_subquery_range_selection,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(177), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(165), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(179), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(175), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2653] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_atan2,
    STATE(13), 1,
      sym_subquery_range_selection,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(177), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(165), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(179), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(175), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    ACTIONS(249), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(247), 15,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_m,
    ACTIONS(251), 6,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_h,
      anon_sym_d,
      anon_sym_w,
      anon_sym_y,
  [2736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      sym_float_literal,
      sym__identifier,
    ACTIONS(259), 2,
      anon_sym_group_left,
      anon_sym_group_right,
    ACTIONS(255), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [2753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 2,
      sym_float_literal,
      sym__identifier,
    ACTIONS(265), 2,
      anon_sym_group_left,
      anon_sym_group_right,
    ACTIONS(261), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [2770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 2,
      sym_float_literal,
      sym__identifier,
    ACTIONS(271), 2,
      anon_sym_group_left,
      anon_sym_group_right,
    ACTIONS(267), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [2787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 2,
      sym_float_literal,
      sym__identifier,
    ACTIONS(277), 2,
      anon_sym_group_left,
      anon_sym_group_right,
    ACTIONS(273), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [2804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_EQ,
    ACTIONS(279), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [2818] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_function_args,
    STATE(138), 1,
      sym_grouping,
    ACTIONS(75), 2,
      anon_sym_by,
      anon_sym_without,
  [2835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 2,
      sym_float_literal,
      sym__identifier,
    ACTIONS(289), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [2850] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(275), 2,
      sym_float_literal,
      sym__identifier,
  [2865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      sym_float_literal,
      sym__identifier,
    ACTIONS(293), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [2878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      sym_float_literal,
      sym__identifier,
    ACTIONS(255), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [2891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(257), 2,
      sym_float_literal,
      sym__identifier,
  [2906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      sym_float_literal,
      sym__identifier,
    ACTIONS(299), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [2919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      sym_float_literal,
      sym__identifier,
    ACTIONS(303), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [2932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(263), 2,
      sym_float_literal,
      sym__identifier,
  [2947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 2,
      sym_float_literal,
      sym__identifier,
    ACTIONS(309), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [2960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      sym_float_literal,
      sym__identifier,
    ACTIONS(313), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [2973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      sym_float_literal,
      sym__identifier,
    ACTIONS(289), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [2986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(139), 1,
      sym__quoted_string,
    STATE(144), 1,
      sym_label_value,
    ACTIONS(317), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [3000] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    ACTIONS(321), 1,
      sym__identifier,
    STATE(96), 1,
      sym_label_name,
    STATE(105), 1,
      sym_label_matcher,
  [3016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_label_name,
    STATE(143), 1,
      sym_label_matcher,
  [3032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_EQ,
    ACTIONS(327), 3,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [3044] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_label_name,
    STATE(143), 1,
      sym_label_matcher,
  [3060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_grouping_repeat1,
  [3073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_label_selectors_repeat1,
  [3086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_label_name,
  [3099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_function_args_repeat1,
  [3112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym__duration_token1,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__duration,
  [3125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_label_name,
  [3138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_grouping_repeat1,
  [3151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_label_selectors_repeat1,
  [3164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      aux_sym_label_selectors_repeat1,
  [3177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_grouping_repeat1,
  [3190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_label_name,
  [3203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_grouping_repeat1,
  [3216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_label_name,
  [3229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    STATE(96), 1,
      sym_label_name,
    STATE(143), 1,
      sym_label_matcher,
  [3242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_grouping_repeat1,
  [3255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym__duration_token1,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__duration,
  [3268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym__duration_token1,
    ACTIONS(371), 1,
      anon_sym_DASH,
    STATE(19), 1,
      aux_sym__duration,
  [3281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_grouping_repeat1,
  [3294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_label_name,
  [3307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_grouping_repeat1,
  [3320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_label_name,
  [3333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_grouping_repeat1,
  [3346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_function_args_repeat1,
  [3359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_label_name,
  [3372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 3,
      anon_sym_start_LPAREN_RPAREN,
      anon_sym_end_LPAREN_RPAREN,
      aux_sym_at_token1,
  [3381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_grouping_repeat1,
  [3394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_label_name,
  [3407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_label_name,
  [3420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym_label_name,
  [3433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_label_name,
  [3446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_grouping_repeat1,
  [3459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_label_name,
  [3472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_label_name,
  [3485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_grouping_repeat1,
  [3498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym_grouping_repeat1,
  [3511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      sym_label_name,
  [3524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym__duration_token1,
    ACTIONS(408), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      aux_sym__duration,
  [3537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym__duration_token1,
    ACTIONS(410), 1,
      anon_sym_COLON,
    STATE(7), 1,
      aux_sym__duration,
  [3550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_label_name,
  [3563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_grouping_repeat1,
  [3576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_function_args,
  [3586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__identifier,
    STATE(141), 1,
      sym_label_name,
  [3604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym__duration_token1,
    STATE(102), 1,
      aux_sym__duration,
  [3622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym__duration_token1,
    STATE(135), 1,
      aux_sym__duration,
  [3648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym__duration_token1,
    STATE(20), 1,
      aux_sym__duration,
  [3658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
  [3665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
  [3672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 189,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 277,
  [SMALL_STATE(9)] = 328,
  [SMALL_STATE(10)] = 371,
  [SMALL_STATE(11)] = 422,
  [SMALL_STATE(12)] = 473,
  [SMALL_STATE(13)] = 524,
  [SMALL_STATE(14)] = 567,
  [SMALL_STATE(15)] = 603,
  [SMALL_STATE(16)] = 635,
  [SMALL_STATE(17)] = 682,
  [SMALL_STATE(18)] = 717,
  [SMALL_STATE(19)] = 764,
  [SMALL_STATE(20)] = 799,
  [SMALL_STATE(21)] = 834,
  [SMALL_STATE(22)] = 881,
  [SMALL_STATE(23)] = 911,
  [SMALL_STATE(24)] = 941,
  [SMALL_STATE(25)] = 971,
  [SMALL_STATE(26)] = 1005,
  [SMALL_STATE(27)] = 1039,
  [SMALL_STATE(28)] = 1085,
  [SMALL_STATE(29)] = 1115,
  [SMALL_STATE(30)] = 1145,
  [SMALL_STATE(31)] = 1175,
  [SMALL_STATE(32)] = 1205,
  [SMALL_STATE(33)] = 1249,
  [SMALL_STATE(34)] = 1293,
  [SMALL_STATE(35)] = 1323,
  [SMALL_STATE(36)] = 1353,
  [SMALL_STATE(37)] = 1383,
  [SMALL_STATE(38)] = 1413,
  [SMALL_STATE(39)] = 1457,
  [SMALL_STATE(40)] = 1487,
  [SMALL_STATE(41)] = 1531,
  [SMALL_STATE(42)] = 1575,
  [SMALL_STATE(43)] = 1619,
  [SMALL_STATE(44)] = 1663,
  [SMALL_STATE(45)] = 1707,
  [SMALL_STATE(46)] = 1742,
  [SMALL_STATE(47)] = 1771,
  [SMALL_STATE(48)] = 1808,
  [SMALL_STATE(49)] = 1839,
  [SMALL_STATE(50)] = 1872,
  [SMALL_STATE(51)] = 1911,
  [SMALL_STATE(52)] = 1952,
  [SMALL_STATE(53)] = 1981,
  [SMALL_STATE(54)] = 2018,
  [SMALL_STATE(55)] = 2047,
  [SMALL_STATE(56)] = 2076,
  [SMALL_STATE(57)] = 2105,
  [SMALL_STATE(58)] = 2146,
  [SMALL_STATE(59)] = 2185,
  [SMALL_STATE(60)] = 2218,
  [SMALL_STATE(61)] = 2249,
  [SMALL_STATE(62)] = 2286,
  [SMALL_STATE(63)] = 2335,
  [SMALL_STATE(64)] = 2370,
  [SMALL_STATE(65)] = 2398,
  [SMALL_STATE(66)] = 2442,
  [SMALL_STATE(67)] = 2470,
  [SMALL_STATE(68)] = 2498,
  [SMALL_STATE(69)] = 2526,
  [SMALL_STATE(70)] = 2554,
  [SMALL_STATE(71)] = 2582,
  [SMALL_STATE(72)] = 2610,
  [SMALL_STATE(73)] = 2653,
  [SMALL_STATE(74)] = 2693,
  [SMALL_STATE(75)] = 2721,
  [SMALL_STATE(76)] = 2736,
  [SMALL_STATE(77)] = 2753,
  [SMALL_STATE(78)] = 2770,
  [SMALL_STATE(79)] = 2787,
  [SMALL_STATE(80)] = 2804,
  [SMALL_STATE(81)] = 2818,
  [SMALL_STATE(82)] = 2835,
  [SMALL_STATE(83)] = 2850,
  [SMALL_STATE(84)] = 2865,
  [SMALL_STATE(85)] = 2878,
  [SMALL_STATE(86)] = 2891,
  [SMALL_STATE(87)] = 2906,
  [SMALL_STATE(88)] = 2919,
  [SMALL_STATE(89)] = 2932,
  [SMALL_STATE(90)] = 2947,
  [SMALL_STATE(91)] = 2960,
  [SMALL_STATE(92)] = 2973,
  [SMALL_STATE(93)] = 2986,
  [SMALL_STATE(94)] = 3000,
  [SMALL_STATE(95)] = 3016,
  [SMALL_STATE(96)] = 3032,
  [SMALL_STATE(97)] = 3044,
  [SMALL_STATE(98)] = 3060,
  [SMALL_STATE(99)] = 3073,
  [SMALL_STATE(100)] = 3086,
  [SMALL_STATE(101)] = 3099,
  [SMALL_STATE(102)] = 3112,
  [SMALL_STATE(103)] = 3125,
  [SMALL_STATE(104)] = 3138,
  [SMALL_STATE(105)] = 3151,
  [SMALL_STATE(106)] = 3164,
  [SMALL_STATE(107)] = 3177,
  [SMALL_STATE(108)] = 3190,
  [SMALL_STATE(109)] = 3203,
  [SMALL_STATE(110)] = 3216,
  [SMALL_STATE(111)] = 3229,
  [SMALL_STATE(112)] = 3242,
  [SMALL_STATE(113)] = 3255,
  [SMALL_STATE(114)] = 3268,
  [SMALL_STATE(115)] = 3281,
  [SMALL_STATE(116)] = 3294,
  [SMALL_STATE(117)] = 3307,
  [SMALL_STATE(118)] = 3320,
  [SMALL_STATE(119)] = 3333,
  [SMALL_STATE(120)] = 3346,
  [SMALL_STATE(121)] = 3359,
  [SMALL_STATE(122)] = 3372,
  [SMALL_STATE(123)] = 3381,
  [SMALL_STATE(124)] = 3394,
  [SMALL_STATE(125)] = 3407,
  [SMALL_STATE(126)] = 3420,
  [SMALL_STATE(127)] = 3433,
  [SMALL_STATE(128)] = 3446,
  [SMALL_STATE(129)] = 3459,
  [SMALL_STATE(130)] = 3472,
  [SMALL_STATE(131)] = 3485,
  [SMALL_STATE(132)] = 3498,
  [SMALL_STATE(133)] = 3511,
  [SMALL_STATE(134)] = 3524,
  [SMALL_STATE(135)] = 3537,
  [SMALL_STATE(136)] = 3550,
  [SMALL_STATE(137)] = 3563,
  [SMALL_STATE(138)] = 3576,
  [SMALL_STATE(139)] = 3586,
  [SMALL_STATE(140)] = 3594,
  [SMALL_STATE(141)] = 3604,
  [SMALL_STATE(142)] = 3612,
  [SMALL_STATE(143)] = 3622,
  [SMALL_STATE(144)] = 3630,
  [SMALL_STATE(145)] = 3638,
  [SMALL_STATE(146)] = 3648,
  [SMALL_STATE(147)] = 3658,
  [SMALL_STATE(148)] = 3665,
  [SMALL_STATE(149)] = 3672,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metric_name, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metric_name, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instant_vector_selector, 1),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_instant_vector_selector, 1), SHIFT(142),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instant_vector_selector, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__duration, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__duration, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__duration, 2), SHIFT_REPEAT(75),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_vector_selector, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_vector_selector, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__series_matcher, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__series_matcher, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_selectors, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__series_matcher, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__series_matcher, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery_range_selection, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery_range_selection, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_selection, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_selection, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_selectors, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery_range_selection, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery_range_selection, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_selectors, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 5),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_selectors, 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 5),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouping, 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouping, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouping, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouping, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 5),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouping, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouping, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouping, 6),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouping, 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instant_vector_selector, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instant_vector_selector, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_vector_selector, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_vector_selector, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 6),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 6),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 5),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 5),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_name, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_name, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 7),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 7),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 11),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 11),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 10),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 10),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 12),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 12),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 9),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 9),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 8),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 8),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(42),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_label_selectors_repeat1, 2), SHIFT_REPEAT(111),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_selectors_repeat1, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grouping_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grouping_repeat1, 2), SHIFT_REPEAT(140),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_value, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_matcher, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [420] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
