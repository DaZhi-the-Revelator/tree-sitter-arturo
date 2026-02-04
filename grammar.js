/**
 * @file Tree-sitter grammar for Arturo programming language
 * @author Arturo Community
 * @license MIT
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
    [$.function_call, $.identifier],
  ],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.shebang,
      $.comment,
      $.assignment,
      $.function_call,
      $.block,
      $.dictionary,
      $._expression,
    ),

    // Shebang at the beginning of file
    shebang: $ => /#!.*/,

    // Comments: ; this is a comment
    comment: $ => /;[^\n]*/,

    // Assignment: name: value
    assignment: $ => prec.right(seq(
      field('name', $.label),
      field('value', $._expression)
    )),

    // Labels: identifier followed by colon (for assignment or dictionary keys)
    label: $ => /[\w_]+\b\??:/,

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
    function_call: $ => prec.left(seq(
      field('function', choice($.builtin, $.identifier)),
      repeat1(field('argument', $._expression))
    )),

    _expression: $ => choice(
      $.number,
      $.string,
      $.char,
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

    // Binary expressions
    binary_expression: $ => choice(
      // Arithmetic
      prec.right(1, seq($._expression, '+', $._expression)),
      prec.right(1, seq($._expression, '-', $._expression)),
      prec.right(2, seq($._expression, '*', $._expression)),
      prec.right(2, seq($._expression, '/', $._expression)),
      prec.right(2, seq($._expression, '%', $._expression)),
      prec.right(3, seq($._expression, '^', $._expression)),
      
      // Comparison
      prec.left(0, seq($._expression, '=', $._expression)),
      prec.left(0, seq($._expression, '<', $._expression)),
      prec.left(0, seq($._expression, '>', $._expression)),
      prec.left(0, seq($._expression, '<=>', $._expression)),
      
      // Logical
      prec.left(0, seq($._expression, '&', $._expression)),
      prec.left(0, seq($._expression, '|', $._expression)),
      
      // Range
      prec.left(0, seq($._expression, choice('..', '...'), $._expression)),
      
      // Special operators
      prec.right(0, seq($._expression, '->', $._expression)),
      prec.right(0, seq($._expression, '=>', $._expression)),
      prec.right(0, seq($._expression, '==>', $._expression)),
      prec.right(0, seq($._expression, '<==>', $._expression)),
      prec.right(0, seq($._expression, '-->', $._expression)),
      prec.right(0, seq($._expression, '<-->', $._expression)),
      prec.right(0, seq($._expression, '<->', $._expression)),
      prec.right(0, seq($._expression, '::', $._expression)),
    ),

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
    ),

    // Literals: 'word
    literal: $ => seq("'", /[\w_]+\b\??:?/),

    // Type annotations: :type
    type_annotation: $ => seq(':', /[\w_]+/),

    // Attributes: .attribute
    attribute: $ => seq('.', /[\w_]+\b\??:?/),

    // Numbers (integers and floats)
    number: $ => {
      const decimal = /[0-9]+/;
      const float = /[0-9]+\.[0-9]+/;
      const scientific = /[0-9]+(\.[0-9]+)?[eE][+-]?[0-9]+/;
      return token(choice(scientific, float, decimal));
    },

    // Strings: "..." or {...} or {:...:} or ««...»»
    string: $ => choice(
      // Regular strings with escape sequences
      seq('"', repeat(choice(/[^"\\]/, /\\./)), '"'),
      
      // Safe strings
      seq('««', repeat(/[^»]/), '»»'),
      
      // Curly strings (verbatim)
      seq('{:', repeat(/[^:]/), ':}'),
      
      // Curly strings (normal)
      seq('{', repeat(choice(/[^{}\\]/, /\\./)), '}'),
      
      // Embedded code blocks
      $.code_block,
      
      // Smart strings
      seq('«', /[^\n]*/, '$'),
      
      // Regex strings
      seq('{/', repeat(/[^\/]/), '/}'),
      
      // String blocks
      seq(/-{3,}/, repeat(/[^}]/), '}'),
    ),

    // Code blocks with embedded languages
    code_block: $ => choice(
      seq('{!css:', repeat(/[^:]/), ':}'),
      seq('{!html:', repeat(/[^:]/), ':}'),
      seq('{!md:', repeat(/[^:]/), ':}'),
      seq('{!js:', repeat(/[^:]/), ':}'),
      seq('{!sql:', repeat(/[^:]/), ':}'),
      seq('{!sh:', repeat(/[^:]/), ':}'),
      seq('{!css', repeat(/[^}]/), '}'),
      seq('{!html', repeat(/[^}]/), '}'),
      seq('{!md', repeat(/[^}]/), '}'),
      seq('{!js', repeat(/[^}]/), '}'),
      seq('{!sql', repeat(/[^}]/), '}'),
      seq('{!sh', repeat(/[^}]/), '}'),
    ),

    // Characters: `c`
    char: $ => /`.`/,

    // Booleans
    boolean: $ => choice('true', 'false', 'maybe'),

    // Null
    null: $ => 'null',

    // Built-in functions and predicates (from the TextMate grammar)
    builtin: $ => choice(
      // Predicates (ending with ?)
      token(choice(
        'absolute?', 'acceleration?', 'action?', 'all?', 'and?', 'angle?', 'angularVelocity?',
        'any?', 'area?', 'areaDensity?', 'ascii?', 'attr?', 'attribute?', 'attributeLabel?',
        'between?', 'binary?', 'block?', 'bytecode?', 'capacitance?', 'char?', 'charge?',
        'color?', 'complex?', 'conductance?', 'conforms?', 'contains?', 'currency?', 'current?',
        'currentDensity?', 'database?', 'dataTransferRate?', 'date?', 'defined?', 'density?',
        'dictionary?', 'directory?', 'disjoint?', 'elastance?', 'electricField?', 'electricityPrice?',
        'empty?', 'energy?', 'entropy?', 'equal?', 'error?', 'errorKind?', 'even?', 'every?',
        'exists?', 'false?', 'file?', 'floating?', 'force?', 'frequency?', 'friday?', 'function?',
        'future?', 'greater?', 'greaterOrEqual?', 'heatFlux?', 'hidden?', 'illuminance?', 'in?',
        'inductance?', 'infinite?', 'information?', 'inline?', 'integer?', 'intersect?', 'is?',
        'jerk?', 'key?', 'kinematicViscosity?', 'label?', 'leap?', 'length?', 'less?',
        'lessOrEqual?', 'literal?', 'logical?', 'lower?', 'luminosity?', 'luminousFlux?',
        'magneticFieldStrength?', 'magneticFlux?', 'magneticFluxDensity?', 'mass?', 'massFlowRate?',
        'match?', 'method?', 'molarConcentration?', 'moleFlowRate?', 'momentofInertia?', 'momentum?',
        'monday?', 'nand?', 'negative?', 'nor?', 'not?', 'notEqual?', 'null?', 'numeric?',
        'object?', 'odd?', 'one?', 'or?', 'past?', 'path?', 'pathLabel?', 'pathLiteral?',
        'permeability?', 'permittivity?', 'positive?', 'potential?', 'power?', 'prefix?',
        'pressure?', 'prime?', 'quantity?', 'radiation?', 'radiationExposure?', 'range?',
        'rational?', 'regex?', 'resistance?', 'resistivity?', 'salary?', 'same?', 'saturday?',
        'send?', 'set?', 'snap?', 'socket?', 'solidAngle?', 'some?', 'sorted?', 'specificVolume?',
        'speed?', 'standalone?', 'store?', 'string?', 'subset?', 'substance?', 'suffix?',
        'sunday?', 'superset?', 'superuser?', 'surfaceTension?', 'symbol?', 'symbolLiteral?',
        'symlink?', 'temperature?', 'thermalConductivity?', 'thermalInsulance?', 'throws?',
        'thursday?', 'time?', 'today?', 'true?', 'tuesday?', 'type?', 'unit?', 'unitless?',
        'upper?', 'version?', 'viscosity?', 'volume?', 'volumetricFlow?', 'waveNumber?',
        'wednesday?', 'whitespace?', 'word?', 'xnor?', 'xor?', 'zero?'
      )),
      
      // Regular built-in functions
      token(choice(
        'abs', 'absolute', 'accept', 'acos', 'acosh', 'acsec', 'acsech', 'actan', 'actanh',
        'add', 'after', 'alert', 'alias', 'alphabet', 'alphaParticleMass', 'and', 'angle',
        'angstromStar', 'any', 'append', 'arg', 'args', 'arithmeticError', 'arity', 'arrange',
        'array', 'asec', 'asech', 'asin', 'asinh', 'assertionError', 'atan', 'atan2', 'atanh',
        'atomicMass', 'attr', 'attrs', 'average', 'avogadroConstant', 'before', 'benchmark',
        'blend', 'bohrRadius', 'boltzmannConstant', 'break', 'browse', 'call', 'capitalize',
        'case', 'ceil', 'chop', 'chunk', 'clamp', 'classicalElectronRadius', 'clear', 'clip',
        'close', 'cluster', 'coalesce', 'collect', 'color', 'combine', 'compare',
        'conductanceQuantum', 'config', 'conj', 'connect', 'constructor', 'continue',
        'conversionError', 'convert', 'copy', 'cos', 'cosh', 'couple', 'crc', 'csec', 'csech',
        'ctan', 'ctanh', 'cursor', 'darken', 'dec', 'decode', 'decouple', 'define', 'delete',
        'denominator', 'desaturate', 'deuteronMass', 'deviation', 'dialog', 'dictionary',
        'difference', 'digest', 'digits', 'discard', 'div', 'divmod', 'do', 'download', 'drop',
        'dup', 'electronCharge', 'electronMass', 'electronMassEnergy', 'empty', 'encode',
        'ensure', 'enumerate', 'env', 'epsilon', 'escape', 'execute', 'exit', 'exp', 'export',
        'express', 'extend', 'extract', 'factorial', 'factors', 'false', 'fdiv', 'filter',
        'first', 'flatten', 'floor', 'fold', 'function', 'gamma', 'gather', 'gcd', 'get', 'goto',
        'gravitationalConstant', 'grayscale', 'hartreeEnergy', 'hash', 'helionMass', 'hypot',
        'if', 'impedanceOfVacuum', 'import', 'in', 'inc', 'indent', 'index', 'indexError',
        'infinite', 'info', 'input', 'insert', 'inspect', 'intersection', 'inverseConductanceQuantum',
        'invert', 'is', 'jaro', 'join', 'josephsonConstant', 'keys', 'kurtosis', 'last', 'lcm',
        'let', 'levenshtein', 'libraryError', 'lighten', 'list', 'listen', 'ln', 'log', 'loop',
        'lower', 'magneticFluxQuantum', 'mail', 'map', 'match', 'max', 'maximum', 'maybe',
        'median', 'method', 'methods', 'min', 'minimum', 'mod', 'module', 'molarGasConstant',
        'move', 'mul', 'muonMass', 'nameError', 'nand', 'neg', 'neutronMass', 'new', 'nor',
        'normalize', 'not', 'now', 'null', 'numerator', 'open', 'or', 'outdent', 'packageError',
        'pad', 'palette', 'panic', 'parse', 'path', 'pause', 'permissions', 'permutate', 'pi',
        'planckConstant', 'planckLength', 'planckMass', 'planckTemperature', 'planckTime', 'pop',
        'popup', 'pow', 'powerset', 'powmod', 'prepend', 'print', 'prints', 'process', 'product',
        'property', 'protonMass', 'protonMassEnergy', 'query', 'random', 'range', 'read',
        'receive', 'reciprocal', 'reducedPlanckConstant', 'relative', 'remove', 'rename',
        'render', 'repeat', 'replace', 'request', 'return', 'reverse', 'rotate', 'round',
        'runtimeError', 'rydbergConstant', 'sample', 'saturate', 'scalar', 'script', 'sec',
        'sech', 'select', 'send', 'serve', 'set', 'shl', 'shr', 'shuffle', 'sin', 'sinh',
        'size', 'skewness', 'slice', 'sort', 'sortable', 'specify', 'speedOfLight', 'spin',
        'split', 'sqrt', 'squeeze', 'stack', 'standardGasVolume', 'standardPressure',
        'standardTemperature', 'store', 'strip', 'sub', 'sum', 'switch', 'symbols', 'symlink',
        'syntaxError', 'sys', 'systemError', 'take', 'tally', 'tan', 'tanh', 'tau', 'tauMass',
        'terminal', 'terminate', 'thomsonCrossSection', 'throw', 'timestamp', 'to', 'translate',
        'tritonMass', 'true', 'truncate', 'try', 'type', 'typeError', 'uiError', 'unclip',
        'union', 'unique', 'units', 'unless', 'unplug', 'unset', 'unstack', 'until', 'unzip',
        'upper', 'using', 'vacuumPermeability', 'vacuumPermittivity', 'valueError', 'values',
        'var', 'variance', 'vmError', 'volume', 'vonKlitzingConstant', 'webview', 'when',
        'while', 'window', 'with', 'wordwrap', 'write', 'xnor', 'xor', 'zip'
      ))
    ),

    // Identifiers
    identifier: $ => /[\w_]+\b\??/,
  }
});
