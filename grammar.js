/**
 * @file Tree-sitter grammar for Arturo programming language
 * @author Arturo Community
 * @license MIT
 * 
 * HIGHLY OPTIMIZED VERSION - Aggressively simplified to reduce parser size for WASM compilation
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
    [$.label, $.identifier],
    [$.label, $.function_call, $._expression],
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
    // Changed to separate identifier and colon for better tree-sitter queries
    label: $ => seq(
      field('identifier', $.identifier),
      ':'
    ),

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

    // Unary expressions - bumped to 5
    unary_expression: $ => prec(5, choice(
      seq('!', $._expression),
      seq('!!', $._expression),
      seq('~', $._expression),
      seq('\\', $._expression),
      seq('@', $._expression),
      seq('#', $._expression),
      seq('$', $._expression),
      seq('?', $._expression),
      seq('`', $._expression),
    )),

    // Binary expressions - highest is 4
    binary_expression: $ => choice(
      prec.right(4, seq($._expression, '^', $._expression)),
      prec.left(3, seq($._expression, choice('*', '/', '%'), $._expression)),
      prec.left(2, seq($._expression, choice('+', '-'), $._expression)),
      prec.left(1, seq($._expression, choice('=', '<', '>', '&', '|'), $._expression)),
      prec.left(1, seq($._expression, choice('..', '...', '->', '=>', '::'), $._expression)),
    ),

    // Literals: 'word or 'word?
    literal: $ => seq("'", /[a-zA-Z_][\w-]*\??:?/),

    // Type annotations: :type
    type_annotation: $ => seq(':', /[a-zA-Z_][\w-]*/),

    // Attributes: .attribute or .attribute?
    attribute: $ => seq('.', /[a-zA-Z_][\w-]*\??:?/),

    // Colors: #red or #0077BF or #ABC (simplified)
    color: $ => seq(
      '#',
      token.immediate(choice(
        // Hex colors
        /[0-9a-fA-F]{6}/,
        /[0-9a-fA-F]{3}/,
        // Common named colors (reduced list)
        'red', 'green', 'blue', 'yellow', 'cyan', 'magenta', 'white', 'black',
        'gray', 'orange', 'purple', 'pink'
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

    // Strings: "...", {...}, {:...:}, etc. (simplified)
    string: $ => choice(
      // Regular double-quoted strings
      seq('"', repeat(choice(/[^"\\]+/, /\\./)), '"'),
      
      // Multiline strings with curly braces
      seq('{', repeat(/[^}]+/), '}'),
      seq('{:', repeat(/[^:}]+/), ':}'),
      
      // Guillemet strings
      seq('««', repeat(/[^»]+/), '»»'),
      seq('«', /[^\n]*/),
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
