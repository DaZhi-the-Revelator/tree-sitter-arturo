; Comments
(comment) @comment
(shebang) @comment

; Keywords and Control Flow
(builtin) @function.builtin

; Constants
(boolean) @constant.builtin
(null) @constant.builtin
(number) @number

; Strings and Characters
(string) @string
(interpolated_string) @string
(template_string) @string
(char) @string.special
(code_block) @string.special

; String interpolation delimiters
(interpolation
  "|" @punctuation.special
  "|" @punctuation.special)

; Literals and Types
(literal) @constant
(type_annotation) @type

; Attributes
(attribute) @property

; Labels (for assignments and dictionary keys)
(label) @label

; Identifiers
(identifier) @variable

; Function names in function calls
(function_call
  function: (builtin) @function.builtin)

(function_call
  function: (identifier) @function)

; Assignment targets
(assignment
  name: (label) @variable.parameter)

; Dictionary keys
(dictionary
  key: (label) @property)

; Operators - only those that exist in the grammar
[
  "+"
  "-"
  "*"
  "/"
  "%"
  "^"
  "="
  "<"
  ">"
  "&"
  "|"
  "!"
  "!!"
  "~"
  "\\"
  "@"
  "#"
  "$"
  "?"
  ".."
  "..."
  "->"
  "=>"
  "==>"
  "<==>"
  "-->"
  "<-->"
  "<->"
  "::"
  "<=>"
] @operator

; Delimiters - brackets and braces
[
  "["
  "]"
  "{"
  "}"
  "#["
] @punctuation.bracket

[
  ":"
  "."
] @punctuation.delimiter

; Special symbols
[
  "'"
] @punctuation.special
