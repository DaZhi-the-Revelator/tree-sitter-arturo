; Outline query for Arturo language
; Provides symbols for outline view, breadcrumbs, and symbol search

; Function definitions - assignments with block values
; Use @definition.function for proper icon inference
(assignment
  name: (label
    identifier: (identifier) @name)
  value: (block)) @definition.function

; Variable/constant definitions - all other assignments
; Use @definition.constant for proper icon inference
(assignment
  name: (label
    identifier: (identifier) @name)) @definition.constant
