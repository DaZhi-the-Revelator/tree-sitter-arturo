; Outline query for Arturo language
; Defines symbols for the outline panel, breadcrumbs, and symbol search

; Function definitions (assignments where value is a block)
; These are marked with @context to include the block indicator in the outline
(assignment
  name: (label
    identifier: (identifier) @name)
  value: (block) @context) @item

; Variable/constant definitions (non-block values)
(assignment
  name: (label
    identifier: (identifier) @name)
  value: (_)) @item
