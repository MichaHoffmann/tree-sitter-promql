#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 146
#define LARGE_STATE_COUNT 2
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
  anon_sym_stddev = 24,
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
  [anon_sym_stddev] = "stddev",
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
  [anon_sym_stddev] = anon_sym_stddev,
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
  [anon_sym_stddev] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(113);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '%') ADVANCE(167);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(168);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '0') ADVANCE(193);
      if (lookahead == ':') ADVANCE(188);
      if (lookahead == '<') ADVANCE(172);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '>') ADVANCE(170);
      if (lookahead == '@') ADVANCE(127);
      if (lookahead == '[') ADVANCE(123);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == '^') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'g') ADVANCE(81);
      if (lookahead == 'h') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'q') ADVANCE(99);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(202);
      if (lookahead == 'y') ADVANCE(203);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == 'b') ADVANCE(237);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'g') ADVANCE(251);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == 'q') ADVANCE(261);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == 't') ADVANCE(238);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == 'I') ADVANCE(272);
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == 'b') ADVANCE(237);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'g') ADVANCE(251);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == 'q') ADVANCE(261);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == 'I') ADVANCE(272);
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'g') ADVANCE(251);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == 'q') ADVANCE(261);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == 'b') ADVANCE(237);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'g') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == 'q') ADVANCE(261);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == 'd') ADVANCE(200);
      if (lookahead == 'h') ADVANCE(199);
      if (lookahead == 'm') ADVANCE(198);
      if (lookahead == 's') ADVANCE(195);
      if (lookahead == 'w') ADVANCE(201);
      if (lookahead == 'y') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(192);
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
      if (lookahead == ')') ADVANCE(129);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(128);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(179);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '~') ADVANCE(138);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'k') ADVANCE(158);
      END_STATE();
    case 51:
      if (lookahead == 'k') ADVANCE(156);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'y') ADVANCE(162);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 101:
      if (lookahead == 'v') ADVANCE(148);
      END_STATE();
    case 102:
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 103:
      if (lookahead == 'y') ADVANCE(162);
      END_STATE();
    case 104:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 106:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(116);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 112:
      if (eof) ADVANCE(113);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '%') ADVANCE(167);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '+') ADVANCE(168);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(188);
      if (lookahead == '<') ADVANCE(172);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(170);
      if (lookahead == '@') ADVANCE(127);
      if (lookahead == '[') ADVANCE(123);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == '^') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(112)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_offset);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_start_LPAREN_RPAREN);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_end_LPAREN_RPAREN);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_at_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == '~') ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '~') ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_avg);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_avg);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == '_') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_stddev);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_stddev);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_stdvar);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_stdvar);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == '_') ADVANCE(102);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == '_') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_count_values);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_count_values);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_bottomk);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_bottomk);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_topk);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_topk);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_quantile);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_quantile);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_without);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_atan2);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_on);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ignoring);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ignoring);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_group_left);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_group_left);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_group_right);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_group_right);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__double_quoted_string);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__double_quoted_string);
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__single_quoted_string);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__single_quoted_string);
      if (lookahead == '\'') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__duration_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(213);
      if (lookahead == 'v') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(236);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == 't') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 112},
  [24] = {.lex_state = 112},
  [25] = {.lex_state = 112},
  [26] = {.lex_state = 112},
  [27] = {.lex_state = 112},
  [28] = {.lex_state = 112},
  [29] = {.lex_state = 112},
  [30] = {.lex_state = 112},
  [31] = {.lex_state = 112},
  [32] = {.lex_state = 112},
  [33] = {.lex_state = 112},
  [34] = {.lex_state = 112},
  [35] = {.lex_state = 112},
  [36] = {.lex_state = 112},
  [37] = {.lex_state = 112},
  [38] = {.lex_state = 112},
  [39] = {.lex_state = 112},
  [40] = {.lex_state = 112},
  [41] = {.lex_state = 112},
  [42] = {.lex_state = 112},
  [43] = {.lex_state = 112},
  [44] = {.lex_state = 112},
  [45] = {.lex_state = 112},
  [46] = {.lex_state = 112},
  [47] = {.lex_state = 112},
  [48] = {.lex_state = 112},
  [49] = {.lex_state = 112},
  [50] = {.lex_state = 112},
  [51] = {.lex_state = 112},
  [52] = {.lex_state = 112},
  [53] = {.lex_state = 112},
  [54] = {.lex_state = 112},
  [55] = {.lex_state = 112},
  [56] = {.lex_state = 112},
  [57] = {.lex_state = 112},
  [58] = {.lex_state = 112},
  [59] = {.lex_state = 112},
  [60] = {.lex_state = 112},
  [61] = {.lex_state = 112},
  [62] = {.lex_state = 112},
  [63] = {.lex_state = 112},
  [64] = {.lex_state = 112},
  [65] = {.lex_state = 112},
  [66] = {.lex_state = 112},
  [67] = {.lex_state = 112},
  [68] = {.lex_state = 112},
  [69] = {.lex_state = 112},
  [70] = {.lex_state = 112},
  [71] = {.lex_state = 112},
  [72] = {.lex_state = 112},
  [73] = {.lex_state = 112},
  [74] = {.lex_state = 112},
  [75] = {.lex_state = 112},
  [76] = {.lex_state = 112},
  [77] = {.lex_state = 112},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 112},
  [80] = {.lex_state = 112},
  [81] = {.lex_state = 112},
  [82] = {.lex_state = 112},
  [83] = {.lex_state = 112},
  [84] = {.lex_state = 112},
  [85] = {.lex_state = 112},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 112},
  [89] = {.lex_state = 112},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 112},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 112},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 112},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 112},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 112},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 112},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 112},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 112},
  [134] = {.lex_state = 112},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 112},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
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
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_avg] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_stddev] = ACTIONS(1),
    [anon_sym_stdvar] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_count_values] = ACTIONS(1),
    [anon_sym_bottomk] = ACTIONS(1),
    [anon_sym_topk] = ACTIONS(1),
    [anon_sym_quantile] = ACTIONS(1),
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
    [sym_query] = STATE(145),
    [sym__query] = STATE(82),
    [sym__query_expression] = STATE(82),
    [sym__literal_expression] = STATE(82),
    [sym_string_literal] = STATE(82),
    [sym__timeseries_selector_expression] = STATE(82),
    [sym_instant_vector_selector] = STATE(82),
    [sym_range_vector_selector] = STATE(82),
    [sym__series_matcher] = STATE(23),
    [sym_metric_name] = STATE(29),
    [sym__function_expression] = STATE(82),
    [sym_function_call] = STATE(82),
    [sym_function_name] = STATE(140),
    [sym__operator_expression] = STATE(82),
    [sym_aggregation_expression] = STATE(82),
    [sym_aggregation_operator] = STATE(101),
    [sym_binary_expression] = STATE(82),
    [sym__subquery_expression] = STATE(82),
    [sym_subquery] = STATE(82),
    [sym__quoted_string] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_float_literal] = ACTIONS(7),
    [anon_sym_sum] = ACTIONS(9),
    [anon_sym_max] = ACTIONS(9),
    [anon_sym_min] = ACTIONS(9),
    [anon_sym_avg] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_stddev] = ACTIONS(9),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      sym_float_literal,
    ACTIONS(17), 1,
      anon_sym_bool,
    STATE(12), 1,
      sym_binary_grouping,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(19), 2,
      anon_sym_on,
      anon_sym_ignoring,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(56), 14,
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
  [72] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(21), 1,
      sym_float_literal,
    STATE(13), 1,
      sym_binary_grouping,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(19), 2,
      anon_sym_on,
      anon_sym_ignoring,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(60), 14,
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
  [141] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(23), 1,
      sym_float_literal,
    STATE(11), 1,
      sym_binary_grouping,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(19), 2,
      anon_sym_on,
      anon_sym_ignoring,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(53), 14,
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
  [210] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(25), 1,
      sym_float_literal,
    STATE(22), 1,
      sym_binary_grouping,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(19), 2,
      anon_sym_on,
      anon_sym_ignoring,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(46), 14,
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
  [279] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(27), 1,
      sym_float_literal,
    STATE(21), 1,
      sym_binary_grouping,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(19), 2,
      anon_sym_on,
      anon_sym_ignoring,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(48), 14,
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
  [348] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(29), 1,
      sym_float_literal,
    STATE(19), 1,
      sym_binary_grouping,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(19), 2,
      anon_sym_on,
      anon_sym_ignoring,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(49), 14,
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
  [417] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(31), 1,
      sym_float_literal,
    STATE(18), 1,
      sym_binary_grouping,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(19), 2,
      anon_sym_on,
      anon_sym_ignoring,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(51), 14,
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
  [486] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
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
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(61), 14,
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
  [551] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(37), 1,
      sym_float_literal,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
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
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(64), 14,
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
  [613] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(39), 1,
      sym_float_literal,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
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
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(62), 14,
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
  [675] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(23), 1,
      sym_float_literal,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
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
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(53), 14,
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
  [737] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(41), 1,
      sym_float_literal,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
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
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(58), 14,
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
  [799] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(43), 1,
      sym_float_literal,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    STATE(81), 2,
      sym__literal_expression,
      sym_string_literal,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(83), 12,
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
  [863] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(45), 1,
      sym_float_literal,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(88), 1,
      sym__query,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
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
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(89), 13,
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
  [927] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(47), 1,
      sym_float_literal,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    STATE(85), 2,
      sym__literal_expression,
      sym_string_literal,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(84), 12,
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
  [991] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(49), 1,
      sym_float_literal,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
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
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(80), 14,
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
  [1053] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(51), 1,
      sym_float_literal,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
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
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(47), 14,
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
  [1115] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(53), 1,
      sym_float_literal,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
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
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(45), 14,
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
  [1177] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(55), 1,
      sym_float_literal,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
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
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(79), 14,
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
  [1239] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(57), 1,
      sym_float_literal,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
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
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(50), 14,
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
  [1301] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(59), 1,
      sym_float_literal,
    STATE(23), 1,
      sym__series_matcher,
    STATE(29), 1,
      sym_metric_name,
    STATE(70), 1,
      sym__quoted_string,
    STATE(101), 1,
      sym_aggregation_operator,
    STATE(140), 1,
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
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
    STATE(52), 14,
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
  [1363] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_offset,
    ACTIONS(68), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym_range_selection,
    STATE(41), 1,
      sym_at,
    STATE(43), 1,
      sym_offset,
    STATE(69), 1,
      sym_modifier,
    ACTIONS(70), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 17,
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
  [1411] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_offset,
    ACTIONS(68), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym_at,
    STATE(43), 1,
      sym_offset,
    STATE(77), 1,
      sym_modifier,
    ACTIONS(74), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(72), 18,
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
  [1454] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_offset,
    ACTIONS(68), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym_at,
    STATE(43), 1,
      sym_offset,
    STATE(75), 1,
      sym_modifier,
    ACTIONS(78), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(76), 18,
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
  [1497] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym__duration_token1,
    STATE(26), 1,
      aux_sym__duration,
    ACTIONS(82), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(80), 21,
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
  [1534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 21,
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
  [1568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(80), 22,
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
  [1600] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_label_selectors,
    ACTIONS(97), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 20,
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
  [1636] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(68), 1,
      sym_aggregation_grouping,
    ACTIONS(101), 2,
      anon_sym_by,
      anon_sym_without,
    ACTIONS(103), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(99), 18,
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
  [1671] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(71), 1,
      sym_aggregation_grouping,
    ACTIONS(101), 2,
      anon_sym_by,
      anon_sym_without,
    ACTIONS(107), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 18,
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
  [1706] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(73), 1,
      sym_aggregation_grouping,
    ACTIONS(101), 2,
      anon_sym_by,
      anon_sym_without,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(109), 18,
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
  [1741] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym__duration_token1,
    STATE(26), 1,
      aux_sym__duration,
    ACTIONS(115), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 19,
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
  [1776] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym__duration_token1,
    STATE(26), 1,
      aux_sym__duration,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 19,
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
  [1811] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(65), 1,
      sym_aggregation_grouping,
    ACTIONS(101), 2,
      anon_sym_by,
      anon_sym_without,
    ACTIONS(125), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(123), 18,
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
  [1846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(127), 20,
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
  [1876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 20,
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
  [1906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(135), 20,
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
  [1936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(139), 20,
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
  [1966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(143), 20,
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
  [1996] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_offset,
    STATE(74), 1,
      sym_offset,
    ACTIONS(149), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(147), 18,
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
  [2030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 20,
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
  [2060] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_AT,
    STATE(74), 1,
      sym_at,
    ACTIONS(149), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(147), 18,
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
  [2094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(155), 20,
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
  [2124] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(163), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(159), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(173), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(171), 18,
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
  [2194] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(175), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(163), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_atan2,
  [2235] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(173), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(171), 17,
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
  [2268] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(163), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(171), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2307] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(177), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(159), 17,
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
  [2340] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(175), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(163), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_atan2,
  [2381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(177), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(159), 18,
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
  [2412] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(177), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 12,
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
  [2449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 19,
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
  [2478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 19,
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
  [2507] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(173), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(171), 12,
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
  [2544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 19,
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
  [2573] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(177), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 14,
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
  [2608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(191), 19,
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
  [2637] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(173), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(171), 14,
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
  [2672] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_atan2,
    STATE(24), 1,
      sym_subquery_range_selection,
    STATE(127), 1,
      aux_sym_function_args_repeat1,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(175), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(163), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2721] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(205), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(203), 12,
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
  [2758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(207), 18,
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
  [2786] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      anon_sym_atan2,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(211), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(175), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(163), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(99), 18,
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
  [2858] = 3,
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
  [2886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(217), 18,
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
  [2914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 18,
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
  [2942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 18,
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
  [2970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(225), 18,
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
  [2998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(109), 18,
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
  [3026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(229), 18,
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
  [3054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(233), 18,
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
  [3082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(237), 18,
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
  [3110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(241), 18,
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
  [3138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(245), 18,
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
  [3166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(249), 18,
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
  [3194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_group_left,
      anon_sym_group_right,
    ACTIONS(253), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(255), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3223] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      anon_sym_atan2,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(175), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(163), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3266] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      anon_sym_atan2,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(175), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(163), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(267), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 16,
      anon_sym_RPAREN,
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
  [3338] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      anon_sym_atan2,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(175), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(163), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3381] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      anon_sym_atan2,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(175), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(163), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3424] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      anon_sym_atan2,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(175), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(163), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(267), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 16,
      anon_sym_RPAREN,
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
  [3496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_group_left,
      anon_sym_group_right,
    ACTIONS(277), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(279), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_group_left,
      anon_sym_group_right,
    ACTIONS(283), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(285), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3554] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      anon_sym_atan2,
    STATE(24), 1,
      sym_subquery_range_selection,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(175), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(163), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(291), 15,
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
  [3622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(297), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(279), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(303), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(307), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(255), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(297), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(315), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 3,
      anon_sym_LPAREN,
      sym__double_quoted_string,
      sym__single_quoted_string,
    ACTIONS(319), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym__identifier,
  [3828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_m,
    ACTIONS(321), 6,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_h,
      anon_sym_d,
      anon_sym_w,
      anon_sym_y,
  [3843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_EQ,
    ACTIONS(325), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [3857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(135), 1,
      sym_label_value,
    STATE(141), 1,
      sym__quoted_string,
    ACTIONS(329), 2,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [3871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_aggregation_grouping,
    ACTIONS(101), 2,
      anon_sym_by,
      anon_sym_without,
  [3885] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    ACTIONS(335), 1,
      sym__identifier,
    STATE(103), 1,
      sym_label_name,
    STATE(118), 1,
      sym_label_matcher,
  [3901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(339), 3,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [3913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_aggregation_grouping_repeat1,
  [3926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_aggregation_grouping_repeat1,
  [3939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_aggregation_grouping_repeat1,
  [3952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_aggregation_grouping_repeat1,
  [3965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__identifier,
    STATE(103), 1,
      sym_label_name,
    STATE(137), 1,
      sym_label_matcher,
  [3978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_function_args_repeat1,
  [3991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym__duration_token1,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym__duration,
  [4004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      aux_sym_label_selectors_repeat1,
  [4017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_LPAREN,
      anon_sym_by,
      anon_sym_without,
  [4026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_aggregation_grouping_repeat1,
  [4039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_aggregation_grouping_repeat1,
  [4052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__identifier,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym_label_name,
  [4065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym__duration_token1,
    ACTIONS(366), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      aux_sym__duration,
  [4078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__identifier,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_label_name,
  [4091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      aux_sym_label_selectors_repeat1,
  [4104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_aggregation_grouping_repeat1,
  [4117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_aggregation_grouping_repeat1,
  [4130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__identifier,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_label_name,
  [4143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_aggregation_grouping_repeat1,
  [4156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_aggregation_grouping_repeat1,
  [4169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym__duration_token1,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym__duration,
  [4182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__identifier,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_label_name,
  [4195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym__duration_token1,
    ACTIONS(385), 1,
      anon_sym_COLON,
    STATE(26), 1,
      aux_sym__duration,
  [4208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_function_args_repeat1,
  [4221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 3,
      anon_sym_start_LPAREN_RPAREN,
      anon_sym_end_LPAREN_RPAREN,
      aux_sym_at_token1,
  [4230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_aggregation_grouping_repeat1,
  [4243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__identifier,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym_label_name,
  [4256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym__duration_token1,
    ACTIONS(393), 1,
      anon_sym_DASH,
    STATE(33), 1,
      aux_sym__duration,
  [4269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      aux_sym_label_selectors_repeat1,
  [4282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym__duration_token1,
    STATE(124), 1,
      aux_sym__duration,
  [4292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym__duration_token1,
    STATE(126), 1,
      aux_sym__duration,
  [4302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym__duration_token1,
    STATE(34), 1,
      aux_sym__duration,
  [4320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__identifier,
    STATE(138), 1,
      sym_label_name,
  [4346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_function_args,
  [4356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
  [4371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
  [4378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LPAREN,
  [4385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 141,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 279,
  [SMALL_STATE(7)] = 348,
  [SMALL_STATE(8)] = 417,
  [SMALL_STATE(9)] = 486,
  [SMALL_STATE(10)] = 551,
  [SMALL_STATE(11)] = 613,
  [SMALL_STATE(12)] = 675,
  [SMALL_STATE(13)] = 737,
  [SMALL_STATE(14)] = 799,
  [SMALL_STATE(15)] = 863,
  [SMALL_STATE(16)] = 927,
  [SMALL_STATE(17)] = 991,
  [SMALL_STATE(18)] = 1053,
  [SMALL_STATE(19)] = 1115,
  [SMALL_STATE(20)] = 1177,
  [SMALL_STATE(21)] = 1239,
  [SMALL_STATE(22)] = 1301,
  [SMALL_STATE(23)] = 1363,
  [SMALL_STATE(24)] = 1411,
  [SMALL_STATE(25)] = 1454,
  [SMALL_STATE(26)] = 1497,
  [SMALL_STATE(27)] = 1534,
  [SMALL_STATE(28)] = 1568,
  [SMALL_STATE(29)] = 1600,
  [SMALL_STATE(30)] = 1636,
  [SMALL_STATE(31)] = 1671,
  [SMALL_STATE(32)] = 1706,
  [SMALL_STATE(33)] = 1741,
  [SMALL_STATE(34)] = 1776,
  [SMALL_STATE(35)] = 1811,
  [SMALL_STATE(36)] = 1846,
  [SMALL_STATE(37)] = 1876,
  [SMALL_STATE(38)] = 1906,
  [SMALL_STATE(39)] = 1936,
  [SMALL_STATE(40)] = 1966,
  [SMALL_STATE(41)] = 1996,
  [SMALL_STATE(42)] = 2030,
  [SMALL_STATE(43)] = 2060,
  [SMALL_STATE(44)] = 2094,
  [SMALL_STATE(45)] = 2124,
  [SMALL_STATE(46)] = 2163,
  [SMALL_STATE(47)] = 2194,
  [SMALL_STATE(48)] = 2235,
  [SMALL_STATE(49)] = 2268,
  [SMALL_STATE(50)] = 2307,
  [SMALL_STATE(51)] = 2340,
  [SMALL_STATE(52)] = 2381,
  [SMALL_STATE(53)] = 2412,
  [SMALL_STATE(54)] = 2449,
  [SMALL_STATE(55)] = 2478,
  [SMALL_STATE(56)] = 2507,
  [SMALL_STATE(57)] = 2544,
  [SMALL_STATE(58)] = 2573,
  [SMALL_STATE(59)] = 2608,
  [SMALL_STATE(60)] = 2637,
  [SMALL_STATE(61)] = 2672,
  [SMALL_STATE(62)] = 2721,
  [SMALL_STATE(63)] = 2758,
  [SMALL_STATE(64)] = 2786,
  [SMALL_STATE(65)] = 2830,
  [SMALL_STATE(66)] = 2858,
  [SMALL_STATE(67)] = 2886,
  [SMALL_STATE(68)] = 2914,
  [SMALL_STATE(69)] = 2942,
  [SMALL_STATE(70)] = 2970,
  [SMALL_STATE(71)] = 2998,
  [SMALL_STATE(72)] = 3026,
  [SMALL_STATE(73)] = 3054,
  [SMALL_STATE(74)] = 3082,
  [SMALL_STATE(75)] = 3110,
  [SMALL_STATE(76)] = 3138,
  [SMALL_STATE(77)] = 3166,
  [SMALL_STATE(78)] = 3194,
  [SMALL_STATE(79)] = 3223,
  [SMALL_STATE(80)] = 3266,
  [SMALL_STATE(81)] = 3309,
  [SMALL_STATE(82)] = 3338,
  [SMALL_STATE(83)] = 3381,
  [SMALL_STATE(84)] = 3424,
  [SMALL_STATE(85)] = 3467,
  [SMALL_STATE(86)] = 3496,
  [SMALL_STATE(87)] = 3525,
  [SMALL_STATE(88)] = 3554,
  [SMALL_STATE(89)] = 3594,
  [SMALL_STATE(90)] = 3622,
  [SMALL_STATE(91)] = 3647,
  [SMALL_STATE(92)] = 3674,
  [SMALL_STATE(93)] = 3699,
  [SMALL_STATE(94)] = 3724,
  [SMALL_STATE(95)] = 3751,
  [SMALL_STATE(96)] = 3778,
  [SMALL_STATE(97)] = 3803,
  [SMALL_STATE(98)] = 3828,
  [SMALL_STATE(99)] = 3843,
  [SMALL_STATE(100)] = 3857,
  [SMALL_STATE(101)] = 3871,
  [SMALL_STATE(102)] = 3885,
  [SMALL_STATE(103)] = 3901,
  [SMALL_STATE(104)] = 3913,
  [SMALL_STATE(105)] = 3926,
  [SMALL_STATE(106)] = 3939,
  [SMALL_STATE(107)] = 3952,
  [SMALL_STATE(108)] = 3965,
  [SMALL_STATE(109)] = 3978,
  [SMALL_STATE(110)] = 3991,
  [SMALL_STATE(111)] = 4004,
  [SMALL_STATE(112)] = 4017,
  [SMALL_STATE(113)] = 4026,
  [SMALL_STATE(114)] = 4039,
  [SMALL_STATE(115)] = 4052,
  [SMALL_STATE(116)] = 4065,
  [SMALL_STATE(117)] = 4078,
  [SMALL_STATE(118)] = 4091,
  [SMALL_STATE(119)] = 4104,
  [SMALL_STATE(120)] = 4117,
  [SMALL_STATE(121)] = 4130,
  [SMALL_STATE(122)] = 4143,
  [SMALL_STATE(123)] = 4156,
  [SMALL_STATE(124)] = 4169,
  [SMALL_STATE(125)] = 4182,
  [SMALL_STATE(126)] = 4195,
  [SMALL_STATE(127)] = 4208,
  [SMALL_STATE(128)] = 4221,
  [SMALL_STATE(129)] = 4230,
  [SMALL_STATE(130)] = 4243,
  [SMALL_STATE(131)] = 4256,
  [SMALL_STATE(132)] = 4269,
  [SMALL_STATE(133)] = 4282,
  [SMALL_STATE(134)] = 4292,
  [SMALL_STATE(135)] = 4302,
  [SMALL_STATE(136)] = 4310,
  [SMALL_STATE(137)] = 4320,
  [SMALL_STATE(138)] = 4328,
  [SMALL_STATE(139)] = 4336,
  [SMALL_STATE(140)] = 4346,
  [SMALL_STATE(141)] = 4356,
  [SMALL_STATE(142)] = 4364,
  [SMALL_STATE(143)] = 4371,
  [SMALL_STATE(144)] = 4378,
  [SMALL_STATE(145)] = 4385,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instant_vector_selector, 1),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_instant_vector_selector, 1), SHIFT(133),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instant_vector_selector, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_vector_selector, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_vector_selector, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__duration, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__duration, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__duration, 2), SHIFT_REPEAT(98),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metric_name, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metric_name, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__series_matcher, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__series_matcher, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_expression, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_expression, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_expression, 6),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_expression, 6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_expression, 7),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_expression, 7),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_expression, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_expression, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__series_matcher, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__series_matcher, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery_range_selection, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery_range_selection, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_selectors, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_selectors, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_selectors, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_selection, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_selection, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery_range_selection, 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery_range_selection, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_grouping, 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_grouping, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_grouping, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_grouping, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_grouping, 4),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_grouping, 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instant_vector_selector, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instant_vector_selector, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 4),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_expression, 8),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_expression, 8),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_vector_selector, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_vector_selector, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_expression, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query_expression, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 5),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 5),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 6),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 6),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 10),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 10),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 9),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 9),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 8),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 8),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 7),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 7),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_name, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_name, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(10),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_operator, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregation_grouping_repeat1, 2),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregation_grouping_repeat1, 2), SHIFT_REPEAT(139),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_label_selectors_repeat1, 2), SHIFT_REPEAT(108),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_selectors_repeat1, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_matcher, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_value, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [412] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
