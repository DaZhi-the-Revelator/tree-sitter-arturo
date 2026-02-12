; Tags query for Arturo language
; Defines symbols for outline, breadcrumbs, and quick navigation

; Function assignments (name: function [...] or name: $[...])
; We need to capture the label and strip the trailing colon
((assignment
  name: (label) @name
  value: (block)) @definition.function
 (#strip! @name ":$"))

; Variable/constant assignments
((assignment
  name: (label) @name) @definition.variable
 (#strip! @name ":$"))
