module.exports = grammar({
    name: "CategorialGrammarIconic",
    extras: $ => [],
    rules: {
        source_file: $ => choice(
            $.cat_funcapp,
            $.cat_left,
            $.cat_right,
            $.cat_middle,
            $.cat_uniq,
            seq("<", $.source_file, ">", repeat($.feature_list)),
        ),
        cat_funcapp: $ => seq(
            field("functor", $.source_file),
            field("arguments", $.cat_functor_arg_list),
            repeat($.feature_list),
        ),
        cat_functor_arg_list: $ => seq(
            "(",
            optional(
                seq(
                    $.source_file,
                    repeat(seq(",", $.source_file)),
                    optional(","),
                )
            ),
            ")",
        ),
        cat_left: $ => prec.right(
            seq(
                field("antecedent", $.source_file),
                "\\",
                repeat($.feature_list),
                field("consequent", $.source_file),
            )
        ),
        cat_right: $ => prec.left(
            seq(
                field("consequent", $.source_file),
                "/",
                repeat($.feature_list),
                field("antecedent", $.source_file),
            )
        ),
        cat_middle: $ => prec.left(
            seq(
                field("consequent", $.source_file),
                "|",
                repeat($.feature_list),
                field("antecedent", $.source_file),
            )
        ),
        cat_uniq: $ => seq(
            $.cat_name,
            repeat($.feature_list),
        ),
        cat_name: $ => choice($.literal_unquoted_cat, $.literal_quoted),
        feature_list: $ => seq(
            "[",
            optional(
                seq(
                    $.feature,
                    repeat(seq(",", $.feature)),
                    optional(","),
                )
            ),
            "]"
        ),
        feature: $ => seq(
            field("key", choice($.literal_unquoted_feat, $.literal_quoted)),
            optional(
                seq(
                    "=",
                    field("value", choice($.literal_unquoted_feat, $.literal_quoted)),
                )
            ),
        ),
        // use ~ as the escape character
        literal_unquoted_cat: $ => /([^/\\|<>\[\]()'~,]|~.)+/,
        literal_unquoted_feat: $ => /([^\[\]()'~,=]|~.)+/,
        literal_quoted: $ => token(
            seq(
                "'",
                /([^~']|~'|~~)*/,
                "'"
            )
        ),
    }
});