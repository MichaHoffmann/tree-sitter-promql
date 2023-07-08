#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 159
#define LARGE_STATE_COUNT 25
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
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
  anon_sym_sum = 19,
  anon_sym_max = 20,
  anon_sym_min = 21,
  anon_sym_avg = 22,
  anon_sym_group = 23,
  anon_sym_stdev = 24,
  anon_sym_stdvar = 25,
  anon_sym_count = 26,
  anon_sym_count_values = 27,
  anon_sym_bottomk = 28,
  anon_sym_topk = 29,
  anon_sym_quantile = 30,
  anon_sym_by = 31,
  anon_sym_without = 32,
  anon_sym_CARET = 33,
  anon_sym_STAR = 34,
  anon_sym_SLASH = 35,
  anon_sym_PERCENT = 36,
  anon_sym_PLUS = 37,
  anon_sym_EQ_EQ = 38,
  anon_sym_GT = 39,
  anon_sym_GT_EQ = 40,
  anon_sym_LT = 41,
  anon_sym_LT_EQ = 42,
  anon_sym_bool = 43,
  anon_sym_and = 44,
  anon_sym_or = 45,
  anon_sym_unless = 46,
  anon_sym_atan2 = 47,
  anon_sym_on = 48,
  anon_sym_ignoring = 49,
  anon_sym_group_left = 50,
  anon_sym_group_right = 51,
  anon_sym_COLON = 52,
  sym__double_quoted_string = 53,
  sym__single_quoted_string = 54,
  aux_sym__duration_token1 = 55,
  anon_sym_ms = 56,
  anon_sym_s = 57,
  anon_sym_m = 58,
  anon_sym_h = 59,
  anon_sym_d = 60,
  anon_sym_w = 61,
  anon_sym_y = 62,
  sym__identifier = 63,
  sym_comment = 64,
  sym_query = 65,
  sym__query = 66,
  sym__query_expression = 67,
  sym__literal_expression = 68,
  sym_string_literal = 69,
  sym__timeseries_selector_expression = 70,
  sym_instant_vector_selector = 71,
  sym_range_vector_selector = 72,
  sym_range_selection = 73,
  sym_modifier = 74,
  sym_offset = 75,
  sym_at = 76,
  sym__series_matcher = 77,
  sym_label_selectors = 78,
  sym_label_matcher = 79,
  sym_metric_name = 80,
  sym_label_name = 81,
  sym_label_value = 82,
  sym__function_expression = 83,
  sym_function_call = 84,
  sym_function_name = 85,
  sym_function_args = 86,
  sym__operator_expression = 87,
  sym_aggregation_expression = 88,
  sym_aggregation_operator = 89,
  sym_aggregation_grouping = 90,
  sym_binary_expression = 91,
  sym_binary_grouping = 92,
  sym__subquery_expression = 93,
  sym_subquery = 94,
  sym_subquery_range_selection = 95,
  sym__quoted_string = 96,
  aux_sym__duration = 97,
  aux_sym_label_selectors_repeat1 = 98,
  aux_sym_function_args_repeat1 = 99,
  aux_sym_aggregation_grouping_repeat1 = 100,
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
  [anon_sym_sum] = "sum",
  [anon_sym_max] = "max",
  [anon_sym_min] = "min",
  [anon_sym_avg] = "avg",
  [anon_sym_group] = "group",
  [anon_sym_stdev] = "stdev",
  [anon_sym_stdvar] = "stdvar",
  [anon_sym_count] = "count",
  [anon_sym_count_values] = "count_values",
  [anon_sym_bottomk] = "bottomk",
  [anon_sym_topk] = "topk",
  [anon_sym_quantile] = "quantile",
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
  [sym__timeseries_selector_expression] = "_timeseries_selector_expression",
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
  [sym__function_expression] = "_function_expression",
  [sym_function_call] = "function_call",
  [sym_function_name] = "function_name",
  [sym_function_args] = "function_args",
  [sym__operator_expression] = "_operator_expression",
  [sym_aggregation_expression] = "aggregation_expression",
  [sym_aggregation_operator] = "aggregation_operator",
  [sym_aggregation_grouping] = "aggregation_grouping",
  [sym_binary_expression] = "binary_expression",
  [sym_binary_grouping] = "binary_grouping",
  [sym__subquery_expression] = "_subquery_expression",
  [sym_subquery] = "subquery",
  [sym_subquery_range_selection] = "subquery_range_selection",
  [sym__quoted_string] = "_quoted_string",
  [aux_sym__duration] = "_duration",
  [aux_sym_label_selectors_repeat1] = "label_selectors_repeat1",
  [aux_sym_function_args_repeat1] = "function_args_repeat1",
  [aux_sym_aggregation_grouping_repeat1] = "aggregation_grouping_repeat1",
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
  [anon_sym_sum] = anon_sym_sum,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_avg] = anon_sym_avg,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_stdev] = anon_sym_stdev,
  [anon_sym_stdvar] = anon_sym_stdvar,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_count_values] = anon_sym_count_values,
  [anon_sym_bottomk] = anon_sym_bottomk,
  [anon_sym_topk] = anon_sym_topk,
  [anon_sym_quantile] = anon_sym_quantile,
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
  [sym__timeseries_selector_expression] = sym__timeseries_selector_expression,
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
  [sym__function_expression] = sym__function_expression,
  [sym_function_call] = sym_function_call,
  [sym_function_name] = sym_function_name,
  [sym_function_args] = sym_function_args,
  [sym__operator_expression] = sym__operator_expression,
  [sym_aggregation_expression] = sym_aggregation_expression,
  [sym_aggregation_operator] = sym_aggregation_operator,
  [sym_aggregation_grouping] = sym_aggregation_grouping,
  [sym_binary_expression] = sym_binary_expression,
  [sym_binary_grouping] = sym_binary_grouping,
  [sym__subquery_expression] = sym__subquery_expression,
  [sym_subquery] = sym_subquery,
  [sym_subquery_range_selection] = sym_subquery_range_selection,
  [sym__quoted_string] = sym__quoted_string,
  [aux_sym__duration] = aux_sym__duration,
  [aux_sym_label_selectors_repeat1] = aux_sym_label_selectors_repeat1,
  [aux_sym_function_args_repeat1] = aux_sym_function_args_repeat1,
  [aux_sym_aggregation_grouping_repeat1] = aux_sym_aggregation_grouping_repeat1,
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
  [anon_sym_sum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_avg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stdev] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stdvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_count_values] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bottomk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_topk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quantile] = {
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
  [sym__operator_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_aggregation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregation_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregation_grouping] = {
    .visible = true,
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
  [aux_sym_aggregation_grouping_repeat1] = {
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
  [72] = 61,
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
  [103] = 102,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 36,
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
  [122] = 114,
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
  [139] = 48,
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
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(101);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '+') ADVANCE(156);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == '[') ADVANCE(111);
      if (lookahead == ']') ADVANCE(112);
      if (lookahead == '^') ADVANCE(152);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'g') ADVANCE(72);
      if (lookahead == 'h') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'q') ADVANCE(87);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'w') ADVANCE(191);
      if (lookahead == 'y') ADVANCE(192);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'g') ADVANCE(255);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'q') ADVANCE(271);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == 't') ADVANCE(240);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(283);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'g') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == 'q') ADVANCE(271);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'g') ADVANCE(256);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'q') ADVANCE(271);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == ']') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(119);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(118);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(172);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '~') ADVANCE(128);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(163);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(157);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 21:
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(5);
      END_STATE();
    case 22:
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\'' || ')' < lookahead)) ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(79);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(59);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'k') ADVANCE(145);
      END_STATE();
    case 46:
      if (lookahead == 'k') ADVANCE(143);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 89:
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 90:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 92:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 94:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 98:
      if (eof) ADVANCE(101);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '+') ADVANCE(156);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 'I') ADVANCE(283);
      if (lookahead == '[') ADVANCE(111);
      if (lookahead == '^') ADVANCE(152);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(242);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'g') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == 'q') ADVANCE(271);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 99:
      if (eof) ADVANCE(101);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '+') ADVANCE(156);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 'I') ADVANCE(283);
      if (lookahead == '[') ADVANCE(111);
      if (lookahead == '^') ADVANCE(152);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(242);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'g') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == 'q') ADVANCE(271);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(99)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 100:
      if (eof) ADVANCE(101);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '+') ADVANCE(156);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(283);
      if (lookahead == '[') ADVANCE(111);
      if (lookahead == '^') ADVANCE(152);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(241);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'g') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == 'q') ADVANCE(271);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead == 'w') ADVANCE(218);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(100)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_offset);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_offset);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_start_LPAREN_RPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_end_LPAREN_RPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_at_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '~') ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '~') ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_avg);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_avg);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == '_') ADVANCE(49);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == '_') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_stdev);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_stdvar);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == '_') ADVANCE(89);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_count_values);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_count_values);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_bottomk);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_bottomk);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_topk);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_topk);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_quantile);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_quantile);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_by);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_without);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_unless);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_atan2);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_atan2);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_on);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ignoring);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ignoring);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_group_left);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_group_left);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_group_right);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_group_right);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__double_quoted_string);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__single_quoted_string);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__duration_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'i') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'v') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(237);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == 'v') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == 'y') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(286);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 98},
  [3] = {.lex_state = 98},
  [4] = {.lex_state = 98},
  [5] = {.lex_state = 98},
  [6] = {.lex_state = 98},
  [7] = {.lex_state = 98},
  [8] = {.lex_state = 98},
  [9] = {.lex_state = 98},
  [10] = {.lex_state = 98},
  [11] = {.lex_state = 98},
  [12] = {.lex_state = 98},
  [13] = {.lex_state = 98},
  [14] = {.lex_state = 98},
  [15] = {.lex_state = 98},
  [16] = {.lex_state = 98},
  [17] = {.lex_state = 98},
  [18] = {.lex_state = 98},
  [19] = {.lex_state = 98},
  [20] = {.lex_state = 98},
  [21] = {.lex_state = 98},
  [22] = {.lex_state = 98},
  [23] = {.lex_state = 98},
  [24] = {.lex_state = 98},
  [25] = {.lex_state = 99},
  [26] = {.lex_state = 99},
  [27] = {.lex_state = 99},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 99},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 98},
  [37] = {.lex_state = 100},
  [38] = {.lex_state = 99},
  [39] = {.lex_state = 100},
  [40] = {.lex_state = 98},
  [41] = {.lex_state = 98},
  [42] = {.lex_state = 100},
  [43] = {.lex_state = 100},
  [44] = {.lex_state = 99},
  [45] = {.lex_state = 99},
  [46] = {.lex_state = 98},
  [47] = {.lex_state = 99},
  [48] = {.lex_state = 98},
  [49] = {.lex_state = 99},
  [50] = {.lex_state = 99},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 99},
  [53] = {.lex_state = 99},
  [54] = {.lex_state = 99},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 99},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 98},
  [71] = {.lex_state = 98},
  [72] = {.lex_state = 98},
  [73] = {.lex_state = 98},
  [74] = {.lex_state = 98},
  [75] = {.lex_state = 98},
  [76] = {.lex_state = 98},
  [77] = {.lex_state = 98},
  [78] = {.lex_state = 98},
  [79] = {.lex_state = 98},
  [80] = {.lex_state = 98},
  [81] = {.lex_state = 98},
  [82] = {.lex_state = 98},
  [83] = {.lex_state = 98},
  [84] = {.lex_state = 98},
  [85] = {.lex_state = 98},
  [86] = {.lex_state = 98},
  [87] = {.lex_state = 98},
  [88] = {.lex_state = 98},
  [89] = {.lex_state = 98},
  [90] = {.lex_state = 98},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 100},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 100},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 98},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 98},
  [158] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_offset] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_end_LPAREN_RPAREN] = ACTIONS(1),
    [aux_sym_at_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_avg] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_count_values] = ACTIONS(1),
    [anon_sym_bottomk] = ACTIONS(1),
    [anon_sym_topk] = ACTIONS(1),
    [anon_sym_quantile] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
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
    [sym_query] = STATE(158),
    [sym__query] = STATE(22),
    [sym__query_expression] = STATE(22),
    [sym__literal_expression] = STATE(22),
    [sym_string_literal] = STATE(22),
    [sym__timeseries_selector_expression] = STATE(22),
    [sym_instant_vector_selector] = STATE(22),
    [sym_range_vector_selector] = STATE(22),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(22),
    [sym_function_call] = STATE(22),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(22),
    [sym_aggregation_expression] = STATE(22),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(22),
    [sym__subquery_expression] = STATE(22),
    [sym_subquery] = STATE(22),
    [sym__quoted_string] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_float_literal] = ACTIONS(7),
    [anon_sym_sum] = ACTIONS(9),
    [anon_sym_max] = ACTIONS(9),
    [anon_sym_min] = ACTIONS(9),
    [anon_sym_avg] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_stdev] = ACTIONS(9),
    [anon_sym_stdvar] = ACTIONS(9),
    [anon_sym_count] = ACTIONS(9),
    [anon_sym_count_values] = ACTIONS(9),
    [anon_sym_bottomk] = ACTIONS(9),
    [anon_sym_topk] = ACTIONS(9),
    [anon_sym_quantile] = ACTIONS(9),
    [sym__double_quoted_string] = ACTIONS(11),
    [sym__single_quoted_string] = ACTIONS(11),
    [sym__identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(15),
    [sym_float_literal] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_max] = ACTIONS(17),
    [anon_sym_min] = ACTIONS(17),
    [anon_sym_avg] = ACTIONS(17),
    [anon_sym_group] = ACTIONS(17),
    [anon_sym_stdev] = ACTIONS(17),
    [anon_sym_stdvar] = ACTIONS(17),
    [anon_sym_count] = ACTIONS(17),
    [anon_sym_count_values] = ACTIONS(17),
    [anon_sym_bottomk] = ACTIONS(17),
    [anon_sym_topk] = ACTIONS(17),
    [anon_sym_quantile] = ACTIONS(17),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(15),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(17),
    [anon_sym_or] = ACTIONS(17),
    [anon_sym_unless] = ACTIONS(17),
    [anon_sym_atan2] = ACTIONS(17),
    [anon_sym_on] = ACTIONS(17),
    [anon_sym_ignoring] = ACTIONS(17),
    [sym__double_quoted_string] = ACTIONS(15),
    [sym__single_quoted_string] = ACTIONS(15),
    [sym__identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [aux_sym_function_args_repeat1] = STATE(113),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(23),
    [sym_float_literal] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_sum] = ACTIONS(9),
    [anon_sym_max] = ACTIONS(9),
    [anon_sym_min] = ACTIONS(9),
    [anon_sym_avg] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_stdev] = ACTIONS(9),
    [anon_sym_stdvar] = ACTIONS(9),
    [anon_sym_count] = ACTIONS(9),
    [anon_sym_count_values] = ACTIONS(9),
    [anon_sym_bottomk] = ACTIONS(9),
    [anon_sym_topk] = ACTIONS(9),
    [anon_sym_quantile] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_unless] = ACTIONS(37),
    [anon_sym_atan2] = ACTIONS(39),
    [anon_sym_on] = ACTIONS(41),
    [anon_sym_ignoring] = ACTIONS(41),
    [sym__double_quoted_string] = ACTIONS(11),
    [sym__single_quoted_string] = ACTIONS(11),
    [sym__identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_sum] = ACTIONS(45),
    [anon_sym_max] = ACTIONS(45),
    [anon_sym_min] = ACTIONS(45),
    [anon_sym_avg] = ACTIONS(45),
    [anon_sym_group] = ACTIONS(45),
    [anon_sym_stdev] = ACTIONS(45),
    [anon_sym_stdvar] = ACTIONS(45),
    [anon_sym_count] = ACTIONS(45),
    [anon_sym_count_values] = ACTIONS(45),
    [anon_sym_bottomk] = ACTIONS(45),
    [anon_sym_topk] = ACTIONS(45),
    [anon_sym_quantile] = ACTIONS(45),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [anon_sym_bool] = ACTIONS(45),
    [anon_sym_and] = ACTIONS(45),
    [anon_sym_or] = ACTIONS(45),
    [anon_sym_unless] = ACTIONS(45),
    [anon_sym_atan2] = ACTIONS(45),
    [anon_sym_on] = ACTIONS(45),
    [anon_sym_ignoring] = ACTIONS(45),
    [sym__double_quoted_string] = ACTIONS(43),
    [sym__single_quoted_string] = ACTIONS(43),
    [sym__identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_sum] = ACTIONS(45),
    [anon_sym_max] = ACTIONS(45),
    [anon_sym_min] = ACTIONS(45),
    [anon_sym_avg] = ACTIONS(45),
    [anon_sym_group] = ACTIONS(45),
    [anon_sym_stdev] = ACTIONS(45),
    [anon_sym_stdvar] = ACTIONS(45),
    [anon_sym_count] = ACTIONS(45),
    [anon_sym_count_values] = ACTIONS(45),
    [anon_sym_bottomk] = ACTIONS(45),
    [anon_sym_topk] = ACTIONS(45),
    [anon_sym_quantile] = ACTIONS(45),
    [anon_sym_CARET] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [anon_sym_bool] = ACTIONS(45),
    [anon_sym_and] = ACTIONS(45),
    [anon_sym_or] = ACTIONS(45),
    [anon_sym_unless] = ACTIONS(45),
    [anon_sym_atan2] = ACTIONS(45),
    [anon_sym_on] = ACTIONS(45),
    [anon_sym_ignoring] = ACTIONS(45),
    [sym__double_quoted_string] = ACTIONS(43),
    [sym__single_quoted_string] = ACTIONS(43),
    [sym__identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(15),
    [sym_float_literal] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_sum] = ACTIONS(9),
    [anon_sym_max] = ACTIONS(9),
    [anon_sym_min] = ACTIONS(9),
    [anon_sym_avg] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_stdev] = ACTIONS(9),
    [anon_sym_stdvar] = ACTIONS(9),
    [anon_sym_count] = ACTIONS(9),
    [anon_sym_count_values] = ACTIONS(9),
    [anon_sym_bottomk] = ACTIONS(9),
    [anon_sym_topk] = ACTIONS(9),
    [anon_sym_quantile] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(17),
    [anon_sym_or] = ACTIONS(17),
    [anon_sym_unless] = ACTIONS(17),
    [anon_sym_atan2] = ACTIONS(17),
    [anon_sym_on] = ACTIONS(41),
    [anon_sym_ignoring] = ACTIONS(41),
    [sym__double_quoted_string] = ACTIONS(11),
    [sym__single_quoted_string] = ACTIONS(11),
    [sym__identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [sym_float_literal] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_sum] = ACTIONS(49),
    [anon_sym_max] = ACTIONS(49),
    [anon_sym_min] = ACTIONS(49),
    [anon_sym_avg] = ACTIONS(49),
    [anon_sym_group] = ACTIONS(49),
    [anon_sym_stdev] = ACTIONS(49),
    [anon_sym_stdvar] = ACTIONS(49),
    [anon_sym_count] = ACTIONS(49),
    [anon_sym_count_values] = ACTIONS(49),
    [anon_sym_bottomk] = ACTIONS(49),
    [anon_sym_topk] = ACTIONS(49),
    [anon_sym_quantile] = ACTIONS(49),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_bool] = ACTIONS(49),
    [anon_sym_and] = ACTIONS(49),
    [anon_sym_or] = ACTIONS(49),
    [anon_sym_unless] = ACTIONS(49),
    [anon_sym_atan2] = ACTIONS(49),
    [anon_sym_on] = ACTIONS(49),
    [anon_sym_ignoring] = ACTIONS(49),
    [sym__double_quoted_string] = ACTIONS(47),
    [sym__single_quoted_string] = ACTIONS(47),
    [sym__identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_sum] = ACTIONS(45),
    [anon_sym_max] = ACTIONS(45),
    [anon_sym_min] = ACTIONS(45),
    [anon_sym_avg] = ACTIONS(45),
    [anon_sym_group] = ACTIONS(45),
    [anon_sym_stdev] = ACTIONS(45),
    [anon_sym_stdvar] = ACTIONS(45),
    [anon_sym_count] = ACTIONS(45),
    [anon_sym_count_values] = ACTIONS(45),
    [anon_sym_bottomk] = ACTIONS(45),
    [anon_sym_topk] = ACTIONS(45),
    [anon_sym_quantile] = ACTIONS(45),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [anon_sym_bool] = ACTIONS(45),
    [anon_sym_and] = ACTIONS(45),
    [anon_sym_or] = ACTIONS(45),
    [anon_sym_unless] = ACTIONS(45),
    [anon_sym_atan2] = ACTIONS(45),
    [anon_sym_on] = ACTIONS(45),
    [anon_sym_ignoring] = ACTIONS(45),
    [sym__double_quoted_string] = ACTIONS(43),
    [sym__single_quoted_string] = ACTIONS(43),
    [sym__identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [sym_float_literal] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_sum] = ACTIONS(53),
    [anon_sym_max] = ACTIONS(53),
    [anon_sym_min] = ACTIONS(53),
    [anon_sym_avg] = ACTIONS(53),
    [anon_sym_group] = ACTIONS(53),
    [anon_sym_stdev] = ACTIONS(53),
    [anon_sym_stdvar] = ACTIONS(53),
    [anon_sym_count] = ACTIONS(53),
    [anon_sym_count_values] = ACTIONS(53),
    [anon_sym_bottomk] = ACTIONS(53),
    [anon_sym_topk] = ACTIONS(53),
    [anon_sym_quantile] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(53),
    [anon_sym_and] = ACTIONS(53),
    [anon_sym_or] = ACTIONS(53),
    [anon_sym_unless] = ACTIONS(53),
    [anon_sym_atan2] = ACTIONS(53),
    [anon_sym_on] = ACTIONS(53),
    [anon_sym_ignoring] = ACTIONS(53),
    [sym__double_quoted_string] = ACTIONS(51),
    [sym__single_quoted_string] = ACTIONS(51),
    [sym__identifier] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_sum] = ACTIONS(9),
    [anon_sym_max] = ACTIONS(9),
    [anon_sym_min] = ACTIONS(9),
    [anon_sym_avg] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_stdev] = ACTIONS(9),
    [anon_sym_stdvar] = ACTIONS(9),
    [anon_sym_count] = ACTIONS(9),
    [anon_sym_count_values] = ACTIONS(9),
    [anon_sym_bottomk] = ACTIONS(9),
    [anon_sym_topk] = ACTIONS(9),
    [anon_sym_quantile] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(45),
    [anon_sym_or] = ACTIONS(45),
    [anon_sym_unless] = ACTIONS(45),
    [anon_sym_atan2] = ACTIONS(45),
    [anon_sym_on] = ACTIONS(41),
    [anon_sym_ignoring] = ACTIONS(41),
    [sym__double_quoted_string] = ACTIONS(11),
    [sym__single_quoted_string] = ACTIONS(11),
    [sym__identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(55),
    [sym_float_literal] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_sum] = ACTIONS(57),
    [anon_sym_max] = ACTIONS(57),
    [anon_sym_min] = ACTIONS(57),
    [anon_sym_avg] = ACTIONS(57),
    [anon_sym_group] = ACTIONS(57),
    [anon_sym_stdev] = ACTIONS(57),
    [anon_sym_stdvar] = ACTIONS(57),
    [anon_sym_count] = ACTIONS(57),
    [anon_sym_count_values] = ACTIONS(57),
    [anon_sym_bottomk] = ACTIONS(57),
    [anon_sym_topk] = ACTIONS(57),
    [anon_sym_quantile] = ACTIONS(57),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_bool] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(57),
    [anon_sym_or] = ACTIONS(57),
    [anon_sym_unless] = ACTIONS(57),
    [anon_sym_atan2] = ACTIONS(57),
    [anon_sym_on] = ACTIONS(57),
    [anon_sym_ignoring] = ACTIONS(57),
    [sym__double_quoted_string] = ACTIONS(55),
    [sym__single_quoted_string] = ACTIONS(55),
    [sym__identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(15),
    [sym_float_literal] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_sum] = ACTIONS(9),
    [anon_sym_max] = ACTIONS(9),
    [anon_sym_min] = ACTIONS(9),
    [anon_sym_avg] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_stdev] = ACTIONS(9),
    [anon_sym_stdvar] = ACTIONS(9),
    [anon_sym_count] = ACTIONS(9),
    [anon_sym_count_values] = ACTIONS(9),
    [anon_sym_bottomk] = ACTIONS(9),
    [anon_sym_topk] = ACTIONS(9),
    [anon_sym_quantile] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_unless] = ACTIONS(37),
    [anon_sym_atan2] = ACTIONS(17),
    [anon_sym_on] = ACTIONS(41),
    [anon_sym_ignoring] = ACTIONS(41),
    [sym__double_quoted_string] = ACTIONS(11),
    [sym__single_quoted_string] = ACTIONS(11),
    [sym__identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_sum] = ACTIONS(9),
    [anon_sym_max] = ACTIONS(9),
    [anon_sym_min] = ACTIONS(9),
    [anon_sym_avg] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_stdev] = ACTIONS(9),
    [anon_sym_stdvar] = ACTIONS(9),
    [anon_sym_count] = ACTIONS(9),
    [anon_sym_count_values] = ACTIONS(9),
    [anon_sym_bottomk] = ACTIONS(9),
    [anon_sym_topk] = ACTIONS(9),
    [anon_sym_quantile] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_unless] = ACTIONS(37),
    [anon_sym_atan2] = ACTIONS(45),
    [anon_sym_on] = ACTIONS(41),
    [anon_sym_ignoring] = ACTIONS(41),
    [sym__double_quoted_string] = ACTIONS(11),
    [sym__single_quoted_string] = ACTIONS(11),
    [sym__identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_sum] = ACTIONS(45),
    [anon_sym_max] = ACTIONS(45),
    [anon_sym_min] = ACTIONS(45),
    [anon_sym_avg] = ACTIONS(45),
    [anon_sym_group] = ACTIONS(45),
    [anon_sym_stdev] = ACTIONS(45),
    [anon_sym_stdvar] = ACTIONS(45),
    [anon_sym_count] = ACTIONS(45),
    [anon_sym_count_values] = ACTIONS(45),
    [anon_sym_bottomk] = ACTIONS(45),
    [anon_sym_topk] = ACTIONS(45),
    [anon_sym_quantile] = ACTIONS(45),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [anon_sym_bool] = ACTIONS(45),
    [anon_sym_and] = ACTIONS(45),
    [anon_sym_or] = ACTIONS(45),
    [anon_sym_unless] = ACTIONS(45),
    [anon_sym_atan2] = ACTIONS(45),
    [anon_sym_on] = ACTIONS(45),
    [anon_sym_ignoring] = ACTIONS(45),
    [sym__double_quoted_string] = ACTIONS(43),
    [sym__single_quoted_string] = ACTIONS(43),
    [sym__identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(15),
    [sym_float_literal] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_max] = ACTIONS(17),
    [anon_sym_min] = ACTIONS(17),
    [anon_sym_avg] = ACTIONS(17),
    [anon_sym_group] = ACTIONS(17),
    [anon_sym_stdev] = ACTIONS(17),
    [anon_sym_stdvar] = ACTIONS(17),
    [anon_sym_count] = ACTIONS(17),
    [anon_sym_count_values] = ACTIONS(17),
    [anon_sym_bottomk] = ACTIONS(17),
    [anon_sym_topk] = ACTIONS(17),
    [anon_sym_quantile] = ACTIONS(17),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(15),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(17),
    [anon_sym_or] = ACTIONS(17),
    [anon_sym_unless] = ACTIONS(17),
    [anon_sym_atan2] = ACTIONS(17),
    [anon_sym_on] = ACTIONS(17),
    [anon_sym_ignoring] = ACTIONS(17),
    [sym__double_quoted_string] = ACTIONS(15),
    [sym__single_quoted_string] = ACTIONS(15),
    [sym__identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(15),
    [sym_float_literal] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_max] = ACTIONS(17),
    [anon_sym_min] = ACTIONS(17),
    [anon_sym_avg] = ACTIONS(17),
    [anon_sym_group] = ACTIONS(17),
    [anon_sym_stdev] = ACTIONS(17),
    [anon_sym_stdvar] = ACTIONS(17),
    [anon_sym_count] = ACTIONS(17),
    [anon_sym_count_values] = ACTIONS(17),
    [anon_sym_bottomk] = ACTIONS(17),
    [anon_sym_topk] = ACTIONS(17),
    [anon_sym_quantile] = ACTIONS(17),
    [anon_sym_CARET] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(15),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(17),
    [anon_sym_or] = ACTIONS(17),
    [anon_sym_unless] = ACTIONS(17),
    [anon_sym_atan2] = ACTIONS(17),
    [anon_sym_on] = ACTIONS(17),
    [anon_sym_ignoring] = ACTIONS(17),
    [sym__double_quoted_string] = ACTIONS(15),
    [sym__single_quoted_string] = ACTIONS(15),
    [sym__identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(15),
    [sym_float_literal] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_max] = ACTIONS(17),
    [anon_sym_min] = ACTIONS(17),
    [anon_sym_avg] = ACTIONS(17),
    [anon_sym_group] = ACTIONS(17),
    [anon_sym_stdev] = ACTIONS(17),
    [anon_sym_stdvar] = ACTIONS(17),
    [anon_sym_count] = ACTIONS(17),
    [anon_sym_count_values] = ACTIONS(17),
    [anon_sym_bottomk] = ACTIONS(17),
    [anon_sym_topk] = ACTIONS(17),
    [anon_sym_quantile] = ACTIONS(17),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(15),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(17),
    [anon_sym_or] = ACTIONS(17),
    [anon_sym_unless] = ACTIONS(17),
    [anon_sym_atan2] = ACTIONS(17),
    [anon_sym_on] = ACTIONS(17),
    [anon_sym_ignoring] = ACTIONS(17),
    [sym__double_quoted_string] = ACTIONS(15),
    [sym__single_quoted_string] = ACTIONS(15),
    [sym__identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(59),
    [sym_float_literal] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_sum] = ACTIONS(9),
    [anon_sym_max] = ACTIONS(9),
    [anon_sym_min] = ACTIONS(9),
    [anon_sym_avg] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_stdev] = ACTIONS(9),
    [anon_sym_stdvar] = ACTIONS(9),
    [anon_sym_count] = ACTIONS(9),
    [anon_sym_count_values] = ACTIONS(9),
    [anon_sym_bottomk] = ACTIONS(9),
    [anon_sym_topk] = ACTIONS(9),
    [anon_sym_quantile] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_unless] = ACTIONS(37),
    [anon_sym_atan2] = ACTIONS(39),
    [anon_sym_on] = ACTIONS(41),
    [anon_sym_ignoring] = ACTIONS(41),
    [sym__double_quoted_string] = ACTIONS(11),
    [sym__single_quoted_string] = ACTIONS(11),
    [sym__identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(61),
    [sym_float_literal] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_sum] = ACTIONS(9),
    [anon_sym_max] = ACTIONS(9),
    [anon_sym_min] = ACTIONS(9),
    [anon_sym_avg] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_stdev] = ACTIONS(9),
    [anon_sym_stdvar] = ACTIONS(9),
    [anon_sym_count] = ACTIONS(9),
    [anon_sym_count_values] = ACTIONS(9),
    [anon_sym_bottomk] = ACTIONS(9),
    [anon_sym_topk] = ACTIONS(9),
    [anon_sym_quantile] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_unless] = ACTIONS(37),
    [anon_sym_atan2] = ACTIONS(39),
    [anon_sym_on] = ACTIONS(41),
    [anon_sym_ignoring] = ACTIONS(41),
    [sym__double_quoted_string] = ACTIONS(11),
    [sym__single_quoted_string] = ACTIONS(11),
    [sym__identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(63),
    [sym_float_literal] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_sum] = ACTIONS(9),
    [anon_sym_max] = ACTIONS(9),
    [anon_sym_min] = ACTIONS(9),
    [anon_sym_avg] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_stdev] = ACTIONS(9),
    [anon_sym_stdvar] = ACTIONS(9),
    [anon_sym_count] = ACTIONS(9),
    [anon_sym_count_values] = ACTIONS(9),
    [anon_sym_bottomk] = ACTIONS(9),
    [anon_sym_topk] = ACTIONS(9),
    [anon_sym_quantile] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_unless] = ACTIONS(37),
    [anon_sym_atan2] = ACTIONS(39),
    [anon_sym_on] = ACTIONS(41),
    [anon_sym_ignoring] = ACTIONS(41),
    [sym__double_quoted_string] = ACTIONS(11),
    [sym__single_quoted_string] = ACTIONS(11),
    [sym__identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(65),
    [sym_float_literal] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_sum] = ACTIONS(9),
    [anon_sym_max] = ACTIONS(9),
    [anon_sym_min] = ACTIONS(9),
    [anon_sym_avg] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_stdev] = ACTIONS(9),
    [anon_sym_stdvar] = ACTIONS(9),
    [anon_sym_count] = ACTIONS(9),
    [anon_sym_count_values] = ACTIONS(9),
    [anon_sym_bottomk] = ACTIONS(9),
    [anon_sym_topk] = ACTIONS(9),
    [anon_sym_quantile] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_unless] = ACTIONS(37),
    [anon_sym_atan2] = ACTIONS(39),
    [anon_sym_on] = ACTIONS(41),
    [anon_sym_ignoring] = ACTIONS(41),
    [sym__double_quoted_string] = ACTIONS(11),
    [sym__single_quoted_string] = ACTIONS(11),
    [sym__identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_float_literal] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_sum] = ACTIONS(9),
    [anon_sym_max] = ACTIONS(9),
    [anon_sym_min] = ACTIONS(9),
    [anon_sym_avg] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_stdev] = ACTIONS(9),
    [anon_sym_stdvar] = ACTIONS(9),
    [anon_sym_count] = ACTIONS(9),
    [anon_sym_count_values] = ACTIONS(9),
    [anon_sym_bottomk] = ACTIONS(9),
    [anon_sym_topk] = ACTIONS(9),
    [anon_sym_quantile] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_unless] = ACTIONS(37),
    [anon_sym_atan2] = ACTIONS(39),
    [anon_sym_on] = ACTIONS(41),
    [anon_sym_ignoring] = ACTIONS(41),
    [sym__double_quoted_string] = ACTIONS(11),
    [sym__single_quoted_string] = ACTIONS(11),
    [sym__identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(69),
    [sym_float_literal] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_sum] = ACTIONS(9),
    [anon_sym_max] = ACTIONS(9),
    [anon_sym_min] = ACTIONS(9),
    [anon_sym_avg] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_stdev] = ACTIONS(9),
    [anon_sym_stdvar] = ACTIONS(9),
    [anon_sym_count] = ACTIONS(9),
    [anon_sym_count_values] = ACTIONS(9),
    [anon_sym_bottomk] = ACTIONS(9),
    [anon_sym_topk] = ACTIONS(9),
    [anon_sym_quantile] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_unless] = ACTIONS(37),
    [anon_sym_atan2] = ACTIONS(39),
    [anon_sym_on] = ACTIONS(41),
    [anon_sym_ignoring] = ACTIONS(41),
    [sym__double_quoted_string] = ACTIONS(11),
    [sym__single_quoted_string] = ACTIONS(11),
    [sym__identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__query] = STATE(7),
    [sym__query_expression] = STATE(7),
    [sym__literal_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__timeseries_selector_expression] = STATE(7),
    [sym_instant_vector_selector] = STATE(7),
    [sym_range_vector_selector] = STATE(7),
    [sym__series_matcher] = STATE(25),
    [sym_metric_name] = STATE(30),
    [sym__function_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_function_name] = STATE(147),
    [sym__operator_expression] = STATE(7),
    [sym_aggregation_expression] = STATE(7),
    [sym_aggregation_operator] = STATE(107),
    [sym_binary_expression] = STATE(7),
    [sym_binary_grouping] = STATE(62),
    [sym__subquery_expression] = STATE(7),
    [sym_subquery] = STATE(7),
    [sym_subquery_range_selection] = STATE(26),
    [sym__quoted_string] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_float_literal] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_sum] = ACTIONS(9),
    [anon_sym_max] = ACTIONS(9),
    [anon_sym_min] = ACTIONS(9),
    [anon_sym_avg] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_stdev] = ACTIONS(9),
    [anon_sym_stdvar] = ACTIONS(9),
    [anon_sym_count] = ACTIONS(9),
    [anon_sym_count_values] = ACTIONS(9),
    [anon_sym_bottomk] = ACTIONS(9),
    [anon_sym_topk] = ACTIONS(9),
    [anon_sym_quantile] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_unless] = ACTIONS(37),
    [anon_sym_atan2] = ACTIONS(39),
    [anon_sym_on] = ACTIONS(41),
    [anon_sym_ignoring] = ACTIONS(41),
    [sym__double_quoted_string] = ACTIONS(11),
    [sym__single_quoted_string] = ACTIONS(11),
    [sym__identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_offset,
    ACTIONS(80), 1,
      anon_sym_AT,
    STATE(27), 1,
      sym_range_selection,
    STATE(46), 1,
      sym_offset,
    STATE(47), 1,
      sym_at,
    STATE(85), 1,
      sym_modifier,
    ACTIONS(71), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(73), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [63] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_offset,
    ACTIONS(80), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_offset,
    STATE(47), 1,
      sym_at,
    STATE(81), 1,
      sym_modifier,
    ACTIONS(82), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(84), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [121] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_offset,
    ACTIONS(80), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_offset,
    STATE(47), 1,
      sym_at,
    STATE(83), 1,
      sym_modifier,
    ACTIONS(86), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(88), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [179] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(90), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(69), 1,
      sym_binary_grouping,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(41), 2,
      anon_sym_on,
      anon_sym_ignoring,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(16), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [248] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(92), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(56), 1,
      sym_binary_grouping,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(41), 2,
      anon_sym_on,
      anon_sym_ignoring,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(6), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [317] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_label_selectors,
    ACTIONS(94), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(96), 24,
      sym_float_literal,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [368] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(100), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(63), 1,
      sym_binary_grouping,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(41), 2,
      anon_sym_on,
      anon_sym_ignoring,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(11), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [437] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(102), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(58), 1,
      sym_binary_grouping,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(41), 2,
      anon_sym_on,
      anon_sym_ignoring,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(2), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [506] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(104), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(68), 1,
      sym_binary_grouping,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(41), 2,
      anon_sym_on,
      anon_sym_ignoring,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(15), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [575] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(106), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(55), 1,
      sym_binary_grouping,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(41), 2,
      anon_sym_on,
      anon_sym_ignoring,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(17), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [644] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(108), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(57), 1,
      sym_binary_grouping,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(41), 2,
      anon_sym_on,
      anon_sym_ignoring,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(12), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [713] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      aux_sym__duration_token1,
    STATE(36), 1,
      aux_sym__duration,
    ACTIONS(110), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(112), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [763] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(79), 1,
      sym_aggregation_grouping,
    ACTIONS(121), 2,
      anon_sym_by,
      anon_sym_without,
    ACTIONS(117), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(119), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(128), 24,
      sym_float_literal,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [861] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(73), 1,
      sym_aggregation_grouping,
    ACTIONS(121), 2,
      anon_sym_by,
      anon_sym_without,
    ACTIONS(130), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(132), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [911] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym__duration_token1,
    STATE(36), 1,
      aux_sym__duration,
    ACTIONS(134), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(136), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [961] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym__duration_token1,
    STATE(36), 1,
      aux_sym__duration,
    ACTIONS(140), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(142), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [1011] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(70), 1,
      sym_aggregation_grouping,
    ACTIONS(121), 2,
      anon_sym_by,
      anon_sym_without,
    ACTIONS(144), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(146), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [1061] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(78), 1,
      sym_aggregation_grouping,
    ACTIONS(121), 2,
      anon_sym_by,
      anon_sym_without,
    ACTIONS(148), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(150), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [1111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(154), 24,
      sym_float_literal,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [1156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(158), 24,
      sym_float_literal,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [1201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_AT,
    STATE(82), 1,
      sym_at,
    ACTIONS(160), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(162), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [1250] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_offset,
    STATE(82), 1,
      sym_offset,
    ACTIONS(160), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(162), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [1299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(112), 24,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      aux_sym__duration_token1,
      sym__identifier,
  [1344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(168), 24,
      sym_float_literal,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [1389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(172), 24,
      sym_float_literal,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [1434] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    ACTIONS(176), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(3), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [1499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(180), 24,
      sym_float_literal,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [1544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(184), 24,
      sym_float_literal,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [1589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(188), 24,
      sym_float_literal,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [1634] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(190), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(8), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [1696] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(192), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(10), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [1758] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(194), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(13), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [1820] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(196), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(14), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [1882] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(198), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    STATE(89), 2,
      sym__literal_expression,
      sym_string_literal,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(20), 12,
      sym__query,
      sym__query_expression,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [1946] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(200), 1,
      sym_float_literal,
    STATE(24), 1,
      sym__query,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(90), 13,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [2010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(204), 24,
      sym_float_literal,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [2054] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(106), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(17), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [2116] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(206), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(9), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [2178] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(208), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(23), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [2240] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(210), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(19), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [2302] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(212), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(18), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [2364] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(214), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    STATE(88), 2,
      sym__literal_expression,
      sym_string_literal,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(21), 12,
      sym__query,
      sym__query_expression,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [2428] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(216), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(4), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [2490] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(218), 1,
      sym_float_literal,
    STATE(25), 1,
      sym__series_matcher,
    STATE(30), 1,
      sym_metric_name,
    STATE(76), 1,
      sym__quoted_string,
    STATE(107), 1,
      sym_aggregation_operator,
    STATE(147), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(5), 14,
      sym__query,
      sym__query_expression,
      sym__literal_expression,
      sym_string_literal,
      sym__timeseries_selector_expression,
      sym_instant_vector_selector,
      sym_range_vector_selector,
      sym__function_expression,
      sym_function_call,
      sym__operator_expression,
      sym_aggregation_expression,
      sym_binary_expression,
      sym__subquery_expression,
      sym_subquery,
  [2552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(119), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [2595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(222), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [2638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(204), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [2681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(226), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [2724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(230), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [2767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(234), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [2810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(238), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [2853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(242), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [2896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(132), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [2939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(150), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [2982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(246), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [3025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(250), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [3068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(254), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [3111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(258), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [3154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(262), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [3197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(266), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [3240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(270), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [3283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(274), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [3326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    ACTIONS(276), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(278), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [3370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(276), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(278), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [3414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    ACTIONS(284), 9,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(288), 23,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      anon_sym_PLUS,
      anon_sym_bool,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_on,
      anon_sym_ignoring,
      sym__identifier,
  [3457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_group_left,
      anon_sym_group_right,
    ACTIONS(290), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(292), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_group_left,
      anon_sym_group_right,
    ACTIONS(296), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(298), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      anon_sym_group_left,
      anon_sym_group_right,
    ACTIONS(302), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(304), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(310), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(298), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(318), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(322), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(326), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(330), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(304), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(310), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stdev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_m,
    ACTIONS(334), 6,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_h,
      anon_sym_d,
      anon_sym_w,
      anon_sym_y,
  [3765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_m,
    ACTIONS(338), 6,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_h,
      anon_sym_d,
      anon_sym_w,
      anon_sym_y,
  [3780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_EQ,
    ACTIONS(342), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [3794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(148), 1,
      sym__quoted_string,
    STATE(149), 1,
      sym_label_value,
    ACTIONS(346), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [3808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_EQ,
    ACTIONS(350), 3,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [3820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym_aggregation_grouping,
    ACTIONS(354), 2,
      anon_sym_by,
      anon_sym_without,
  [3834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym__duration_token1,
    STATE(108), 1,
      aux_sym__duration,
    ACTIONS(110), 2,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [3848] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    ACTIONS(361), 1,
      sym__identifier,
    STATE(106), 1,
      sym_label_name,
    STATE(116), 1,
      sym_label_matcher,
  [3864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_aggregation_grouping_repeat1,
  [3877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_aggregation_grouping_repeat1,
  [3890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_label_selectors_repeat1,
  [3903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_function_args_repeat1,
  [3916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 3,
      anon_sym_start_LPAREN_RPAREN,
      anon_sym_end_LPAREN_RPAREN,
      aux_sym_at_token1,
  [3925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COLON,
    ACTIONS(380), 1,
      aux_sym__duration_token1,
    STATE(108), 1,
      aux_sym__duration,
  [3938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      aux_sym_label_selectors_repeat1,
  [3951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_function_args_repeat1,
  [3964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__identifier,
    STATE(106), 1,
      sym_label_name,
    STATE(143), 1,
      sym_label_matcher,
  [3977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym__duration_token1,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      aux_sym__duration,
  [3990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_aggregation_grouping_repeat1,
  [4003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_aggregation_grouping_repeat1,
  [4016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 3,
      anon_sym_start_LPAREN_RPAREN,
      anon_sym_end_LPAREN_RPAREN,
      aux_sym_at_token1,
  [4025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_DASH,
    ACTIONS(399), 1,
      aux_sym__duration_token1,
    STATE(40), 1,
      aux_sym__duration,
  [4038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_aggregation_grouping_repeat1,
  [4051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__identifier,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_label_name,
  [4064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_aggregation_grouping_repeat1,
  [4077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_aggregation_grouping_repeat1,
  [4090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_aggregation_grouping_repeat1,
  [4103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_aggregation_grouping_repeat1,
  [4116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 3,
      anon_sym_LPAREN,
      anon_sym_by,
      anon_sym_without,
  [4125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym__duration_token1,
    ACTIONS(416), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      aux_sym__duration,
  [4138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__identifier,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_label_name,
  [4151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__identifier,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_label_name,
  [4164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__identifier,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym_label_name,
  [4177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_aggregation_grouping_repeat1,
  [4190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__identifier,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      sym_label_name,
  [4203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_label_selectors_repeat1,
  [4216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_aggregation_grouping_repeat1,
  [4229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 3,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym__duration_token1,
  [4238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym__duration_token1,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      aux_sym__duration,
  [4251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym__duration_token1,
    STATE(115), 1,
      aux_sym__duration,
  [4261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__identifier,
    STATE(145), 1,
      sym_label_name,
  [4271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym__duration_token1,
    STATE(119), 1,
      aux_sym__duration,
  [4289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      aux_sym__duration_token1,
    STATE(41), 1,
      aux_sym__duration,
  [4307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_function_args,
  [4317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
  [4340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_BANG_EQ,
  [4347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
  [4354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_LT,
  [4361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_GT_EQ,
  [4368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_LT_EQ,
  [4375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
  [4382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_GT,
  [4389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(25)] = 0,
  [SMALL_STATE(26)] = 63,
  [SMALL_STATE(27)] = 121,
  [SMALL_STATE(28)] = 179,
  [SMALL_STATE(29)] = 248,
  [SMALL_STATE(30)] = 317,
  [SMALL_STATE(31)] = 368,
  [SMALL_STATE(32)] = 437,
  [SMALL_STATE(33)] = 506,
  [SMALL_STATE(34)] = 575,
  [SMALL_STATE(35)] = 644,
  [SMALL_STATE(36)] = 713,
  [SMALL_STATE(37)] = 763,
  [SMALL_STATE(38)] = 813,
  [SMALL_STATE(39)] = 861,
  [SMALL_STATE(40)] = 911,
  [SMALL_STATE(41)] = 961,
  [SMALL_STATE(42)] = 1011,
  [SMALL_STATE(43)] = 1061,
  [SMALL_STATE(44)] = 1111,
  [SMALL_STATE(45)] = 1156,
  [SMALL_STATE(46)] = 1201,
  [SMALL_STATE(47)] = 1250,
  [SMALL_STATE(48)] = 1299,
  [SMALL_STATE(49)] = 1344,
  [SMALL_STATE(50)] = 1389,
  [SMALL_STATE(51)] = 1434,
  [SMALL_STATE(52)] = 1499,
  [SMALL_STATE(53)] = 1544,
  [SMALL_STATE(54)] = 1589,
  [SMALL_STATE(55)] = 1634,
  [SMALL_STATE(56)] = 1696,
  [SMALL_STATE(57)] = 1758,
  [SMALL_STATE(58)] = 1820,
  [SMALL_STATE(59)] = 1882,
  [SMALL_STATE(60)] = 1946,
  [SMALL_STATE(61)] = 2010,
  [SMALL_STATE(62)] = 2054,
  [SMALL_STATE(63)] = 2116,
  [SMALL_STATE(64)] = 2178,
  [SMALL_STATE(65)] = 2240,
  [SMALL_STATE(66)] = 2302,
  [SMALL_STATE(67)] = 2364,
  [SMALL_STATE(68)] = 2428,
  [SMALL_STATE(69)] = 2490,
  [SMALL_STATE(70)] = 2552,
  [SMALL_STATE(71)] = 2595,
  [SMALL_STATE(72)] = 2638,
  [SMALL_STATE(73)] = 2681,
  [SMALL_STATE(74)] = 2724,
  [SMALL_STATE(75)] = 2767,
  [SMALL_STATE(76)] = 2810,
  [SMALL_STATE(77)] = 2853,
  [SMALL_STATE(78)] = 2896,
  [SMALL_STATE(79)] = 2939,
  [SMALL_STATE(80)] = 2982,
  [SMALL_STATE(81)] = 3025,
  [SMALL_STATE(82)] = 3068,
  [SMALL_STATE(83)] = 3111,
  [SMALL_STATE(84)] = 3154,
  [SMALL_STATE(85)] = 3197,
  [SMALL_STATE(86)] = 3240,
  [SMALL_STATE(87)] = 3283,
  [SMALL_STATE(88)] = 3326,
  [SMALL_STATE(89)] = 3370,
  [SMALL_STATE(90)] = 3414,
  [SMALL_STATE(91)] = 3457,
  [SMALL_STATE(92)] = 3486,
  [SMALL_STATE(93)] = 3515,
  [SMALL_STATE(94)] = 3544,
  [SMALL_STATE(95)] = 3571,
  [SMALL_STATE(96)] = 3598,
  [SMALL_STATE(97)] = 3623,
  [SMALL_STATE(98)] = 3648,
  [SMALL_STATE(99)] = 3673,
  [SMALL_STATE(100)] = 3698,
  [SMALL_STATE(101)] = 3725,
  [SMALL_STATE(102)] = 3750,
  [SMALL_STATE(103)] = 3765,
  [SMALL_STATE(104)] = 3780,
  [SMALL_STATE(105)] = 3794,
  [SMALL_STATE(106)] = 3808,
  [SMALL_STATE(107)] = 3820,
  [SMALL_STATE(108)] = 3834,
  [SMALL_STATE(109)] = 3848,
  [SMALL_STATE(110)] = 3864,
  [SMALL_STATE(111)] = 3877,
  [SMALL_STATE(112)] = 3890,
  [SMALL_STATE(113)] = 3903,
  [SMALL_STATE(114)] = 3916,
  [SMALL_STATE(115)] = 3925,
  [SMALL_STATE(116)] = 3938,
  [SMALL_STATE(117)] = 3951,
  [SMALL_STATE(118)] = 3964,
  [SMALL_STATE(119)] = 3977,
  [SMALL_STATE(120)] = 3990,
  [SMALL_STATE(121)] = 4003,
  [SMALL_STATE(122)] = 4016,
  [SMALL_STATE(123)] = 4025,
  [SMALL_STATE(124)] = 4038,
  [SMALL_STATE(125)] = 4051,
  [SMALL_STATE(126)] = 4064,
  [SMALL_STATE(127)] = 4077,
  [SMALL_STATE(128)] = 4090,
  [SMALL_STATE(129)] = 4103,
  [SMALL_STATE(130)] = 4116,
  [SMALL_STATE(131)] = 4125,
  [SMALL_STATE(132)] = 4138,
  [SMALL_STATE(133)] = 4151,
  [SMALL_STATE(134)] = 4164,
  [SMALL_STATE(135)] = 4177,
  [SMALL_STATE(136)] = 4190,
  [SMALL_STATE(137)] = 4203,
  [SMALL_STATE(138)] = 4216,
  [SMALL_STATE(139)] = 4229,
  [SMALL_STATE(140)] = 4238,
  [SMALL_STATE(141)] = 4251,
  [SMALL_STATE(142)] = 4261,
  [SMALL_STATE(143)] = 4271,
  [SMALL_STATE(144)] = 4279,
  [SMALL_STATE(145)] = 4289,
  [SMALL_STATE(146)] = 4297,
  [SMALL_STATE(147)] = 4307,
  [SMALL_STATE(148)] = 4317,
  [SMALL_STATE(149)] = 4325,
  [SMALL_STATE(150)] = 4333,
  [SMALL_STATE(151)] = 4340,
  [SMALL_STATE(152)] = 4347,
  [SMALL_STATE(153)] = 4354,
  [SMALL_STATE(154)] = 4361,
  [SMALL_STATE(155)] = 4368,
  [SMALL_STATE(156)] = 4375,
  [SMALL_STATE(157)] = 4382,
  [SMALL_STATE(158)] = 4389,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 9),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 9),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 8),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instant_vector_selector, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instant_vector_selector, 1),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_instant_vector_selector, 1), SHIFT(144),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_vector_selector, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_vector_selector, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__series_matcher, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__series_matcher, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__duration, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__duration, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__duration, 2), SHIFT_REPEAT(102),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_expression, 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_expression, 5),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metric_name, 1),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_metric_name, 1), REDUCE(sym_function_name, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metric_name, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_expression, 7),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_expression, 7),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_expression, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_expression, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_expression, 6),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_expression, 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery_range_selection, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery_range_selection, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_selectors, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__series_matcher, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__series_matcher, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_selectors, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_selection, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_selection, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_selectors, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery_range_selection, 5),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery_range_selection, 5),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_grouping, 4),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_grouping, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_expression, 8),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_expression, 8),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_grouping, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_grouping, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_grouping, 5),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_grouping, 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_vector_selector, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_vector_selector, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instant_vector_selector, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instant_vector_selector, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_expression, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query_expression, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 5),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 5),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 4),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 4),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 6),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 6),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 10),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 10),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 9),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 9),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 8),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 8),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 7),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 7),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_name, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_name, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__duration, 2), SHIFT_REPEAT(103),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_label_selectors_repeat1, 2), SHIFT_REPEAT(118),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_selectors_repeat1, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(66),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregation_grouping_repeat1, 2),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregation_grouping_repeat1, 2), SHIFT_REPEAT(142),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_operator, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_value, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_matcher, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [450] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
