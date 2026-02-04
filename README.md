# tree-sitter-arturo

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

Tree-sitter grammar for the [Arturo programming language](https://arturo-lang.io/).

## About

This is a Tree-sitter parser for Arturo, a simple, expressive, and portable programming language for efficient scripting. This grammar enables syntax highlighting and other language features in editors that support Tree-sitter.

## Features

### Supported Syntax

- ✅ **Comments** - Line comments with `;`
- ✅ **Strings** - Multiple string types:
  - Regular strings: `"text"`
  - Curly strings: `{text}`
  - Verbatim strings: `{:text:}`
  - Safe strings: `««text»»`
  - Smart strings: `«text`
  - Regex strings: `{/pattern/}`
- ✅ **Numbers** - Integers, floats, and scientific notation
- ✅ **Booleans** - `true`, `false`, `maybe`
- ✅ **Blocks** - `[...]` syntax
- ✅ **Dictionaries** - `#[key: value]` syntax
- ✅ **400+ Built-in Functions** - All Arturo built-ins and predicates
- ✅ **Operators** - Arithmetic, logical, comparison, and special operators
- ✅ **Literals** - `'word` syntax
- ✅ **Type Annotations** - `:type` syntax
- ✅ **Attributes** - `.attribute` syntax
- ✅ **Embedded Code** - Support for `{!html:...}`, `{!css:...}`, etc.
- ✅ **Function Calls** - Full support for Arturo's function syntax
- ✅ **Assignments** - `name: value` syntax

## Installation

### For Editor Integration

This grammar is designed to work with Tree-sitter-compatible editors.

#### Neovim

Add to your Neovim configuration:

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.arturo = {
  install_info = {
    url = "https://github.com/yourusername/tree-sitter-arturo",
    files = {"src/parser.c"},
    branch = "main",
  },
  filetype = "art",
}
```

#### Zed

This grammar is used by the [Zed Arturo extension](https://github.com/yourusername/zed-arturo).

### For Development

```bash
git clone https://github.com/yourusername/tree-sitter-arturo
cd tree-sitter-arturo
npm install --ignore-scripts
npx tree-sitter generate
npx tree-sitter test
```

## Usage Examples

### Basic Arturo Code

```arturo
; This is a comment
name: "Alice"
age: 30

; Blocks
numbers: [1 2 3 4 5]

; Dictionaries
person: #[
    name: "Bob"
    age: 25
]

; Function calls
print "Hello, World!"
loop numbers 'x [
    print x
]

; Conditionals
if age > 18 [
    print "Adult"
]
```

### String Variations

```arturo
regular: "Regular string with escapes\n"
curly: {Curly brace string}
verbatim: {:Raw string with no \n escapes:}
safe: ««Safe string with »» inside»»
```

### Built-in Functions

```arturo
; All 400+ Arturo built-ins are recognized
print "text"
upper name
loop 1..10 'x [print x]
if true? value [do something]
```

## Development

### Grammar Structure

- `grammar.js` - The main Tree-sitter grammar definition
- `queries/highlights.scm` - Syntax highlighting queries
- `src/parser.c` - Generated parser (created by `tree-sitter generate`)
- `test/corpus/` - Test cases

### Building

```bash
# Generate the parser
npx tree-sitter generate

# Run tests
npx tree-sitter test

# Parse a file
npx tree-sitter parse examples/sample.art

# Test highlighting
npx tree-sitter highlight examples/sample.art
```

### Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## Resources

- [Arturo Language Website](https://arturo-lang.io/)
- [Arturo Documentation](https://arturo-lang.io/documentation/)
- [Arturo GitHub Repository](https://github.com/arturo-lang/arturo)
- [Tree-sitter Documentation](https://tree-sitter.github.io/tree-sitter/)
- [Arturo VSCode Extension](https://github.com/arturo-lang/vscode-extension) (TextMate grammar reference)

## Credits

This grammar was converted from the [Arturo VSCode extension](https://github.com/arturo-lang/vscode-extension)'s TextMate grammar.

## License

MIT License - see [LICENSE](LICENSE) file for details.

## Related Projects

- [Arturo](https://github.com/arturo-lang/arturo) - The Arturo programming language
- [Zed Arturo Extension](https://github.com/yourusername/zed-arturo) - Arturo support for Zed editor
