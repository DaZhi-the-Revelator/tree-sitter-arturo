/**
 * @file Tree-sitter grammar for Arturo programming language
 * @author Arturo Community
 * @license MIT
 * 
 * OPTIMIZED VERSION - Simplified to reduce memory usage during compilation
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'arturo',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  conflicts: $ => [
    [$.function_call, $._expression],
  ],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.shebang,
      $.comment,
      $.assignment,
      $.function_call,
      $._expression,
    ),

    // Shebang at the beginning of file
    shebang: $ => /#!.*/,

    // Single-line comments: ; this is a comment
    comment: $ => /;[^\n]*/,

    // Assignment: name: value
    assignment: $ => prec.right(seq(
      field('name', $.label),
      field('value', $._expression)
    )),

    // Labels: identifier followed by colon (for assignment or dictionary keys)
    // Supports ? at end: name?: value
    label: $ => /[a-zA-Z_][\w-]*\??:/,

    // Blocks: [...]
    block: $ => seq(
      '[',
      repeat($._statement),
      ']'
    ),

    // Dictionaries: #[key: value ...]
    dictionary: $ => seq(
      '#[',
      repeat(seq(
        field('key', choice($.label, $.identifier)),
        optional(field('value', $._expression))
      )),
      ']'
    ),

    // Function calls
    function_call: $ => prec.dynamic(1, prec.left(seq(
      field('function', choice($.builtin, $.identifier)),
      repeat1(field('argument', $._expression))
    ))),

    _expression: $ => choice(
      $.number,
      $.string,
      $.interpolated_string,
      $.template_string,
      $.char,
      $.color,
      $.unit,
      $.version,
      $.boolean,
      $.null,
      $.builtin,
      $.identifier,
      $.literal,
      $.type_annotation,
      $.attribute,
      $.block,
      $.dictionary,
      $.binary_expression,
      $.unary_expression,
    ),

    // Binary expressions (simplified to reduce complexity)
    binary_expression: $ => {
      const ops = [
        ['+', 1], ['-', 1], ['*', 2], ['/', 2], ['%', 2], ['^', 3],
        ['=', 0], ['<', 0], ['>', 0], ['<=>', 0],
        ['&', 0], ['|', 0],
        ['..', 0], ['...', 0],
        ['->', 0], ['=>', 0], ['==>', 0], ['<==>', 0], ['-->', 0],
        ['<-->', 0], ['<->', 0], ['::', 0],
      ];
      return choice(...ops.map(([op, precedence]) =>
        prec.right(precedence, seq($._expression, op, $._expression))
      ));
    },

    // Unary expressions
    unary_expression: $ => choice(
      prec(4, seq('!', $._expression)),
      prec(4, seq('!!', $._expression)),
      prec(4, seq('~', $._expression)),
      prec(4, seq('\\', $._expression)),
      prec(4, seq('@', $._expression)),
      prec(4, seq('#', $._expression)),
      prec(4, seq('$', $._expression)),
      prec(4, seq('?', $._expression)),
      prec(4, seq('`', $._expression)),
    ),

    // Literals: 'word or 'word?
    literal: $ => seq("'", /[a-zA-Z_][\w-]*\??:?/),

    // Type annotations: :type
    type_annotation: $ => seq(':', /[a-zA-Z_][\w-]*/),

    // Attributes: .attribute or .attribute?
    attribute: $ => seq('.', /[a-zA-Z_][\w-]*\??:?/),

    // Colors: #red or #0077BF or #ABC
    color: $ => seq(
      '#',
      token.immediate(choice(
        // Hex colors
        /[0-9a-fA-F]{6}/,
        /[0-9a-fA-F]{3}/,
        // Named colors (simplified list)
        'red', 'green', 'blue', 'yellow', 'cyan', 'magenta', 'white', 'black',
        'gray', 'grey', 'orange', 'purple', 'pink', 'brown', 'lime', 'navy',
        'teal', 'aqua', 'maroon', 'olive', 'silver', 'fuchsia'
      ))
    ),

    // Units: `m, `kg, etc.
    unit: $ => seq('`', token.immediate(/[a-zA-Z_][\w]*/)),

    // Version literals: 1.2.3 or 1.2.3-beta or 10-beta
    version: $ => /\d+(\.\d+)*(-[a-zA-Z][\w]*)?/,

    // Numbers (integers, floats, scientific)
    number: $ => token(choice(
      /\d+(\.\d+)?[eE][+-]?\d+/,  // scientific
      /\d+\.\d+/,                  // float
      /\d+/                        // integer
    )),

    // Interpolated strings: ~"text |var| more text"
    interpolated_string: $ => seq(
      '~"',
      repeat(choice(
        $.interpolation,
        /[^"|\\]+/,
        /\\./
      )),
      '"'
    ),

    // String interpolation: |variable|
    interpolation: $ => seq(
      '|',
      /[a-zA-Z_][\w-]*\??/,
      '|'
    ),

    // Template strings: <|| ... ||>
    template_string: $ => seq(
      '<||',
      repeat(/[^|]+|\|[^|]/),
      '||>'
    ),

    // Strings: "...", {...}, {:...:}, ««...»», etc.
    string: $ => choice(
      // Regular double-quoted strings
      seq('"', repeat(choice(/[^"\\]+/, /\\./)), '"'),
      
      // Safe strings (double guillemets)
      seq('««', repeat(/[^»]+/), '»»'),
      
      // Verbatim multiline strings
      seq('{:', repeat(/[^:]+|:[^}]/), ':}'),
      
      // Regular multiline strings
      seq('{', repeat(/[^}]+/), '}'),
      
      // Code blocks: {!html:...:}, {!css...}, etc.
      seq(
        choice(
          '{!html:', '{!css:', '{!md:', '{!js:', '{!sql:', '{!sh:', '{!xml:', '{!json:',
          '{!html', '{!css', '{!md', '{!js', '{!sql', '{!sh', '{!xml', '{!json'
        ),
        repeat(/[^:}]+|:[^}]|[^}]/),
        choice(':}', '}')
      ),
      
      // Smart strings
      seq('«', /[^\n]*/),
      
      // Regex strings
      seq('{/', repeat(/[^\/]|\\./), '/}'),
      
      // String blocks
      seq(/-{3,}/, repeat(/[^}]+/), '}'),
    ),

    // Characters: `c`
    char: $ => /`./,

    // Booleans
    boolean: $ => choice('true', 'false', 'maybe'),

    // Null
    null: $ => 'null',

    // Built-in functions - using a simplified token pattern
    // The LSP will handle the full list of 521 functions
    builtin: $ => token(choice(
      // Common patterns
      /[a-z]+\?/,           // predicates: prime?, contains?, etc.
      /[a-z]+[A-Z][a-zA-Z]*/, // camelCase: className, etc.
      /[a-z]+/              // simple: print, loop, if, etc.
    )),

    // Identifiers: can contain letters, numbers, underscores, hyphens and optional ? at end
    // Examples: myVar, my-var, my_var, contains?, prime?
    identifier: $ => /[a-zA-Z_][\w-]*\??/,
  }
});
