; Outline query for Arturo language
; Defines symbols for the outline panel, breadcrumbs, and symbol search

; Function definitions (assignments where value is a block)
; The @context capture on the block value helps Zed identify this as a function
(assignment
  name: (label
    identifier: (identifier) @name)
  value: (block) @context) @definition.function

; Variable/constant definitions (all other assignments)
(assignment
  name: (label
    identifier: (identifier) @name)
  value: (_)) @definition.constant
