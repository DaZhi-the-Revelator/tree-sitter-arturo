; Tags query for Arturo language
; This file defines what tree-sitter nodes should be considered symbols
; for navigation (outline, breadcrumbs, symbol search)

; Function definitions
; Pattern: name: function [params] [body] or name: $[params][body]
(assignment
  name: (label) @name
  value: (block)) @function

; All variable/constant assignments
; Pattern: name: value
(assignment
  name: (label) @name) @variable
