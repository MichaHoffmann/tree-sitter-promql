module.exports = grammar({
  name: "promql",

  extras: ($) => [$.comment, /\s/],

  rules: {
    query: ($) => $._query_expression,

    _query_expression: ($) =>
      choice(
        $._literal_expression,
        $._timeseries_selector_expression,
        $._function_expression
      ),

    // literals
    _literal_expression: ($) => choice($.float_literal, $.string_literal),
    float_literal: (_) =>
      /[-+]?([0-9]*\.?[0-9]+([eE][-+]?[0-9]+)?|0[xX][0-9a-fA-F]+|[nN][aA][nN]|[iI][nN][fF])/,
    string_literal: ($) => $._quoted_string,

    // timeseries selector
    // TODO: offset modifier, @ modifier
    _timeseries_selector_expression: ($) =>
      choice($.instant_vector_selector, $.range_vector_selector),

    instant_vector_selector: ($) => $._series_matcher,
    range_vector_selector: ($) => seq($._series_matcher, $.range_selection),
    range_selection: ($) => seq("[", $._duration, "]"),

    _series_matcher: ($) => seq($.metric_name, optional($.label_selectors)),

    label_selectors: ($) =>
      seq(
        "{",
        optional(seq($.label_matcher, repeat(seq(",", $.label_matcher)))),
        "}"
      ),

    label_matcher: ($) =>
      seq($.label_name, choice("=", "!=", "=~", "!~"), $.label_value),

    metric_name: (_) => /[a-zA-Z_:][a-zA-Z0-9_:]*/,
    label_name: (_) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    label_value: ($) => $._quoted_string,

    // subqueries
    // TODO: anything

    // operators
    // TODO: anything

    // functions
    _function_expression: ($) => $.function_call,

    function_call: ($) =>
      seq($.function_name, "(", optional($.function_args), ")"),

    // TODO: more functions
    function_name: (_) => choice("rate", "label_join", "histogram_quantile"),
    function_args: ($) =>
      seq($._query_expression, repeat(seq(",", $._query_expression))),

    // misc helpers
    _quoted_string: ($) =>
      choice($._single_quoted_string, $._double_quoted_string),
    _double_quoted_string: (_) => /"((\\")|[^"(\\")])+"/,
    _single_quoted_string: (_) => /'((\\')|[^'(\\')])+'/,
    _duration: (_) =>
      repeat1(seq(/[0-9]+/, choice("ms", "s", "m", "h", "d", "w", "y"))),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: (_) =>
      token(
        choice(
          seq("#", /.*/),
          seq("//", /.*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
        )
      ),
  },
});
