; Tags query for Arturo language
; Defines symbols for outline, breadcrumbs, and quick navigation

; Function assignments (name: function [...] or name: $[...])
(assignment
  name: (label
    identifier: (identifier) @name)
  value: (block)) @definition.function

; Variable/constant assignments
(assignment
  name: (label
    identifier: (identifier) @name)) @definition.variable
