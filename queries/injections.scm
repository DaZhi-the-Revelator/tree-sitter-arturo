; Injection queries for embedded code blocks in Arturo

; CSS code blocks: {!css: ... :} or {!css ... }
((code_block) @injection.content
  (#match? @injection.content "^\\{!css")
  (#set! injection.language "css"))

; HTML code blocks: {!html: ... :} or {!html ... }
((code_block) @injection.content
  (#match? @injection.content "^\\{!html")
  (#set! injection.language "html"))

; JavaScript code blocks: {!js: ... :} or {!js ... }
((code_block) @injection.content
  (#match? @injection.content "^\\{!js")
  (#set! injection.language "javascript"))

; SQL code blocks: {!sql: ... :} or {!sql ... }
((code_block) @injection.content
  (#match? @injection.content "^\\{!sql")
  (#set! injection.language "sql"))

; Shell script code blocks: {!sh: ... :} or {!sh ... }
((code_block) @injection.content
  (#match? @injection.content "^\\{!sh")
  (#set! injection.language "bash"))

; XML code blocks: {!xml: ... :} or {!xml ... }
((code_block) @injection.content
  (#match? @injection.content "^\\{!xml")
  (#set! injection.language "xml"))

; JSON code blocks: {!json: ... :} or {!json ... }
((code_block) @injection.content
  (#match? @injection.content "^\\{!json")
  (#set! injection.language "json"))

; Markdown code blocks: {!md: ... :} or {!md ... }
((code_block) @injection.content
  (#match? @injection.content "^\\{!md")
  (#set! injection.language "markdown"))
