# tree-sitter-arturo

Tree-sitter grammar for the [Arturo programming language](https://arturo-lang.io/).

This grammar provides syntax parsing for Arturo, enabling features like syntax highlighting, code folding, and structural navigation in editors that support Tree-sitter.

## Features

- ✅ Complete Arturo syntax support
- ✅ Proper comment handling (single-line `;` only)
- ✅ Multi-line block support
- ✅ All built-in functions recognized as predicates
- ✅ String literal variations (regular, safe, curly, verbatim)
- ✅ Code blocks with embedded languages
- ✅ Type annotations and literals
- ✅ Dictionary and block syntax
- ✅ Binary, unary, and special operators

## Installation

### As a dependency (for editor extensions)

```json
{
  "dependencies": {
    "tree-sitter-arturo": "github:YOUR_USERNAME/tree-sitter-arturo"
  }
}
```

### For development

```bash
git clone https://github.com/YOUR_USERNAME/tree-sitter-arturo
cd tree-sitter-arturo
npm install
npm run generate
npm test
```

## Usage

### With Node.js

```javascript
const Parser = require('tree-sitter');
const Arturo = require('tree-sitter-arturo');

const parser = new Parser();
parser.setLanguage(Arturo);

const sourceCode = `
; This is a comment
name: "Arturo"
print name
`;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());
```

### With Zed Editor

This grammar is used by the [zed-arturo](https://github.com/YOUR_USERNAME/zed-arturo) extension.

## Arturo Language Syntax

### Comments

**Single-line comments only**:
```arturo
; This is a comment
```

**Note**: Arturo doesn't have dedicated multi-line comment delimiters. Developers use unassigned string literals as a workaround:

```arturo
{
This is technically a string literal,
but used as a multi-line "comment"
}

{:
This preserves exact formatting
   including indentation
:}
```

These are parsed as strings, not comments, which is correct behavior.

### Basic Syntax

```arturo
; Variables
name: "John"
age: 30

; Blocks (can span multiple lines)
numbers: [
    1 2 3
    4 5 6
]

; Dictionaries
person: #[
    name: "John"
    age: 30
]

; Functions
greet: function [name][
    print ["Hello" name]
]

; Control flow
if age > 18 [
    print "Adult"
]

loop numbers 'x [
    print x
]
```

### Supported Token Types

- **Comments**: Single-line (`;`)
- **Numbers**: Integers, floats, scientific notation
- **Strings**: Multiple formats
  - Regular: `"string"`
  - Safe: `««string»»`
  - Curly verbatim: `{:string:}`
  - Curly normal: `{string}`
  - Smart: `«string`
  - Regex: `{/pattern/}`
- **Characters**: `` `c` ``
- **Booleans**: `true`, `false`, `maybe`
- **Null**: `null`
- **Literals**: `'symbol`
- **Type annotations**: `:type`
- **Attributes**: `.attribute`
- **Blocks**: `[...]`
- **Dictionaries**: `#[...]`
- **Built-in functions**: 521+ recognized

## Grammar Rules

### Statements

The grammar recognizes these statement types:
- Shebang (`#!/usr/bin/env arturo`)
- Comments (`;`)
- Assignments (`name: value`)
- Function calls (`print "hello"`)
- Expressions

### Expressions

All Arturo expression types are supported:
- Numbers (integer, float, scientific)
- Strings (all variants)
- Characters
- Booleans and null
- Blocks and dictionaries
- Function calls
- Binary expressions (arithmetic, comparison, logical)
- Unary expressions (!, ~, \, @, #, $, ?)
- Literals and type annotations

### Operators

**Arithmetic**: `+`, `-`, `*`, `/`, `%`, `^`

**Comparison**: `=`, `<`, `>`, `<=>`

**Logical**: `&`, `|`

**Range**: `..`, `...`

**Special**: `->`, `=>`, `==>`, `<===>`, `-->`, `<-->`, `<->`, `::`

**Unary**: `!`, `!!`, `~`, `\`, `@`, `#`, `$`, `?`

## Testing

Tests are in `test/corpus/basics.txt`:

```bash
npm test
```

## Building

Generate the parser from grammar.js:

```bash
npm run generate
```

Build the native module:

```bash
npm run build
```

## Integration

### Syntax Highlighting

Highlighting queries are in `queries/highlights.scm`:

```scheme
(comment) @comment
(builtin) @function.builtin
(number) @number
(string) @string
; ... and more
```

### Language Server

See [zed-arturo](https://github.com/YOUR_USERNAME/zed-arturo) for the full LSP implementation.

## Development

### Project Structure

```
tree-sitter-arturo/
├── grammar.js              # Grammar definition
├── src/
│   ├── parser.c           # Generated parser (don't edit)
│   ├── grammar.json       # Generated grammar data
│   └── node-types.json    # Generated node types
├── queries/
│   └── highlights.scm     # Syntax highlighting queries
├── test/
│   └── corpus/
│       └── basics.txt     # Test cases
└── bindings/              # Language bindings
    ├── node/
    └── rust/
```

### Making Changes

1. Edit `grammar.js`
2. Run `npm run generate` to regenerate the parser
3. Run `npm test` to verify tests pass
4. Commit changes

### Important Notes

- **Comments**: Arturo only has single-line comments (`;`)
- **Strings vs Comments**: `{...}` blocks are strings, not comments
- **Bracket Matching**: Blocks can span multiple lines
- **Built-ins**: All 521+ functions are recognized in the grammar

## Contributing

Contributions welcome! Please:

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Add tests if applicable
5. Run `npm test`
6. Submit a pull request

## Resources

- [Arturo Language](https://arturo-lang.io/)
- [Arturo Documentation](https://arturo-lang.io/documentation/)
- [Tree-sitter](https://tree-sitter.github.io/)
- [Tree-sitter Grammar Guide](https://tree-sitter.github.io/tree-sitter/creating-parsers)

## License

MIT License - see [LICENSE](LICENSE) for details

## Changelog

### v1.0.0 (Current)
- ✅ Complete Arturo syntax support
- ✅ Corrected comment handling (single-line only)
- ✅ Multi-line block support
- ✅ All built-in functions recognized
- ✅ String literal variations
- ✅ Code block embeddings

### v0.1.0
- Initial grammar implementation
