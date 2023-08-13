module.exports = grammar({
  name: "promql",

  extras: ($) => [$.comment, /\s/],
  conflicts: ($) => [
    [$.instant_vector_selector, $.range_vector_selector],
  ],

  rules: {
    query: ($) => $._query,

    _query: ($) =>
      choice($._query_expression, seq("(", $._query_expression, ")")),

    _query_expression: ($) =>
      choice(
        $._literal_expression,
        $._selector_expression,
        $._call_expression,
        $._operator_expression,
        $._subquery_expression,
      ),

    // literals
    _literal_expression: ($) => choice($.float_literal, $.string_literal),

    float_literal: (_) =>
      /[-+]?([0-9]*\.?[0-9]+([eE][-+]?[0-9]+)?|0[xX][0-9a-fA-F]+|[nN][aA][nN]|[iI][nN][fF])/,
    string_literal: ($) => $._quoted_string,

    // selectors
    _selector_expression: ($) =>
      choice($.instant_vector_selector, $.range_vector_selector),

    instant_vector_selector: ($) =>
      seq($._series_matcher, optional($.modifier)),
    range_vector_selector: ($) =>
      seq($._series_matcher, $.range_selection, optional($.modifier)),
    range_selection: ($) => seq("[", $._duration, "]"),

    modifier: ($) =>
      choice(seq($.offset, optional($.at)), seq($.at, optional($.offset))),

    offset: ($) => seq("offset", optional("-"), $._duration),
    at: (_) => seq("@", choice("start()", "end()", /[1-9][0-9]*/)),

    _series_matcher: ($) =>
      choice(
        $.metric_name,
        $.label_selectors,
        seq($.metric_name, $.label_selectors),
      ),

    label_selectors: ($) => seq("{", commaSep($.label_matcher), "}"),
    label_matcher: ($) =>
      seq($.label_name, choice("=", "!=", "=~", "!~"), $.label_value),

    metric_name: ($) => $._identifier,
    label_name: ($) => $._identifier,
    label_value: ($) => $._quoted_string,

    // functions
    // NOTE: we group also aggregations here; otherwise there will be ambiguities for
    //       code like `sum(X)` in integrations like semgrep
    _call_expression: ($) => $.function_call,
    function_call: ($) =>
      choice(
        seq($.function_name, $.function_args),
        seq($.function_name, $.grouping, $.function_args),
        seq($.function_name, $.function_args, $.grouping),
      ),
    function_name: ($) => $._identifier,
    function_args: ($) => seq("(", commaSep($._query), ")"),

    grouping: ($) =>
      seq(
        choice(/by/i, /without/i),
        "(",
        commaSep($.label_name),
        ")",
      ),

    // operators
    _operator_expression: ($) => $.binary_expression,

    binary_expression: ($) => {
      const table = [
        [6, choice("^")],
        [5, choice("*", "/", "%")],
        [4, choice("+", "-")],
        [
          3,
          seq(
            choice("==", "!=", ">", ">=", "<", "<="),
            optional(/bool/i),
          ),
        ],
        [
          2,
          choice(
            /and/i,
            /or/i,
            /unless/i,
          ),
        ],
        [1, /atan2/i],
      ];

      return choice(
        ...table.map(([precedence, operator]) =>
          prec.left(
            precedence,
            seq($._query, operator, optional($.binary_grouping), $._query),
          ),
        ),
      );
    },

    binary_grouping: ($) =>
      prec.right(
        seq(
          choice(/on/i, /ignoring/i),
          seq("(", commaSep($.label_name), ")"),
          optional(
            seq(
              choice(
                /group_left/i,
                /group_right/i,
              ),
              optional(seq("(", commaSep($.label_name), ")")),
            ),
          ),
        ),
      ),

    // subqueries
    _subquery_expression: ($) => $.subquery,
    subquery: ($) =>
      seq($._query, $.subquery_range_selection, optional($.modifier)),

    subquery_range_selection: ($) =>
      seq("[", $._duration, ":", optional($._duration), "]"),

    // misc helpers
    _quoted_string: ($) =>
      choice(
        $._single_quoted_string,
        $._double_quoted_string,
        $._backtick_quoted_string,
      ),
    _double_quoted_string: (_) => token(seq('"', /(\\"|[^"])*/, '"')),
    _single_quoted_string: (_) => token(seq("'", /(\\'|[^'])*/, "'")),
    _backtick_quoted_string: (_) => token(seq("`", /(\\`|[^`])*/, "`")),
    _duration: (_) =>
      repeat1(seq(/[0-9]+/, choice("ms", "s", "m", "h", "d", "w", "y"))),

    // label_name, metric_name, function_name
    _identifier: (_) => /[a-zA-Z_:][a-zA-Z0-9_:]*/,

    comment: (_) => token(choice(seq("#", /.*/))),
  },
});

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)), optional(","));
}
