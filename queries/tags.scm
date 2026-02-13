; Tags query for Arturo language
; Defines symbols for outline, breadcrumbs, and quick navigation

; Function assignments (name: function [...] or name: $[...])
(assignment
  name: (label
    identifier: (_) @name)
  value: (block)) @definition.function

; Variable/constant assignments
(assignment
  name: (label
    identifier: (_) @name)) @definition.variable
