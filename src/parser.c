#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 194
#define LARGE_STATE_COUNT 91
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 0
#define TOKEN_COUNT 94
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 9

enum {
  sym_shebang = 1,
  sym_comment = 2,
  sym_label = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_POUND_LBRACK = 6,
  anon_sym_PLUS = 7,
  anon_sym_DASH = 8,
  anon_sym_STAR = 9,
  anon_sym_SLASH = 10,
  anon_sym_PERCENT = 11,
  anon_sym_CARET = 12,
  anon_sym_EQ = 13,
  anon_sym_LT = 14,
  anon_sym_GT = 15,
  anon_sym_LT_EQ_GT = 16,
  anon_sym_AMP = 17,
  anon_sym_PIPE = 18,
  anon_sym_DOT_DOT = 19,
  anon_sym_DOT_DOT_DOT = 20,
  anon_sym_DASH_GT = 21,
  anon_sym_EQ_GT = 22,
  anon_sym_EQ_EQ_GT = 23,
  anon_sym_LT_EQ_EQ_GT = 24,
  anon_sym_DASH_DASH_GT = 25,
  anon_sym_LT_DASH_DASH_GT = 26,
  anon_sym_LT_DASH_GT = 27,
  anon_sym_COLON_COLON = 28,
  anon_sym_BANG = 29,
  anon_sym_BANG_BANG = 30,
  anon_sym_TILDE = 31,
  anon_sym_BSLASH = 32,
  anon_sym_AT = 33,
  anon_sym_POUND = 34,
  anon_sym_DOLLAR = 35,
  anon_sym_QMARK = 36,
  anon_sym_BQUOTE = 37,
  anon_sym_SQUOTE = 38,
  aux_sym_literal_token1 = 39,
  anon_sym_COLON = 40,
  aux_sym_type_annotation_token1 = 41,
  anon_sym_DOT = 42,
  aux_sym_color_token1 = 43,
  aux_sym_unit_token1 = 44,
  sym_version = 45,
  sym_number = 46,
  anon_sym_TILDE_DQUOTE = 47,
  aux_sym_interpolated_string_token1 = 48,
  aux_sym_interpolated_string_token2 = 49,
  anon_sym_DQUOTE = 50,
  aux_sym_interpolation_token1 = 51,
  anon_sym_LT_PIPE_PIPE = 52,
  aux_sym_template_string_token1 = 53,
  anon_sym_PIPE_PIPE_GT = 54,
  aux_sym_string_token1 = 55,
  anon_sym_ = 56,
  aux_sym_string_token2 = 57,
  anon_sym_2 = 58,
  anon_sym_LBRACE_COLON = 59,
  aux_sym_string_token3 = 60,
  anon_sym_COLON_RBRACE = 61,
  anon_sym_LBRACE = 62,
  aux_sym_string_token4 = 63,
  anon_sym_RBRACE = 64,
  anon_sym_LBRACE_BANGhtml_COLON = 65,
  anon_sym_LBRACE_BANGcss_COLON = 66,
  anon_sym_LBRACE_BANGmd_COLON = 67,
  anon_sym_LBRACE_BANGjs_COLON = 68,
  anon_sym_LBRACE_BANGsql_COLON = 69,
  anon_sym_LBRACE_BANGsh_COLON = 70,
  anon_sym_LBRACE_BANGxml_COLON = 71,
  anon_sym_LBRACE_BANGjson_COLON = 72,
  anon_sym_LBRACE_BANGhtml = 73,
  anon_sym_LBRACE_BANGcss = 74,
  anon_sym_LBRACE_BANGmd = 75,
  anon_sym_LBRACE_BANGjs = 76,
  anon_sym_LBRACE_BANGsql = 77,
  anon_sym_LBRACE_BANGsh = 78,
  anon_sym_LBRACE_BANGxml = 79,
  anon_sym_LBRACE_BANGjson = 80,
  aux_sym_string_token5 = 81,
  anon_sym_3 = 82,
  aux_sym_string_token6 = 83,
  anon_sym_LBRACE_SLASH = 84,
  aux_sym_string_token7 = 85,
  anon_sym_SLASH_RBRACE = 86,
  aux_sym_string_token8 = 87,
  sym_char = 88,
  anon_sym_true = 89,
  anon_sym_false = 90,
  anon_sym_maybe = 91,
  sym_null = 92,
  sym_builtin = 93,
  sym_source_file = 94,
  sym__statement = 95,
  sym_assignment = 96,
  sym_block = 97,
  sym_dictionary = 98,
  sym_function_call = 99,
  sym__expression = 100,
  sym_binary_expression = 101,
  sym_unary_expression = 102,
  sym_literal = 103,
  sym_type_annotation = 104,
  sym_attribute = 105,
  sym_color = 106,
  sym_unit = 107,
  sym_interpolated_string = 108,
  sym_interpolation = 109,
  sym_template_string = 110,
  sym_string = 111,
  sym_boolean = 112,
  sym_identifier = 113,
  aux_sym_source_file_repeat1 = 114,
  aux_sym_dictionary_repeat1 = 115,
  aux_sym_function_call_repeat1 = 116,
  aux_sym_interpolated_string_repeat1 = 117,
  aux_sym_template_string_repeat1 = 118,
  aux_sym_string_repeat1 = 119,
  aux_sym_string_repeat2 = 120,
  aux_sym_string_repeat3 = 121,
  aux_sym_string_repeat4 = 122,
  aux_sym_string_repeat5 = 123,
  aux_sym_string_repeat6 = 124,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_shebang] = "shebang",
  [sym_comment] = "comment",
  [sym_label] = "label",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUND_LBRACK] = "#[",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_EQ_EQ_GT] = "==>",
  [anon_sym_LT_EQ_EQ_GT] = "<==>",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_LT_DASH_DASH_GT] = "<-->",
  [anon_sym_LT_DASH_GT] = "<->",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_BANG] = "!",
  [anon_sym_BANG_BANG] = "!!",
  [anon_sym_TILDE] = "~",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_AT] = "@",
  [anon_sym_POUND] = "#",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_literal_token1] = "literal_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_type_annotation_token1] = "type_annotation_token1",
  [anon_sym_DOT] = ".",
  [aux_sym_color_token1] = "color_token1",
  [aux_sym_unit_token1] = "unit_token1",
  [sym_version] = "version",
  [sym_number] = "number",
  [anon_sym_TILDE_DQUOTE] = "~\"",
  [aux_sym_interpolated_string_token1] = "interpolated_string_token1",
  [aux_sym_interpolated_string_token2] = "interpolated_string_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_interpolation_token1] = "interpolation_token1",
  [anon_sym_LT_PIPE_PIPE] = "<||",
  [aux_sym_template_string_token1] = "template_string_token1",
  [anon_sym_PIPE_PIPE_GT] = "||>",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_] = "««",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_2] = "»»",
  [anon_sym_LBRACE_COLON] = "{:",
  [aux_sym_string_token3] = "string_token3",
  [anon_sym_COLON_RBRACE] = ":}",
  [anon_sym_LBRACE] = "{",
  [aux_sym_string_token4] = "string_token4",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_BANGhtml_COLON] = "{!html:",
  [anon_sym_LBRACE_BANGcss_COLON] = "{!css:",
  [anon_sym_LBRACE_BANGmd_COLON] = "{!md:",
  [anon_sym_LBRACE_BANGjs_COLON] = "{!js:",
  [anon_sym_LBRACE_BANGsql_COLON] = "{!sql:",
  [anon_sym_LBRACE_BANGsh_COLON] = "{!sh:",
  [anon_sym_LBRACE_BANGxml_COLON] = "{!xml:",
  [anon_sym_LBRACE_BANGjson_COLON] = "{!json:",
  [anon_sym_LBRACE_BANGhtml] = "{!html",
  [anon_sym_LBRACE_BANGcss] = "{!css",
  [anon_sym_LBRACE_BANGmd] = "{!md",
  [anon_sym_LBRACE_BANGjs] = "{!js",
  [anon_sym_LBRACE_BANGsql] = "{!sql",
  [anon_sym_LBRACE_BANGsh] = "{!sh",
  [anon_sym_LBRACE_BANGxml] = "{!xml",
  [anon_sym_LBRACE_BANGjson] = "{!json",
  [aux_sym_string_token5] = "string_token5",
  [anon_sym_3] = "«",
  [aux_sym_string_token6] = "string_token6",
  [anon_sym_LBRACE_SLASH] = "{/",
  [aux_sym_string_token7] = "string_token7",
  [anon_sym_SLASH_RBRACE] = "/}",
  [aux_sym_string_token8] = "string_token8",
  [sym_char] = "char",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_maybe] = "maybe",
  [sym_null] = "null",
  [sym_builtin] = "builtin",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_assignment] = "assignment",
  [sym_block] = "block",
  [sym_dictionary] = "dictionary",
  [sym_function_call] = "function_call",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_literal] = "literal",
  [sym_type_annotation] = "type_annotation",
  [sym_attribute] = "attribute",
  [sym_color] = "color",
  [sym_unit] = "unit",
  [sym_interpolated_string] = "interpolated_string",
  [sym_interpolation] = "interpolation",
  [sym_template_string] = "template_string",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_interpolated_string_repeat1] = "interpolated_string_repeat1",
  [aux_sym_template_string_repeat1] = "template_string_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_repeat3] = "string_repeat3",
  [aux_sym_string_repeat4] = "string_repeat4",
  [aux_sym_string_repeat5] = "string_repeat5",
  [aux_sym_string_repeat6] = "string_repeat6",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_shebang] = sym_shebang,
  [sym_comment] = sym_comment,
  [sym_label] = sym_label,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_EQ_EQ_GT] = anon_sym_EQ_EQ_GT,
  [anon_sym_LT_EQ_EQ_GT] = anon_sym_LT_EQ_EQ_GT,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_LT_DASH_DASH_GT] = anon_sym_LT_DASH_DASH_GT,
  [anon_sym_LT_DASH_GT] = anon_sym_LT_DASH_GT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_BANG_BANG] = anon_sym_BANG_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_type_annotation_token1] = aux_sym_type_annotation_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_color_token1] = aux_sym_color_token1,
  [aux_sym_unit_token1] = aux_sym_unit_token1,
  [sym_version] = sym_version,
  [sym_number] = sym_number,
  [anon_sym_TILDE_DQUOTE] = anon_sym_TILDE_DQUOTE,
  [aux_sym_interpolated_string_token1] = aux_sym_interpolated_string_token1,
  [aux_sym_interpolated_string_token2] = aux_sym_interpolated_string_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_interpolation_token1] = aux_sym_interpolation_token1,
  [anon_sym_LT_PIPE_PIPE] = anon_sym_LT_PIPE_PIPE,
  [aux_sym_template_string_token1] = aux_sym_template_string_token1,
  [anon_sym_PIPE_PIPE_GT] = anon_sym_PIPE_PIPE_GT,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_] = anon_sym_,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_LBRACE_COLON] = anon_sym_LBRACE_COLON,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [anon_sym_COLON_RBRACE] = anon_sym_COLON_RBRACE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_string_token4] = aux_sym_string_token4,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_BANGhtml_COLON] = anon_sym_LBRACE_BANGhtml_COLON,
  [anon_sym_LBRACE_BANGcss_COLON] = anon_sym_LBRACE_BANGcss_COLON,
  [anon_sym_LBRACE_BANGmd_COLON] = anon_sym_LBRACE_BANGmd_COLON,
  [anon_sym_LBRACE_BANGjs_COLON] = anon_sym_LBRACE_BANGjs_COLON,
  [anon_sym_LBRACE_BANGsql_COLON] = anon_sym_LBRACE_BANGsql_COLON,
  [anon_sym_LBRACE_BANGsh_COLON] = anon_sym_LBRACE_BANGsh_COLON,
  [anon_sym_LBRACE_BANGxml_COLON] = anon_sym_LBRACE_BANGxml_COLON,
  [anon_sym_LBRACE_BANGjson_COLON] = anon_sym_LBRACE_BANGjson_COLON,
  [anon_sym_LBRACE_BANGhtml] = anon_sym_LBRACE_BANGhtml,
  [anon_sym_LBRACE_BANGcss] = anon_sym_LBRACE_BANGcss,
  [anon_sym_LBRACE_BANGmd] = anon_sym_LBRACE_BANGmd,
  [anon_sym_LBRACE_BANGjs] = anon_sym_LBRACE_BANGjs,
  [anon_sym_LBRACE_BANGsql] = anon_sym_LBRACE_BANGsql,
  [anon_sym_LBRACE_BANGsh] = anon_sym_LBRACE_BANGsh,
  [anon_sym_LBRACE_BANGxml] = anon_sym_LBRACE_BANGxml,
  [anon_sym_LBRACE_BANGjson] = anon_sym_LBRACE_BANGjson,
  [aux_sym_string_token5] = aux_sym_string_token5,
  [anon_sym_3] = anon_sym_3,
  [aux_sym_string_token6] = aux_sym_string_token6,
  [anon_sym_LBRACE_SLASH] = anon_sym_LBRACE_SLASH,
  [aux_sym_string_token7] = aux_sym_string_token7,
  [anon_sym_SLASH_RBRACE] = anon_sym_SLASH_RBRACE,
  [aux_sym_string_token8] = aux_sym_string_token8,
  [sym_char] = sym_char,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_maybe] = anon_sym_maybe,
  [sym_null] = sym_null,
  [sym_builtin] = sym_builtin,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_assignment] = sym_assignment,
  [sym_block] = sym_block,
  [sym_dictionary] = sym_dictionary,
  [sym_function_call] = sym_function_call,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_literal] = sym_literal,
  [sym_type_annotation] = sym_type_annotation,
  [sym_attribute] = sym_attribute,
  [sym_color] = sym_color,
  [sym_unit] = sym_unit,
  [sym_interpolated_string] = sym_interpolated_string,
  [sym_interpolation] = sym_interpolation,
  [sym_template_string] = sym_template_string,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_dictionary_repeat1] = aux_sym_dictionary_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_interpolated_string_repeat1] = aux_sym_interpolated_string_repeat1,
  [aux_sym_template_string_repeat1] = aux_sym_template_string_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_string_repeat3] = aux_sym_string_repeat3,
  [aux_sym_string_repeat4] = aux_sym_string_repeat4,
  [aux_sym_string_repeat5] = aux_sym_string_repeat5,
  [aux_sym_string_repeat6] = aux_sym_string_repeat6,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_annotation_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unit_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpolated_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolated_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpolation_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_template_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANGhtml_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANGcss_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANGmd_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANGjs_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANGsql_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANGsh_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANGxml_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANGjson_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANGhtml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANGcss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANGmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANGjs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANGsql] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANGsh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANGxml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANGjson] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token8] = {
    .visible = false,
    .named = false,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maybe] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolated_string] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_template_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolated_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat6] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_function = 2,
  field_key = 3,
  field_name = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_function] = "function",
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 4},
  [8] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_value, 1},
  [2] =
    {field_key, 0},
  [3] =
    {field_argument, 0},
  [4] =
    {field_argument, 1, .inherited = true},
    {field_function, 0},
  [6] =
    {field_key, 0},
    {field_value, 1},
  [8] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [10] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [14] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 7,
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 17,
  [22] = 22,
  [23] = 5,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 24,
  [29] = 18,
  [30] = 30,
  [31] = 31,
  [32] = 6,
  [33] = 20,
  [34] = 27,
  [35] = 8,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 4,
  [41] = 38,
  [42] = 30,
  [43] = 31,
  [44] = 10,
  [45] = 37,
  [46] = 19,
  [47] = 12,
  [48] = 11,
  [49] = 36,
  [50] = 22,
  [51] = 14,
  [52] = 9,
  [53] = 39,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 56,
  [58] = 58,
  [59] = 55,
  [60] = 54,
  [61] = 56,
  [62] = 54,
  [63] = 63,
  [64] = 64,
  [65] = 63,
  [66] = 64,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 68,
  [71] = 69,
  [72] = 69,
  [73] = 68,
  [74] = 74,
  [75] = 75,
  [76] = 75,
  [77] = 77,
  [78] = 78,
  [79] = 78,
  [80] = 80,
  [81] = 75,
  [82] = 82,
  [83] = 80,
  [84] = 74,
  [85] = 78,
  [86] = 77,
  [87] = 82,
  [88] = 74,
  [89] = 80,
  [90] = 77,
  [91] = 14,
  [92] = 17,
  [93] = 27,
  [94] = 37,
  [95] = 10,
  [96] = 30,
  [97] = 4,
  [98] = 98,
  [99] = 38,
  [100] = 31,
  [101] = 36,
  [102] = 9,
  [103] = 14,
  [104] = 20,
  [105] = 19,
  [106] = 18,
  [107] = 6,
  [108] = 13,
  [109] = 7,
  [110] = 8,
  [111] = 12,
  [112] = 11,
  [113] = 22,
  [114] = 39,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 115,
  [119] = 116,
  [120] = 115,
  [121] = 116,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 124,
  [126] = 123,
  [127] = 123,
  [128] = 124,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 131,
  [136] = 132,
  [137] = 134,
  [138] = 138,
  [139] = 134,
  [140] = 132,
  [141] = 131,
  [142] = 129,
  [143] = 129,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 148,
  [155] = 155,
  [156] = 151,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 145,
  [162] = 155,
  [163] = 158,
  [164] = 160,
  [165] = 150,
  [166] = 148,
  [167] = 160,
  [168] = 144,
  [169] = 158,
  [170] = 155,
  [171] = 145,
  [172] = 152,
  [173] = 153,
  [174] = 150,
  [175] = 144,
  [176] = 152,
  [177] = 153,
  [178] = 151,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 182,
  [186] = 180,
  [187] = 183,
  [188] = 181,
  [189] = 181,
  [190] = 190,
  [191] = 183,
  [192] = 180,
  [193] = 182,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '$') ADVANCE(108);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(87);
      if (lookahead == '?') ADVANCE(109);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == ']') ADVANCE(74);
      if (lookahead == '^') ADVANCE(83);
      if (lookahead == '`') ADVANCE(110);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 'g') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'm') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(178);
      if (lookahead == 'y') ADVANCE(174);
      if (lookahead == '{') ADVANCE(385);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '~') ADVANCE(103);
      if (lookahead == 171) ADVANCE(409);
      if (lookahead == 187) ADVANCE(47);
      if (lookahead == 'd' ||
          lookahead == 'e') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(223);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (('G' <= lookahead && lookahead <= '_')) ADVANCE(225);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '$') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '?') ADVANCE(109);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == ']') ADVANCE(74);
      if (lookahead == '`') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '{') ADVANCE(385);
      if (lookahead == '~') ADVANCE(103);
      if (lookahead == 171) ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(277);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '$') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '?') ADVANCE(109);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '`') ADVANCE(110);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == 'b') ADVANCE(318);
      if (lookahead == 'c') ADVANCE(354);
      if (lookahead == 'f') ADVANCE(280);
      if (lookahead == 'g') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead == 'm') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(308);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == 'w') ADVANCE(306);
      if (lookahead == 'y') ADVANCE(302);
      if (lookahead == '{') ADVANCE(385);
      if (lookahead == '~') ADVANCE(103);
      if (lookahead == 171) ADVANCE(409);
      if (lookahead == 'd' ||
          lookahead == 'e') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(366);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(368);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '$') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '?') ADVANCE(109);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '`') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == '{') ADVANCE(385);
      if (lookahead == '~') ADVANCE(103);
      if (lookahead == 171) ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(242);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '$') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '?') ADVANCE(109);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '`') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(278);
      if (lookahead == 'm') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead == 't') ADVANCE(339);
      if (lookahead == '{') ADVANCE(385);
      if (lookahead == '~') ADVANCE(103);
      if (lookahead == 171) ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(368);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == ';') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(87);
      if (lookahead == ']') ADVANCE(74);
      if (lookahead == '^') ADVANCE(83);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(417);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(91);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(407);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(406);
      if (lookahead != 0) ADVANCE(408);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(382);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 17:
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 18:
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 19:
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 20:
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == 187) ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 21:
      if (lookahead == ';') ADVANCE(68);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 22:
      if (lookahead == ';') ADVANCE(70);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(386);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(88);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(95);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(98);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(373);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'h') ADVANCE(41);
      if (lookahead == 'j') ADVANCE(38);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'q') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(403);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(400);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(398);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == '|') ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == '|') ADVANCE(369);
      END_STATE();
    case 44:
      if (lookahead == '|') ADVANCE(28);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 45:
      if (lookahead == '}') ADVANCE(416);
      END_STATE();
    case 46:
      if (lookahead == '}') ADVANCE(384);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 47:
      if (lookahead == 187) ADVANCE(379);
      END_STATE();
    case 48:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 49:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 50:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 51:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 58:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 59:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(257);
      END_STATE();
    case 60:
      if (eof) ADVANCE(62);
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '$') ADVANCE(108);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(87);
      if (lookahead == '?') ADVANCE(109);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == ']') ADVANCE(74);
      if (lookahead == '^') ADVANCE(83);
      if (lookahead == '`') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '{') ADVANCE(385);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(388);
      if (lookahead == '~') ADVANCE(103);
      if (lookahead == 171) ADVANCE(409);
      if (lookahead == 187) ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= '_')) ADVANCE(277);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '$') ADVANCE(108);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(87);
      if (lookahead == '?') ADVANCE(109);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == ']') ADVANCE(74);
      if (lookahead == '^') ADVANCE(83);
      if (lookahead == '`') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '{') ADVANCE(385);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '~') ADVANCE(103);
      if (lookahead == 171) ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= '_')) ADVANCE(277);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == '|') ADVANCE(71);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(71);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ':' ||
          lookahead == '}') ADVANCE(71);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(378);
      if (lookahead == 187) ADVANCE(71);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(387);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '}') ADVANCE(416);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '|') ADVANCE(43);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_GT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT_EQ_EQ_GT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '"') ADVANCE(254);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(63);
      if (lookahead == '[') ADVANCE(75);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '[') ADVANCE(75);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(418);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == ':') ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '?') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(100);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '}') ADVANCE(384);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(91);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '_') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '_') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(361);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '_') ADVANCE(225);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(163);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '_') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '_') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '_') ADVANCE(225);
      if (lookahead == 'q') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '_') ADVANCE(225);
      if (lookahead == 'y') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '_') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '_') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '_') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(125);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '_') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '_') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '_') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '_') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'b') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'c') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'c') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'd') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'y') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'g') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'g') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == 'y') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'h') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'h') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'k') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == 'r') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'p') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 's') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 's') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 't') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'v') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'v') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'v') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'w') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'w') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'y') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'b') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 's') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'y') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_TILDE_DQUOTE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead == ';') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token2);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'b') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == 'y') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'u') ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'u') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'u') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'b') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == 'y') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'g') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'g') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead == 'y') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'h') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'h') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == 'u') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'k') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(340);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(359);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'm') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'p') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'q') ADVANCE(346);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(359);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'v') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'v') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'v') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'w') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'w') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'y') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'y') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'y') ADVANCE(286);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(359);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(359);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(360);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_LT_PIPE_PIPE);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_template_string_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_template_string_token1);
      if (lookahead == ';') ADVANCE(68);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_template_string_token1);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_GT);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != 187) ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != 187) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_LBRACE_COLON);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(382);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_COLON_RBRACE);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == ':') ADVANCE(380);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == ';') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANGhtml_COLON);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANGcss_COLON);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANGmd_COLON);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANGjs_COLON);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANGsql_COLON);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANGsh_COLON);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANGxml_COLON);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANGjson_COLON);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANGhtml);
      if (lookahead == ':') ADVANCE(389);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANGcss);
      if (lookahead == ':') ADVANCE(390);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANGmd);
      if (lookahead == ':') ADVANCE(391);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANGjs);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANGsql);
      if (lookahead == ':') ADVANCE(393);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANGsh);
      if (lookahead == ':') ADVANCE(394);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANGxml);
      if (lookahead == ':') ADVANCE(395);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANGjson);
      if (lookahead == ':') ADVANCE(396);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_string_token5);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_string_token5);
      if (lookahead == ':') ADVANCE(407);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_string_token5);
      if (lookahead == '}') ADVANCE(384);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_string_token5);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_3);
      if (lookahead == 171) ADVANCE(376);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_string_token6);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_string_token6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_LBRACE_SLASH);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_string_token7);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_string_token7);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(413);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_string_token7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(413);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_SLASH_RBRACE);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_string_token8);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_maybe);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_maybe);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_maybe);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_maybe);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '?') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 61},
  [3] = {.lex_state = 61},
  [4] = {.lex_state = 61},
  [5] = {.lex_state = 61},
  [6] = {.lex_state = 61},
  [7] = {.lex_state = 61},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 61},
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 61},
  [14] = {.lex_state = 61},
  [15] = {.lex_state = 61},
  [16] = {.lex_state = 61},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 61},
  [19] = {.lex_state = 61},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 61},
  [25] = {.lex_state = 61},
  [26] = {.lex_state = 61},
  [27] = {.lex_state = 61},
  [28] = {.lex_state = 61},
  [29] = {.lex_state = 61},
  [30] = {.lex_state = 61},
  [31] = {.lex_state = 61},
  [32] = {.lex_state = 61},
  [33] = {.lex_state = 61},
  [34] = {.lex_state = 61},
  [35] = {.lex_state = 61},
  [36] = {.lex_state = 61},
  [37] = {.lex_state = 61},
  [38] = {.lex_state = 61},
  [39] = {.lex_state = 61},
  [40] = {.lex_state = 61},
  [41] = {.lex_state = 61},
  [42] = {.lex_state = 61},
  [43] = {.lex_state = 61},
  [44] = {.lex_state = 61},
  [45] = {.lex_state = 61},
  [46] = {.lex_state = 61},
  [47] = {.lex_state = 61},
  [48] = {.lex_state = 61},
  [49] = {.lex_state = 61},
  [50] = {.lex_state = 61},
  [51] = {.lex_state = 61},
  [52] = {.lex_state = 61},
  [53] = {.lex_state = 61},
  [54] = {.lex_state = 61},
  [55] = {.lex_state = 61},
  [56] = {.lex_state = 61},
  [57] = {.lex_state = 61},
  [58] = {.lex_state = 61},
  [59] = {.lex_state = 61},
  [60] = {.lex_state = 61},
  [61] = {.lex_state = 61},
  [62] = {.lex_state = 61},
  [63] = {.lex_state = 61},
  [64] = {.lex_state = 61},
  [65] = {.lex_state = 61},
  [66] = {.lex_state = 61},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 15},
  [131] = {.lex_state = 15},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 15},
  [135] = {.lex_state = 15},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 15},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 15},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 20},
  [145] = {.lex_state = 21},
  [146] = {.lex_state = 20},
  [147] = {.lex_state = 16},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 22},
  [150] = {.lex_state = 21},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 16},
  [153] = {.lex_state = 22},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 20},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 21},
  [158] = {.lex_state = 16},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 22},
  [161] = {.lex_state = 21},
  [162] = {.lex_state = 20},
  [163] = {.lex_state = 16},
  [164] = {.lex_state = 22},
  [165] = {.lex_state = 21},
  [166] = {.lex_state = 13},
  [167] = {.lex_state = 22},
  [168] = {.lex_state = 20},
  [169] = {.lex_state = 16},
  [170] = {.lex_state = 20},
  [171] = {.lex_state = 21},
  [172] = {.lex_state = 16},
  [173] = {.lex_state = 22},
  [174] = {.lex_state = 21},
  [175] = {.lex_state = 20},
  [176] = {.lex_state = 16},
  [177] = {.lex_state = 22},
  [178] = {.lex_state = 13},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 17},
  [181] = {.lex_state = 17},
  [182] = {.lex_state = 410},
  [183] = {.lex_state = 18},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 410},
  [186] = {.lex_state = 17},
  [187] = {.lex_state = 18},
  [188] = {.lex_state = 17},
  [189] = {.lex_state = 17},
  [190] = {.lex_state = 19},
  [191] = {.lex_state = 18},
  [192] = {.lex_state = 17},
  [193] = {.lex_state = 410},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_BANG_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_color_token1] = ACTIONS(1),
    [aux_sym_unit_token1] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_interpolation_token1] = ACTIONS(1),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_LBRACE_COLON] = ACTIONS(1),
    [anon_sym_COLON_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(1),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(1),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(1),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(1),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(1),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(1),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(1),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(1),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(1),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(1),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(1),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(1),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(1),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(1),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(1),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_LBRACE_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_RBRACE] = ACTIONS(1),
    [aux_sym_string_token8] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_maybe] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_builtin] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(184),
    [sym__statement] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym_block] = STATE(24),
    [sym_dictionary] = STATE(24),
    [sym_function_call] = STATE(58),
    [sym__expression] = STATE(24),
    [sym_binary_expression] = STATE(24),
    [sym_unary_expression] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_type_annotation] = STATE(24),
    [sym_attribute] = STATE(24),
    [sym_color] = STATE(24),
    [sym_unit] = STATE(24),
    [sym_interpolated_string] = STATE(24),
    [sym_template_string] = STATE(24),
    [sym_string] = STATE(24),
    [sym_boolean] = STATE(24),
    [sym_identifier] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_shebang] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_label] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_BANG_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [sym_version] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [aux_sym_interpolation_token1] = ACTIONS(35),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_LBRACE_COLON] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(47),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(47),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(47),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_LBRACE_SLASH] = ACTIONS(51),
    [aux_sym_string_token8] = ACTIONS(53),
    [sym_char] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_maybe] = ACTIONS(57),
    [sym_null] = ACTIONS(29),
    [sym_builtin] = ACTIONS(59),
  },
  [2] = {
    [sym_block] = STATE(23),
    [sym_dictionary] = STATE(23),
    [sym__expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_unary_expression] = STATE(23),
    [sym_literal] = STATE(23),
    [sym_type_annotation] = STATE(23),
    [sym_attribute] = STATE(23),
    [sym_color] = STATE(23),
    [sym_unit] = STATE(23),
    [sym_interpolated_string] = STATE(23),
    [sym_template_string] = STATE(23),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_identifier] = STATE(23),
    [aux_sym_function_call_repeat1] = STATE(65),
    [sym_shebang] = ACTIONS(61),
    [sym_comment] = ACTIONS(61),
    [sym_label] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(61),
    [anon_sym_POUND_LBRACK] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_EQ_GT] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_DOT_DOT] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_EQ_GT] = ACTIONS(61),
    [anon_sym_EQ_EQ_GT] = ACTIONS(61),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(61),
    [anon_sym_DASH_DASH_GT] = ACTIONS(61),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(61),
    [anon_sym_LT_DASH_GT] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_BANG_BANG] = ACTIONS(74),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(74),
    [anon_sym_AT] = ACTIONS(74),
    [anon_sym_POUND] = ACTIONS(77),
    [anon_sym_DOLLAR] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(74),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(89),
    [sym_version] = ACTIONS(92),
    [sym_number] = ACTIONS(92),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [aux_sym_interpolation_token1] = ACTIONS(101),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(104),
    [anon_sym_] = ACTIONS(107),
    [anon_sym_LBRACE_COLON] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(116),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(116),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(116),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(116),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(116),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(116),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(116),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(116),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(119),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(119),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(119),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(119),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(119),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(119),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(119),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(119),
    [anon_sym_3] = ACTIONS(122),
    [anon_sym_LBRACE_SLASH] = ACTIONS(125),
    [aux_sym_string_token8] = ACTIONS(128),
    [sym_char] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(134),
    [anon_sym_false] = ACTIONS(134),
    [anon_sym_maybe] = ACTIONS(134),
    [sym_null] = ACTIONS(92),
    [sym_builtin] = ACTIONS(92),
  },
  [3] = {
    [sym_block] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym__expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_unary_expression] = STATE(5),
    [sym_literal] = STATE(5),
    [sym_type_annotation] = STATE(5),
    [sym_attribute] = STATE(5),
    [sym_color] = STATE(5),
    [sym_unit] = STATE(5),
    [sym_interpolated_string] = STATE(5),
    [sym_template_string] = STATE(5),
    [sym_string] = STATE(5),
    [sym_boolean] = STATE(5),
    [sym_identifier] = STATE(5),
    [aux_sym_function_call_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_shebang] = ACTIONS(61),
    [sym_comment] = ACTIONS(61),
    [sym_label] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_POUND_LBRACK] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_EQ_GT] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_DOT_DOT] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_EQ_GT] = ACTIONS(61),
    [anon_sym_EQ_EQ_GT] = ACTIONS(61),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(61),
    [anon_sym_DASH_DASH_GT] = ACTIONS(61),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(61),
    [anon_sym_LT_DASH_GT] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(143),
    [anon_sym_BANG_BANG] = ACTIONS(146),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_BSLASH] = ACTIONS(146),
    [anon_sym_AT] = ACTIONS(146),
    [anon_sym_POUND] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(146),
    [anon_sym_QMARK] = ACTIONS(146),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(158),
    [anon_sym_DOT] = ACTIONS(161),
    [sym_version] = ACTIONS(164),
    [sym_number] = ACTIONS(164),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [aux_sym_interpolation_token1] = ACTIONS(173),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(176),
    [anon_sym_] = ACTIONS(179),
    [anon_sym_LBRACE_COLON] = ACTIONS(182),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(188),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(188),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(188),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(188),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(188),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(188),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(188),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(188),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(191),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(191),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(191),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(191),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(191),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(191),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(191),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(191),
    [anon_sym_3] = ACTIONS(194),
    [anon_sym_LBRACE_SLASH] = ACTIONS(197),
    [aux_sym_string_token8] = ACTIONS(200),
    [sym_char] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(206),
    [anon_sym_false] = ACTIONS(206),
    [anon_sym_maybe] = ACTIONS(206),
    [sym_null] = ACTIONS(164),
    [sym_builtin] = ACTIONS(164),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_shebang] = ACTIONS(209),
    [sym_comment] = ACTIONS(209),
    [sym_label] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_POUND_LBRACK] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_LT_EQ_GT] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_DOT_DOT] = ACTIONS(211),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(209),
    [anon_sym_DASH_GT] = ACTIONS(209),
    [anon_sym_EQ_GT] = ACTIONS(209),
    [anon_sym_EQ_EQ_GT] = ACTIONS(209),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(209),
    [anon_sym_DASH_DASH_GT] = ACTIONS(209),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(209),
    [anon_sym_LT_DASH_GT] = ACTIONS(209),
    [anon_sym_COLON_COLON] = ACTIONS(209),
    [anon_sym_BANG] = ACTIONS(211),
    [anon_sym_BANG_BANG] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(211),
    [anon_sym_BSLASH] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(209),
    [anon_sym_POUND] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(209),
    [anon_sym_QMARK] = ACTIONS(209),
    [anon_sym_BQUOTE] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(211),
    [sym_version] = ACTIONS(211),
    [sym_number] = ACTIONS(211),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [aux_sym_interpolation_token1] = ACTIONS(211),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_] = ACTIONS(209),
    [anon_sym_LBRACE_COLON] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(209),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(209),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(209),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(209),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(209),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(209),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(209),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(209),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(211),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(211),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(211),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(211),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(211),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(211),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(211),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(211),
    [anon_sym_3] = ACTIONS(211),
    [anon_sym_LBRACE_SLASH] = ACTIONS(209),
    [aux_sym_string_token8] = ACTIONS(209),
    [sym_char] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(211),
    [anon_sym_false] = ACTIONS(211),
    [anon_sym_maybe] = ACTIONS(211),
    [sym_null] = ACTIONS(211),
    [sym_builtin] = ACTIONS(211),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_shebang] = ACTIONS(213),
    [sym_comment] = ACTIONS(213),
    [sym_label] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_POUND_LBRACK] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_PERCENT] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_LT_EQ_GT] = ACTIONS(225),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_DOT_DOT] = ACTIONS(223),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(225),
    [anon_sym_DASH_GT] = ACTIONS(225),
    [anon_sym_EQ_GT] = ACTIONS(225),
    [anon_sym_EQ_EQ_GT] = ACTIONS(225),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(225),
    [anon_sym_DASH_DASH_GT] = ACTIONS(225),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(225),
    [anon_sym_LT_DASH_GT] = ACTIONS(225),
    [anon_sym_COLON_COLON] = ACTIONS(225),
    [anon_sym_BANG] = ACTIONS(227),
    [anon_sym_BANG_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(227),
    [anon_sym_BSLASH] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(213),
    [anon_sym_POUND] = ACTIONS(227),
    [anon_sym_DOLLAR] = ACTIONS(213),
    [anon_sym_QMARK] = ACTIONS(213),
    [anon_sym_BQUOTE] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(227),
    [sym_version] = ACTIONS(227),
    [sym_number] = ACTIONS(227),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [aux_sym_interpolation_token1] = ACTIONS(227),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(213),
    [anon_sym_] = ACTIONS(213),
    [anon_sym_LBRACE_COLON] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(213),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(213),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(213),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(213),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(213),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(213),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(213),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(213),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(227),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(227),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(227),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(227),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(227),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(227),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(227),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(227),
    [anon_sym_3] = ACTIONS(227),
    [anon_sym_LBRACE_SLASH] = ACTIONS(213),
    [aux_sym_string_token8] = ACTIONS(213),
    [sym_char] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(227),
    [anon_sym_false] = ACTIONS(227),
    [anon_sym_maybe] = ACTIONS(227),
    [sym_null] = ACTIONS(227),
    [sym_builtin] = ACTIONS(227),
  },
  [6] = {
    [sym_shebang] = ACTIONS(229),
    [sym_comment] = ACTIONS(229),
    [sym_label] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(229),
    [anon_sym_POUND_LBRACK] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(229),
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_LT_EQ_GT] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(229),
    [anon_sym_DOT_DOT] = ACTIONS(231),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(229),
    [anon_sym_DASH_GT] = ACTIONS(229),
    [anon_sym_EQ_GT] = ACTIONS(229),
    [anon_sym_EQ_EQ_GT] = ACTIONS(229),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(229),
    [anon_sym_DASH_DASH_GT] = ACTIONS(229),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(229),
    [anon_sym_LT_DASH_GT] = ACTIONS(229),
    [anon_sym_COLON_COLON] = ACTIONS(229),
    [anon_sym_BANG] = ACTIONS(231),
    [anon_sym_BANG_BANG] = ACTIONS(229),
    [anon_sym_TILDE] = ACTIONS(231),
    [anon_sym_BSLASH] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(231),
    [anon_sym_DOLLAR] = ACTIONS(229),
    [anon_sym_QMARK] = ACTIONS(229),
    [anon_sym_BQUOTE] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [anon_sym_COLON] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(231),
    [sym_version] = ACTIONS(231),
    [sym_number] = ACTIONS(231),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [aux_sym_interpolation_token1] = ACTIONS(231),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(229),
    [anon_sym_] = ACTIONS(229),
    [anon_sym_LBRACE_COLON] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(229),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(229),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(229),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(229),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(229),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(229),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(229),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(229),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(231),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(231),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(231),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(231),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(231),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(231),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(231),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(231),
    [anon_sym_3] = ACTIONS(231),
    [anon_sym_LBRACE_SLASH] = ACTIONS(229),
    [aux_sym_string_token8] = ACTIONS(229),
    [sym_char] = ACTIONS(229),
    [anon_sym_true] = ACTIONS(231),
    [anon_sym_false] = ACTIONS(231),
    [anon_sym_maybe] = ACTIONS(231),
    [sym_null] = ACTIONS(231),
    [sym_builtin] = ACTIONS(231),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [sym_shebang] = ACTIONS(233),
    [sym_comment] = ACTIONS(233),
    [sym_label] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_POUND_LBRACK] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_LT_EQ_GT] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_DOT_DOT] = ACTIONS(235),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(233),
    [anon_sym_DASH_GT] = ACTIONS(233),
    [anon_sym_EQ_GT] = ACTIONS(233),
    [anon_sym_EQ_EQ_GT] = ACTIONS(233),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(233),
    [anon_sym_DASH_DASH_GT] = ACTIONS(233),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(233),
    [anon_sym_LT_DASH_GT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(235),
    [anon_sym_BANG_BANG] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(235),
    [anon_sym_BSLASH] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_POUND] = ACTIONS(235),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [anon_sym_QMARK] = ACTIONS(233),
    [anon_sym_BQUOTE] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
    [sym_version] = ACTIONS(235),
    [sym_number] = ACTIONS(235),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [aux_sym_interpolation_token1] = ACTIONS(235),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_] = ACTIONS(233),
    [anon_sym_LBRACE_COLON] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(235),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(233),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(233),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(233),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(233),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(233),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(233),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(233),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(233),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(235),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(235),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(235),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(235),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(235),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(235),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(235),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(235),
    [anon_sym_3] = ACTIONS(235),
    [anon_sym_LBRACE_SLASH] = ACTIONS(233),
    [aux_sym_string_token8] = ACTIONS(233),
    [sym_char] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_false] = ACTIONS(235),
    [anon_sym_maybe] = ACTIONS(235),
    [sym_null] = ACTIONS(235),
    [sym_builtin] = ACTIONS(235),
  },
  [8] = {
    [sym_shebang] = ACTIONS(237),
    [sym_comment] = ACTIONS(237),
    [sym_label] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(237),
    [anon_sym_POUND_LBRACK] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_PERCENT] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_LT_EQ_GT] = ACTIONS(237),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_DOT_DOT] = ACTIONS(239),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(237),
    [anon_sym_DASH_GT] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(237),
    [anon_sym_EQ_EQ_GT] = ACTIONS(237),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(237),
    [anon_sym_DASH_DASH_GT] = ACTIONS(237),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(237),
    [anon_sym_LT_DASH_GT] = ACTIONS(237),
    [anon_sym_COLON_COLON] = ACTIONS(237),
    [anon_sym_BANG] = ACTIONS(239),
    [anon_sym_BANG_BANG] = ACTIONS(237),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_BSLASH] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(237),
    [anon_sym_POUND] = ACTIONS(239),
    [anon_sym_DOLLAR] = ACTIONS(237),
    [anon_sym_QMARK] = ACTIONS(237),
    [anon_sym_BQUOTE] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(239),
    [sym_version] = ACTIONS(239),
    [sym_number] = ACTIONS(239),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [aux_sym_interpolation_token1] = ACTIONS(239),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_] = ACTIONS(237),
    [anon_sym_LBRACE_COLON] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(237),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(237),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(237),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(237),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(237),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(237),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(237),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(237),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(239),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(239),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(239),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(239),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(239),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(239),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(239),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(239),
    [anon_sym_3] = ACTIONS(239),
    [anon_sym_LBRACE_SLASH] = ACTIONS(237),
    [aux_sym_string_token8] = ACTIONS(237),
    [sym_char] = ACTIONS(237),
    [anon_sym_true] = ACTIONS(239),
    [anon_sym_false] = ACTIONS(239),
    [anon_sym_maybe] = ACTIONS(239),
    [sym_null] = ACTIONS(239),
    [sym_builtin] = ACTIONS(239),
  },
  [9] = {
    [sym_shebang] = ACTIONS(241),
    [sym_comment] = ACTIONS(241),
    [sym_label] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [anon_sym_POUND_LBRACK] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_LT_EQ_GT] = ACTIONS(253),
    [anon_sym_AMP] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(251),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(253),
    [anon_sym_DASH_GT] = ACTIONS(253),
    [anon_sym_EQ_GT] = ACTIONS(253),
    [anon_sym_EQ_EQ_GT] = ACTIONS(253),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(253),
    [anon_sym_DASH_DASH_GT] = ACTIONS(253),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(253),
    [anon_sym_LT_DASH_GT] = ACTIONS(253),
    [anon_sym_COLON_COLON] = ACTIONS(253),
    [anon_sym_BANG] = ACTIONS(255),
    [anon_sym_BANG_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_BSLASH] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(241),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(255),
    [sym_version] = ACTIONS(255),
    [sym_number] = ACTIONS(255),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [aux_sym_interpolation_token1] = ACTIONS(255),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(241),
    [anon_sym_] = ACTIONS(241),
    [anon_sym_LBRACE_COLON] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(255),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(255),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(255),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(255),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(255),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(255),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(255),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(255),
    [anon_sym_3] = ACTIONS(255),
    [anon_sym_LBRACE_SLASH] = ACTIONS(241),
    [aux_sym_string_token8] = ACTIONS(241),
    [sym_char] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [anon_sym_maybe] = ACTIONS(255),
    [sym_null] = ACTIONS(255),
    [sym_builtin] = ACTIONS(255),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_shebang] = ACTIONS(257),
    [sym_comment] = ACTIONS(257),
    [sym_label] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_POUND_LBRACK] = ACTIONS(257),
    [anon_sym_PLUS] = ACTIONS(257),
    [anon_sym_DASH] = ACTIONS(259),
    [anon_sym_STAR] = ACTIONS(257),
    [anon_sym_SLASH] = ACTIONS(257),
    [anon_sym_PERCENT] = ACTIONS(257),
    [anon_sym_CARET] = ACTIONS(257),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_LT_EQ_GT] = ACTIONS(257),
    [anon_sym_AMP] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(257),
    [anon_sym_DOT_DOT] = ACTIONS(259),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(257),
    [anon_sym_DASH_GT] = ACTIONS(257),
    [anon_sym_EQ_GT] = ACTIONS(257),
    [anon_sym_EQ_EQ_GT] = ACTIONS(257),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(257),
    [anon_sym_DASH_DASH_GT] = ACTIONS(257),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(257),
    [anon_sym_LT_DASH_GT] = ACTIONS(257),
    [anon_sym_COLON_COLON] = ACTIONS(257),
    [anon_sym_BANG] = ACTIONS(259),
    [anon_sym_BANG_BANG] = ACTIONS(257),
    [anon_sym_TILDE] = ACTIONS(259),
    [anon_sym_BSLASH] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(257),
    [anon_sym_POUND] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(257),
    [anon_sym_QMARK] = ACTIONS(257),
    [anon_sym_BQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(257),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_DOT] = ACTIONS(259),
    [sym_version] = ACTIONS(259),
    [sym_number] = ACTIONS(259),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(257),
    [aux_sym_interpolation_token1] = ACTIONS(259),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(257),
    [anon_sym_] = ACTIONS(257),
    [anon_sym_LBRACE_COLON] = ACTIONS(257),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(257),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(257),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(257),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(257),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(257),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(257),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(257),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(257),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(259),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(259),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(259),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(259),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(259),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(259),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(259),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(259),
    [anon_sym_3] = ACTIONS(259),
    [anon_sym_LBRACE_SLASH] = ACTIONS(257),
    [aux_sym_string_token8] = ACTIONS(257),
    [sym_char] = ACTIONS(257),
    [anon_sym_true] = ACTIONS(259),
    [anon_sym_false] = ACTIONS(259),
    [anon_sym_maybe] = ACTIONS(259),
    [sym_null] = ACTIONS(259),
    [sym_builtin] = ACTIONS(259),
  },
  [11] = {
    [sym_shebang] = ACTIONS(241),
    [sym_comment] = ACTIONS(241),
    [sym_label] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [anon_sym_POUND_LBRACK] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_LT_EQ_GT] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(255),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(241),
    [anon_sym_DASH_GT] = ACTIONS(241),
    [anon_sym_EQ_GT] = ACTIONS(241),
    [anon_sym_EQ_EQ_GT] = ACTIONS(241),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(241),
    [anon_sym_DASH_DASH_GT] = ACTIONS(241),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(241),
    [anon_sym_LT_DASH_GT] = ACTIONS(241),
    [anon_sym_COLON_COLON] = ACTIONS(241),
    [anon_sym_BANG] = ACTIONS(255),
    [anon_sym_BANG_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_BSLASH] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(241),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(255),
    [sym_version] = ACTIONS(255),
    [sym_number] = ACTIONS(255),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [aux_sym_interpolation_token1] = ACTIONS(255),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(241),
    [anon_sym_] = ACTIONS(241),
    [anon_sym_LBRACE_COLON] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(255),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(255),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(255),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(255),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(255),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(255),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(255),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(255),
    [anon_sym_3] = ACTIONS(255),
    [anon_sym_LBRACE_SLASH] = ACTIONS(241),
    [aux_sym_string_token8] = ACTIONS(241),
    [sym_char] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [anon_sym_maybe] = ACTIONS(255),
    [sym_null] = ACTIONS(255),
    [sym_builtin] = ACTIONS(255),
  },
  [12] = {
    [sym_shebang] = ACTIONS(241),
    [sym_comment] = ACTIONS(241),
    [sym_label] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [anon_sym_POUND_LBRACK] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_LT_EQ_GT] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(255),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(241),
    [anon_sym_DASH_GT] = ACTIONS(241),
    [anon_sym_EQ_GT] = ACTIONS(241),
    [anon_sym_EQ_EQ_GT] = ACTIONS(241),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(241),
    [anon_sym_DASH_DASH_GT] = ACTIONS(241),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(241),
    [anon_sym_LT_DASH_GT] = ACTIONS(241),
    [anon_sym_COLON_COLON] = ACTIONS(241),
    [anon_sym_BANG] = ACTIONS(255),
    [anon_sym_BANG_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_BSLASH] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(241),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(255),
    [sym_version] = ACTIONS(255),
    [sym_number] = ACTIONS(255),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [aux_sym_interpolation_token1] = ACTIONS(255),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(241),
    [anon_sym_] = ACTIONS(241),
    [anon_sym_LBRACE_COLON] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(255),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(255),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(255),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(255),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(255),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(255),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(255),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(255),
    [anon_sym_3] = ACTIONS(255),
    [anon_sym_LBRACE_SLASH] = ACTIONS(241),
    [aux_sym_string_token8] = ACTIONS(241),
    [sym_char] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [anon_sym_maybe] = ACTIONS(255),
    [sym_null] = ACTIONS(255),
    [sym_builtin] = ACTIONS(255),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_shebang] = ACTIONS(261),
    [sym_comment] = ACTIONS(261),
    [sym_label] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_POUND_LBRACK] = ACTIONS(261),
    [anon_sym_PLUS] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(263),
    [anon_sym_STAR] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(261),
    [anon_sym_PERCENT] = ACTIONS(261),
    [anon_sym_CARET] = ACTIONS(261),
    [anon_sym_EQ] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_LT_EQ_GT] = ACTIONS(261),
    [anon_sym_AMP] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_DOT_DOT] = ACTIONS(263),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(261),
    [anon_sym_DASH_GT] = ACTIONS(261),
    [anon_sym_EQ_GT] = ACTIONS(261),
    [anon_sym_EQ_EQ_GT] = ACTIONS(261),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(261),
    [anon_sym_DASH_DASH_GT] = ACTIONS(261),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(261),
    [anon_sym_LT_DASH_GT] = ACTIONS(261),
    [anon_sym_COLON_COLON] = ACTIONS(261),
    [anon_sym_BANG] = ACTIONS(263),
    [anon_sym_BANG_BANG] = ACTIONS(261),
    [anon_sym_TILDE] = ACTIONS(263),
    [anon_sym_BSLASH] = ACTIONS(261),
    [anon_sym_AT] = ACTIONS(261),
    [anon_sym_POUND] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [anon_sym_QMARK] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [anon_sym_COLON] = ACTIONS(263),
    [anon_sym_DOT] = ACTIONS(263),
    [sym_version] = ACTIONS(263),
    [sym_number] = ACTIONS(263),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [aux_sym_interpolation_token1] = ACTIONS(263),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(261),
    [anon_sym_] = ACTIONS(261),
    [anon_sym_LBRACE_COLON] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(261),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(261),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(261),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(261),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(261),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(261),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(261),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(261),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(263),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(263),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(263),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(263),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(263),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(263),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(263),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(263),
    [anon_sym_3] = ACTIONS(263),
    [anon_sym_LBRACE_SLASH] = ACTIONS(261),
    [aux_sym_string_token8] = ACTIONS(261),
    [sym_char] = ACTIONS(261),
    [anon_sym_true] = ACTIONS(263),
    [anon_sym_false] = ACTIONS(263),
    [anon_sym_maybe] = ACTIONS(263),
    [sym_null] = ACTIONS(263),
    [sym_builtin] = ACTIONS(263),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym_shebang] = ACTIONS(265),
    [sym_comment] = ACTIONS(265),
    [sym_label] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_POUND_LBRACK] = ACTIONS(265),
    [anon_sym_PLUS] = ACTIONS(265),
    [anon_sym_DASH] = ACTIONS(267),
    [anon_sym_STAR] = ACTIONS(265),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_PERCENT] = ACTIONS(265),
    [anon_sym_CARET] = ACTIONS(265),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_LT] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_LT_EQ_GT] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_DOT_DOT] = ACTIONS(267),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(265),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [anon_sym_EQ_GT] = ACTIONS(265),
    [anon_sym_EQ_EQ_GT] = ACTIONS(265),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(265),
    [anon_sym_DASH_DASH_GT] = ACTIONS(265),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(265),
    [anon_sym_LT_DASH_GT] = ACTIONS(265),
    [anon_sym_COLON_COLON] = ACTIONS(265),
    [anon_sym_BANG] = ACTIONS(267),
    [anon_sym_BANG_BANG] = ACTIONS(265),
    [anon_sym_TILDE] = ACTIONS(267),
    [anon_sym_BSLASH] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(265),
    [anon_sym_POUND] = ACTIONS(267),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_QMARK] = ACTIONS(265),
    [anon_sym_BQUOTE] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(267),
    [anon_sym_DOT] = ACTIONS(267),
    [sym_version] = ACTIONS(267),
    [sym_number] = ACTIONS(267),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [aux_sym_interpolation_token1] = ACTIONS(267),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(265),
    [anon_sym_] = ACTIONS(265),
    [anon_sym_LBRACE_COLON] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(265),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(265),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(265),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(265),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(265),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(265),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(265),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(265),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(267),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(267),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(267),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(267),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(267),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(267),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(267),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(267),
    [anon_sym_3] = ACTIONS(267),
    [anon_sym_LBRACE_SLASH] = ACTIONS(265),
    [aux_sym_string_token8] = ACTIONS(265),
    [sym_char] = ACTIONS(265),
    [anon_sym_true] = ACTIONS(267),
    [anon_sym_false] = ACTIONS(267),
    [anon_sym_maybe] = ACTIONS(267),
    [sym_null] = ACTIONS(267),
    [sym_builtin] = ACTIONS(267),
  },
  [15] = {
    [sym_shebang] = ACTIONS(233),
    [sym_comment] = ACTIONS(233),
    [sym_label] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [anon_sym_POUND_LBRACK] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_LT_EQ_GT] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_DOT_DOT] = ACTIONS(235),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(233),
    [anon_sym_DASH_GT] = ACTIONS(233),
    [anon_sym_EQ_GT] = ACTIONS(233),
    [anon_sym_EQ_EQ_GT] = ACTIONS(233),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(233),
    [anon_sym_DASH_DASH_GT] = ACTIONS(233),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(233),
    [anon_sym_LT_DASH_GT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(235),
    [anon_sym_BANG_BANG] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(235),
    [anon_sym_BSLASH] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_POUND] = ACTIONS(235),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [anon_sym_QMARK] = ACTIONS(233),
    [anon_sym_BQUOTE] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
    [sym_version] = ACTIONS(235),
    [sym_number] = ACTIONS(235),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [aux_sym_interpolation_token1] = ACTIONS(235),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_] = ACTIONS(233),
    [anon_sym_LBRACE_COLON] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(235),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(233),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(233),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(233),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(233),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(233),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(233),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(233),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(233),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(235),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(235),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(235),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(235),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(235),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(235),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(235),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(235),
    [anon_sym_3] = ACTIONS(235),
    [anon_sym_LBRACE_SLASH] = ACTIONS(233),
    [aux_sym_string_token8] = ACTIONS(233),
    [sym_char] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_false] = ACTIONS(235),
    [anon_sym_maybe] = ACTIONS(235),
    [sym_null] = ACTIONS(235),
    [sym_builtin] = ACTIONS(235),
  },
  [16] = {
    [sym_shebang] = ACTIONS(261),
    [sym_comment] = ACTIONS(261),
    [sym_label] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [anon_sym_POUND_LBRACK] = ACTIONS(261),
    [anon_sym_PLUS] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(263),
    [anon_sym_STAR] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(261),
    [anon_sym_PERCENT] = ACTIONS(261),
    [anon_sym_CARET] = ACTIONS(261),
    [anon_sym_EQ] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_LT_EQ_GT] = ACTIONS(261),
    [anon_sym_AMP] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_DOT_DOT] = ACTIONS(263),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(261),
    [anon_sym_DASH_GT] = ACTIONS(261),
    [anon_sym_EQ_GT] = ACTIONS(261),
    [anon_sym_EQ_EQ_GT] = ACTIONS(261),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(261),
    [anon_sym_DASH_DASH_GT] = ACTIONS(261),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(261),
    [anon_sym_LT_DASH_GT] = ACTIONS(261),
    [anon_sym_COLON_COLON] = ACTIONS(261),
    [anon_sym_BANG] = ACTIONS(263),
    [anon_sym_BANG_BANG] = ACTIONS(261),
    [anon_sym_TILDE] = ACTIONS(263),
    [anon_sym_BSLASH] = ACTIONS(261),
    [anon_sym_AT] = ACTIONS(261),
    [anon_sym_POUND] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [anon_sym_QMARK] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [anon_sym_COLON] = ACTIONS(263),
    [anon_sym_DOT] = ACTIONS(263),
    [sym_version] = ACTIONS(263),
    [sym_number] = ACTIONS(263),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [aux_sym_interpolation_token1] = ACTIONS(263),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(261),
    [anon_sym_] = ACTIONS(261),
    [anon_sym_LBRACE_COLON] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(261),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(261),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(261),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(261),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(261),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(261),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(261),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(261),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(263),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(263),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(263),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(263),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(263),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(263),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(263),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(263),
    [anon_sym_3] = ACTIONS(263),
    [anon_sym_LBRACE_SLASH] = ACTIONS(261),
    [aux_sym_string_token8] = ACTIONS(261),
    [sym_char] = ACTIONS(261),
    [anon_sym_true] = ACTIONS(263),
    [anon_sym_false] = ACTIONS(263),
    [anon_sym_maybe] = ACTIONS(263),
    [sym_null] = ACTIONS(263),
    [sym_builtin] = ACTIONS(263),
  },
  [17] = {
    [sym_shebang] = ACTIONS(269),
    [sym_comment] = ACTIONS(269),
    [sym_label] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [anon_sym_POUND_LBRACK] = ACTIONS(269),
    [anon_sym_PLUS] = ACTIONS(269),
    [anon_sym_DASH] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(269),
    [anon_sym_SLASH] = ACTIONS(269),
    [anon_sym_PERCENT] = ACTIONS(269),
    [anon_sym_CARET] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(271),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_LT_EQ_GT] = ACTIONS(269),
    [anon_sym_AMP] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(269),
    [anon_sym_DOT_DOT] = ACTIONS(271),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(269),
    [anon_sym_DASH_GT] = ACTIONS(269),
    [anon_sym_EQ_GT] = ACTIONS(269),
    [anon_sym_EQ_EQ_GT] = ACTIONS(269),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(269),
    [anon_sym_DASH_DASH_GT] = ACTIONS(269),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(269),
    [anon_sym_LT_DASH_GT] = ACTIONS(269),
    [anon_sym_COLON_COLON] = ACTIONS(269),
    [anon_sym_BANG] = ACTIONS(271),
    [anon_sym_BANG_BANG] = ACTIONS(269),
    [anon_sym_TILDE] = ACTIONS(271),
    [anon_sym_BSLASH] = ACTIONS(269),
    [anon_sym_AT] = ACTIONS(269),
    [anon_sym_POUND] = ACTIONS(271),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [anon_sym_QMARK] = ACTIONS(269),
    [anon_sym_BQUOTE] = ACTIONS(271),
    [anon_sym_SQUOTE] = ACTIONS(269),
    [anon_sym_COLON] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(271),
    [sym_version] = ACTIONS(271),
    [sym_number] = ACTIONS(271),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [aux_sym_interpolation_token1] = ACTIONS(271),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_] = ACTIONS(269),
    [anon_sym_LBRACE_COLON] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(269),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(269),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(269),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(269),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(269),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(269),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(269),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(269),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(271),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(271),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(271),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(271),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(271),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(271),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(271),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(271),
    [anon_sym_3] = ACTIONS(271),
    [anon_sym_LBRACE_SLASH] = ACTIONS(269),
    [aux_sym_string_token8] = ACTIONS(269),
    [sym_char] = ACTIONS(269),
    [anon_sym_true] = ACTIONS(271),
    [anon_sym_false] = ACTIONS(271),
    [anon_sym_maybe] = ACTIONS(271),
    [sym_null] = ACTIONS(271),
    [sym_builtin] = ACTIONS(271),
  },
  [18] = {
    [sym_shebang] = ACTIONS(273),
    [sym_comment] = ACTIONS(273),
    [sym_label] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [anon_sym_POUND_LBRACK] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SLASH] = ACTIONS(273),
    [anon_sym_PERCENT] = ACTIONS(273),
    [anon_sym_CARET] = ACTIONS(273),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_LT_EQ_GT] = ACTIONS(273),
    [anon_sym_AMP] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(273),
    [anon_sym_DOT_DOT] = ACTIONS(275),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(273),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [anon_sym_EQ_GT] = ACTIONS(273),
    [anon_sym_EQ_EQ_GT] = ACTIONS(273),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(273),
    [anon_sym_DASH_DASH_GT] = ACTIONS(273),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(273),
    [anon_sym_LT_DASH_GT] = ACTIONS(273),
    [anon_sym_COLON_COLON] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_BANG_BANG] = ACTIONS(273),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_BSLASH] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(275),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_BQUOTE] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_COLON] = ACTIONS(275),
    [anon_sym_DOT] = ACTIONS(275),
    [sym_version] = ACTIONS(275),
    [sym_number] = ACTIONS(275),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [aux_sym_interpolation_token1] = ACTIONS(275),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(273),
    [anon_sym_] = ACTIONS(273),
    [anon_sym_LBRACE_COLON] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(273),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(273),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(273),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(273),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(273),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(273),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(273),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(273),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(275),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(275),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(275),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(275),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(275),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(275),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(275),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(275),
    [anon_sym_3] = ACTIONS(275),
    [anon_sym_LBRACE_SLASH] = ACTIONS(273),
    [aux_sym_string_token8] = ACTIONS(273),
    [sym_char] = ACTIONS(273),
    [anon_sym_true] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(275),
    [anon_sym_maybe] = ACTIONS(275),
    [sym_null] = ACTIONS(275),
    [sym_builtin] = ACTIONS(275),
  },
  [19] = {
    [sym_shebang] = ACTIONS(277),
    [sym_comment] = ACTIONS(277),
    [sym_label] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_POUND_LBRACK] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(279),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_PERCENT] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LT] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_LT_EQ_GT] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_DOT_DOT] = ACTIONS(279),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(277),
    [anon_sym_DASH_GT] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [anon_sym_EQ_EQ_GT] = ACTIONS(277),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(277),
    [anon_sym_DASH_DASH_GT] = ACTIONS(277),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(277),
    [anon_sym_LT_DASH_GT] = ACTIONS(277),
    [anon_sym_COLON_COLON] = ACTIONS(277),
    [anon_sym_BANG] = ACTIONS(279),
    [anon_sym_BANG_BANG] = ACTIONS(277),
    [anon_sym_TILDE] = ACTIONS(279),
    [anon_sym_BSLASH] = ACTIONS(277),
    [anon_sym_AT] = ACTIONS(277),
    [anon_sym_POUND] = ACTIONS(279),
    [anon_sym_DOLLAR] = ACTIONS(277),
    [anon_sym_QMARK] = ACTIONS(277),
    [anon_sym_BQUOTE] = ACTIONS(279),
    [anon_sym_SQUOTE] = ACTIONS(277),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_DOT] = ACTIONS(279),
    [sym_version] = ACTIONS(279),
    [sym_number] = ACTIONS(279),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [aux_sym_interpolation_token1] = ACTIONS(279),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_] = ACTIONS(277),
    [anon_sym_LBRACE_COLON] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(277),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(277),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(277),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(277),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(277),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(277),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(277),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(277),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(279),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(279),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(279),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(279),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(279),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(279),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(279),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(279),
    [anon_sym_3] = ACTIONS(279),
    [anon_sym_LBRACE_SLASH] = ACTIONS(277),
    [aux_sym_string_token8] = ACTIONS(277),
    [sym_char] = ACTIONS(277),
    [anon_sym_true] = ACTIONS(279),
    [anon_sym_false] = ACTIONS(279),
    [anon_sym_maybe] = ACTIONS(279),
    [sym_null] = ACTIONS(279),
    [sym_builtin] = ACTIONS(279),
  },
  [20] = {
    [sym_shebang] = ACTIONS(281),
    [sym_comment] = ACTIONS(281),
    [sym_label] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_POUND_LBRACK] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_SLASH] = ACTIONS(281),
    [anon_sym_PERCENT] = ACTIONS(281),
    [anon_sym_CARET] = ACTIONS(281),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(283),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_LT_EQ_GT] = ACTIONS(281),
    [anon_sym_AMP] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_DOT_DOT] = ACTIONS(283),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(281),
    [anon_sym_DASH_GT] = ACTIONS(281),
    [anon_sym_EQ_GT] = ACTIONS(281),
    [anon_sym_EQ_EQ_GT] = ACTIONS(281),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(281),
    [anon_sym_DASH_DASH_GT] = ACTIONS(281),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(281),
    [anon_sym_LT_DASH_GT] = ACTIONS(281),
    [anon_sym_COLON_COLON] = ACTIONS(281),
    [anon_sym_BANG] = ACTIONS(283),
    [anon_sym_BANG_BANG] = ACTIONS(281),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_BSLASH] = ACTIONS(281),
    [anon_sym_AT] = ACTIONS(281),
    [anon_sym_POUND] = ACTIONS(283),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_BQUOTE] = ACTIONS(283),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(283),
    [anon_sym_DOT] = ACTIONS(283),
    [sym_version] = ACTIONS(283),
    [sym_number] = ACTIONS(283),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [aux_sym_interpolation_token1] = ACTIONS(283),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_] = ACTIONS(281),
    [anon_sym_LBRACE_COLON] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(283),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(281),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(281),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(281),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(281),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(281),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(281),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(281),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(281),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(283),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(283),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(283),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(283),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(283),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(283),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(283),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(283),
    [anon_sym_3] = ACTIONS(283),
    [anon_sym_LBRACE_SLASH] = ACTIONS(281),
    [aux_sym_string_token8] = ACTIONS(281),
    [sym_char] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(283),
    [anon_sym_false] = ACTIONS(283),
    [anon_sym_maybe] = ACTIONS(283),
    [sym_null] = ACTIONS(283),
    [sym_builtin] = ACTIONS(283),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_shebang] = ACTIONS(269),
    [sym_comment] = ACTIONS(269),
    [sym_label] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_POUND_LBRACK] = ACTIONS(269),
    [anon_sym_PLUS] = ACTIONS(269),
    [anon_sym_DASH] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(269),
    [anon_sym_SLASH] = ACTIONS(269),
    [anon_sym_PERCENT] = ACTIONS(269),
    [anon_sym_CARET] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(271),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_LT_EQ_GT] = ACTIONS(269),
    [anon_sym_AMP] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(269),
    [anon_sym_DOT_DOT] = ACTIONS(271),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(269),
    [anon_sym_DASH_GT] = ACTIONS(269),
    [anon_sym_EQ_GT] = ACTIONS(269),
    [anon_sym_EQ_EQ_GT] = ACTIONS(269),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(269),
    [anon_sym_DASH_DASH_GT] = ACTIONS(269),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(269),
    [anon_sym_LT_DASH_GT] = ACTIONS(269),
    [anon_sym_COLON_COLON] = ACTIONS(269),
    [anon_sym_BANG] = ACTIONS(271),
    [anon_sym_BANG_BANG] = ACTIONS(269),
    [anon_sym_TILDE] = ACTIONS(271),
    [anon_sym_BSLASH] = ACTIONS(269),
    [anon_sym_AT] = ACTIONS(269),
    [anon_sym_POUND] = ACTIONS(271),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [anon_sym_QMARK] = ACTIONS(269),
    [anon_sym_BQUOTE] = ACTIONS(271),
    [anon_sym_SQUOTE] = ACTIONS(269),
    [anon_sym_COLON] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(271),
    [sym_version] = ACTIONS(271),
    [sym_number] = ACTIONS(271),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [aux_sym_interpolation_token1] = ACTIONS(271),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_] = ACTIONS(269),
    [anon_sym_LBRACE_COLON] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(269),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(269),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(269),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(269),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(269),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(269),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(269),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(269),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(271),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(271),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(271),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(271),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(271),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(271),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(271),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(271),
    [anon_sym_3] = ACTIONS(271),
    [anon_sym_LBRACE_SLASH] = ACTIONS(269),
    [aux_sym_string_token8] = ACTIONS(269),
    [sym_char] = ACTIONS(269),
    [anon_sym_true] = ACTIONS(271),
    [anon_sym_false] = ACTIONS(271),
    [anon_sym_maybe] = ACTIONS(271),
    [sym_null] = ACTIONS(271),
    [sym_builtin] = ACTIONS(271),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [sym_shebang] = ACTIONS(285),
    [sym_comment] = ACTIONS(285),
    [sym_label] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_POUND_LBRACK] = ACTIONS(285),
    [anon_sym_PLUS] = ACTIONS(285),
    [anon_sym_DASH] = ACTIONS(287),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_PERCENT] = ACTIONS(285),
    [anon_sym_CARET] = ACTIONS(285),
    [anon_sym_EQ] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(287),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_LT_EQ_GT] = ACTIONS(285),
    [anon_sym_AMP] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_DOT_DOT] = ACTIONS(287),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(285),
    [anon_sym_DASH_GT] = ACTIONS(285),
    [anon_sym_EQ_GT] = ACTIONS(285),
    [anon_sym_EQ_EQ_GT] = ACTIONS(285),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(285),
    [anon_sym_DASH_DASH_GT] = ACTIONS(285),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(285),
    [anon_sym_LT_DASH_GT] = ACTIONS(285),
    [anon_sym_COLON_COLON] = ACTIONS(285),
    [anon_sym_BANG] = ACTIONS(287),
    [anon_sym_BANG_BANG] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_BSLASH] = ACTIONS(285),
    [anon_sym_AT] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(287),
    [anon_sym_DOLLAR] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_BQUOTE] = ACTIONS(287),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(287),
    [anon_sym_DOT] = ACTIONS(287),
    [sym_version] = ACTIONS(287),
    [sym_number] = ACTIONS(287),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [aux_sym_interpolation_token1] = ACTIONS(287),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(285),
    [anon_sym_] = ACTIONS(285),
    [anon_sym_LBRACE_COLON] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(285),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(285),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(285),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(285),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(285),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(285),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(285),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(285),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(287),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(287),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(287),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(287),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(287),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(287),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(287),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(287),
    [anon_sym_3] = ACTIONS(287),
    [anon_sym_LBRACE_SLASH] = ACTIONS(285),
    [aux_sym_string_token8] = ACTIONS(285),
    [sym_char] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(287),
    [anon_sym_false] = ACTIONS(287),
    [anon_sym_maybe] = ACTIONS(287),
    [sym_null] = ACTIONS(287),
    [sym_builtin] = ACTIONS(287),
  },
  [23] = {
    [sym_shebang] = ACTIONS(213),
    [sym_comment] = ACTIONS(213),
    [sym_label] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_POUND_LBRACK] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_LT_EQ_GT] = ACTIONS(253),
    [anon_sym_AMP] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(251),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(253),
    [anon_sym_DASH_GT] = ACTIONS(253),
    [anon_sym_EQ_GT] = ACTIONS(253),
    [anon_sym_EQ_EQ_GT] = ACTIONS(253),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(253),
    [anon_sym_DASH_DASH_GT] = ACTIONS(253),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(253),
    [anon_sym_LT_DASH_GT] = ACTIONS(253),
    [anon_sym_COLON_COLON] = ACTIONS(253),
    [anon_sym_BANG] = ACTIONS(227),
    [anon_sym_BANG_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(227),
    [anon_sym_BSLASH] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(213),
    [anon_sym_POUND] = ACTIONS(227),
    [anon_sym_DOLLAR] = ACTIONS(213),
    [anon_sym_QMARK] = ACTIONS(213),
    [anon_sym_BQUOTE] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(227),
    [sym_version] = ACTIONS(227),
    [sym_number] = ACTIONS(227),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [aux_sym_interpolation_token1] = ACTIONS(227),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(213),
    [anon_sym_] = ACTIONS(213),
    [anon_sym_LBRACE_COLON] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(213),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(213),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(213),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(213),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(213),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(213),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(213),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(213),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(227),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(227),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(227),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(227),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(227),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(227),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(227),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(227),
    [anon_sym_3] = ACTIONS(227),
    [anon_sym_LBRACE_SLASH] = ACTIONS(213),
    [aux_sym_string_token8] = ACTIONS(213),
    [sym_char] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(227),
    [anon_sym_false] = ACTIONS(227),
    [anon_sym_maybe] = ACTIONS(227),
    [sym_null] = ACTIONS(227),
    [sym_builtin] = ACTIONS(227),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [sym_shebang] = ACTIONS(289),
    [sym_comment] = ACTIONS(289),
    [sym_label] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_POUND_LBRACK] = ACTIONS(289),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_PERCENT] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_LT_EQ_GT] = ACTIONS(225),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_DOT_DOT] = ACTIONS(223),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(225),
    [anon_sym_DASH_GT] = ACTIONS(225),
    [anon_sym_EQ_GT] = ACTIONS(225),
    [anon_sym_EQ_EQ_GT] = ACTIONS(225),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(225),
    [anon_sym_DASH_DASH_GT] = ACTIONS(225),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(225),
    [anon_sym_LT_DASH_GT] = ACTIONS(225),
    [anon_sym_COLON_COLON] = ACTIONS(225),
    [anon_sym_BANG] = ACTIONS(291),
    [anon_sym_BANG_BANG] = ACTIONS(289),
    [anon_sym_TILDE] = ACTIONS(291),
    [anon_sym_BSLASH] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
    [anon_sym_POUND] = ACTIONS(291),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [anon_sym_QMARK] = ACTIONS(289),
    [anon_sym_BQUOTE] = ACTIONS(291),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(291),
    [sym_version] = ACTIONS(291),
    [sym_number] = ACTIONS(291),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [aux_sym_interpolation_token1] = ACTIONS(291),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(289),
    [anon_sym_] = ACTIONS(289),
    [anon_sym_LBRACE_COLON] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(289),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(289),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(289),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(289),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(289),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(289),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(289),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(289),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(291),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(291),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(291),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(291),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(291),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(291),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(291),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(291),
    [anon_sym_3] = ACTIONS(291),
    [anon_sym_LBRACE_SLASH] = ACTIONS(289),
    [aux_sym_string_token8] = ACTIONS(289),
    [sym_char] = ACTIONS(289),
    [anon_sym_true] = ACTIONS(291),
    [anon_sym_false] = ACTIONS(291),
    [anon_sym_maybe] = ACTIONS(291),
    [sym_null] = ACTIONS(291),
    [sym_builtin] = ACTIONS(291),
  },
  [25] = {
    [sym_shebang] = ACTIONS(293),
    [sym_comment] = ACTIONS(293),
    [sym_label] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [anon_sym_POUND_LBRACK] = ACTIONS(293),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_LT_EQ_GT] = ACTIONS(253),
    [anon_sym_AMP] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(251),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(253),
    [anon_sym_DASH_GT] = ACTIONS(253),
    [anon_sym_EQ_GT] = ACTIONS(253),
    [anon_sym_EQ_EQ_GT] = ACTIONS(253),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(253),
    [anon_sym_DASH_DASH_GT] = ACTIONS(253),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(253),
    [anon_sym_LT_DASH_GT] = ACTIONS(253),
    [anon_sym_COLON_COLON] = ACTIONS(253),
    [anon_sym_BANG] = ACTIONS(295),
    [anon_sym_BANG_BANG] = ACTIONS(293),
    [anon_sym_TILDE] = ACTIONS(295),
    [anon_sym_BSLASH] = ACTIONS(293),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_POUND] = ACTIONS(295),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [anon_sym_QMARK] = ACTIONS(293),
    [anon_sym_BQUOTE] = ACTIONS(295),
    [anon_sym_SQUOTE] = ACTIONS(293),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_DOT] = ACTIONS(295),
    [sym_version] = ACTIONS(295),
    [sym_number] = ACTIONS(295),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [aux_sym_interpolation_token1] = ACTIONS(295),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(293),
    [anon_sym_] = ACTIONS(293),
    [anon_sym_LBRACE_COLON] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(293),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(293),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(293),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(293),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(293),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(293),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(293),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(293),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(295),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(295),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(295),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(295),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(295),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(295),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(295),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(295),
    [anon_sym_3] = ACTIONS(295),
    [anon_sym_LBRACE_SLASH] = ACTIONS(293),
    [aux_sym_string_token8] = ACTIONS(293),
    [sym_char] = ACTIONS(293),
    [anon_sym_true] = ACTIONS(295),
    [anon_sym_false] = ACTIONS(295),
    [anon_sym_maybe] = ACTIONS(295),
    [sym_null] = ACTIONS(295),
    [sym_builtin] = ACTIONS(295),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym_shebang] = ACTIONS(293),
    [sym_comment] = ACTIONS(293),
    [sym_label] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_POUND_LBRACK] = ACTIONS(293),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_PERCENT] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_LT_EQ_GT] = ACTIONS(225),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_DOT_DOT] = ACTIONS(223),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(225),
    [anon_sym_DASH_GT] = ACTIONS(225),
    [anon_sym_EQ_GT] = ACTIONS(225),
    [anon_sym_EQ_EQ_GT] = ACTIONS(225),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(225),
    [anon_sym_DASH_DASH_GT] = ACTIONS(225),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(225),
    [anon_sym_LT_DASH_GT] = ACTIONS(225),
    [anon_sym_COLON_COLON] = ACTIONS(225),
    [anon_sym_BANG] = ACTIONS(295),
    [anon_sym_BANG_BANG] = ACTIONS(293),
    [anon_sym_TILDE] = ACTIONS(295),
    [anon_sym_BSLASH] = ACTIONS(293),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_POUND] = ACTIONS(295),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [anon_sym_QMARK] = ACTIONS(293),
    [anon_sym_BQUOTE] = ACTIONS(295),
    [anon_sym_SQUOTE] = ACTIONS(293),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_DOT] = ACTIONS(295),
    [sym_version] = ACTIONS(295),
    [sym_number] = ACTIONS(295),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [aux_sym_interpolation_token1] = ACTIONS(295),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(293),
    [anon_sym_] = ACTIONS(293),
    [anon_sym_LBRACE_COLON] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(293),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(293),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(293),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(293),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(293),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(293),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(293),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(293),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(295),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(295),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(295),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(295),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(295),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(295),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(295),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(295),
    [anon_sym_3] = ACTIONS(295),
    [anon_sym_LBRACE_SLASH] = ACTIONS(293),
    [aux_sym_string_token8] = ACTIONS(293),
    [sym_char] = ACTIONS(293),
    [anon_sym_true] = ACTIONS(295),
    [anon_sym_false] = ACTIONS(295),
    [anon_sym_maybe] = ACTIONS(295),
    [sym_null] = ACTIONS(295),
    [sym_builtin] = ACTIONS(295),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym_shebang] = ACTIONS(297),
    [sym_comment] = ACTIONS(297),
    [sym_label] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_POUND_LBRACK] = ACTIONS(297),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(299),
    [anon_sym_STAR] = ACTIONS(297),
    [anon_sym_SLASH] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_EQ] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_LT_EQ_GT] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_DOT_DOT] = ACTIONS(299),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(297),
    [anon_sym_DASH_GT] = ACTIONS(297),
    [anon_sym_EQ_GT] = ACTIONS(297),
    [anon_sym_EQ_EQ_GT] = ACTIONS(297),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(297),
    [anon_sym_DASH_DASH_GT] = ACTIONS(297),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(297),
    [anon_sym_LT_DASH_GT] = ACTIONS(297),
    [anon_sym_COLON_COLON] = ACTIONS(297),
    [anon_sym_BANG] = ACTIONS(299),
    [anon_sym_BANG_BANG] = ACTIONS(297),
    [anon_sym_TILDE] = ACTIONS(299),
    [anon_sym_BSLASH] = ACTIONS(297),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym_POUND] = ACTIONS(299),
    [anon_sym_DOLLAR] = ACTIONS(297),
    [anon_sym_QMARK] = ACTIONS(297),
    [anon_sym_BQUOTE] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_COLON] = ACTIONS(299),
    [anon_sym_DOT] = ACTIONS(299),
    [sym_version] = ACTIONS(299),
    [sym_number] = ACTIONS(299),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [aux_sym_interpolation_token1] = ACTIONS(299),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(297),
    [anon_sym_] = ACTIONS(297),
    [anon_sym_LBRACE_COLON] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(297),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(297),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(297),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(297),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(297),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(297),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(297),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(297),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(299),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(299),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(299),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(299),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(299),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(299),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(299),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(299),
    [anon_sym_3] = ACTIONS(299),
    [anon_sym_LBRACE_SLASH] = ACTIONS(297),
    [aux_sym_string_token8] = ACTIONS(297),
    [sym_char] = ACTIONS(297),
    [anon_sym_true] = ACTIONS(299),
    [anon_sym_false] = ACTIONS(299),
    [anon_sym_maybe] = ACTIONS(299),
    [sym_null] = ACTIONS(299),
    [sym_builtin] = ACTIONS(299),
  },
  [28] = {
    [sym_shebang] = ACTIONS(289),
    [sym_comment] = ACTIONS(289),
    [sym_label] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_POUND_LBRACK] = ACTIONS(289),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_LT_EQ_GT] = ACTIONS(253),
    [anon_sym_AMP] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(251),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(253),
    [anon_sym_DASH_GT] = ACTIONS(253),
    [anon_sym_EQ_GT] = ACTIONS(253),
    [anon_sym_EQ_EQ_GT] = ACTIONS(253),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(253),
    [anon_sym_DASH_DASH_GT] = ACTIONS(253),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(253),
    [anon_sym_LT_DASH_GT] = ACTIONS(253),
    [anon_sym_COLON_COLON] = ACTIONS(253),
    [anon_sym_BANG] = ACTIONS(291),
    [anon_sym_BANG_BANG] = ACTIONS(289),
    [anon_sym_TILDE] = ACTIONS(291),
    [anon_sym_BSLASH] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
    [anon_sym_POUND] = ACTIONS(291),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [anon_sym_QMARK] = ACTIONS(289),
    [anon_sym_BQUOTE] = ACTIONS(291),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(291),
    [sym_version] = ACTIONS(291),
    [sym_number] = ACTIONS(291),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [aux_sym_interpolation_token1] = ACTIONS(291),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(289),
    [anon_sym_] = ACTIONS(289),
    [anon_sym_LBRACE_COLON] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(289),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(289),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(289),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(289),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(289),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(289),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(289),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(289),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(291),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(291),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(291),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(291),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(291),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(291),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(291),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(291),
    [anon_sym_3] = ACTIONS(291),
    [anon_sym_LBRACE_SLASH] = ACTIONS(289),
    [aux_sym_string_token8] = ACTIONS(289),
    [sym_char] = ACTIONS(289),
    [anon_sym_true] = ACTIONS(291),
    [anon_sym_false] = ACTIONS(291),
    [anon_sym_maybe] = ACTIONS(291),
    [sym_null] = ACTIONS(291),
    [sym_builtin] = ACTIONS(291),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [sym_shebang] = ACTIONS(273),
    [sym_comment] = ACTIONS(273),
    [sym_label] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_POUND_LBRACK] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SLASH] = ACTIONS(273),
    [anon_sym_PERCENT] = ACTIONS(273),
    [anon_sym_CARET] = ACTIONS(273),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_LT_EQ_GT] = ACTIONS(273),
    [anon_sym_AMP] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(273),
    [anon_sym_DOT_DOT] = ACTIONS(275),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(273),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [anon_sym_EQ_GT] = ACTIONS(273),
    [anon_sym_EQ_EQ_GT] = ACTIONS(273),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(273),
    [anon_sym_DASH_DASH_GT] = ACTIONS(273),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(273),
    [anon_sym_LT_DASH_GT] = ACTIONS(273),
    [anon_sym_COLON_COLON] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_BANG_BANG] = ACTIONS(273),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_BSLASH] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(275),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_BQUOTE] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_COLON] = ACTIONS(275),
    [anon_sym_DOT] = ACTIONS(275),
    [sym_version] = ACTIONS(275),
    [sym_number] = ACTIONS(275),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [aux_sym_interpolation_token1] = ACTIONS(275),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(273),
    [anon_sym_] = ACTIONS(273),
    [anon_sym_LBRACE_COLON] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(273),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(273),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(273),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(273),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(273),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(273),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(273),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(273),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(275),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(275),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(275),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(275),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(275),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(275),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(275),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(275),
    [anon_sym_3] = ACTIONS(275),
    [anon_sym_LBRACE_SLASH] = ACTIONS(273),
    [aux_sym_string_token8] = ACTIONS(273),
    [sym_char] = ACTIONS(273),
    [anon_sym_true] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(275),
    [anon_sym_maybe] = ACTIONS(275),
    [sym_null] = ACTIONS(275),
    [sym_builtin] = ACTIONS(275),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [sym_shebang] = ACTIONS(301),
    [sym_comment] = ACTIONS(301),
    [sym_label] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_POUND_LBRACK] = ACTIONS(301),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_DASH] = ACTIONS(303),
    [anon_sym_STAR] = ACTIONS(301),
    [anon_sym_SLASH] = ACTIONS(301),
    [anon_sym_PERCENT] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_EQ] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_LT_EQ_GT] = ACTIONS(301),
    [anon_sym_AMP] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(301),
    [anon_sym_DOT_DOT] = ACTIONS(303),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(301),
    [anon_sym_DASH_GT] = ACTIONS(301),
    [anon_sym_EQ_GT] = ACTIONS(301),
    [anon_sym_EQ_EQ_GT] = ACTIONS(301),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(301),
    [anon_sym_DASH_DASH_GT] = ACTIONS(301),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(301),
    [anon_sym_LT_DASH_GT] = ACTIONS(301),
    [anon_sym_COLON_COLON] = ACTIONS(301),
    [anon_sym_BANG] = ACTIONS(303),
    [anon_sym_BANG_BANG] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_BSLASH] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(301),
    [anon_sym_POUND] = ACTIONS(303),
    [anon_sym_DOLLAR] = ACTIONS(301),
    [anon_sym_QMARK] = ACTIONS(301),
    [anon_sym_BQUOTE] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [anon_sym_COLON] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(303),
    [sym_version] = ACTIONS(303),
    [sym_number] = ACTIONS(303),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [aux_sym_interpolation_token1] = ACTIONS(303),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_] = ACTIONS(301),
    [anon_sym_LBRACE_COLON] = ACTIONS(301),
    [anon_sym_LBRACE] = ACTIONS(303),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(301),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(301),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(301),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(301),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(301),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(301),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(301),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(301),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(303),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(303),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(303),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(303),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(303),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(303),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(303),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(303),
    [anon_sym_3] = ACTIONS(303),
    [anon_sym_LBRACE_SLASH] = ACTIONS(301),
    [aux_sym_string_token8] = ACTIONS(301),
    [sym_char] = ACTIONS(301),
    [anon_sym_true] = ACTIONS(303),
    [anon_sym_false] = ACTIONS(303),
    [anon_sym_maybe] = ACTIONS(303),
    [sym_null] = ACTIONS(303),
    [sym_builtin] = ACTIONS(303),
  },
  [31] = {
    [sym_shebang] = ACTIONS(305),
    [sym_comment] = ACTIONS(305),
    [sym_label] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_RBRACK] = ACTIONS(305),
    [anon_sym_POUND_LBRACK] = ACTIONS(305),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(307),
    [anon_sym_STAR] = ACTIONS(305),
    [anon_sym_SLASH] = ACTIONS(305),
    [anon_sym_PERCENT] = ACTIONS(305),
    [anon_sym_CARET] = ACTIONS(305),
    [anon_sym_EQ] = ACTIONS(307),
    [anon_sym_LT] = ACTIONS(307),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_LT_EQ_GT] = ACTIONS(305),
    [anon_sym_AMP] = ACTIONS(305),
    [anon_sym_PIPE] = ACTIONS(305),
    [anon_sym_DOT_DOT] = ACTIONS(307),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(305),
    [anon_sym_DASH_GT] = ACTIONS(305),
    [anon_sym_EQ_GT] = ACTIONS(305),
    [anon_sym_EQ_EQ_GT] = ACTIONS(305),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(305),
    [anon_sym_DASH_DASH_GT] = ACTIONS(305),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(305),
    [anon_sym_LT_DASH_GT] = ACTIONS(305),
    [anon_sym_COLON_COLON] = ACTIONS(305),
    [anon_sym_BANG] = ACTIONS(307),
    [anon_sym_BANG_BANG] = ACTIONS(305),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_BSLASH] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(305),
    [anon_sym_POUND] = ACTIONS(307),
    [anon_sym_DOLLAR] = ACTIONS(305),
    [anon_sym_QMARK] = ACTIONS(305),
    [anon_sym_BQUOTE] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [anon_sym_COLON] = ACTIONS(307),
    [anon_sym_DOT] = ACTIONS(307),
    [sym_version] = ACTIONS(307),
    [sym_number] = ACTIONS(307),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [aux_sym_interpolation_token1] = ACTIONS(307),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(305),
    [anon_sym_] = ACTIONS(305),
    [anon_sym_LBRACE_COLON] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(305),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(305),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(305),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(305),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(305),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(305),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(305),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(305),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(307),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(307),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(307),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(307),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(307),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(307),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(307),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(307),
    [anon_sym_3] = ACTIONS(307),
    [anon_sym_LBRACE_SLASH] = ACTIONS(305),
    [aux_sym_string_token8] = ACTIONS(305),
    [sym_char] = ACTIONS(305),
    [anon_sym_true] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(307),
    [anon_sym_maybe] = ACTIONS(307),
    [sym_null] = ACTIONS(307),
    [sym_builtin] = ACTIONS(307),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [sym_shebang] = ACTIONS(229),
    [sym_comment] = ACTIONS(229),
    [sym_label] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_POUND_LBRACK] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(229),
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_LT_EQ_GT] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(229),
    [anon_sym_DOT_DOT] = ACTIONS(231),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(229),
    [anon_sym_DASH_GT] = ACTIONS(229),
    [anon_sym_EQ_GT] = ACTIONS(229),
    [anon_sym_EQ_EQ_GT] = ACTIONS(229),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(229),
    [anon_sym_DASH_DASH_GT] = ACTIONS(229),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(229),
    [anon_sym_LT_DASH_GT] = ACTIONS(229),
    [anon_sym_COLON_COLON] = ACTIONS(229),
    [anon_sym_BANG] = ACTIONS(231),
    [anon_sym_BANG_BANG] = ACTIONS(229),
    [anon_sym_TILDE] = ACTIONS(231),
    [anon_sym_BSLASH] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(231),
    [anon_sym_DOLLAR] = ACTIONS(229),
    [anon_sym_QMARK] = ACTIONS(229),
    [anon_sym_BQUOTE] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [anon_sym_COLON] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(231),
    [sym_version] = ACTIONS(231),
    [sym_number] = ACTIONS(231),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [aux_sym_interpolation_token1] = ACTIONS(231),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(229),
    [anon_sym_] = ACTIONS(229),
    [anon_sym_LBRACE_COLON] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(229),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(229),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(229),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(229),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(229),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(229),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(229),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(229),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(231),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(231),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(231),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(231),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(231),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(231),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(231),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(231),
    [anon_sym_3] = ACTIONS(231),
    [anon_sym_LBRACE_SLASH] = ACTIONS(229),
    [aux_sym_string_token8] = ACTIONS(229),
    [sym_char] = ACTIONS(229),
    [anon_sym_true] = ACTIONS(231),
    [anon_sym_false] = ACTIONS(231),
    [anon_sym_maybe] = ACTIONS(231),
    [sym_null] = ACTIONS(231),
    [sym_builtin] = ACTIONS(231),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [sym_shebang] = ACTIONS(281),
    [sym_comment] = ACTIONS(281),
    [sym_label] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_POUND_LBRACK] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_SLASH] = ACTIONS(281),
    [anon_sym_PERCENT] = ACTIONS(281),
    [anon_sym_CARET] = ACTIONS(281),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(283),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_LT_EQ_GT] = ACTIONS(281),
    [anon_sym_AMP] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_DOT_DOT] = ACTIONS(283),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(281),
    [anon_sym_DASH_GT] = ACTIONS(281),
    [anon_sym_EQ_GT] = ACTIONS(281),
    [anon_sym_EQ_EQ_GT] = ACTIONS(281),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(281),
    [anon_sym_DASH_DASH_GT] = ACTIONS(281),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(281),
    [anon_sym_LT_DASH_GT] = ACTIONS(281),
    [anon_sym_COLON_COLON] = ACTIONS(281),
    [anon_sym_BANG] = ACTIONS(283),
    [anon_sym_BANG_BANG] = ACTIONS(281),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_BSLASH] = ACTIONS(281),
    [anon_sym_AT] = ACTIONS(281),
    [anon_sym_POUND] = ACTIONS(283),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_BQUOTE] = ACTIONS(283),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(283),
    [anon_sym_DOT] = ACTIONS(283),
    [sym_version] = ACTIONS(283),
    [sym_number] = ACTIONS(283),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [aux_sym_interpolation_token1] = ACTIONS(283),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_] = ACTIONS(281),
    [anon_sym_LBRACE_COLON] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(283),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(281),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(281),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(281),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(281),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(281),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(281),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(281),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(281),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(283),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(283),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(283),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(283),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(283),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(283),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(283),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(283),
    [anon_sym_3] = ACTIONS(283),
    [anon_sym_LBRACE_SLASH] = ACTIONS(281),
    [aux_sym_string_token8] = ACTIONS(281),
    [sym_char] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(283),
    [anon_sym_false] = ACTIONS(283),
    [anon_sym_maybe] = ACTIONS(283),
    [sym_null] = ACTIONS(283),
    [sym_builtin] = ACTIONS(283),
  },
  [34] = {
    [sym_shebang] = ACTIONS(297),
    [sym_comment] = ACTIONS(297),
    [sym_label] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [anon_sym_POUND_LBRACK] = ACTIONS(297),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(299),
    [anon_sym_STAR] = ACTIONS(297),
    [anon_sym_SLASH] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_EQ] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_LT_EQ_GT] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_DOT_DOT] = ACTIONS(299),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(297),
    [anon_sym_DASH_GT] = ACTIONS(297),
    [anon_sym_EQ_GT] = ACTIONS(297),
    [anon_sym_EQ_EQ_GT] = ACTIONS(297),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(297),
    [anon_sym_DASH_DASH_GT] = ACTIONS(297),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(297),
    [anon_sym_LT_DASH_GT] = ACTIONS(297),
    [anon_sym_COLON_COLON] = ACTIONS(297),
    [anon_sym_BANG] = ACTIONS(299),
    [anon_sym_BANG_BANG] = ACTIONS(297),
    [anon_sym_TILDE] = ACTIONS(299),
    [anon_sym_BSLASH] = ACTIONS(297),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym_POUND] = ACTIONS(299),
    [anon_sym_DOLLAR] = ACTIONS(297),
    [anon_sym_QMARK] = ACTIONS(297),
    [anon_sym_BQUOTE] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_COLON] = ACTIONS(299),
    [anon_sym_DOT] = ACTIONS(299),
    [sym_version] = ACTIONS(299),
    [sym_number] = ACTIONS(299),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [aux_sym_interpolation_token1] = ACTIONS(299),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(297),
    [anon_sym_] = ACTIONS(297),
    [anon_sym_LBRACE_COLON] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(297),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(297),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(297),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(297),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(297),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(297),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(297),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(297),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(299),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(299),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(299),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(299),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(299),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(299),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(299),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(299),
    [anon_sym_3] = ACTIONS(299),
    [anon_sym_LBRACE_SLASH] = ACTIONS(297),
    [aux_sym_string_token8] = ACTIONS(297),
    [sym_char] = ACTIONS(297),
    [anon_sym_true] = ACTIONS(299),
    [anon_sym_false] = ACTIONS(299),
    [anon_sym_maybe] = ACTIONS(299),
    [sym_null] = ACTIONS(299),
    [sym_builtin] = ACTIONS(299),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_shebang] = ACTIONS(237),
    [sym_comment] = ACTIONS(237),
    [sym_label] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_POUND_LBRACK] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_PERCENT] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_LT_EQ_GT] = ACTIONS(237),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_DOT_DOT] = ACTIONS(239),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(237),
    [anon_sym_DASH_GT] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(237),
    [anon_sym_EQ_EQ_GT] = ACTIONS(237),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(237),
    [anon_sym_DASH_DASH_GT] = ACTIONS(237),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(237),
    [anon_sym_LT_DASH_GT] = ACTIONS(237),
    [anon_sym_COLON_COLON] = ACTIONS(237),
    [anon_sym_BANG] = ACTIONS(239),
    [anon_sym_BANG_BANG] = ACTIONS(237),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_BSLASH] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(237),
    [anon_sym_POUND] = ACTIONS(239),
    [anon_sym_DOLLAR] = ACTIONS(237),
    [anon_sym_QMARK] = ACTIONS(237),
    [anon_sym_BQUOTE] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(239),
    [sym_version] = ACTIONS(239),
    [sym_number] = ACTIONS(239),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [aux_sym_interpolation_token1] = ACTIONS(239),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_] = ACTIONS(237),
    [anon_sym_LBRACE_COLON] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(237),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(237),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(237),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(237),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(237),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(237),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(237),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(237),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(239),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(239),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(239),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(239),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(239),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(239),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(239),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(239),
    [anon_sym_3] = ACTIONS(239),
    [anon_sym_LBRACE_SLASH] = ACTIONS(237),
    [aux_sym_string_token8] = ACTIONS(237),
    [sym_char] = ACTIONS(237),
    [anon_sym_true] = ACTIONS(239),
    [anon_sym_false] = ACTIONS(239),
    [anon_sym_maybe] = ACTIONS(239),
    [sym_null] = ACTIONS(239),
    [sym_builtin] = ACTIONS(239),
  },
  [36] = {
    [sym_shebang] = ACTIONS(241),
    [sym_comment] = ACTIONS(241),
    [sym_label] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [anon_sym_POUND_LBRACK] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_LT_EQ_GT] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(255),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(241),
    [anon_sym_DASH_GT] = ACTIONS(241),
    [anon_sym_EQ_GT] = ACTIONS(241),
    [anon_sym_EQ_EQ_GT] = ACTIONS(241),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(241),
    [anon_sym_DASH_DASH_GT] = ACTIONS(241),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(241),
    [anon_sym_LT_DASH_GT] = ACTIONS(241),
    [anon_sym_COLON_COLON] = ACTIONS(241),
    [anon_sym_BANG] = ACTIONS(255),
    [anon_sym_BANG_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_BSLASH] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(241),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(255),
    [sym_version] = ACTIONS(255),
    [sym_number] = ACTIONS(255),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [aux_sym_interpolation_token1] = ACTIONS(255),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(241),
    [anon_sym_] = ACTIONS(241),
    [anon_sym_LBRACE_COLON] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(255),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(255),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(255),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(255),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(255),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(255),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(255),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(255),
    [anon_sym_3] = ACTIONS(255),
    [anon_sym_LBRACE_SLASH] = ACTIONS(241),
    [aux_sym_string_token8] = ACTIONS(241),
    [sym_char] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [anon_sym_maybe] = ACTIONS(255),
    [sym_null] = ACTIONS(255),
    [sym_builtin] = ACTIONS(255),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [sym_shebang] = ACTIONS(309),
    [sym_comment] = ACTIONS(309),
    [sym_label] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_POUND_LBRACK] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(309),
    [anon_sym_SLASH] = ACTIONS(309),
    [anon_sym_PERCENT] = ACTIONS(309),
    [anon_sym_CARET] = ACTIONS(309),
    [anon_sym_EQ] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_LT_EQ_GT] = ACTIONS(309),
    [anon_sym_AMP] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(309),
    [anon_sym_DOT_DOT] = ACTIONS(311),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(309),
    [anon_sym_DASH_GT] = ACTIONS(309),
    [anon_sym_EQ_GT] = ACTIONS(309),
    [anon_sym_EQ_EQ_GT] = ACTIONS(309),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(309),
    [anon_sym_DASH_DASH_GT] = ACTIONS(309),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(309),
    [anon_sym_LT_DASH_GT] = ACTIONS(309),
    [anon_sym_COLON_COLON] = ACTIONS(309),
    [anon_sym_BANG] = ACTIONS(311),
    [anon_sym_BANG_BANG] = ACTIONS(309),
    [anon_sym_TILDE] = ACTIONS(311),
    [anon_sym_BSLASH] = ACTIONS(309),
    [anon_sym_AT] = ACTIONS(309),
    [anon_sym_POUND] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(309),
    [anon_sym_QMARK] = ACTIONS(309),
    [anon_sym_BQUOTE] = ACTIONS(311),
    [anon_sym_SQUOTE] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(311),
    [sym_version] = ACTIONS(311),
    [sym_number] = ACTIONS(311),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [aux_sym_interpolation_token1] = ACTIONS(311),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_] = ACTIONS(309),
    [anon_sym_LBRACE_COLON] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(309),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(309),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(309),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(309),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(309),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(309),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(309),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(309),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(311),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(311),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(311),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(311),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(311),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(311),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(311),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(311),
    [anon_sym_3] = ACTIONS(311),
    [anon_sym_LBRACE_SLASH] = ACTIONS(309),
    [aux_sym_string_token8] = ACTIONS(309),
    [sym_char] = ACTIONS(309),
    [anon_sym_true] = ACTIONS(311),
    [anon_sym_false] = ACTIONS(311),
    [anon_sym_maybe] = ACTIONS(311),
    [sym_null] = ACTIONS(311),
    [sym_builtin] = ACTIONS(311),
  },
  [38] = {
    [sym_shebang] = ACTIONS(313),
    [sym_comment] = ACTIONS(313),
    [sym_label] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_POUND_LBRACK] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_CARET] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_LT_EQ_GT] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_DOT_DOT] = ACTIONS(315),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(313),
    [anon_sym_DASH_GT] = ACTIONS(313),
    [anon_sym_EQ_GT] = ACTIONS(313),
    [anon_sym_EQ_EQ_GT] = ACTIONS(313),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(313),
    [anon_sym_DASH_DASH_GT] = ACTIONS(313),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(313),
    [anon_sym_LT_DASH_GT] = ACTIONS(313),
    [anon_sym_COLON_COLON] = ACTIONS(313),
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_BANG_BANG] = ACTIONS(313),
    [anon_sym_TILDE] = ACTIONS(315),
    [anon_sym_BSLASH] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(313),
    [anon_sym_POUND] = ACTIONS(315),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_BQUOTE] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(315),
    [sym_version] = ACTIONS(315),
    [sym_number] = ACTIONS(315),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [aux_sym_interpolation_token1] = ACTIONS(315),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_] = ACTIONS(313),
    [anon_sym_LBRACE_COLON] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(313),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(313),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(313),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(313),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(313),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(313),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(313),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(313),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(315),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(315),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(315),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(315),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(315),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(315),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(315),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(315),
    [anon_sym_3] = ACTIONS(315),
    [anon_sym_LBRACE_SLASH] = ACTIONS(313),
    [aux_sym_string_token8] = ACTIONS(313),
    [sym_char] = ACTIONS(313),
    [anon_sym_true] = ACTIONS(315),
    [anon_sym_false] = ACTIONS(315),
    [anon_sym_maybe] = ACTIONS(315),
    [sym_null] = ACTIONS(315),
    [sym_builtin] = ACTIONS(315),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym_shebang] = ACTIONS(317),
    [sym_comment] = ACTIONS(317),
    [sym_label] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_POUND_LBRACK] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(317),
    [anon_sym_SLASH] = ACTIONS(317),
    [anon_sym_PERCENT] = ACTIONS(317),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym_EQ] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_LT_EQ_GT] = ACTIONS(317),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_DOT_DOT] = ACTIONS(319),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(317),
    [anon_sym_DASH_GT] = ACTIONS(317),
    [anon_sym_EQ_GT] = ACTIONS(317),
    [anon_sym_EQ_EQ_GT] = ACTIONS(317),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(317),
    [anon_sym_DASH_DASH_GT] = ACTIONS(317),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(317),
    [anon_sym_LT_DASH_GT] = ACTIONS(317),
    [anon_sym_COLON_COLON] = ACTIONS(317),
    [anon_sym_BANG] = ACTIONS(319),
    [anon_sym_BANG_BANG] = ACTIONS(317),
    [anon_sym_TILDE] = ACTIONS(319),
    [anon_sym_BSLASH] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(317),
    [anon_sym_POUND] = ACTIONS(319),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_BQUOTE] = ACTIONS(319),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(319),
    [anon_sym_DOT] = ACTIONS(319),
    [sym_version] = ACTIONS(319),
    [sym_number] = ACTIONS(319),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [aux_sym_interpolation_token1] = ACTIONS(319),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(317),
    [anon_sym_] = ACTIONS(317),
    [anon_sym_LBRACE_COLON] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(317),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(317),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(317),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(317),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(317),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(317),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(317),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(317),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(319),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(319),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(319),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(319),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(319),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(319),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(319),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(319),
    [anon_sym_3] = ACTIONS(319),
    [anon_sym_LBRACE_SLASH] = ACTIONS(317),
    [aux_sym_string_token8] = ACTIONS(317),
    [sym_char] = ACTIONS(317),
    [anon_sym_true] = ACTIONS(319),
    [anon_sym_false] = ACTIONS(319),
    [anon_sym_maybe] = ACTIONS(319),
    [sym_null] = ACTIONS(319),
    [sym_builtin] = ACTIONS(319),
  },
  [40] = {
    [sym_shebang] = ACTIONS(209),
    [sym_comment] = ACTIONS(209),
    [sym_label] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_POUND_LBRACK] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_LT_EQ_GT] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_DOT_DOT] = ACTIONS(211),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(209),
    [anon_sym_DASH_GT] = ACTIONS(209),
    [anon_sym_EQ_GT] = ACTIONS(209),
    [anon_sym_EQ_EQ_GT] = ACTIONS(209),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(209),
    [anon_sym_DASH_DASH_GT] = ACTIONS(209),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(209),
    [anon_sym_LT_DASH_GT] = ACTIONS(209),
    [anon_sym_COLON_COLON] = ACTIONS(209),
    [anon_sym_BANG] = ACTIONS(211),
    [anon_sym_BANG_BANG] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(211),
    [anon_sym_BSLASH] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(209),
    [anon_sym_POUND] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(209),
    [anon_sym_QMARK] = ACTIONS(209),
    [anon_sym_BQUOTE] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(211),
    [sym_version] = ACTIONS(211),
    [sym_number] = ACTIONS(211),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [aux_sym_interpolation_token1] = ACTIONS(211),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_] = ACTIONS(209),
    [anon_sym_LBRACE_COLON] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(209),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(209),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(209),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(209),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(209),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(209),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(209),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(209),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(211),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(211),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(211),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(211),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(211),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(211),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(211),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(211),
    [anon_sym_3] = ACTIONS(211),
    [anon_sym_LBRACE_SLASH] = ACTIONS(209),
    [aux_sym_string_token8] = ACTIONS(209),
    [sym_char] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(211),
    [anon_sym_false] = ACTIONS(211),
    [anon_sym_maybe] = ACTIONS(211),
    [sym_null] = ACTIONS(211),
    [sym_builtin] = ACTIONS(211),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [sym_shebang] = ACTIONS(313),
    [sym_comment] = ACTIONS(313),
    [sym_label] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_POUND_LBRACK] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_CARET] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_LT_EQ_GT] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_DOT_DOT] = ACTIONS(315),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(313),
    [anon_sym_DASH_GT] = ACTIONS(313),
    [anon_sym_EQ_GT] = ACTIONS(313),
    [anon_sym_EQ_EQ_GT] = ACTIONS(313),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(313),
    [anon_sym_DASH_DASH_GT] = ACTIONS(313),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(313),
    [anon_sym_LT_DASH_GT] = ACTIONS(313),
    [anon_sym_COLON_COLON] = ACTIONS(313),
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_BANG_BANG] = ACTIONS(313),
    [anon_sym_TILDE] = ACTIONS(315),
    [anon_sym_BSLASH] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(313),
    [anon_sym_POUND] = ACTIONS(315),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_BQUOTE] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(315),
    [sym_version] = ACTIONS(315),
    [sym_number] = ACTIONS(315),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [aux_sym_interpolation_token1] = ACTIONS(315),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_] = ACTIONS(313),
    [anon_sym_LBRACE_COLON] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(313),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(313),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(313),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(313),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(313),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(313),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(313),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(313),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(315),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(315),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(315),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(315),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(315),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(315),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(315),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(315),
    [anon_sym_3] = ACTIONS(315),
    [anon_sym_LBRACE_SLASH] = ACTIONS(313),
    [aux_sym_string_token8] = ACTIONS(313),
    [sym_char] = ACTIONS(313),
    [anon_sym_true] = ACTIONS(315),
    [anon_sym_false] = ACTIONS(315),
    [anon_sym_maybe] = ACTIONS(315),
    [sym_null] = ACTIONS(315),
    [sym_builtin] = ACTIONS(315),
  },
  [42] = {
    [sym_shebang] = ACTIONS(301),
    [sym_comment] = ACTIONS(301),
    [sym_label] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [anon_sym_POUND_LBRACK] = ACTIONS(301),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_DASH] = ACTIONS(303),
    [anon_sym_STAR] = ACTIONS(301),
    [anon_sym_SLASH] = ACTIONS(301),
    [anon_sym_PERCENT] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_EQ] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_LT_EQ_GT] = ACTIONS(301),
    [anon_sym_AMP] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(301),
    [anon_sym_DOT_DOT] = ACTIONS(303),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(301),
    [anon_sym_DASH_GT] = ACTIONS(301),
    [anon_sym_EQ_GT] = ACTIONS(301),
    [anon_sym_EQ_EQ_GT] = ACTIONS(301),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(301),
    [anon_sym_DASH_DASH_GT] = ACTIONS(301),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(301),
    [anon_sym_LT_DASH_GT] = ACTIONS(301),
    [anon_sym_COLON_COLON] = ACTIONS(301),
    [anon_sym_BANG] = ACTIONS(303),
    [anon_sym_BANG_BANG] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_BSLASH] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(301),
    [anon_sym_POUND] = ACTIONS(303),
    [anon_sym_DOLLAR] = ACTIONS(301),
    [anon_sym_QMARK] = ACTIONS(301),
    [anon_sym_BQUOTE] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [anon_sym_COLON] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(303),
    [sym_version] = ACTIONS(303),
    [sym_number] = ACTIONS(303),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [aux_sym_interpolation_token1] = ACTIONS(303),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_] = ACTIONS(301),
    [anon_sym_LBRACE_COLON] = ACTIONS(301),
    [anon_sym_LBRACE] = ACTIONS(303),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(301),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(301),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(301),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(301),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(301),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(301),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(301),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(301),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(303),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(303),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(303),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(303),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(303),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(303),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(303),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(303),
    [anon_sym_3] = ACTIONS(303),
    [anon_sym_LBRACE_SLASH] = ACTIONS(301),
    [aux_sym_string_token8] = ACTIONS(301),
    [sym_char] = ACTIONS(301),
    [anon_sym_true] = ACTIONS(303),
    [anon_sym_false] = ACTIONS(303),
    [anon_sym_maybe] = ACTIONS(303),
    [sym_null] = ACTIONS(303),
    [sym_builtin] = ACTIONS(303),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [sym_shebang] = ACTIONS(305),
    [sym_comment] = ACTIONS(305),
    [sym_label] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_POUND_LBRACK] = ACTIONS(305),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(307),
    [anon_sym_STAR] = ACTIONS(305),
    [anon_sym_SLASH] = ACTIONS(305),
    [anon_sym_PERCENT] = ACTIONS(305),
    [anon_sym_CARET] = ACTIONS(305),
    [anon_sym_EQ] = ACTIONS(307),
    [anon_sym_LT] = ACTIONS(307),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_LT_EQ_GT] = ACTIONS(305),
    [anon_sym_AMP] = ACTIONS(305),
    [anon_sym_PIPE] = ACTIONS(305),
    [anon_sym_DOT_DOT] = ACTIONS(307),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(305),
    [anon_sym_DASH_GT] = ACTIONS(305),
    [anon_sym_EQ_GT] = ACTIONS(305),
    [anon_sym_EQ_EQ_GT] = ACTIONS(305),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(305),
    [anon_sym_DASH_DASH_GT] = ACTIONS(305),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(305),
    [anon_sym_LT_DASH_GT] = ACTIONS(305),
    [anon_sym_COLON_COLON] = ACTIONS(305),
    [anon_sym_BANG] = ACTIONS(307),
    [anon_sym_BANG_BANG] = ACTIONS(305),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_BSLASH] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(305),
    [anon_sym_POUND] = ACTIONS(307),
    [anon_sym_DOLLAR] = ACTIONS(305),
    [anon_sym_QMARK] = ACTIONS(305),
    [anon_sym_BQUOTE] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [anon_sym_COLON] = ACTIONS(307),
    [anon_sym_DOT] = ACTIONS(307),
    [sym_version] = ACTIONS(307),
    [sym_number] = ACTIONS(307),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [aux_sym_interpolation_token1] = ACTIONS(307),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(305),
    [anon_sym_] = ACTIONS(305),
    [anon_sym_LBRACE_COLON] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(305),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(305),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(305),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(305),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(305),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(305),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(305),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(305),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(307),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(307),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(307),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(307),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(307),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(307),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(307),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(307),
    [anon_sym_3] = ACTIONS(307),
    [anon_sym_LBRACE_SLASH] = ACTIONS(305),
    [aux_sym_string_token8] = ACTIONS(305),
    [sym_char] = ACTIONS(305),
    [anon_sym_true] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(307),
    [anon_sym_maybe] = ACTIONS(307),
    [sym_null] = ACTIONS(307),
    [sym_builtin] = ACTIONS(307),
  },
  [44] = {
    [sym_shebang] = ACTIONS(257),
    [sym_comment] = ACTIONS(257),
    [sym_label] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_RBRACK] = ACTIONS(257),
    [anon_sym_POUND_LBRACK] = ACTIONS(257),
    [anon_sym_PLUS] = ACTIONS(257),
    [anon_sym_DASH] = ACTIONS(259),
    [anon_sym_STAR] = ACTIONS(257),
    [anon_sym_SLASH] = ACTIONS(257),
    [anon_sym_PERCENT] = ACTIONS(257),
    [anon_sym_CARET] = ACTIONS(257),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_LT_EQ_GT] = ACTIONS(257),
    [anon_sym_AMP] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(257),
    [anon_sym_DOT_DOT] = ACTIONS(259),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(257),
    [anon_sym_DASH_GT] = ACTIONS(257),
    [anon_sym_EQ_GT] = ACTIONS(257),
    [anon_sym_EQ_EQ_GT] = ACTIONS(257),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(257),
    [anon_sym_DASH_DASH_GT] = ACTIONS(257),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(257),
    [anon_sym_LT_DASH_GT] = ACTIONS(257),
    [anon_sym_COLON_COLON] = ACTIONS(257),
    [anon_sym_BANG] = ACTIONS(259),
    [anon_sym_BANG_BANG] = ACTIONS(257),
    [anon_sym_TILDE] = ACTIONS(259),
    [anon_sym_BSLASH] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(257),
    [anon_sym_POUND] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(257),
    [anon_sym_QMARK] = ACTIONS(257),
    [anon_sym_BQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(257),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_DOT] = ACTIONS(259),
    [sym_version] = ACTIONS(259),
    [sym_number] = ACTIONS(259),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(257),
    [aux_sym_interpolation_token1] = ACTIONS(259),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(257),
    [anon_sym_] = ACTIONS(257),
    [anon_sym_LBRACE_COLON] = ACTIONS(257),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(257),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(257),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(257),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(257),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(257),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(257),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(257),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(257),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(259),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(259),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(259),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(259),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(259),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(259),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(259),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(259),
    [anon_sym_3] = ACTIONS(259),
    [anon_sym_LBRACE_SLASH] = ACTIONS(257),
    [aux_sym_string_token8] = ACTIONS(257),
    [sym_char] = ACTIONS(257),
    [anon_sym_true] = ACTIONS(259),
    [anon_sym_false] = ACTIONS(259),
    [anon_sym_maybe] = ACTIONS(259),
    [sym_null] = ACTIONS(259),
    [sym_builtin] = ACTIONS(259),
  },
  [45] = {
    [sym_shebang] = ACTIONS(309),
    [sym_comment] = ACTIONS(309),
    [sym_label] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_RBRACK] = ACTIONS(309),
    [anon_sym_POUND_LBRACK] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(309),
    [anon_sym_SLASH] = ACTIONS(309),
    [anon_sym_PERCENT] = ACTIONS(309),
    [anon_sym_CARET] = ACTIONS(309),
    [anon_sym_EQ] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_LT_EQ_GT] = ACTIONS(309),
    [anon_sym_AMP] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(309),
    [anon_sym_DOT_DOT] = ACTIONS(311),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(309),
    [anon_sym_DASH_GT] = ACTIONS(309),
    [anon_sym_EQ_GT] = ACTIONS(309),
    [anon_sym_EQ_EQ_GT] = ACTIONS(309),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(309),
    [anon_sym_DASH_DASH_GT] = ACTIONS(309),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(309),
    [anon_sym_LT_DASH_GT] = ACTIONS(309),
    [anon_sym_COLON_COLON] = ACTIONS(309),
    [anon_sym_BANG] = ACTIONS(311),
    [anon_sym_BANG_BANG] = ACTIONS(309),
    [anon_sym_TILDE] = ACTIONS(311),
    [anon_sym_BSLASH] = ACTIONS(309),
    [anon_sym_AT] = ACTIONS(309),
    [anon_sym_POUND] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(309),
    [anon_sym_QMARK] = ACTIONS(309),
    [anon_sym_BQUOTE] = ACTIONS(311),
    [anon_sym_SQUOTE] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(311),
    [sym_version] = ACTIONS(311),
    [sym_number] = ACTIONS(311),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [aux_sym_interpolation_token1] = ACTIONS(311),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_] = ACTIONS(309),
    [anon_sym_LBRACE_COLON] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(309),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(309),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(309),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(309),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(309),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(309),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(309),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(309),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(311),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(311),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(311),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(311),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(311),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(311),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(311),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(311),
    [anon_sym_3] = ACTIONS(311),
    [anon_sym_LBRACE_SLASH] = ACTIONS(309),
    [aux_sym_string_token8] = ACTIONS(309),
    [sym_char] = ACTIONS(309),
    [anon_sym_true] = ACTIONS(311),
    [anon_sym_false] = ACTIONS(311),
    [anon_sym_maybe] = ACTIONS(311),
    [sym_null] = ACTIONS(311),
    [sym_builtin] = ACTIONS(311),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [sym_shebang] = ACTIONS(277),
    [sym_comment] = ACTIONS(277),
    [sym_label] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_POUND_LBRACK] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(279),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_PERCENT] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LT] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_LT_EQ_GT] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_DOT_DOT] = ACTIONS(279),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(277),
    [anon_sym_DASH_GT] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [anon_sym_EQ_EQ_GT] = ACTIONS(277),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(277),
    [anon_sym_DASH_DASH_GT] = ACTIONS(277),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(277),
    [anon_sym_LT_DASH_GT] = ACTIONS(277),
    [anon_sym_COLON_COLON] = ACTIONS(277),
    [anon_sym_BANG] = ACTIONS(279),
    [anon_sym_BANG_BANG] = ACTIONS(277),
    [anon_sym_TILDE] = ACTIONS(279),
    [anon_sym_BSLASH] = ACTIONS(277),
    [anon_sym_AT] = ACTIONS(277),
    [anon_sym_POUND] = ACTIONS(279),
    [anon_sym_DOLLAR] = ACTIONS(277),
    [anon_sym_QMARK] = ACTIONS(277),
    [anon_sym_BQUOTE] = ACTIONS(279),
    [anon_sym_SQUOTE] = ACTIONS(277),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_DOT] = ACTIONS(279),
    [sym_version] = ACTIONS(279),
    [sym_number] = ACTIONS(279),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [aux_sym_interpolation_token1] = ACTIONS(279),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_] = ACTIONS(277),
    [anon_sym_LBRACE_COLON] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(277),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(277),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(277),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(277),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(277),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(277),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(277),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(277),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(279),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(279),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(279),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(279),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(279),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(279),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(279),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(279),
    [anon_sym_3] = ACTIONS(279),
    [anon_sym_LBRACE_SLASH] = ACTIONS(277),
    [aux_sym_string_token8] = ACTIONS(277),
    [sym_char] = ACTIONS(277),
    [anon_sym_true] = ACTIONS(279),
    [anon_sym_false] = ACTIONS(279),
    [anon_sym_maybe] = ACTIONS(279),
    [sym_null] = ACTIONS(279),
    [sym_builtin] = ACTIONS(279),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_shebang] = ACTIONS(241),
    [sym_comment] = ACTIONS(241),
    [sym_label] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_POUND_LBRACK] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_PERCENT] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_LT_EQ_GT] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(255),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(241),
    [anon_sym_DASH_GT] = ACTIONS(241),
    [anon_sym_EQ_GT] = ACTIONS(241),
    [anon_sym_EQ_EQ_GT] = ACTIONS(241),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(241),
    [anon_sym_DASH_DASH_GT] = ACTIONS(241),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(241),
    [anon_sym_LT_DASH_GT] = ACTIONS(241),
    [anon_sym_COLON_COLON] = ACTIONS(241),
    [anon_sym_BANG] = ACTIONS(255),
    [anon_sym_BANG_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_BSLASH] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(241),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(255),
    [sym_version] = ACTIONS(255),
    [sym_number] = ACTIONS(255),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [aux_sym_interpolation_token1] = ACTIONS(255),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(241),
    [anon_sym_] = ACTIONS(241),
    [anon_sym_LBRACE_COLON] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(255),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(255),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(255),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(255),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(255),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(255),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(255),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(255),
    [anon_sym_3] = ACTIONS(255),
    [anon_sym_LBRACE_SLASH] = ACTIONS(241),
    [aux_sym_string_token8] = ACTIONS(241),
    [sym_char] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [anon_sym_maybe] = ACTIONS(255),
    [sym_null] = ACTIONS(255),
    [sym_builtin] = ACTIONS(255),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_shebang] = ACTIONS(241),
    [sym_comment] = ACTIONS(241),
    [sym_label] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_POUND_LBRACK] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_PERCENT] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_LT_EQ_GT] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(255),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(241),
    [anon_sym_DASH_GT] = ACTIONS(241),
    [anon_sym_EQ_GT] = ACTIONS(241),
    [anon_sym_EQ_EQ_GT] = ACTIONS(241),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(241),
    [anon_sym_DASH_DASH_GT] = ACTIONS(241),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(241),
    [anon_sym_LT_DASH_GT] = ACTIONS(241),
    [anon_sym_COLON_COLON] = ACTIONS(241),
    [anon_sym_BANG] = ACTIONS(255),
    [anon_sym_BANG_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_BSLASH] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(241),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(255),
    [sym_version] = ACTIONS(255),
    [sym_number] = ACTIONS(255),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [aux_sym_interpolation_token1] = ACTIONS(255),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(241),
    [anon_sym_] = ACTIONS(241),
    [anon_sym_LBRACE_COLON] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(255),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(255),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(255),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(255),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(255),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(255),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(255),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(255),
    [anon_sym_3] = ACTIONS(255),
    [anon_sym_LBRACE_SLASH] = ACTIONS(241),
    [aux_sym_string_token8] = ACTIONS(241),
    [sym_char] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [anon_sym_maybe] = ACTIONS(255),
    [sym_null] = ACTIONS(255),
    [sym_builtin] = ACTIONS(255),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_shebang] = ACTIONS(241),
    [sym_comment] = ACTIONS(241),
    [sym_label] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_POUND_LBRACK] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_LT_EQ_GT] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(255),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(241),
    [anon_sym_DASH_GT] = ACTIONS(241),
    [anon_sym_EQ_GT] = ACTIONS(241),
    [anon_sym_EQ_EQ_GT] = ACTIONS(241),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(241),
    [anon_sym_DASH_DASH_GT] = ACTIONS(241),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(241),
    [anon_sym_LT_DASH_GT] = ACTIONS(241),
    [anon_sym_COLON_COLON] = ACTIONS(241),
    [anon_sym_BANG] = ACTIONS(255),
    [anon_sym_BANG_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_BSLASH] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(241),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(255),
    [sym_version] = ACTIONS(255),
    [sym_number] = ACTIONS(255),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [aux_sym_interpolation_token1] = ACTIONS(255),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(241),
    [anon_sym_] = ACTIONS(241),
    [anon_sym_LBRACE_COLON] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(255),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(255),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(255),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(255),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(255),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(255),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(255),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(255),
    [anon_sym_3] = ACTIONS(255),
    [anon_sym_LBRACE_SLASH] = ACTIONS(241),
    [aux_sym_string_token8] = ACTIONS(241),
    [sym_char] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [anon_sym_maybe] = ACTIONS(255),
    [sym_null] = ACTIONS(255),
    [sym_builtin] = ACTIONS(255),
  },
  [50] = {
    [sym_shebang] = ACTIONS(285),
    [sym_comment] = ACTIONS(285),
    [sym_label] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_POUND_LBRACK] = ACTIONS(285),
    [anon_sym_PLUS] = ACTIONS(285),
    [anon_sym_DASH] = ACTIONS(287),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_PERCENT] = ACTIONS(285),
    [anon_sym_CARET] = ACTIONS(285),
    [anon_sym_EQ] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(287),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_LT_EQ_GT] = ACTIONS(285),
    [anon_sym_AMP] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_DOT_DOT] = ACTIONS(287),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(285),
    [anon_sym_DASH_GT] = ACTIONS(285),
    [anon_sym_EQ_GT] = ACTIONS(285),
    [anon_sym_EQ_EQ_GT] = ACTIONS(285),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(285),
    [anon_sym_DASH_DASH_GT] = ACTIONS(285),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(285),
    [anon_sym_LT_DASH_GT] = ACTIONS(285),
    [anon_sym_COLON_COLON] = ACTIONS(285),
    [anon_sym_BANG] = ACTIONS(287),
    [anon_sym_BANG_BANG] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_BSLASH] = ACTIONS(285),
    [anon_sym_AT] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(287),
    [anon_sym_DOLLAR] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_BQUOTE] = ACTIONS(287),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(287),
    [anon_sym_DOT] = ACTIONS(287),
    [sym_version] = ACTIONS(287),
    [sym_number] = ACTIONS(287),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [aux_sym_interpolation_token1] = ACTIONS(287),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(285),
    [anon_sym_] = ACTIONS(285),
    [anon_sym_LBRACE_COLON] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(285),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(285),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(285),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(285),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(285),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(285),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(285),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(285),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(287),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(287),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(287),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(287),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(287),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(287),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(287),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(287),
    [anon_sym_3] = ACTIONS(287),
    [anon_sym_LBRACE_SLASH] = ACTIONS(285),
    [aux_sym_string_token8] = ACTIONS(285),
    [sym_char] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(287),
    [anon_sym_false] = ACTIONS(287),
    [anon_sym_maybe] = ACTIONS(287),
    [sym_null] = ACTIONS(287),
    [sym_builtin] = ACTIONS(287),
  },
  [51] = {
    [sym_shebang] = ACTIONS(265),
    [sym_comment] = ACTIONS(265),
    [sym_label] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [anon_sym_POUND_LBRACK] = ACTIONS(265),
    [anon_sym_PLUS] = ACTIONS(265),
    [anon_sym_DASH] = ACTIONS(267),
    [anon_sym_STAR] = ACTIONS(265),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_PERCENT] = ACTIONS(265),
    [anon_sym_CARET] = ACTIONS(265),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_LT] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_LT_EQ_GT] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_DOT_DOT] = ACTIONS(267),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(265),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [anon_sym_EQ_GT] = ACTIONS(265),
    [anon_sym_EQ_EQ_GT] = ACTIONS(265),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(265),
    [anon_sym_DASH_DASH_GT] = ACTIONS(265),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(265),
    [anon_sym_LT_DASH_GT] = ACTIONS(265),
    [anon_sym_COLON_COLON] = ACTIONS(265),
    [anon_sym_BANG] = ACTIONS(267),
    [anon_sym_BANG_BANG] = ACTIONS(265),
    [anon_sym_TILDE] = ACTIONS(267),
    [anon_sym_BSLASH] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(265),
    [anon_sym_POUND] = ACTIONS(267),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_QMARK] = ACTIONS(265),
    [anon_sym_BQUOTE] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(267),
    [anon_sym_DOT] = ACTIONS(267),
    [sym_version] = ACTIONS(267),
    [sym_number] = ACTIONS(267),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [aux_sym_interpolation_token1] = ACTIONS(267),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(265),
    [anon_sym_] = ACTIONS(265),
    [anon_sym_LBRACE_COLON] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(265),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(265),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(265),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(265),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(265),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(265),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(265),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(265),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(267),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(267),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(267),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(267),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(267),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(267),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(267),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(267),
    [anon_sym_3] = ACTIONS(267),
    [anon_sym_LBRACE_SLASH] = ACTIONS(265),
    [aux_sym_string_token8] = ACTIONS(265),
    [sym_char] = ACTIONS(265),
    [anon_sym_true] = ACTIONS(267),
    [anon_sym_false] = ACTIONS(267),
    [anon_sym_maybe] = ACTIONS(267),
    [sym_null] = ACTIONS(267),
    [sym_builtin] = ACTIONS(267),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_shebang] = ACTIONS(241),
    [sym_comment] = ACTIONS(241),
    [sym_label] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_POUND_LBRACK] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_PERCENT] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_LT_EQ_GT] = ACTIONS(225),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_DOT_DOT] = ACTIONS(223),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(225),
    [anon_sym_DASH_GT] = ACTIONS(225),
    [anon_sym_EQ_GT] = ACTIONS(225),
    [anon_sym_EQ_EQ_GT] = ACTIONS(225),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(225),
    [anon_sym_DASH_DASH_GT] = ACTIONS(225),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(225),
    [anon_sym_LT_DASH_GT] = ACTIONS(225),
    [anon_sym_COLON_COLON] = ACTIONS(225),
    [anon_sym_BANG] = ACTIONS(255),
    [anon_sym_BANG_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_BSLASH] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(241),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(255),
    [sym_version] = ACTIONS(255),
    [sym_number] = ACTIONS(255),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [aux_sym_interpolation_token1] = ACTIONS(255),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(241),
    [anon_sym_] = ACTIONS(241),
    [anon_sym_LBRACE_COLON] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(241),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(255),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(255),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(255),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(255),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(255),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(255),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(255),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(255),
    [anon_sym_3] = ACTIONS(255),
    [anon_sym_LBRACE_SLASH] = ACTIONS(241),
    [aux_sym_string_token8] = ACTIONS(241),
    [sym_char] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [anon_sym_maybe] = ACTIONS(255),
    [sym_null] = ACTIONS(255),
    [sym_builtin] = ACTIONS(255),
  },
  [53] = {
    [sym_shebang] = ACTIONS(317),
    [sym_comment] = ACTIONS(317),
    [sym_label] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_POUND_LBRACK] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(317),
    [anon_sym_SLASH] = ACTIONS(317),
    [anon_sym_PERCENT] = ACTIONS(317),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym_EQ] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_LT_EQ_GT] = ACTIONS(317),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_DOT_DOT] = ACTIONS(319),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(317),
    [anon_sym_DASH_GT] = ACTIONS(317),
    [anon_sym_EQ_GT] = ACTIONS(317),
    [anon_sym_EQ_EQ_GT] = ACTIONS(317),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(317),
    [anon_sym_DASH_DASH_GT] = ACTIONS(317),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(317),
    [anon_sym_LT_DASH_GT] = ACTIONS(317),
    [anon_sym_COLON_COLON] = ACTIONS(317),
    [anon_sym_BANG] = ACTIONS(319),
    [anon_sym_BANG_BANG] = ACTIONS(317),
    [anon_sym_TILDE] = ACTIONS(319),
    [anon_sym_BSLASH] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(317),
    [anon_sym_POUND] = ACTIONS(319),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_BQUOTE] = ACTIONS(319),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(319),
    [anon_sym_DOT] = ACTIONS(319),
    [sym_version] = ACTIONS(319),
    [sym_number] = ACTIONS(319),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [aux_sym_interpolation_token1] = ACTIONS(319),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(317),
    [anon_sym_] = ACTIONS(317),
    [anon_sym_LBRACE_COLON] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(317),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(317),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(317),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(317),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(317),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(317),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(317),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(317),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(319),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(319),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(319),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(319),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(319),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(319),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(319),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(319),
    [anon_sym_3] = ACTIONS(319),
    [anon_sym_LBRACE_SLASH] = ACTIONS(317),
    [aux_sym_string_token8] = ACTIONS(317),
    [sym_char] = ACTIONS(317),
    [anon_sym_true] = ACTIONS(319),
    [anon_sym_false] = ACTIONS(319),
    [anon_sym_maybe] = ACTIONS(319),
    [sym_null] = ACTIONS(319),
    [sym_builtin] = ACTIONS(319),
  },
  [54] = {
    [sym__statement] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_block] = STATE(28),
    [sym_dictionary] = STATE(28),
    [sym_function_call] = STATE(57),
    [sym__expression] = STATE(28),
    [sym_binary_expression] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_type_annotation] = STATE(28),
    [sym_attribute] = STATE(28),
    [sym_color] = STATE(28),
    [sym_unit] = STATE(28),
    [sym_interpolated_string] = STATE(28),
    [sym_template_string] = STATE(28),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(57),
    [sym_shebang] = ACTIONS(321),
    [sym_comment] = ACTIONS(321),
    [sym_label] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(327),
    [anon_sym_POUND_LBRACK] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_BANG_BANG] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_version] = ACTIONS(345),
    [sym_number] = ACTIONS(345),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [aux_sym_interpolation_token1] = ACTIONS(351),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_] = ACTIONS(355),
    [anon_sym_LBRACE_COLON] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(363),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(363),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(363),
    [anon_sym_3] = ACTIONS(365),
    [anon_sym_LBRACE_SLASH] = ACTIONS(367),
    [aux_sym_string_token8] = ACTIONS(369),
    [sym_char] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(373),
    [anon_sym_maybe] = ACTIONS(373),
    [sym_null] = ACTIONS(345),
    [sym_builtin] = ACTIONS(375),
  },
  [55] = {
    [sym__statement] = STATE(55),
    [sym_assignment] = STATE(55),
    [sym_block] = STATE(24),
    [sym_dictionary] = STATE(24),
    [sym_function_call] = STATE(55),
    [sym__expression] = STATE(24),
    [sym_binary_expression] = STATE(24),
    [sym_unary_expression] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_type_annotation] = STATE(24),
    [sym_attribute] = STATE(24),
    [sym_color] = STATE(24),
    [sym_unit] = STATE(24),
    [sym_interpolated_string] = STATE(24),
    [sym_template_string] = STATE(24),
    [sym_string] = STATE(24),
    [sym_boolean] = STATE(24),
    [sym_identifier] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(377),
    [sym_shebang] = ACTIONS(379),
    [sym_comment] = ACTIONS(379),
    [sym_label] = ACTIONS(382),
    [anon_sym_LBRACK] = ACTIONS(385),
    [anon_sym_POUND_LBRACK] = ACTIONS(388),
    [anon_sym_BANG] = ACTIONS(391),
    [anon_sym_BANG_BANG] = ACTIONS(394),
    [anon_sym_TILDE] = ACTIONS(391),
    [anon_sym_BSLASH] = ACTIONS(394),
    [anon_sym_AT] = ACTIONS(394),
    [anon_sym_POUND] = ACTIONS(397),
    [anon_sym_DOLLAR] = ACTIONS(394),
    [anon_sym_QMARK] = ACTIONS(394),
    [anon_sym_BQUOTE] = ACTIONS(400),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_COLON] = ACTIONS(406),
    [anon_sym_DOT] = ACTIONS(409),
    [sym_version] = ACTIONS(412),
    [sym_number] = ACTIONS(412),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(415),
    [anon_sym_DQUOTE] = ACTIONS(418),
    [aux_sym_interpolation_token1] = ACTIONS(421),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(424),
    [anon_sym_] = ACTIONS(427),
    [anon_sym_LBRACE_COLON] = ACTIONS(430),
    [anon_sym_LBRACE] = ACTIONS(433),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(436),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(436),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(436),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(436),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(436),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(436),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(436),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(436),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(439),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(439),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(439),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(439),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(439),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(439),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(439),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(439),
    [anon_sym_3] = ACTIONS(442),
    [anon_sym_LBRACE_SLASH] = ACTIONS(445),
    [aux_sym_string_token8] = ACTIONS(448),
    [sym_char] = ACTIONS(451),
    [anon_sym_true] = ACTIONS(454),
    [anon_sym_false] = ACTIONS(454),
    [anon_sym_maybe] = ACTIONS(454),
    [sym_null] = ACTIONS(412),
    [sym_builtin] = ACTIONS(457),
  },
  [56] = {
    [sym__statement] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_block] = STATE(28),
    [sym_dictionary] = STATE(28),
    [sym_function_call] = STATE(59),
    [sym__expression] = STATE(28),
    [sym_binary_expression] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_type_annotation] = STATE(28),
    [sym_attribute] = STATE(28),
    [sym_color] = STATE(28),
    [sym_unit] = STATE(28),
    [sym_interpolated_string] = STATE(28),
    [sym_template_string] = STATE(28),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(59),
    [sym_shebang] = ACTIONS(460),
    [sym_comment] = ACTIONS(460),
    [sym_label] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(462),
    [anon_sym_POUND_LBRACK] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_BANG_BANG] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_version] = ACTIONS(345),
    [sym_number] = ACTIONS(345),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [aux_sym_interpolation_token1] = ACTIONS(351),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_] = ACTIONS(355),
    [anon_sym_LBRACE_COLON] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(363),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(363),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(363),
    [anon_sym_3] = ACTIONS(365),
    [anon_sym_LBRACE_SLASH] = ACTIONS(367),
    [aux_sym_string_token8] = ACTIONS(369),
    [sym_char] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(373),
    [anon_sym_maybe] = ACTIONS(373),
    [sym_null] = ACTIONS(345),
    [sym_builtin] = ACTIONS(375),
  },
  [57] = {
    [sym__statement] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_block] = STATE(28),
    [sym_dictionary] = STATE(28),
    [sym_function_call] = STATE(59),
    [sym__expression] = STATE(28),
    [sym_binary_expression] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_type_annotation] = STATE(28),
    [sym_attribute] = STATE(28),
    [sym_color] = STATE(28),
    [sym_unit] = STATE(28),
    [sym_interpolated_string] = STATE(28),
    [sym_template_string] = STATE(28),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(59),
    [sym_shebang] = ACTIONS(460),
    [sym_comment] = ACTIONS(460),
    [sym_label] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(464),
    [anon_sym_POUND_LBRACK] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_BANG_BANG] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_version] = ACTIONS(345),
    [sym_number] = ACTIONS(345),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [aux_sym_interpolation_token1] = ACTIONS(351),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_] = ACTIONS(355),
    [anon_sym_LBRACE_COLON] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(363),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(363),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(363),
    [anon_sym_3] = ACTIONS(365),
    [anon_sym_LBRACE_SLASH] = ACTIONS(367),
    [aux_sym_string_token8] = ACTIONS(369),
    [sym_char] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(373),
    [anon_sym_maybe] = ACTIONS(373),
    [sym_null] = ACTIONS(345),
    [sym_builtin] = ACTIONS(375),
  },
  [58] = {
    [sym__statement] = STATE(55),
    [sym_assignment] = STATE(55),
    [sym_block] = STATE(24),
    [sym_dictionary] = STATE(24),
    [sym_function_call] = STATE(55),
    [sym__expression] = STATE(24),
    [sym_binary_expression] = STATE(24),
    [sym_unary_expression] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_type_annotation] = STATE(24),
    [sym_attribute] = STATE(24),
    [sym_color] = STATE(24),
    [sym_unit] = STATE(24),
    [sym_interpolated_string] = STATE(24),
    [sym_template_string] = STATE(24),
    [sym_string] = STATE(24),
    [sym_boolean] = STATE(24),
    [sym_identifier] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(466),
    [sym_shebang] = ACTIONS(468),
    [sym_comment] = ACTIONS(468),
    [sym_label] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_BANG_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [sym_version] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [aux_sym_interpolation_token1] = ACTIONS(35),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_LBRACE_COLON] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(47),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(47),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(47),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_LBRACE_SLASH] = ACTIONS(51),
    [aux_sym_string_token8] = ACTIONS(53),
    [sym_char] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_maybe] = ACTIONS(57),
    [sym_null] = ACTIONS(29),
    [sym_builtin] = ACTIONS(59),
  },
  [59] = {
    [sym__statement] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_block] = STATE(28),
    [sym_dictionary] = STATE(28),
    [sym_function_call] = STATE(59),
    [sym__expression] = STATE(28),
    [sym_binary_expression] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_type_annotation] = STATE(28),
    [sym_attribute] = STATE(28),
    [sym_color] = STATE(28),
    [sym_unit] = STATE(28),
    [sym_interpolated_string] = STATE(28),
    [sym_template_string] = STATE(28),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(59),
    [sym_shebang] = ACTIONS(470),
    [sym_comment] = ACTIONS(470),
    [sym_label] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(476),
    [anon_sym_RBRACK] = ACTIONS(377),
    [anon_sym_POUND_LBRACK] = ACTIONS(479),
    [anon_sym_BANG] = ACTIONS(482),
    [anon_sym_BANG_BANG] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(482),
    [anon_sym_BSLASH] = ACTIONS(485),
    [anon_sym_AT] = ACTIONS(485),
    [anon_sym_POUND] = ACTIONS(488),
    [anon_sym_DOLLAR] = ACTIONS(485),
    [anon_sym_QMARK] = ACTIONS(485),
    [anon_sym_BQUOTE] = ACTIONS(491),
    [anon_sym_SQUOTE] = ACTIONS(494),
    [anon_sym_COLON] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(500),
    [sym_version] = ACTIONS(503),
    [sym_number] = ACTIONS(503),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(506),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [aux_sym_interpolation_token1] = ACTIONS(512),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(515),
    [anon_sym_] = ACTIONS(518),
    [anon_sym_LBRACE_COLON] = ACTIONS(521),
    [anon_sym_LBRACE] = ACTIONS(524),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(527),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(527),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(527),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(527),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(527),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(527),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(527),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(527),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(530),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(530),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(530),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(530),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(530),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(530),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(530),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(530),
    [anon_sym_3] = ACTIONS(533),
    [anon_sym_LBRACE_SLASH] = ACTIONS(536),
    [aux_sym_string_token8] = ACTIONS(539),
    [sym_char] = ACTIONS(542),
    [anon_sym_true] = ACTIONS(545),
    [anon_sym_false] = ACTIONS(545),
    [anon_sym_maybe] = ACTIONS(545),
    [sym_null] = ACTIONS(503),
    [sym_builtin] = ACTIONS(548),
  },
  [60] = {
    [sym__statement] = STATE(61),
    [sym_assignment] = STATE(61),
    [sym_block] = STATE(28),
    [sym_dictionary] = STATE(28),
    [sym_function_call] = STATE(61),
    [sym__expression] = STATE(28),
    [sym_binary_expression] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_type_annotation] = STATE(28),
    [sym_attribute] = STATE(28),
    [sym_color] = STATE(28),
    [sym_unit] = STATE(28),
    [sym_interpolated_string] = STATE(28),
    [sym_template_string] = STATE(28),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(61),
    [sym_shebang] = ACTIONS(551),
    [sym_comment] = ACTIONS(551),
    [sym_label] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(553),
    [anon_sym_POUND_LBRACK] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_BANG_BANG] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_version] = ACTIONS(345),
    [sym_number] = ACTIONS(345),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [aux_sym_interpolation_token1] = ACTIONS(351),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_] = ACTIONS(355),
    [anon_sym_LBRACE_COLON] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(363),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(363),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(363),
    [anon_sym_3] = ACTIONS(365),
    [anon_sym_LBRACE_SLASH] = ACTIONS(367),
    [aux_sym_string_token8] = ACTIONS(369),
    [sym_char] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(373),
    [anon_sym_maybe] = ACTIONS(373),
    [sym_null] = ACTIONS(345),
    [sym_builtin] = ACTIONS(375),
  },
  [61] = {
    [sym__statement] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_block] = STATE(28),
    [sym_dictionary] = STATE(28),
    [sym_function_call] = STATE(59),
    [sym__expression] = STATE(28),
    [sym_binary_expression] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_type_annotation] = STATE(28),
    [sym_attribute] = STATE(28),
    [sym_color] = STATE(28),
    [sym_unit] = STATE(28),
    [sym_interpolated_string] = STATE(28),
    [sym_template_string] = STATE(28),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(59),
    [sym_shebang] = ACTIONS(460),
    [sym_comment] = ACTIONS(460),
    [sym_label] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(555),
    [anon_sym_POUND_LBRACK] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_BANG_BANG] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_version] = ACTIONS(345),
    [sym_number] = ACTIONS(345),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [aux_sym_interpolation_token1] = ACTIONS(351),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_] = ACTIONS(355),
    [anon_sym_LBRACE_COLON] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(363),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(363),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(363),
    [anon_sym_3] = ACTIONS(365),
    [anon_sym_LBRACE_SLASH] = ACTIONS(367),
    [aux_sym_string_token8] = ACTIONS(369),
    [sym_char] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(373),
    [anon_sym_maybe] = ACTIONS(373),
    [sym_null] = ACTIONS(345),
    [sym_builtin] = ACTIONS(375),
  },
  [62] = {
    [sym__statement] = STATE(56),
    [sym_assignment] = STATE(56),
    [sym_block] = STATE(28),
    [sym_dictionary] = STATE(28),
    [sym_function_call] = STATE(56),
    [sym__expression] = STATE(28),
    [sym_binary_expression] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_type_annotation] = STATE(28),
    [sym_attribute] = STATE(28),
    [sym_color] = STATE(28),
    [sym_unit] = STATE(28),
    [sym_interpolated_string] = STATE(28),
    [sym_template_string] = STATE(28),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(56),
    [sym_shebang] = ACTIONS(557),
    [sym_comment] = ACTIONS(557),
    [sym_label] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(559),
    [anon_sym_POUND_LBRACK] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_BANG_BANG] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_version] = ACTIONS(345),
    [sym_number] = ACTIONS(345),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [aux_sym_interpolation_token1] = ACTIONS(351),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_] = ACTIONS(355),
    [anon_sym_LBRACE_COLON] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(363),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(363),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(363),
    [anon_sym_3] = ACTIONS(365),
    [anon_sym_LBRACE_SLASH] = ACTIONS(367),
    [aux_sym_string_token8] = ACTIONS(369),
    [sym_char] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(373),
    [anon_sym_maybe] = ACTIONS(373),
    [sym_null] = ACTIONS(345),
    [sym_builtin] = ACTIONS(375),
  },
  [63] = {
    [sym_block] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym__expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_unary_expression] = STATE(5),
    [sym_literal] = STATE(5),
    [sym_type_annotation] = STATE(5),
    [sym_attribute] = STATE(5),
    [sym_color] = STATE(5),
    [sym_unit] = STATE(5),
    [sym_interpolated_string] = STATE(5),
    [sym_template_string] = STATE(5),
    [sym_string] = STATE(5),
    [sym_boolean] = STATE(5),
    [sym_identifier] = STATE(5),
    [aux_sym_function_call_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(561),
    [sym_shebang] = ACTIONS(561),
    [sym_comment] = ACTIONS(561),
    [sym_label] = ACTIONS(561),
    [anon_sym_LBRACK] = ACTIONS(561),
    [anon_sym_POUND_LBRACK] = ACTIONS(561),
    [anon_sym_BANG] = ACTIONS(563),
    [anon_sym_BANG_BANG] = ACTIONS(561),
    [anon_sym_TILDE] = ACTIONS(563),
    [anon_sym_BSLASH] = ACTIONS(561),
    [anon_sym_AT] = ACTIONS(561),
    [anon_sym_POUND] = ACTIONS(563),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [anon_sym_QMARK] = ACTIONS(561),
    [anon_sym_BQUOTE] = ACTIONS(563),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(561),
    [anon_sym_DOT] = ACTIONS(561),
    [sym_version] = ACTIONS(563),
    [sym_number] = ACTIONS(563),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(561),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [aux_sym_interpolation_token1] = ACTIONS(563),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(561),
    [anon_sym_] = ACTIONS(561),
    [anon_sym_LBRACE_COLON] = ACTIONS(561),
    [anon_sym_LBRACE] = ACTIONS(563),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(561),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(561),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(561),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(561),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(561),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(561),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(561),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(561),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(563),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(563),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(563),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(563),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(563),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(563),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(563),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(563),
    [anon_sym_3] = ACTIONS(563),
    [anon_sym_LBRACE_SLASH] = ACTIONS(561),
    [aux_sym_string_token8] = ACTIONS(561),
    [sym_char] = ACTIONS(561),
    [anon_sym_true] = ACTIONS(563),
    [anon_sym_false] = ACTIONS(563),
    [anon_sym_maybe] = ACTIONS(563),
    [sym_null] = ACTIONS(563),
    [sym_builtin] = ACTIONS(563),
  },
  [64] = {
    [sym_block] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym__expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_unary_expression] = STATE(5),
    [sym_literal] = STATE(5),
    [sym_type_annotation] = STATE(5),
    [sym_attribute] = STATE(5),
    [sym_color] = STATE(5),
    [sym_unit] = STATE(5),
    [sym_interpolated_string] = STATE(5),
    [sym_template_string] = STATE(5),
    [sym_string] = STATE(5),
    [sym_boolean] = STATE(5),
    [sym_identifier] = STATE(5),
    [aux_sym_function_call_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(565),
    [sym_shebang] = ACTIONS(565),
    [sym_comment] = ACTIONS(565),
    [sym_label] = ACTIONS(565),
    [anon_sym_LBRACK] = ACTIONS(567),
    [anon_sym_POUND_LBRACK] = ACTIONS(570),
    [anon_sym_BANG] = ACTIONS(573),
    [anon_sym_BANG_BANG] = ACTIONS(576),
    [anon_sym_TILDE] = ACTIONS(573),
    [anon_sym_BSLASH] = ACTIONS(576),
    [anon_sym_AT] = ACTIONS(576),
    [anon_sym_POUND] = ACTIONS(579),
    [anon_sym_DOLLAR] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(576),
    [anon_sym_BQUOTE] = ACTIONS(582),
    [anon_sym_SQUOTE] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(588),
    [anon_sym_DOT] = ACTIONS(591),
    [sym_version] = ACTIONS(594),
    [sym_number] = ACTIONS(594),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(600),
    [aux_sym_interpolation_token1] = ACTIONS(603),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(606),
    [anon_sym_] = ACTIONS(609),
    [anon_sym_LBRACE_COLON] = ACTIONS(612),
    [anon_sym_LBRACE] = ACTIONS(615),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(618),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(618),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(618),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(618),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(618),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(618),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(618),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(618),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(621),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(621),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(621),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(621),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(621),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(621),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(621),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(621),
    [anon_sym_3] = ACTIONS(624),
    [anon_sym_LBRACE_SLASH] = ACTIONS(627),
    [aux_sym_string_token8] = ACTIONS(630),
    [sym_char] = ACTIONS(633),
    [anon_sym_true] = ACTIONS(636),
    [anon_sym_false] = ACTIONS(636),
    [anon_sym_maybe] = ACTIONS(636),
    [sym_null] = ACTIONS(594),
    [sym_builtin] = ACTIONS(594),
  },
  [65] = {
    [sym_block] = STATE(23),
    [sym_dictionary] = STATE(23),
    [sym__expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_unary_expression] = STATE(23),
    [sym_literal] = STATE(23),
    [sym_type_annotation] = STATE(23),
    [sym_attribute] = STATE(23),
    [sym_color] = STATE(23),
    [sym_unit] = STATE(23),
    [sym_interpolated_string] = STATE(23),
    [sym_template_string] = STATE(23),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_identifier] = STATE(23),
    [aux_sym_function_call_repeat1] = STATE(66),
    [sym_shebang] = ACTIONS(561),
    [sym_comment] = ACTIONS(561),
    [sym_label] = ACTIONS(561),
    [anon_sym_LBRACK] = ACTIONS(561),
    [anon_sym_RBRACK] = ACTIONS(561),
    [anon_sym_POUND_LBRACK] = ACTIONS(561),
    [anon_sym_BANG] = ACTIONS(563),
    [anon_sym_BANG_BANG] = ACTIONS(561),
    [anon_sym_TILDE] = ACTIONS(563),
    [anon_sym_BSLASH] = ACTIONS(561),
    [anon_sym_AT] = ACTIONS(561),
    [anon_sym_POUND] = ACTIONS(563),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [anon_sym_QMARK] = ACTIONS(561),
    [anon_sym_BQUOTE] = ACTIONS(563),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(561),
    [anon_sym_DOT] = ACTIONS(561),
    [sym_version] = ACTIONS(563),
    [sym_number] = ACTIONS(563),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(561),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [aux_sym_interpolation_token1] = ACTIONS(563),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(561),
    [anon_sym_] = ACTIONS(561),
    [anon_sym_LBRACE_COLON] = ACTIONS(561),
    [anon_sym_LBRACE] = ACTIONS(563),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(561),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(561),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(561),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(561),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(561),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(561),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(561),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(561),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(563),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(563),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(563),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(563),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(563),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(563),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(563),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(563),
    [anon_sym_3] = ACTIONS(563),
    [anon_sym_LBRACE_SLASH] = ACTIONS(561),
    [aux_sym_string_token8] = ACTIONS(561),
    [sym_char] = ACTIONS(561),
    [anon_sym_true] = ACTIONS(563),
    [anon_sym_false] = ACTIONS(563),
    [anon_sym_maybe] = ACTIONS(563),
    [sym_null] = ACTIONS(563),
    [sym_builtin] = ACTIONS(563),
  },
  [66] = {
    [sym_block] = STATE(23),
    [sym_dictionary] = STATE(23),
    [sym__expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_unary_expression] = STATE(23),
    [sym_literal] = STATE(23),
    [sym_type_annotation] = STATE(23),
    [sym_attribute] = STATE(23),
    [sym_color] = STATE(23),
    [sym_unit] = STATE(23),
    [sym_interpolated_string] = STATE(23),
    [sym_template_string] = STATE(23),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_identifier] = STATE(23),
    [aux_sym_function_call_repeat1] = STATE(66),
    [sym_shebang] = ACTIONS(565),
    [sym_comment] = ACTIONS(565),
    [sym_label] = ACTIONS(565),
    [anon_sym_LBRACK] = ACTIONS(639),
    [anon_sym_RBRACK] = ACTIONS(565),
    [anon_sym_POUND_LBRACK] = ACTIONS(642),
    [anon_sym_BANG] = ACTIONS(645),
    [anon_sym_BANG_BANG] = ACTIONS(648),
    [anon_sym_TILDE] = ACTIONS(645),
    [anon_sym_BSLASH] = ACTIONS(648),
    [anon_sym_AT] = ACTIONS(648),
    [anon_sym_POUND] = ACTIONS(651),
    [anon_sym_DOLLAR] = ACTIONS(648),
    [anon_sym_QMARK] = ACTIONS(648),
    [anon_sym_BQUOTE] = ACTIONS(654),
    [anon_sym_SQUOTE] = ACTIONS(657),
    [anon_sym_COLON] = ACTIONS(660),
    [anon_sym_DOT] = ACTIONS(663),
    [sym_version] = ACTIONS(666),
    [sym_number] = ACTIONS(666),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(669),
    [anon_sym_DQUOTE] = ACTIONS(672),
    [aux_sym_interpolation_token1] = ACTIONS(675),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(678),
    [anon_sym_] = ACTIONS(681),
    [anon_sym_LBRACE_COLON] = ACTIONS(684),
    [anon_sym_LBRACE] = ACTIONS(687),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(690),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(690),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(690),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(690),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(690),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(690),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(690),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(690),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(693),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(693),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(693),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(693),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(693),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(693),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(693),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(693),
    [anon_sym_3] = ACTIONS(696),
    [anon_sym_LBRACE_SLASH] = ACTIONS(699),
    [aux_sym_string_token8] = ACTIONS(702),
    [sym_char] = ACTIONS(705),
    [anon_sym_true] = ACTIONS(708),
    [anon_sym_false] = ACTIONS(708),
    [anon_sym_maybe] = ACTIONS(708),
    [sym_null] = ACTIONS(666),
    [sym_builtin] = ACTIONS(666),
  },
  [67] = {
    [sym_block] = STATE(98),
    [sym_dictionary] = STATE(98),
    [sym__expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_unary_expression] = STATE(98),
    [sym_literal] = STATE(98),
    [sym_type_annotation] = STATE(98),
    [sym_attribute] = STATE(98),
    [sym_color] = STATE(98),
    [sym_unit] = STATE(98),
    [sym_interpolated_string] = STATE(98),
    [sym_template_string] = STATE(98),
    [sym_string] = STATE(98),
    [sym_boolean] = STATE(98),
    [sym_identifier] = STATE(98),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(711),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_RBRACK] = ACTIONS(711),
    [anon_sym_POUND_LBRACK] = ACTIONS(715),
    [anon_sym_BANG] = ACTIONS(717),
    [anon_sym_BANG_BANG] = ACTIONS(719),
    [anon_sym_TILDE] = ACTIONS(717),
    [anon_sym_BSLASH] = ACTIONS(719),
    [anon_sym_AT] = ACTIONS(719),
    [anon_sym_POUND] = ACTIONS(721),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
    [anon_sym_BQUOTE] = ACTIONS(723),
    [anon_sym_SQUOTE] = ACTIONS(725),
    [anon_sym_COLON] = ACTIONS(727),
    [anon_sym_DOT] = ACTIONS(729),
    [sym_version] = ACTIONS(731),
    [sym_number] = ACTIONS(731),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(733),
    [anon_sym_DQUOTE] = ACTIONS(735),
    [aux_sym_interpolation_token1] = ACTIONS(737),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(740),
    [anon_sym_] = ACTIONS(742),
    [anon_sym_LBRACE_COLON] = ACTIONS(744),
    [anon_sym_LBRACE] = ACTIONS(746),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(750),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(750),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(750),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(750),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(750),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(750),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(750),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(750),
    [anon_sym_3] = ACTIONS(752),
    [anon_sym_LBRACE_SLASH] = ACTIONS(754),
    [aux_sym_string_token8] = ACTIONS(756),
    [sym_char] = ACTIONS(758),
    [anon_sym_true] = ACTIONS(760),
    [anon_sym_false] = ACTIONS(760),
    [anon_sym_maybe] = ACTIONS(760),
    [sym_null] = ACTIONS(731),
    [sym_builtin] = ACTIONS(731),
  },
  [68] = {
    [sym_block] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__expression] = STATE(6),
    [sym_binary_expression] = STATE(6),
    [sym_unary_expression] = STATE(6),
    [sym_literal] = STATE(6),
    [sym_type_annotation] = STATE(6),
    [sym_attribute] = STATE(6),
    [sym_color] = STATE(6),
    [sym_unit] = STATE(6),
    [sym_interpolated_string] = STATE(6),
    [sym_template_string] = STATE(6),
    [sym_string] = STATE(6),
    [sym_boolean] = STATE(6),
    [sym_identifier] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_POUND_LBRACK] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_BANG_BANG] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [aux_sym_unit_token1] = ACTIONS(762),
    [sym_version] = ACTIONS(764),
    [sym_number] = ACTIONS(764),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [aux_sym_interpolation_token1] = ACTIONS(351),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_] = ACTIONS(355),
    [anon_sym_LBRACE_COLON] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(363),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(363),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(363),
    [anon_sym_3] = ACTIONS(365),
    [anon_sym_LBRACE_SLASH] = ACTIONS(367),
    [aux_sym_string_token8] = ACTIONS(369),
    [sym_char] = ACTIONS(766),
    [anon_sym_true] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(373),
    [anon_sym_maybe] = ACTIONS(373),
    [sym_null] = ACTIONS(764),
    [sym_builtin] = ACTIONS(764),
  },
  [69] = {
    [sym_block] = STATE(32),
    [sym_dictionary] = STATE(32),
    [sym__expression] = STATE(32),
    [sym_binary_expression] = STATE(32),
    [sym_unary_expression] = STATE(32),
    [sym_literal] = STATE(32),
    [sym_type_annotation] = STATE(32),
    [sym_attribute] = STATE(32),
    [sym_color] = STATE(32),
    [sym_unit] = STATE(32),
    [sym_interpolated_string] = STATE(32),
    [sym_template_string] = STATE(32),
    [sym_string] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_BANG_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [aux_sym_color_token1] = ACTIONS(768),
    [sym_version] = ACTIONS(770),
    [sym_number] = ACTIONS(770),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [aux_sym_interpolation_token1] = ACTIONS(35),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_LBRACE_COLON] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(47),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(47),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(47),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_LBRACE_SLASH] = ACTIONS(51),
    [aux_sym_string_token8] = ACTIONS(53),
    [sym_char] = ACTIONS(772),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_maybe] = ACTIONS(57),
    [sym_null] = ACTIONS(770),
    [sym_builtin] = ACTIONS(770),
  },
  [70] = {
    [sym_block] = STATE(107),
    [sym_dictionary] = STATE(107),
    [sym__expression] = STATE(107),
    [sym_binary_expression] = STATE(107),
    [sym_unary_expression] = STATE(107),
    [sym_literal] = STATE(107),
    [sym_type_annotation] = STATE(107),
    [sym_attribute] = STATE(107),
    [sym_color] = STATE(107),
    [sym_unit] = STATE(107),
    [sym_interpolated_string] = STATE(107),
    [sym_template_string] = STATE(107),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_identifier] = STATE(107),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_POUND_LBRACK] = ACTIONS(715),
    [anon_sym_BANG] = ACTIONS(717),
    [anon_sym_BANG_BANG] = ACTIONS(719),
    [anon_sym_TILDE] = ACTIONS(717),
    [anon_sym_BSLASH] = ACTIONS(719),
    [anon_sym_AT] = ACTIONS(719),
    [anon_sym_POUND] = ACTIONS(721),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
    [anon_sym_BQUOTE] = ACTIONS(723),
    [anon_sym_SQUOTE] = ACTIONS(725),
    [anon_sym_COLON] = ACTIONS(727),
    [anon_sym_DOT] = ACTIONS(729),
    [aux_sym_unit_token1] = ACTIONS(774),
    [sym_version] = ACTIONS(776),
    [sym_number] = ACTIONS(776),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(733),
    [anon_sym_DQUOTE] = ACTIONS(735),
    [aux_sym_interpolation_token1] = ACTIONS(778),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(740),
    [anon_sym_] = ACTIONS(742),
    [anon_sym_LBRACE_COLON] = ACTIONS(744),
    [anon_sym_LBRACE] = ACTIONS(746),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(750),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(750),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(750),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(750),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(750),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(750),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(750),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(750),
    [anon_sym_3] = ACTIONS(752),
    [anon_sym_LBRACE_SLASH] = ACTIONS(754),
    [aux_sym_string_token8] = ACTIONS(756),
    [sym_char] = ACTIONS(780),
    [anon_sym_true] = ACTIONS(760),
    [anon_sym_false] = ACTIONS(760),
    [anon_sym_maybe] = ACTIONS(760),
    [sym_null] = ACTIONS(776),
    [sym_builtin] = ACTIONS(776),
  },
  [71] = {
    [sym_block] = STATE(107),
    [sym_dictionary] = STATE(107),
    [sym__expression] = STATE(107),
    [sym_binary_expression] = STATE(107),
    [sym_unary_expression] = STATE(107),
    [sym_literal] = STATE(107),
    [sym_type_annotation] = STATE(107),
    [sym_attribute] = STATE(107),
    [sym_color] = STATE(107),
    [sym_unit] = STATE(107),
    [sym_interpolated_string] = STATE(107),
    [sym_template_string] = STATE(107),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_identifier] = STATE(107),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_POUND_LBRACK] = ACTIONS(715),
    [anon_sym_BANG] = ACTIONS(717),
    [anon_sym_BANG_BANG] = ACTIONS(719),
    [anon_sym_TILDE] = ACTIONS(717),
    [anon_sym_BSLASH] = ACTIONS(719),
    [anon_sym_AT] = ACTIONS(719),
    [anon_sym_POUND] = ACTIONS(721),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
    [anon_sym_BQUOTE] = ACTIONS(723),
    [anon_sym_SQUOTE] = ACTIONS(725),
    [anon_sym_COLON] = ACTIONS(727),
    [anon_sym_DOT] = ACTIONS(729),
    [aux_sym_color_token1] = ACTIONS(782),
    [sym_version] = ACTIONS(776),
    [sym_number] = ACTIONS(776),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(733),
    [anon_sym_DQUOTE] = ACTIONS(735),
    [aux_sym_interpolation_token1] = ACTIONS(778),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(740),
    [anon_sym_] = ACTIONS(742),
    [anon_sym_LBRACE_COLON] = ACTIONS(744),
    [anon_sym_LBRACE] = ACTIONS(746),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(750),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(750),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(750),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(750),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(750),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(750),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(750),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(750),
    [anon_sym_3] = ACTIONS(752),
    [anon_sym_LBRACE_SLASH] = ACTIONS(754),
    [aux_sym_string_token8] = ACTIONS(756),
    [sym_char] = ACTIONS(780),
    [anon_sym_true] = ACTIONS(760),
    [anon_sym_false] = ACTIONS(760),
    [anon_sym_maybe] = ACTIONS(760),
    [sym_null] = ACTIONS(776),
    [sym_builtin] = ACTIONS(776),
  },
  [72] = {
    [sym_block] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__expression] = STATE(6),
    [sym_binary_expression] = STATE(6),
    [sym_unary_expression] = STATE(6),
    [sym_literal] = STATE(6),
    [sym_type_annotation] = STATE(6),
    [sym_attribute] = STATE(6),
    [sym_color] = STATE(6),
    [sym_unit] = STATE(6),
    [sym_interpolated_string] = STATE(6),
    [sym_template_string] = STATE(6),
    [sym_string] = STATE(6),
    [sym_boolean] = STATE(6),
    [sym_identifier] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_POUND_LBRACK] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_BANG_BANG] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [aux_sym_color_token1] = ACTIONS(784),
    [sym_version] = ACTIONS(764),
    [sym_number] = ACTIONS(764),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [aux_sym_interpolation_token1] = ACTIONS(351),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_] = ACTIONS(355),
    [anon_sym_LBRACE_COLON] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(363),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(363),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(363),
    [anon_sym_3] = ACTIONS(365),
    [anon_sym_LBRACE_SLASH] = ACTIONS(367),
    [aux_sym_string_token8] = ACTIONS(369),
    [sym_char] = ACTIONS(766),
    [anon_sym_true] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(373),
    [anon_sym_maybe] = ACTIONS(373),
    [sym_null] = ACTIONS(764),
    [sym_builtin] = ACTIONS(764),
  },
  [73] = {
    [sym_block] = STATE(32),
    [sym_dictionary] = STATE(32),
    [sym__expression] = STATE(32),
    [sym_binary_expression] = STATE(32),
    [sym_unary_expression] = STATE(32),
    [sym_literal] = STATE(32),
    [sym_type_annotation] = STATE(32),
    [sym_attribute] = STATE(32),
    [sym_color] = STATE(32),
    [sym_unit] = STATE(32),
    [sym_interpolated_string] = STATE(32),
    [sym_template_string] = STATE(32),
    [sym_string] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_BANG_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [aux_sym_unit_token1] = ACTIONS(786),
    [sym_version] = ACTIONS(770),
    [sym_number] = ACTIONS(770),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [aux_sym_interpolation_token1] = ACTIONS(35),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_LBRACE_COLON] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(47),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(47),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(47),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_LBRACE_SLASH] = ACTIONS(51),
    [aux_sym_string_token8] = ACTIONS(53),
    [sym_char] = ACTIONS(772),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_maybe] = ACTIONS(57),
    [sym_null] = ACTIONS(770),
    [sym_builtin] = ACTIONS(770),
  },
  [74] = {
    [sym_block] = STATE(49),
    [sym_dictionary] = STATE(49),
    [sym__expression] = STATE(49),
    [sym_binary_expression] = STATE(49),
    [sym_unary_expression] = STATE(49),
    [sym_literal] = STATE(49),
    [sym_type_annotation] = STATE(49),
    [sym_attribute] = STATE(49),
    [sym_color] = STATE(49),
    [sym_unit] = STATE(49),
    [sym_interpolated_string] = STATE(49),
    [sym_template_string] = STATE(49),
    [sym_string] = STATE(49),
    [sym_boolean] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_BANG_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [sym_version] = ACTIONS(788),
    [sym_number] = ACTIONS(788),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [aux_sym_interpolation_token1] = ACTIONS(35),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_LBRACE_COLON] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(47),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(47),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(47),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_LBRACE_SLASH] = ACTIONS(51),
    [aux_sym_string_token8] = ACTIONS(53),
    [sym_char] = ACTIONS(790),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_maybe] = ACTIONS(57),
    [sym_null] = ACTIONS(788),
    [sym_builtin] = ACTIONS(788),
  },
  [75] = {
    [sym_block] = STATE(107),
    [sym_dictionary] = STATE(107),
    [sym__expression] = STATE(107),
    [sym_binary_expression] = STATE(107),
    [sym_unary_expression] = STATE(107),
    [sym_literal] = STATE(107),
    [sym_type_annotation] = STATE(107),
    [sym_attribute] = STATE(107),
    [sym_color] = STATE(107),
    [sym_unit] = STATE(107),
    [sym_interpolated_string] = STATE(107),
    [sym_template_string] = STATE(107),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_identifier] = STATE(107),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_POUND_LBRACK] = ACTIONS(715),
    [anon_sym_BANG] = ACTIONS(717),
    [anon_sym_BANG_BANG] = ACTIONS(719),
    [anon_sym_TILDE] = ACTIONS(717),
    [anon_sym_BSLASH] = ACTIONS(719),
    [anon_sym_AT] = ACTIONS(719),
    [anon_sym_POUND] = ACTIONS(721),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
    [anon_sym_BQUOTE] = ACTIONS(723),
    [anon_sym_SQUOTE] = ACTIONS(725),
    [anon_sym_COLON] = ACTIONS(727),
    [anon_sym_DOT] = ACTIONS(729),
    [sym_version] = ACTIONS(776),
    [sym_number] = ACTIONS(776),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(733),
    [anon_sym_DQUOTE] = ACTIONS(735),
    [aux_sym_interpolation_token1] = ACTIONS(778),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(740),
    [anon_sym_] = ACTIONS(742),
    [anon_sym_LBRACE_COLON] = ACTIONS(744),
    [anon_sym_LBRACE] = ACTIONS(746),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(750),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(750),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(750),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(750),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(750),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(750),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(750),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(750),
    [anon_sym_3] = ACTIONS(752),
    [anon_sym_LBRACE_SLASH] = ACTIONS(754),
    [aux_sym_string_token8] = ACTIONS(756),
    [sym_char] = ACTIONS(780),
    [anon_sym_true] = ACTIONS(760),
    [anon_sym_false] = ACTIONS(760),
    [anon_sym_maybe] = ACTIONS(760),
    [sym_null] = ACTIONS(776),
    [sym_builtin] = ACTIONS(776),
  },
  [76] = {
    [sym_block] = STATE(32),
    [sym_dictionary] = STATE(32),
    [sym__expression] = STATE(32),
    [sym_binary_expression] = STATE(32),
    [sym_unary_expression] = STATE(32),
    [sym_literal] = STATE(32),
    [sym_type_annotation] = STATE(32),
    [sym_attribute] = STATE(32),
    [sym_color] = STATE(32),
    [sym_unit] = STATE(32),
    [sym_interpolated_string] = STATE(32),
    [sym_template_string] = STATE(32),
    [sym_string] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_BANG_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [sym_version] = ACTIONS(770),
    [sym_number] = ACTIONS(770),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [aux_sym_interpolation_token1] = ACTIONS(35),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_LBRACE_COLON] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(47),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(47),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(47),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_LBRACE_SLASH] = ACTIONS(51),
    [aux_sym_string_token8] = ACTIONS(53),
    [sym_char] = ACTIONS(772),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_maybe] = ACTIONS(57),
    [sym_null] = ACTIONS(770),
    [sym_builtin] = ACTIONS(770),
  },
  [77] = {
    [sym_block] = STATE(47),
    [sym_dictionary] = STATE(47),
    [sym__expression] = STATE(47),
    [sym_binary_expression] = STATE(47),
    [sym_unary_expression] = STATE(47),
    [sym_literal] = STATE(47),
    [sym_type_annotation] = STATE(47),
    [sym_attribute] = STATE(47),
    [sym_color] = STATE(47),
    [sym_unit] = STATE(47),
    [sym_interpolated_string] = STATE(47),
    [sym_template_string] = STATE(47),
    [sym_string] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_identifier] = STATE(47),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_BANG_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [sym_version] = ACTIONS(792),
    [sym_number] = ACTIONS(792),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [aux_sym_interpolation_token1] = ACTIONS(35),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_LBRACE_COLON] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(47),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(47),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(47),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_LBRACE_SLASH] = ACTIONS(51),
    [aux_sym_string_token8] = ACTIONS(53),
    [sym_char] = ACTIONS(794),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_maybe] = ACTIONS(57),
    [sym_null] = ACTIONS(792),
    [sym_builtin] = ACTIONS(792),
  },
  [78] = {
    [sym_block] = STATE(48),
    [sym_dictionary] = STATE(48),
    [sym__expression] = STATE(48),
    [sym_binary_expression] = STATE(48),
    [sym_unary_expression] = STATE(48),
    [sym_literal] = STATE(48),
    [sym_type_annotation] = STATE(48),
    [sym_attribute] = STATE(48),
    [sym_color] = STATE(48),
    [sym_unit] = STATE(48),
    [sym_interpolated_string] = STATE(48),
    [sym_template_string] = STATE(48),
    [sym_string] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym_identifier] = STATE(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_BANG_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [sym_version] = ACTIONS(796),
    [sym_number] = ACTIONS(796),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [aux_sym_interpolation_token1] = ACTIONS(35),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_LBRACE_COLON] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(47),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(47),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(47),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_LBRACE_SLASH] = ACTIONS(51),
    [aux_sym_string_token8] = ACTIONS(53),
    [sym_char] = ACTIONS(798),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_maybe] = ACTIONS(57),
    [sym_null] = ACTIONS(796),
    [sym_builtin] = ACTIONS(796),
  },
  [79] = {
    [sym_block] = STATE(11),
    [sym_dictionary] = STATE(11),
    [sym__expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_unary_expression] = STATE(11),
    [sym_literal] = STATE(11),
    [sym_type_annotation] = STATE(11),
    [sym_attribute] = STATE(11),
    [sym_color] = STATE(11),
    [sym_unit] = STATE(11),
    [sym_interpolated_string] = STATE(11),
    [sym_template_string] = STATE(11),
    [sym_string] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_identifier] = STATE(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_POUND_LBRACK] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_BANG_BANG] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_version] = ACTIONS(800),
    [sym_number] = ACTIONS(800),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [aux_sym_interpolation_token1] = ACTIONS(351),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_] = ACTIONS(355),
    [anon_sym_LBRACE_COLON] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(363),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(363),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(363),
    [anon_sym_3] = ACTIONS(365),
    [anon_sym_LBRACE_SLASH] = ACTIONS(367),
    [aux_sym_string_token8] = ACTIONS(369),
    [sym_char] = ACTIONS(802),
    [anon_sym_true] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(373),
    [anon_sym_maybe] = ACTIONS(373),
    [sym_null] = ACTIONS(800),
    [sym_builtin] = ACTIONS(800),
  },
  [80] = {
    [sym_block] = STATE(52),
    [sym_dictionary] = STATE(52),
    [sym__expression] = STATE(52),
    [sym_binary_expression] = STATE(52),
    [sym_unary_expression] = STATE(52),
    [sym_literal] = STATE(52),
    [sym_type_annotation] = STATE(52),
    [sym_attribute] = STATE(52),
    [sym_color] = STATE(52),
    [sym_unit] = STATE(52),
    [sym_interpolated_string] = STATE(52),
    [sym_template_string] = STATE(52),
    [sym_string] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_identifier] = STATE(52),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_BANG_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [sym_version] = ACTIONS(804),
    [sym_number] = ACTIONS(804),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [aux_sym_interpolation_token1] = ACTIONS(35),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_LBRACE_COLON] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(47),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(47),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(47),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_LBRACE_SLASH] = ACTIONS(51),
    [aux_sym_string_token8] = ACTIONS(53),
    [sym_char] = ACTIONS(806),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_maybe] = ACTIONS(57),
    [sym_null] = ACTIONS(804),
    [sym_builtin] = ACTIONS(804),
  },
  [81] = {
    [sym_block] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__expression] = STATE(6),
    [sym_binary_expression] = STATE(6),
    [sym_unary_expression] = STATE(6),
    [sym_literal] = STATE(6),
    [sym_type_annotation] = STATE(6),
    [sym_attribute] = STATE(6),
    [sym_color] = STATE(6),
    [sym_unit] = STATE(6),
    [sym_interpolated_string] = STATE(6),
    [sym_template_string] = STATE(6),
    [sym_string] = STATE(6),
    [sym_boolean] = STATE(6),
    [sym_identifier] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_POUND_LBRACK] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_BANG_BANG] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_version] = ACTIONS(764),
    [sym_number] = ACTIONS(764),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [aux_sym_interpolation_token1] = ACTIONS(351),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_] = ACTIONS(355),
    [anon_sym_LBRACE_COLON] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(363),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(363),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(363),
    [anon_sym_3] = ACTIONS(365),
    [anon_sym_LBRACE_SLASH] = ACTIONS(367),
    [aux_sym_string_token8] = ACTIONS(369),
    [sym_char] = ACTIONS(766),
    [anon_sym_true] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(373),
    [anon_sym_maybe] = ACTIONS(373),
    [sym_null] = ACTIONS(764),
    [sym_builtin] = ACTIONS(764),
  },
  [82] = {
    [sym_block] = STATE(25),
    [sym_dictionary] = STATE(25),
    [sym__expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_unary_expression] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_type_annotation] = STATE(25),
    [sym_attribute] = STATE(25),
    [sym_color] = STATE(25),
    [sym_unit] = STATE(25),
    [sym_interpolated_string] = STATE(25),
    [sym_template_string] = STATE(25),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_identifier] = STATE(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_POUND_LBRACK] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_BANG_BANG] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_version] = ACTIONS(808),
    [sym_number] = ACTIONS(808),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [aux_sym_interpolation_token1] = ACTIONS(351),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_] = ACTIONS(355),
    [anon_sym_LBRACE_COLON] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(363),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(363),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(363),
    [anon_sym_3] = ACTIONS(365),
    [anon_sym_LBRACE_SLASH] = ACTIONS(367),
    [aux_sym_string_token8] = ACTIONS(369),
    [sym_char] = ACTIONS(810),
    [anon_sym_true] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(373),
    [anon_sym_maybe] = ACTIONS(373),
    [sym_null] = ACTIONS(808),
    [sym_builtin] = ACTIONS(808),
  },
  [83] = {
    [sym_block] = STATE(102),
    [sym_dictionary] = STATE(102),
    [sym__expression] = STATE(102),
    [sym_binary_expression] = STATE(102),
    [sym_unary_expression] = STATE(102),
    [sym_literal] = STATE(102),
    [sym_type_annotation] = STATE(102),
    [sym_attribute] = STATE(102),
    [sym_color] = STATE(102),
    [sym_unit] = STATE(102),
    [sym_interpolated_string] = STATE(102),
    [sym_template_string] = STATE(102),
    [sym_string] = STATE(102),
    [sym_boolean] = STATE(102),
    [sym_identifier] = STATE(102),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_POUND_LBRACK] = ACTIONS(715),
    [anon_sym_BANG] = ACTIONS(717),
    [anon_sym_BANG_BANG] = ACTIONS(719),
    [anon_sym_TILDE] = ACTIONS(717),
    [anon_sym_BSLASH] = ACTIONS(719),
    [anon_sym_AT] = ACTIONS(719),
    [anon_sym_POUND] = ACTIONS(721),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
    [anon_sym_BQUOTE] = ACTIONS(723),
    [anon_sym_SQUOTE] = ACTIONS(725),
    [anon_sym_COLON] = ACTIONS(727),
    [anon_sym_DOT] = ACTIONS(729),
    [sym_version] = ACTIONS(812),
    [sym_number] = ACTIONS(812),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(733),
    [anon_sym_DQUOTE] = ACTIONS(735),
    [aux_sym_interpolation_token1] = ACTIONS(778),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(740),
    [anon_sym_] = ACTIONS(742),
    [anon_sym_LBRACE_COLON] = ACTIONS(744),
    [anon_sym_LBRACE] = ACTIONS(746),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(750),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(750),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(750),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(750),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(750),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(750),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(750),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(750),
    [anon_sym_3] = ACTIONS(752),
    [anon_sym_LBRACE_SLASH] = ACTIONS(754),
    [aux_sym_string_token8] = ACTIONS(756),
    [sym_char] = ACTIONS(814),
    [anon_sym_true] = ACTIONS(760),
    [anon_sym_false] = ACTIONS(760),
    [anon_sym_maybe] = ACTIONS(760),
    [sym_null] = ACTIONS(812),
    [sym_builtin] = ACTIONS(812),
  },
  [84] = {
    [sym_block] = STATE(101),
    [sym_dictionary] = STATE(101),
    [sym__expression] = STATE(101),
    [sym_binary_expression] = STATE(101),
    [sym_unary_expression] = STATE(101),
    [sym_literal] = STATE(101),
    [sym_type_annotation] = STATE(101),
    [sym_attribute] = STATE(101),
    [sym_color] = STATE(101),
    [sym_unit] = STATE(101),
    [sym_interpolated_string] = STATE(101),
    [sym_template_string] = STATE(101),
    [sym_string] = STATE(101),
    [sym_boolean] = STATE(101),
    [sym_identifier] = STATE(101),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_POUND_LBRACK] = ACTIONS(715),
    [anon_sym_BANG] = ACTIONS(717),
    [anon_sym_BANG_BANG] = ACTIONS(719),
    [anon_sym_TILDE] = ACTIONS(717),
    [anon_sym_BSLASH] = ACTIONS(719),
    [anon_sym_AT] = ACTIONS(719),
    [anon_sym_POUND] = ACTIONS(721),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
    [anon_sym_BQUOTE] = ACTIONS(723),
    [anon_sym_SQUOTE] = ACTIONS(725),
    [anon_sym_COLON] = ACTIONS(727),
    [anon_sym_DOT] = ACTIONS(729),
    [sym_version] = ACTIONS(816),
    [sym_number] = ACTIONS(816),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(733),
    [anon_sym_DQUOTE] = ACTIONS(735),
    [aux_sym_interpolation_token1] = ACTIONS(778),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(740),
    [anon_sym_] = ACTIONS(742),
    [anon_sym_LBRACE_COLON] = ACTIONS(744),
    [anon_sym_LBRACE] = ACTIONS(746),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(750),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(750),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(750),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(750),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(750),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(750),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(750),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(750),
    [anon_sym_3] = ACTIONS(752),
    [anon_sym_LBRACE_SLASH] = ACTIONS(754),
    [aux_sym_string_token8] = ACTIONS(756),
    [sym_char] = ACTIONS(818),
    [anon_sym_true] = ACTIONS(760),
    [anon_sym_false] = ACTIONS(760),
    [anon_sym_maybe] = ACTIONS(760),
    [sym_null] = ACTIONS(816),
    [sym_builtin] = ACTIONS(816),
  },
  [85] = {
    [sym_block] = STATE(112),
    [sym_dictionary] = STATE(112),
    [sym__expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_literal] = STATE(112),
    [sym_type_annotation] = STATE(112),
    [sym_attribute] = STATE(112),
    [sym_color] = STATE(112),
    [sym_unit] = STATE(112),
    [sym_interpolated_string] = STATE(112),
    [sym_template_string] = STATE(112),
    [sym_string] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_identifier] = STATE(112),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_POUND_LBRACK] = ACTIONS(715),
    [anon_sym_BANG] = ACTIONS(717),
    [anon_sym_BANG_BANG] = ACTIONS(719),
    [anon_sym_TILDE] = ACTIONS(717),
    [anon_sym_BSLASH] = ACTIONS(719),
    [anon_sym_AT] = ACTIONS(719),
    [anon_sym_POUND] = ACTIONS(721),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
    [anon_sym_BQUOTE] = ACTIONS(723),
    [anon_sym_SQUOTE] = ACTIONS(725),
    [anon_sym_COLON] = ACTIONS(727),
    [anon_sym_DOT] = ACTIONS(729),
    [sym_version] = ACTIONS(820),
    [sym_number] = ACTIONS(820),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(733),
    [anon_sym_DQUOTE] = ACTIONS(735),
    [aux_sym_interpolation_token1] = ACTIONS(778),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(740),
    [anon_sym_] = ACTIONS(742),
    [anon_sym_LBRACE_COLON] = ACTIONS(744),
    [anon_sym_LBRACE] = ACTIONS(746),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(750),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(750),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(750),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(750),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(750),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(750),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(750),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(750),
    [anon_sym_3] = ACTIONS(752),
    [anon_sym_LBRACE_SLASH] = ACTIONS(754),
    [aux_sym_string_token8] = ACTIONS(756),
    [sym_char] = ACTIONS(822),
    [anon_sym_true] = ACTIONS(760),
    [anon_sym_false] = ACTIONS(760),
    [anon_sym_maybe] = ACTIONS(760),
    [sym_null] = ACTIONS(820),
    [sym_builtin] = ACTIONS(820),
  },
  [86] = {
    [sym_block] = STATE(111),
    [sym_dictionary] = STATE(111),
    [sym__expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [sym_unary_expression] = STATE(111),
    [sym_literal] = STATE(111),
    [sym_type_annotation] = STATE(111),
    [sym_attribute] = STATE(111),
    [sym_color] = STATE(111),
    [sym_unit] = STATE(111),
    [sym_interpolated_string] = STATE(111),
    [sym_template_string] = STATE(111),
    [sym_string] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_identifier] = STATE(111),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_POUND_LBRACK] = ACTIONS(715),
    [anon_sym_BANG] = ACTIONS(717),
    [anon_sym_BANG_BANG] = ACTIONS(719),
    [anon_sym_TILDE] = ACTIONS(717),
    [anon_sym_BSLASH] = ACTIONS(719),
    [anon_sym_AT] = ACTIONS(719),
    [anon_sym_POUND] = ACTIONS(721),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
    [anon_sym_BQUOTE] = ACTIONS(723),
    [anon_sym_SQUOTE] = ACTIONS(725),
    [anon_sym_COLON] = ACTIONS(727),
    [anon_sym_DOT] = ACTIONS(729),
    [sym_version] = ACTIONS(824),
    [sym_number] = ACTIONS(824),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(733),
    [anon_sym_DQUOTE] = ACTIONS(735),
    [aux_sym_interpolation_token1] = ACTIONS(778),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(740),
    [anon_sym_] = ACTIONS(742),
    [anon_sym_LBRACE_COLON] = ACTIONS(744),
    [anon_sym_LBRACE] = ACTIONS(746),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(748),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(750),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(750),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(750),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(750),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(750),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(750),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(750),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(750),
    [anon_sym_3] = ACTIONS(752),
    [anon_sym_LBRACE_SLASH] = ACTIONS(754),
    [aux_sym_string_token8] = ACTIONS(756),
    [sym_char] = ACTIONS(826),
    [anon_sym_true] = ACTIONS(760),
    [anon_sym_false] = ACTIONS(760),
    [anon_sym_maybe] = ACTIONS(760),
    [sym_null] = ACTIONS(824),
    [sym_builtin] = ACTIONS(824),
  },
  [87] = {
    [sym_block] = STATE(26),
    [sym_dictionary] = STATE(26),
    [sym__expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_literal] = STATE(26),
    [sym_type_annotation] = STATE(26),
    [sym_attribute] = STATE(26),
    [sym_color] = STATE(26),
    [sym_unit] = STATE(26),
    [sym_interpolated_string] = STATE(26),
    [sym_template_string] = STATE(26),
    [sym_string] = STATE(26),
    [sym_boolean] = STATE(26),
    [sym_identifier] = STATE(26),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_BANG_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [sym_version] = ACTIONS(828),
    [sym_number] = ACTIONS(828),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [aux_sym_interpolation_token1] = ACTIONS(35),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_LBRACE_COLON] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(45),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(47),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(47),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(47),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(47),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(47),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_LBRACE_SLASH] = ACTIONS(51),
    [aux_sym_string_token8] = ACTIONS(53),
    [sym_char] = ACTIONS(830),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_maybe] = ACTIONS(57),
    [sym_null] = ACTIONS(828),
    [sym_builtin] = ACTIONS(828),
  },
  [88] = {
    [sym_block] = STATE(36),
    [sym_dictionary] = STATE(36),
    [sym__expression] = STATE(36),
    [sym_binary_expression] = STATE(36),
    [sym_unary_expression] = STATE(36),
    [sym_literal] = STATE(36),
    [sym_type_annotation] = STATE(36),
    [sym_attribute] = STATE(36),
    [sym_color] = STATE(36),
    [sym_unit] = STATE(36),
    [sym_interpolated_string] = STATE(36),
    [sym_template_string] = STATE(36),
    [sym_string] = STATE(36),
    [sym_boolean] = STATE(36),
    [sym_identifier] = STATE(36),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_POUND_LBRACK] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_BANG_BANG] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_version] = ACTIONS(832),
    [sym_number] = ACTIONS(832),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [aux_sym_interpolation_token1] = ACTIONS(351),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_] = ACTIONS(355),
    [anon_sym_LBRACE_COLON] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(363),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(363),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(363),
    [anon_sym_3] = ACTIONS(365),
    [anon_sym_LBRACE_SLASH] = ACTIONS(367),
    [aux_sym_string_token8] = ACTIONS(369),
    [sym_char] = ACTIONS(834),
    [anon_sym_true] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(373),
    [anon_sym_maybe] = ACTIONS(373),
    [sym_null] = ACTIONS(832),
    [sym_builtin] = ACTIONS(832),
  },
  [89] = {
    [sym_block] = STATE(9),
    [sym_dictionary] = STATE(9),
    [sym__expression] = STATE(9),
    [sym_binary_expression] = STATE(9),
    [sym_unary_expression] = STATE(9),
    [sym_literal] = STATE(9),
    [sym_type_annotation] = STATE(9),
    [sym_attribute] = STATE(9),
    [sym_color] = STATE(9),
    [sym_unit] = STATE(9),
    [sym_interpolated_string] = STATE(9),
    [sym_template_string] = STATE(9),
    [sym_string] = STATE(9),
    [sym_boolean] = STATE(9),
    [sym_identifier] = STATE(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_POUND_LBRACK] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_BANG_BANG] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_version] = ACTIONS(836),
    [sym_number] = ACTIONS(836),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [aux_sym_interpolation_token1] = ACTIONS(351),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_] = ACTIONS(355),
    [anon_sym_LBRACE_COLON] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(363),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(363),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(363),
    [anon_sym_3] = ACTIONS(365),
    [anon_sym_LBRACE_SLASH] = ACTIONS(367),
    [aux_sym_string_token8] = ACTIONS(369),
    [sym_char] = ACTIONS(838),
    [anon_sym_true] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(373),
    [anon_sym_maybe] = ACTIONS(373),
    [sym_null] = ACTIONS(836),
    [sym_builtin] = ACTIONS(836),
  },
  [90] = {
    [sym_block] = STATE(12),
    [sym_dictionary] = STATE(12),
    [sym__expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_unary_expression] = STATE(12),
    [sym_literal] = STATE(12),
    [sym_type_annotation] = STATE(12),
    [sym_attribute] = STATE(12),
    [sym_color] = STATE(12),
    [sym_unit] = STATE(12),
    [sym_interpolated_string] = STATE(12),
    [sym_template_string] = STATE(12),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_POUND_LBRACK] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_BANG_BANG] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_version] = ACTIONS(840),
    [sym_number] = ACTIONS(840),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [aux_sym_interpolation_token1] = ACTIONS(351),
    [anon_sym_LT_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_] = ACTIONS(355),
    [anon_sym_LBRACE_COLON] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_LBRACE_BANGhtml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGcss_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGmd_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjs_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsql_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGsh_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGxml_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGjson_COLON] = ACTIONS(361),
    [anon_sym_LBRACE_BANGhtml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGcss] = ACTIONS(363),
    [anon_sym_LBRACE_BANGmd] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjs] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsql] = ACTIONS(363),
    [anon_sym_LBRACE_BANGsh] = ACTIONS(363),
    [anon_sym_LBRACE_BANGxml] = ACTIONS(363),
    [anon_sym_LBRACE_BANGjson] = ACTIONS(363),
    [anon_sym_3] = ACTIONS(365),
    [anon_sym_LBRACE_SLASH] = ACTIONS(367),
    [aux_sym_string_token8] = ACTIONS(369),
    [sym_char] = ACTIONS(842),
    [anon_sym_true] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(373),
    [anon_sym_maybe] = ACTIONS(373),
    [sym_null] = ACTIONS(840),
    [sym_builtin] = ACTIONS(840),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 22,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_POUND,
      anon_sym_BQUOTE,
      sym_version,
      sym_number,
      aux_sym_interpolation_token1,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BANGhtml,
      anon_sym_LBRACE_BANGcss,
      anon_sym_LBRACE_BANGmd,
      anon_sym_LBRACE_BANGjs,
      anon_sym_LBRACE_BANGsql,
      anon_sym_LBRACE_BANGsh,
      anon_sym_LBRACE_BANGxml,
      anon_sym_LBRACE_BANGjson,
      anon_sym_3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
      sym_null,
      sym_builtin,
    ACTIONS(265), 28,
      sym_label,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_SQUOTE,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_TILDE_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT_PIPE_PIPE,
      anon_sym_,
      anon_sym_LBRACE_COLON,
      anon_sym_LBRACE_BANGhtml_COLON,
      anon_sym_LBRACE_BANGcss_COLON,
      anon_sym_LBRACE_BANGmd_COLON,
      anon_sym_LBRACE_BANGjs_COLON,
      anon_sym_LBRACE_BANGsql_COLON,
      anon_sym_LBRACE_BANGsh_COLON,
      anon_sym_LBRACE_BANGxml_COLON,
      anon_sym_LBRACE_BANGjson_COLON,
      anon_sym_LBRACE_SLASH,
      aux_sym_string_token8,
      sym_char,
  [58] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(269), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [91] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(297), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(309), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(257), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(301), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(209), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [256] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_PLUS,
    ACTIONS(848), 1,
      anon_sym_DASH,
    ACTIONS(852), 1,
      anon_sym_CARET,
    ACTIONS(858), 1,
      aux_sym_interpolation_token1,
    ACTIONS(844), 2,
      sym_label,
      anon_sym_RBRACK,
    ACTIONS(850), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(854), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
    ACTIONS(856), 13,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(313), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(305), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_CARET,
    ACTIONS(255), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(241), 19,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [402] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_interpolation_token1,
    ACTIONS(846), 1,
      anon_sym_PLUS,
    ACTIONS(848), 1,
      anon_sym_DASH,
    ACTIONS(852), 1,
      anon_sym_CARET,
    ACTIONS(241), 2,
      sym_label,
      anon_sym_RBRACK,
    ACTIONS(850), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(854), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
    ACTIONS(856), 13,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(265), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(281), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(277), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(273), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(229), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(261), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(233), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(237), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [711] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_PLUS,
    ACTIONS(848), 1,
      anon_sym_DASH,
    ACTIONS(852), 1,
      anon_sym_CARET,
    ACTIONS(850), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(255), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(241), 15,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [752] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_CARET,
    ACTIONS(850), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(255), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(241), 16,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(285), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(317), 20,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_COLON_COLON,
  [855] = 5,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_PIPE,
    ACTIONS(866), 1,
      anon_sym_DQUOTE,
    ACTIONS(864), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(116), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [873] = 5,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_PIPE,
    ACTIONS(870), 1,
      anon_sym_DQUOTE,
    ACTIONS(868), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(117), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [891] = 5,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_PIPE,
    ACTIONS(878), 1,
      anon_sym_DQUOTE,
    ACTIONS(875), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(117), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [909] = 5,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_PIPE,
    ACTIONS(882), 1,
      anon_sym_DQUOTE,
    ACTIONS(880), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(119), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [927] = 5,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_PIPE,
    ACTIONS(884), 1,
      anon_sym_DQUOTE,
    ACTIONS(868), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(117), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [945] = 5,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_PIPE,
    ACTIONS(888), 1,
      anon_sym_DQUOTE,
    ACTIONS(886), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(121), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [963] = 5,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_PIPE,
    ACTIONS(890), 1,
      anon_sym_DQUOTE,
    ACTIONS(868), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(117), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym_label,
    ACTIONS(895), 1,
      anon_sym_RBRACK,
    ACTIONS(897), 1,
      aux_sym_interpolation_token1,
    STATE(67), 1,
      sym_identifier,
    STATE(122), 1,
      aux_sym_dictionary_repeat1,
  [1000] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_label,
    ACTIONS(902), 1,
      anon_sym_RBRACK,
    ACTIONS(904), 1,
      aux_sym_interpolation_token1,
    STATE(67), 1,
      sym_identifier,
    STATE(125), 1,
      aux_sym_dictionary_repeat1,
  [1019] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_label,
    ACTIONS(904), 1,
      aux_sym_interpolation_token1,
    ACTIONS(906), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_identifier,
    STATE(122), 1,
      aux_sym_dictionary_repeat1,
  [1038] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_label,
    ACTIONS(904), 1,
      aux_sym_interpolation_token1,
    ACTIONS(908), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_identifier,
    STATE(122), 1,
      aux_sym_dictionary_repeat1,
  [1057] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_label,
    ACTIONS(904), 1,
      aux_sym_interpolation_token1,
    ACTIONS(910), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_identifier,
    STATE(128), 1,
      aux_sym_dictionary_repeat1,
  [1076] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_label,
    ACTIONS(904), 1,
      aux_sym_interpolation_token1,
    ACTIONS(912), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_identifier,
    STATE(124), 1,
      aux_sym_dictionary_repeat1,
  [1095] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_label,
    ACTIONS(904), 1,
      aux_sym_interpolation_token1,
    ACTIONS(914), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_identifier,
    STATE(122), 1,
      aux_sym_dictionary_repeat1,
  [1114] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_DQUOTE,
    STATE(136), 1,
      aux_sym_string_repeat1,
    ACTIONS(916), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [1128] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(922), 1,
      aux_sym_string_token5,
    STATE(130), 1,
      aux_sym_string_repeat5,
    ACTIONS(920), 2,
      anon_sym_COLON_RBRACE,
      anon_sym_RBRACE,
  [1142] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(927), 1,
      aux_sym_string_token5,
    STATE(130), 1,
      aux_sym_string_repeat5,
    ACTIONS(925), 2,
      anon_sym_COLON_RBRACE,
      anon_sym_RBRACE,
  [1156] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      aux_sym_string_repeat1,
    ACTIONS(929), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [1170] = 2,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(931), 4,
      anon_sym_PIPE,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
      anon_sym_DQUOTE,
  [1180] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym_string_token5,
    STATE(141), 1,
      aux_sym_string_repeat5,
    ACTIONS(933), 2,
      anon_sym_COLON_RBRACE,
      anon_sym_RBRACE,
  [1194] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(927), 1,
      aux_sym_string_token5,
    STATE(130), 1,
      aux_sym_string_repeat5,
    ACTIONS(937), 2,
      anon_sym_COLON_RBRACE,
      anon_sym_RBRACE,
  [1208] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      aux_sym_string_repeat1,
    ACTIONS(929), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [1222] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(939), 1,
      aux_sym_string_token5,
    STATE(135), 1,
      aux_sym_string_repeat5,
    ACTIONS(918), 2,
      anon_sym_COLON_RBRACE,
      anon_sym_RBRACE,
  [1236] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      aux_sym_string_repeat1,
    ACTIONS(941), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [1250] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(948), 1,
      aux_sym_string_token5,
    STATE(131), 1,
      aux_sym_string_repeat5,
    ACTIONS(946), 2,
      anon_sym_COLON_RBRACE,
      anon_sym_RBRACE,
  [1264] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      aux_sym_string_repeat1,
    ACTIONS(929), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [1278] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(927), 1,
      aux_sym_string_token5,
    STATE(130), 1,
      aux_sym_string_repeat5,
    ACTIONS(950), 2,
      anon_sym_COLON_RBRACE,
      anon_sym_RBRACE,
  [1292] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      aux_sym_string_repeat1,
    ACTIONS(952), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [1306] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_DQUOTE,
    STATE(140), 1,
      aux_sym_string_repeat1,
    ACTIONS(954), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [1320] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_2,
    ACTIONS(956), 1,
      aux_sym_string_token2,
    STATE(162), 1,
      aux_sym_string_repeat2,
  [1333] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(958), 1,
      aux_sym_template_string_token1,
    ACTIONS(960), 1,
      anon_sym_PIPE_PIPE_GT,
    STATE(157), 1,
      aux_sym_template_string_repeat1,
  [1346] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(962), 1,
      aux_sym_string_token2,
    ACTIONS(965), 1,
      anon_sym_2,
    STATE(146), 1,
      aux_sym_string_repeat2,
  [1359] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(967), 1,
      aux_sym_string_token3,
    ACTIONS(970), 1,
      anon_sym_COLON_RBRACE,
    STATE(147), 1,
      aux_sym_string_repeat3,
  [1372] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_SLASH_RBRACE,
    ACTIONS(972), 1,
      aux_sym_string_token7,
    STATE(159), 1,
      aux_sym_string_repeat6,
  [1385] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(974), 1,
      aux_sym_string_token4,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      aux_sym_string_repeat4,
  [1398] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(979), 1,
      aux_sym_template_string_token1,
    ACTIONS(981), 1,
      anon_sym_PIPE_PIPE_GT,
    STATE(145), 1,
      aux_sym_template_string_repeat1,
  [1411] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_SLASH_RBRACE,
    ACTIONS(983), 1,
      aux_sym_string_token7,
    STATE(154), 1,
      aux_sym_string_repeat6,
  [1424] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(985), 1,
      aux_sym_string_token3,
    STATE(163), 1,
      aux_sym_string_repeat3,
  [1437] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_RBRACE,
    ACTIONS(987), 1,
      aux_sym_string_token4,
    STATE(164), 1,
      aux_sym_string_repeat4,
  [1450] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_SLASH_RBRACE,
    ACTIONS(972), 1,
      aux_sym_string_token7,
    STATE(159), 1,
      aux_sym_string_repeat6,
  [1463] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_2,
    ACTIONS(989), 1,
      aux_sym_string_token2,
    STATE(146), 1,
      aux_sym_string_repeat2,
  [1476] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_SLASH_RBRACE,
    ACTIONS(991), 1,
      aux_sym_string_token7,
    STATE(166), 1,
      aux_sym_string_repeat6,
  [1489] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(993), 1,
      aux_sym_template_string_token1,
    ACTIONS(996), 1,
      anon_sym_PIPE_PIPE_GT,
    STATE(157), 1,
      aux_sym_template_string_repeat1,
  [1502] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(998), 1,
      aux_sym_string_token3,
    STATE(147), 1,
      aux_sym_string_repeat3,
  [1515] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(1000), 1,
      aux_sym_string_token7,
    ACTIONS(1003), 1,
      anon_sym_SLASH_RBRACE,
    STATE(159), 1,
      aux_sym_string_repeat6,
  [1528] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_RBRACE,
    ACTIONS(1005), 1,
      aux_sym_string_token4,
    STATE(149), 1,
      aux_sym_string_repeat4,
  [1541] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(958), 1,
      aux_sym_template_string_token1,
    ACTIONS(1007), 1,
      anon_sym_PIPE_PIPE_GT,
    STATE(157), 1,
      aux_sym_template_string_repeat1,
  [1554] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_2,
    ACTIONS(989), 1,
      aux_sym_string_token2,
    STATE(146), 1,
      aux_sym_string_repeat2,
  [1567] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(998), 1,
      aux_sym_string_token3,
    STATE(147), 1,
      aux_sym_string_repeat3,
  [1580] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_RBRACE,
    ACTIONS(1005), 1,
      aux_sym_string_token4,
    STATE(149), 1,
      aux_sym_string_repeat4,
  [1593] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(1009), 1,
      aux_sym_template_string_token1,
    ACTIONS(1011), 1,
      anon_sym_PIPE_PIPE_GT,
    STATE(171), 1,
      aux_sym_template_string_repeat1,
  [1606] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_SLASH_RBRACE,
    ACTIONS(972), 1,
      aux_sym_string_token7,
    STATE(159), 1,
      aux_sym_string_repeat6,
  [1619] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_RBRACE,
    ACTIONS(1005), 1,
      aux_sym_string_token4,
    STATE(149), 1,
      aux_sym_string_repeat4,
  [1632] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_2,
    ACTIONS(1013), 1,
      aux_sym_string_token2,
    STATE(170), 1,
      aux_sym_string_repeat2,
  [1645] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(998), 1,
      aux_sym_string_token3,
    STATE(147), 1,
      aux_sym_string_repeat3,
  [1658] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_2,
    ACTIONS(989), 1,
      aux_sym_string_token2,
    STATE(146), 1,
      aux_sym_string_repeat2,
  [1671] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(958), 1,
      aux_sym_template_string_token1,
    ACTIONS(1015), 1,
      anon_sym_PIPE_PIPE_GT,
    STATE(157), 1,
      aux_sym_template_string_repeat1,
  [1684] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(1017), 1,
      aux_sym_string_token3,
    STATE(169), 1,
      aux_sym_string_repeat3,
  [1697] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_RBRACE,
    ACTIONS(1019), 1,
      aux_sym_string_token4,
    STATE(167), 1,
      aux_sym_string_repeat4,
  [1710] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(1021), 1,
      aux_sym_template_string_token1,
    ACTIONS(1023), 1,
      anon_sym_PIPE_PIPE_GT,
    STATE(161), 1,
      aux_sym_template_string_repeat1,
  [1723] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_2,
    ACTIONS(1025), 1,
      aux_sym_string_token2,
    STATE(155), 1,
      aux_sym_string_repeat2,
  [1736] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(1027), 1,
      aux_sym_string_token3,
    STATE(158), 1,
      aux_sym_string_repeat3,
  [1749] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_RBRACE,
    ACTIONS(1029), 1,
      aux_sym_string_token4,
    STATE(160), 1,
      aux_sym_string_repeat4,
  [1762] = 4,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_SLASH_RBRACE,
    ACTIONS(1031), 1,
      aux_sym_string_token7,
    STATE(148), 1,
      aux_sym_string_repeat6,
  [1775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_PIPE,
  [1782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      aux_sym_literal_token1,
  [1789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      aux_sym_literal_token1,
  [1796] = 2,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(933), 1,
      aux_sym_string_token6,
  [1803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      aux_sym_type_annotation_token1,
  [1810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      ts_builtin_sym_end,
  [1817] = 2,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(946), 1,
      aux_sym_string_token6,
  [1824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      aux_sym_literal_token1,
  [1831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      aux_sym_type_annotation_token1,
  [1838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      aux_sym_literal_token1,
  [1845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      aux_sym_literal_token1,
  [1852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      aux_sym_interpolation_token1,
  [1859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      aux_sym_type_annotation_token1,
  [1866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      aux_sym_literal_token1,
  [1873] = 2,
    ACTIONS(860), 1,
      sym_comment,
    ACTIONS(918), 1,
      aux_sym_string_token6,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(91)] = 0,
  [SMALL_STATE(92)] = 58,
  [SMALL_STATE(93)] = 91,
  [SMALL_STATE(94)] = 124,
  [SMALL_STATE(95)] = 157,
  [SMALL_STATE(96)] = 190,
  [SMALL_STATE(97)] = 223,
  [SMALL_STATE(98)] = 256,
  [SMALL_STATE(99)] = 301,
  [SMALL_STATE(100)] = 334,
  [SMALL_STATE(101)] = 367,
  [SMALL_STATE(102)] = 402,
  [SMALL_STATE(103)] = 447,
  [SMALL_STATE(104)] = 480,
  [SMALL_STATE(105)] = 513,
  [SMALL_STATE(106)] = 546,
  [SMALL_STATE(107)] = 579,
  [SMALL_STATE(108)] = 612,
  [SMALL_STATE(109)] = 645,
  [SMALL_STATE(110)] = 678,
  [SMALL_STATE(111)] = 711,
  [SMALL_STATE(112)] = 752,
  [SMALL_STATE(113)] = 789,
  [SMALL_STATE(114)] = 822,
  [SMALL_STATE(115)] = 855,
  [SMALL_STATE(116)] = 873,
  [SMALL_STATE(117)] = 891,
  [SMALL_STATE(118)] = 909,
  [SMALL_STATE(119)] = 927,
  [SMALL_STATE(120)] = 945,
  [SMALL_STATE(121)] = 963,
  [SMALL_STATE(122)] = 981,
  [SMALL_STATE(123)] = 1000,
  [SMALL_STATE(124)] = 1019,
  [SMALL_STATE(125)] = 1038,
  [SMALL_STATE(126)] = 1057,
  [SMALL_STATE(127)] = 1076,
  [SMALL_STATE(128)] = 1095,
  [SMALL_STATE(129)] = 1114,
  [SMALL_STATE(130)] = 1128,
  [SMALL_STATE(131)] = 1142,
  [SMALL_STATE(132)] = 1156,
  [SMALL_STATE(133)] = 1170,
  [SMALL_STATE(134)] = 1180,
  [SMALL_STATE(135)] = 1194,
  [SMALL_STATE(136)] = 1208,
  [SMALL_STATE(137)] = 1222,
  [SMALL_STATE(138)] = 1236,
  [SMALL_STATE(139)] = 1250,
  [SMALL_STATE(140)] = 1264,
  [SMALL_STATE(141)] = 1278,
  [SMALL_STATE(142)] = 1292,
  [SMALL_STATE(143)] = 1306,
  [SMALL_STATE(144)] = 1320,
  [SMALL_STATE(145)] = 1333,
  [SMALL_STATE(146)] = 1346,
  [SMALL_STATE(147)] = 1359,
  [SMALL_STATE(148)] = 1372,
  [SMALL_STATE(149)] = 1385,
  [SMALL_STATE(150)] = 1398,
  [SMALL_STATE(151)] = 1411,
  [SMALL_STATE(152)] = 1424,
  [SMALL_STATE(153)] = 1437,
  [SMALL_STATE(154)] = 1450,
  [SMALL_STATE(155)] = 1463,
  [SMALL_STATE(156)] = 1476,
  [SMALL_STATE(157)] = 1489,
  [SMALL_STATE(158)] = 1502,
  [SMALL_STATE(159)] = 1515,
  [SMALL_STATE(160)] = 1528,
  [SMALL_STATE(161)] = 1541,
  [SMALL_STATE(162)] = 1554,
  [SMALL_STATE(163)] = 1567,
  [SMALL_STATE(164)] = 1580,
  [SMALL_STATE(165)] = 1593,
  [SMALL_STATE(166)] = 1606,
  [SMALL_STATE(167)] = 1619,
  [SMALL_STATE(168)] = 1632,
  [SMALL_STATE(169)] = 1645,
  [SMALL_STATE(170)] = 1658,
  [SMALL_STATE(171)] = 1671,
  [SMALL_STATE(172)] = 1684,
  [SMALL_STATE(173)] = 1697,
  [SMALL_STATE(174)] = 1710,
  [SMALL_STATE(175)] = 1723,
  [SMALL_STATE(176)] = 1736,
  [SMALL_STATE(177)] = 1749,
  [SMALL_STATE(178)] = 1762,
  [SMALL_STATE(179)] = 1775,
  [SMALL_STATE(180)] = 1782,
  [SMALL_STATE(181)] = 1789,
  [SMALL_STATE(182)] = 1796,
  [SMALL_STATE(183)] = 1803,
  [SMALL_STATE(184)] = 1810,
  [SMALL_STATE(185)] = 1817,
  [SMALL_STATE(186)] = 1824,
  [SMALL_STATE(187)] = 1831,
  [SMALL_STATE(188)] = 1838,
  [SMALL_STATE(189)] = 1845,
  [SMALL_STATE(190)] = 1852,
  [SMALL_STATE(191)] = 1859,
  [SMALL_STATE(192)] = 1866,
  [SMALL_STATE(193)] = 1873,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(60),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(126),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(81),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(81),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(72),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(68),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(188),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(187),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(186),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(23),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(118),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(142),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(51),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(150),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(144),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(152),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(153),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(139),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(139),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(185),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(156),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(153),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(23),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(50),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(54),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(127),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(76),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(76),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(69),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(73),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(189),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(191),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(192),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(5),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(115),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(129),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(14),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(165),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(168),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(172),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(173),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(137),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(137),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(193),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(178),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(173),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(5),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(22),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_annotation, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, .production_id = 6),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3, .production_id = 6),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2, .production_id = 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 2, .production_id = 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(189),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(172),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(178),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(188),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(186),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [533] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .dynamic_precedence = 1, .production_id = 4),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .dynamic_precedence = 1, .production_id = 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(54),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(127),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(76),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(76),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(69),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(73),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(189),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(191),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(192),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(5),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(115),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(129),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(14),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(165),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(168),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(172),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(173),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(137),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(137),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(193),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(178),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(173),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(5),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(22),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(60),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(126),
  [645] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(81),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(81),
  [651] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(72),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(68),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(188),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(187),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(186),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(23),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(118),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(142),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(51),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(150),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(144),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(152),
  [687] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(153),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(139),
  [693] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(139),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(185),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(156),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(153),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(23),
  [708] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(50),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 1, .production_id = 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [737] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 1, .production_id = 2), SHIFT_REPEAT(103),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, .production_id = 5),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, .production_id = 5),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [872] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(190),
  [875] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(117),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, .production_id = 7), SHIFT_REPEAT(67),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, .production_id = 7),
  [897] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, .production_id = 7), SHIFT_REPEAT(91),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat5, 2),
  [922] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat5, 2), SHIFT_REPEAT(130),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [941] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(138),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [962] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(146),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [967] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(147),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [974] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat4, 2), SHIFT_REPEAT(149),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat4, 2),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [993] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(157),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1000] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat6, 2), SHIFT_REPEAT(159),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat6, 2),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1041] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_arturo(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
