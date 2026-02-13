#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 170
#define LARGE_STATE_COUNT 65
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 10

enum {
  sym_shebang = 1,
  sym_comment = 2,
  aux_sym_label_token1 = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_POUND_LBRACK = 7,
  anon_sym_BANG = 8,
  anon_sym_BANG_BANG = 9,
  anon_sym_TILDE = 10,
  anon_sym_BSLASH = 11,
  anon_sym_AT = 12,
  anon_sym_POUND = 13,
  anon_sym_DOLLAR = 14,
  anon_sym_QMARK = 15,
  anon_sym_BQUOTE = 16,
  anon_sym_CARET = 17,
  anon_sym_STAR = 18,
  anon_sym_SLASH = 19,
  anon_sym_PERCENT = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  anon_sym_EQ = 23,
  anon_sym_LT = 24,
  anon_sym_GT = 25,
  anon_sym_AMP = 26,
  anon_sym_PIPE = 27,
  anon_sym_DOT_DOT = 28,
  anon_sym_DOT_DOT_DOT = 29,
  anon_sym_DASH_GT = 30,
  anon_sym_EQ_GT = 31,
  anon_sym_COLON_COLON = 32,
  anon_sym_SQUOTE = 33,
  aux_sym_literal_token1 = 34,
  aux_sym_type_annotation_token1 = 35,
  anon_sym_DOT = 36,
  aux_sym_color_token1 = 37,
  aux_sym_unit_token1 = 38,
  sym_version = 39,
  sym_number = 40,
  anon_sym_TILDE_DQUOTE = 41,
  aux_sym_interpolated_string_token1 = 42,
  aux_sym_interpolated_string_token2 = 43,
  anon_sym_DQUOTE = 44,
  aux_sym_string_token1 = 45,
  anon_sym_LBRACE = 46,
  aux_sym_string_token2 = 47,
  anon_sym_RBRACE = 48,
  anon_sym_LBRACE_COLON = 49,
  aux_sym_string_token3 = 50,
  anon_sym_COLON_RBRACE = 51,
  anon_sym_ = 52,
  aux_sym_string_token4 = 53,
  anon_sym_2 = 54,
  anon_sym_3 = 55,
  aux_sym_string_token5 = 56,
  sym_char = 57,
  anon_sym_true = 58,
  anon_sym_false = 59,
  anon_sym_maybe = 60,
  sym_null = 61,
  sym_builtin = 62,
  sym_source_file = 63,
  sym__statement = 64,
  sym_assignment = 65,
  sym_label = 66,
  sym_block = 67,
  sym_dictionary = 68,
  sym_function_call = 69,
  sym__expression = 70,
  sym_unary_expression = 71,
  sym_binary_expression = 72,
  sym_literal = 73,
  sym_type_annotation = 74,
  sym_attribute = 75,
  sym_color = 76,
  sym_unit = 77,
  sym_interpolated_string = 78,
  sym_interpolation = 79,
  sym_string = 80,
  sym_boolean = 81,
  sym_identifier = 82,
  aux_sym_source_file_repeat1 = 83,
  aux_sym_dictionary_repeat1 = 84,
  aux_sym_function_call_repeat1 = 85,
  aux_sym_interpolated_string_repeat1 = 86,
  aux_sym_string_repeat1 = 87,
  aux_sym_string_repeat2 = 88,
  aux_sym_string_repeat3 = 89,
  aux_sym_string_repeat4 = 90,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_shebang] = "shebang",
  [sym_comment] = "comment",
  [aux_sym_label_token1] = "label_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUND_LBRACK] = "#[",
  [anon_sym_BANG] = "!",
  [anon_sym_BANG_BANG] = "!!",
  [anon_sym_TILDE] = "~",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_AT] = "@",
  [anon_sym_POUND] = "#",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_literal_token1] = "literal_token1",
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
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_LBRACE] = "{",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_COLON] = "{:",
  [aux_sym_string_token3] = "string_token3",
  [anon_sym_COLON_RBRACE] = ":}",
  [anon_sym_] = "««",
  [aux_sym_string_token4] = "string_token4",
  [anon_sym_2] = "»»",
  [anon_sym_3] = "«",
  [aux_sym_string_token5] = "string_token5",
  [sym_char] = "char",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_maybe] = "maybe",
  [sym_null] = "null",
  [sym_builtin] = "builtin",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_assignment] = "assignment",
  [sym_label] = "label",
  [sym_block] = "block",
  [sym_dictionary] = "dictionary",
  [sym_function_call] = "function_call",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_literal] = "literal",
  [sym_type_annotation] = "type_annotation",
  [sym_attribute] = "attribute",
  [sym_color] = "color",
  [sym_unit] = "unit",
  [sym_interpolated_string] = "interpolated_string",
  [sym_interpolation] = "interpolation",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_interpolated_string_repeat1] = "interpolated_string_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_repeat3] = "string_repeat3",
  [aux_sym_string_repeat4] = "string_repeat4",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_shebang] = sym_shebang,
  [sym_comment] = sym_comment,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_BANG_BANG] = anon_sym_BANG_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
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
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_COLON] = anon_sym_LBRACE_COLON,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [anon_sym_COLON_RBRACE] = anon_sym_COLON_RBRACE,
  [anon_sym_] = anon_sym_,
  [aux_sym_string_token4] = aux_sym_string_token4,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [aux_sym_string_token5] = aux_sym_string_token5,
  [sym_char] = sym_char,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_maybe] = anon_sym_maybe,
  [sym_null] = sym_null,
  [sym_builtin] = sym_builtin,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_assignment] = sym_assignment,
  [sym_label] = sym_label,
  [sym_block] = sym_block,
  [sym_dictionary] = sym_dictionary,
  [sym_function_call] = sym_function_call,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_literal] = sym_literal,
  [sym_type_annotation] = sym_type_annotation,
  [sym_attribute] = sym_attribute,
  [sym_color] = sym_color,
  [sym_unit] = sym_unit,
  [sym_interpolated_string] = sym_interpolated_string,
  [sym_interpolation] = sym_interpolation,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_dictionary_repeat1] = aux_sym_dictionary_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_interpolated_string_repeat1] = aux_sym_interpolated_string_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_string_repeat3] = aux_sym_string_repeat3,
  [aux_sym_string_repeat4] = aux_sym_string_repeat4,
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
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [anon_sym_CARET] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_COLON_COLON] = {
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
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token5] = {
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
  [sym_label] = {
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
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
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
};

enum {
  field_argument = 1,
  field_function = 2,
  field_identifier = 3,
  field_key = 4,
  field_name = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_function] = "function",
  [field_identifier] = "identifier",
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 4},
  [9] = {.index = 15, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_identifier, 0},
  [1] =
    {field_key, 0},
  [2] =
    {field_argument, 0},
  [3] =
    {field_argument, 1, .inherited = true},
    {field_function, 0},
  [5] =
    {field_name, 0},
    {field_value, 1},
  [7] =
    {field_key, 0},
    {field_value, 1},
  [9] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [11] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [15] =
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
  [7] = 6,
  [8] = 8,
  [9] = 5,
  [10] = 4,
  [11] = 5,
  [12] = 4,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 28,
  [32] = 24,
  [33] = 22,
  [34] = 20,
  [35] = 19,
  [36] = 27,
  [37] = 18,
  [38] = 26,
  [39] = 17,
  [40] = 25,
  [41] = 23,
  [42] = 42,
  [43] = 43,
  [44] = 21,
  [45] = 45,
  [46] = 15,
  [47] = 42,
  [48] = 43,
  [49] = 49,
  [50] = 50,
  [51] = 45,
  [52] = 14,
  [53] = 49,
  [54] = 54,
  [55] = 50,
  [56] = 54,
  [57] = 57,
  [58] = 58,
  [59] = 58,
  [60] = 57,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 61,
  [65] = 65,
  [66] = 66,
  [67] = 65,
  [68] = 66,
  [69] = 65,
  [70] = 66,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 73,
  [77] = 77,
  [78] = 78,
  [79] = 74,
  [80] = 78,
  [81] = 77,
  [82] = 72,
  [83] = 78,
  [84] = 75,
  [85] = 73,
  [86] = 77,
  [87] = 72,
  [88] = 75,
  [89] = 45,
  [90] = 90,
  [91] = 43,
  [92] = 57,
  [93] = 42,
  [94] = 49,
  [95] = 50,
  [96] = 58,
  [97] = 54,
  [98] = 14,
  [99] = 17,
  [100] = 18,
  [101] = 101,
  [102] = 19,
  [103] = 20,
  [104] = 21,
  [105] = 25,
  [106] = 26,
  [107] = 27,
  [108] = 29,
  [109] = 28,
  [110] = 24,
  [111] = 22,
  [112] = 112,
  [113] = 112,
  [114] = 114,
  [115] = 115,
  [116] = 112,
  [117] = 114,
  [118] = 114,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 119,
  [123] = 119,
  [124] = 120,
  [125] = 120,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 126,
  [130] = 126,
  [131] = 128,
  [132] = 128,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 134,
  [137] = 137,
  [138] = 135,
  [139] = 139,
  [140] = 137,
  [141] = 141,
  [142] = 135,
  [143] = 139,
  [144] = 144,
  [145] = 145,
  [146] = 144,
  [147] = 141,
  [148] = 148,
  [149] = 149,
  [150] = 134,
  [151] = 137,
  [152] = 139,
  [153] = 141,
  [154] = 144,
  [155] = 155,
  [156] = 156,
  [157] = 155,
  [158] = 156,
  [159] = 156,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 161,
  [166] = 161,
  [167] = 155,
  [168] = 162,
  [169] = 162,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '!') ADVANCE(114);
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(133);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == '?') ADVANCE(122);
      if (lookahead == '@') ADVANCE(118);
      if (lookahead == '[') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead == ']') ADVANCE(112);
      if (lookahead == '^') ADVANCE(124);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'g') ADVANCE(81);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'w') ADVANCE(63);
      if (lookahead == 'y') ADVANCE(60);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '}') ADVANCE(199);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == 171) ADVANCE(208);
      if (lookahead == 187) ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('G' <= lookahead && lookahead <= '_')) ADVANCE(107);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(114);
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '?') ADVANCE(122);
      if (lookahead == '@') ADVANCE(118);
      if (lookahead == '[') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead == ']') ADVANCE(112);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == 171) ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(107);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(114);
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '?') ADVANCE(122);
      if (lookahead == '@') ADVANCE(118);
      if (lookahead == '[') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'g') ADVANCE(81);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'w') ADVANCE(63);
      if (lookahead == 'y') ADVANCE(60);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == 171) ADVANCE(208);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(107);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(114);
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '?') ADVANCE(122);
      if (lookahead == '@') ADVANCE(118);
      if (lookahead == '[') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == 171) ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(177);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(114);
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '?') ADVANCE(122);
      if (lookahead == '@') ADVANCE(118);
      if (lookahead == '[') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == 171) ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(107);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(133);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == ']') ADVANCE(112);
      if (lookahead == '^') ADVANCE(124);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(135);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(139);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(202);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 13:
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == 187) ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 14:
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '}') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(203);
      END_STATE();
    case 16:
      if (lookahead == 187) ADVANCE(207);
      END_STATE();
    case 17:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 18:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 19:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 20:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 29:
      if (eof) ADVANCE(32);
      if (lookahead == '!') ADVANCE(114);
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(133);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == '?') ADVANCE(122);
      if (lookahead == '@') ADVANCE(118);
      if (lookahead == '[') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead == ']') ADVANCE(112);
      if (lookahead == '^') ADVANCE(124);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '}') ADVANCE(199);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == 171) ADVANCE(208);
      if (lookahead == 187) ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= '_')) ADVANCE(107);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == '!') ADVANCE(114);
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(133);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == '?') ADVANCE(122);
      if (lookahead == '@') ADVANCE(118);
      if (lookahead == '[') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead == ']') ADVANCE(112);
      if (lookahead == '^') ADVANCE(124);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == 171) ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= '_')) ADVANCE(107);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '!') ADVANCE(114);
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '?') ADVANCE(122);
      if (lookahead == '@') ADVANCE(118);
      if (lookahead == '[') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead == ']') ADVANCE(112);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == 171) ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(107);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == '|') ADVANCE(39);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(206);
      if (lookahead == 187) ADVANCE(39);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == ':' ||
          lookahead == '}') ADVANCE(39);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_label_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'g') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'g') ADVANCE(59);
      if (lookahead == 'y') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'h') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'k') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'y') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'y') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'y') ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(153);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(139);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '}') ADVANCE(203);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '"') ADVANCE(189);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(33);
      if (lookahead == '[') ADVANCE(113);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '[') ADVANCE(113);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(137);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(138);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == ':') ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '?') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(135);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(100);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'y') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_TILDE_DQUOTE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token2);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ':') ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LBRACE_COLON);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COLON_RBRACE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != 187) ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead != 0 &&
          lookahead != 187) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_3);
      if (lookahead == 171) ADVANCE(204);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_string_token5);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_string_token5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_maybe);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_maybe);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '?') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 31},
  [9] = {.lex_state = 31},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 30},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 30},
  [31] = {.lex_state = 30},
  [32] = {.lex_state = 30},
  [33] = {.lex_state = 30},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 30},
  [36] = {.lex_state = 30},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 30},
  [43] = {.lex_state = 30},
  [44] = {.lex_state = 30},
  [45] = {.lex_state = 30},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 30},
  [48] = {.lex_state = 30},
  [49] = {.lex_state = 30},
  [50] = {.lex_state = 30},
  [51] = {.lex_state = 30},
  [52] = {.lex_state = 30},
  [53] = {.lex_state = 30},
  [54] = {.lex_state = 30},
  [55] = {.lex_state = 30},
  [56] = {.lex_state = 30},
  [57] = {.lex_state = 30},
  [58] = {.lex_state = 30},
  [59] = {.lex_state = 30},
  [60] = {.lex_state = 30},
  [61] = {.lex_state = 31},
  [62] = {.lex_state = 31},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 31},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 7},
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
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 14},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 11},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 209},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 11},
  [168] = {.lex_state = 209},
  [169] = {.lex_state = 209},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_label_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_BANG_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_color_token1] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_COLON] = ACTIONS(1),
    [anon_sym_COLON_RBRACE] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_maybe] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_builtin] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(163),
    [sym__statement] = STATE(8),
    [sym_assignment] = STATE(8),
    [sym_label] = STATE(79),
    [sym_block] = STATE(23),
    [sym_dictionary] = STATE(23),
    [sym_function_call] = STATE(8),
    [sym__expression] = STATE(23),
    [sym_unary_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_literal] = STATE(23),
    [sym_type_annotation] = STATE(23),
    [sym_attribute] = STATE(23),
    [sym_color] = STATE(23),
    [sym_unit] = STATE(23),
    [sym_interpolated_string] = STATE(23),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_shebang] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [aux_sym_label_token1] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_POUND_LBRACK] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_BANG_BANG] = ACTIONS(19),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [sym_version] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_COLON] = ACTIONS(37),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_3] = ACTIONS(41),
    [sym_char] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_maybe] = ACTIONS(45),
    [sym_null] = ACTIONS(29),
    [sym_builtin] = ACTIONS(47),
  },
  [2] = {
    [sym_block] = STATE(13),
    [sym_dictionary] = STATE(13),
    [sym__expression] = STATE(13),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_literal] = STATE(13),
    [sym_type_annotation] = STATE(13),
    [sym_attribute] = STATE(13),
    [sym_color] = STATE(13),
    [sym_unit] = STATE(13),
    [sym_interpolated_string] = STATE(13),
    [sym_string] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_identifier] = STATE(13),
    [aux_sym_function_call_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_shebang] = ACTIONS(49),
    [sym_comment] = ACTIONS(49),
    [aux_sym_label_token1] = ACTIONS(51),
    [anon_sym_COLON] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_POUND_LBRACK] = ACTIONS(60),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_BANG_BANG] = ACTIONS(66),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(66),
    [anon_sym_AT] = ACTIONS(66),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_QMARK] = ACTIONS(66),
    [anon_sym_BQUOTE] = ACTIONS(72),
    [anon_sym_CARET] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(49),
    [anon_sym_DASH_GT] = ACTIONS(49),
    [anon_sym_EQ_GT] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(80),
    [sym_version] = ACTIONS(83),
    [sym_number] = ACTIONS(83),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_LBRACE_COLON] = ACTIONS(95),
    [anon_sym_] = ACTIONS(98),
    [anon_sym_3] = ACTIONS(101),
    [sym_char] = ACTIONS(104),
    [anon_sym_true] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(107),
    [anon_sym_maybe] = ACTIONS(107),
    [sym_null] = ACTIONS(83),
    [sym_builtin] = ACTIONS(83),
  },
  [3] = {
    [sym_block] = STATE(16),
    [sym_dictionary] = STATE(16),
    [sym__expression] = STATE(16),
    [sym_unary_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_literal] = STATE(16),
    [sym_type_annotation] = STATE(16),
    [sym_attribute] = STATE(16),
    [sym_color] = STATE(16),
    [sym_unit] = STATE(16),
    [sym_interpolated_string] = STATE(16),
    [sym_string] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym_identifier] = STATE(16),
    [aux_sym_function_call_repeat1] = STATE(62),
    [sym_shebang] = ACTIONS(49),
    [sym_comment] = ACTIONS(49),
    [aux_sym_label_token1] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_POUND_LBRACK] = ACTIONS(119),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_BANG_BANG] = ACTIONS(125),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(125),
    [anon_sym_AT] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(128),
    [anon_sym_DOLLAR] = ACTIONS(125),
    [anon_sym_QMARK] = ACTIONS(125),
    [anon_sym_BQUOTE] = ACTIONS(131),
    [anon_sym_CARET] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(49),
    [anon_sym_DASH_GT] = ACTIONS(49),
    [anon_sym_EQ_GT] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(134),
    [anon_sym_DOT] = ACTIONS(137),
    [sym_version] = ACTIONS(140),
    [sym_number] = ACTIONS(140),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_LBRACE_COLON] = ACTIONS(152),
    [anon_sym_] = ACTIONS(155),
    [anon_sym_3] = ACTIONS(158),
    [sym_char] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [anon_sym_maybe] = ACTIONS(164),
    [sym_null] = ACTIONS(140),
    [sym_builtin] = ACTIONS(140),
  },
  [4] = {
    [sym__statement] = STATE(6),
    [sym_assignment] = STATE(6),
    [sym_label] = STATE(74),
    [sym_block] = STATE(41),
    [sym_dictionary] = STATE(41),
    [sym_function_call] = STATE(6),
    [sym__expression] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_literal] = STATE(41),
    [sym_type_annotation] = STATE(41),
    [sym_attribute] = STATE(41),
    [sym_color] = STATE(41),
    [sym_unit] = STATE(41),
    [sym_interpolated_string] = STATE(41),
    [sym_string] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_identifier] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_shebang] = ACTIONS(167),
    [sym_comment] = ACTIONS(167),
    [aux_sym_label_token1] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(175),
    [anon_sym_POUND_LBRACK] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(179),
    [anon_sym_BANG_BANG] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(189),
    [sym_version] = ACTIONS(191),
    [sym_number] = ACTIONS(191),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_LBRACE_COLON] = ACTIONS(199),
    [anon_sym_] = ACTIONS(201),
    [anon_sym_3] = ACTIONS(203),
    [sym_char] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(207),
    [anon_sym_maybe] = ACTIONS(207),
    [sym_null] = ACTIONS(191),
    [sym_builtin] = ACTIONS(209),
  },
  [5] = {
    [sym__statement] = STATE(10),
    [sym_assignment] = STATE(10),
    [sym_label] = STATE(74),
    [sym_block] = STATE(41),
    [sym_dictionary] = STATE(41),
    [sym_function_call] = STATE(10),
    [sym__expression] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_literal] = STATE(41),
    [sym_type_annotation] = STATE(41),
    [sym_attribute] = STATE(41),
    [sym_color] = STATE(41),
    [sym_unit] = STATE(41),
    [sym_interpolated_string] = STATE(41),
    [sym_string] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_identifier] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_shebang] = ACTIONS(211),
    [sym_comment] = ACTIONS(211),
    [aux_sym_label_token1] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_POUND_LBRACK] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(179),
    [anon_sym_BANG_BANG] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(189),
    [sym_version] = ACTIONS(191),
    [sym_number] = ACTIONS(191),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_LBRACE_COLON] = ACTIONS(199),
    [anon_sym_] = ACTIONS(201),
    [anon_sym_3] = ACTIONS(203),
    [sym_char] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(207),
    [anon_sym_maybe] = ACTIONS(207),
    [sym_null] = ACTIONS(191),
    [sym_builtin] = ACTIONS(209),
  },
  [6] = {
    [sym__statement] = STATE(6),
    [sym_assignment] = STATE(6),
    [sym_label] = STATE(74),
    [sym_block] = STATE(41),
    [sym_dictionary] = STATE(41),
    [sym_function_call] = STATE(6),
    [sym__expression] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_literal] = STATE(41),
    [sym_type_annotation] = STATE(41),
    [sym_attribute] = STATE(41),
    [sym_color] = STATE(41),
    [sym_unit] = STATE(41),
    [sym_interpolated_string] = STATE(41),
    [sym_string] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_identifier] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_shebang] = ACTIONS(215),
    [sym_comment] = ACTIONS(215),
    [aux_sym_label_token1] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(224),
    [anon_sym_RBRACK] = ACTIONS(227),
    [anon_sym_POUND_LBRACK] = ACTIONS(229),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_BANG_BANG] = ACTIONS(235),
    [anon_sym_TILDE] = ACTIONS(232),
    [anon_sym_BSLASH] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(235),
    [anon_sym_POUND] = ACTIONS(238),
    [anon_sym_DOLLAR] = ACTIONS(235),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_BQUOTE] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(244),
    [anon_sym_DOT] = ACTIONS(247),
    [sym_version] = ACTIONS(250),
    [sym_number] = ACTIONS(250),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_LBRACE_COLON] = ACTIONS(262),
    [anon_sym_] = ACTIONS(265),
    [anon_sym_3] = ACTIONS(268),
    [sym_char] = ACTIONS(271),
    [anon_sym_true] = ACTIONS(274),
    [anon_sym_false] = ACTIONS(274),
    [anon_sym_maybe] = ACTIONS(274),
    [sym_null] = ACTIONS(250),
    [sym_builtin] = ACTIONS(277),
  },
  [7] = {
    [sym__statement] = STATE(7),
    [sym_assignment] = STATE(7),
    [sym_label] = STATE(79),
    [sym_block] = STATE(23),
    [sym_dictionary] = STATE(23),
    [sym_function_call] = STATE(7),
    [sym__expression] = STATE(23),
    [sym_unary_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_literal] = STATE(23),
    [sym_type_annotation] = STATE(23),
    [sym_attribute] = STATE(23),
    [sym_color] = STATE(23),
    [sym_unit] = STATE(23),
    [sym_interpolated_string] = STATE(23),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(227),
    [sym_shebang] = ACTIONS(280),
    [sym_comment] = ACTIONS(280),
    [aux_sym_label_token1] = ACTIONS(283),
    [anon_sym_COLON] = ACTIONS(286),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_POUND_LBRACK] = ACTIONS(292),
    [anon_sym_BANG] = ACTIONS(295),
    [anon_sym_BANG_BANG] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(295),
    [anon_sym_BSLASH] = ACTIONS(298),
    [anon_sym_AT] = ACTIONS(298),
    [anon_sym_POUND] = ACTIONS(301),
    [anon_sym_DOLLAR] = ACTIONS(298),
    [anon_sym_QMARK] = ACTIONS(298),
    [anon_sym_BQUOTE] = ACTIONS(304),
    [anon_sym_SQUOTE] = ACTIONS(307),
    [anon_sym_DOT] = ACTIONS(310),
    [sym_version] = ACTIONS(313),
    [sym_number] = ACTIONS(313),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(316),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(322),
    [anon_sym_LBRACE_COLON] = ACTIONS(325),
    [anon_sym_] = ACTIONS(328),
    [anon_sym_3] = ACTIONS(331),
    [sym_char] = ACTIONS(334),
    [anon_sym_true] = ACTIONS(337),
    [anon_sym_false] = ACTIONS(337),
    [anon_sym_maybe] = ACTIONS(337),
    [sym_null] = ACTIONS(313),
    [sym_builtin] = ACTIONS(340),
  },
  [8] = {
    [sym__statement] = STATE(7),
    [sym_assignment] = STATE(7),
    [sym_label] = STATE(79),
    [sym_block] = STATE(23),
    [sym_dictionary] = STATE(23),
    [sym_function_call] = STATE(7),
    [sym__expression] = STATE(23),
    [sym_unary_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_literal] = STATE(23),
    [sym_type_annotation] = STATE(23),
    [sym_attribute] = STATE(23),
    [sym_color] = STATE(23),
    [sym_unit] = STATE(23),
    [sym_interpolated_string] = STATE(23),
    [sym_string] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(343),
    [sym_shebang] = ACTIONS(345),
    [sym_comment] = ACTIONS(345),
    [aux_sym_label_token1] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_POUND_LBRACK] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_BANG_BANG] = ACTIONS(19),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [sym_version] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_COLON] = ACTIONS(37),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_3] = ACTIONS(41),
    [sym_char] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_maybe] = ACTIONS(45),
    [sym_null] = ACTIONS(29),
    [sym_builtin] = ACTIONS(47),
  },
  [9] = {
    [sym__statement] = STATE(12),
    [sym_assignment] = STATE(12),
    [sym_label] = STATE(74),
    [sym_block] = STATE(41),
    [sym_dictionary] = STATE(41),
    [sym_function_call] = STATE(12),
    [sym__expression] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_literal] = STATE(41),
    [sym_type_annotation] = STATE(41),
    [sym_attribute] = STATE(41),
    [sym_color] = STATE(41),
    [sym_unit] = STATE(41),
    [sym_interpolated_string] = STATE(41),
    [sym_string] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_identifier] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_shebang] = ACTIONS(347),
    [sym_comment] = ACTIONS(347),
    [aux_sym_label_token1] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(349),
    [anon_sym_POUND_LBRACK] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(179),
    [anon_sym_BANG_BANG] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(189),
    [sym_version] = ACTIONS(191),
    [sym_number] = ACTIONS(191),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_LBRACE_COLON] = ACTIONS(199),
    [anon_sym_] = ACTIONS(201),
    [anon_sym_3] = ACTIONS(203),
    [sym_char] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(207),
    [anon_sym_maybe] = ACTIONS(207),
    [sym_null] = ACTIONS(191),
    [sym_builtin] = ACTIONS(209),
  },
  [10] = {
    [sym__statement] = STATE(6),
    [sym_assignment] = STATE(6),
    [sym_label] = STATE(74),
    [sym_block] = STATE(41),
    [sym_dictionary] = STATE(41),
    [sym_function_call] = STATE(6),
    [sym__expression] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_literal] = STATE(41),
    [sym_type_annotation] = STATE(41),
    [sym_attribute] = STATE(41),
    [sym_color] = STATE(41),
    [sym_unit] = STATE(41),
    [sym_interpolated_string] = STATE(41),
    [sym_string] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_identifier] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_shebang] = ACTIONS(167),
    [sym_comment] = ACTIONS(167),
    [aux_sym_label_token1] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(351),
    [anon_sym_POUND_LBRACK] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(179),
    [anon_sym_BANG_BANG] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(189),
    [sym_version] = ACTIONS(191),
    [sym_number] = ACTIONS(191),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_LBRACE_COLON] = ACTIONS(199),
    [anon_sym_] = ACTIONS(201),
    [anon_sym_3] = ACTIONS(203),
    [sym_char] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(207),
    [anon_sym_maybe] = ACTIONS(207),
    [sym_null] = ACTIONS(191),
    [sym_builtin] = ACTIONS(209),
  },
  [11] = {
    [sym__statement] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_label] = STATE(74),
    [sym_block] = STATE(41),
    [sym_dictionary] = STATE(41),
    [sym_function_call] = STATE(4),
    [sym__expression] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_literal] = STATE(41),
    [sym_type_annotation] = STATE(41),
    [sym_attribute] = STATE(41),
    [sym_color] = STATE(41),
    [sym_unit] = STATE(41),
    [sym_interpolated_string] = STATE(41),
    [sym_string] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_identifier] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_shebang] = ACTIONS(353),
    [sym_comment] = ACTIONS(353),
    [aux_sym_label_token1] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(355),
    [anon_sym_POUND_LBRACK] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(179),
    [anon_sym_BANG_BANG] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(189),
    [sym_version] = ACTIONS(191),
    [sym_number] = ACTIONS(191),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_LBRACE_COLON] = ACTIONS(199),
    [anon_sym_] = ACTIONS(201),
    [anon_sym_3] = ACTIONS(203),
    [sym_char] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(207),
    [anon_sym_maybe] = ACTIONS(207),
    [sym_null] = ACTIONS(191),
    [sym_builtin] = ACTIONS(209),
  },
  [12] = {
    [sym__statement] = STATE(6),
    [sym_assignment] = STATE(6),
    [sym_label] = STATE(74),
    [sym_block] = STATE(41),
    [sym_dictionary] = STATE(41),
    [sym_function_call] = STATE(6),
    [sym__expression] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_literal] = STATE(41),
    [sym_type_annotation] = STATE(41),
    [sym_attribute] = STATE(41),
    [sym_color] = STATE(41),
    [sym_unit] = STATE(41),
    [sym_interpolated_string] = STATE(41),
    [sym_string] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_identifier] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_shebang] = ACTIONS(167),
    [sym_comment] = ACTIONS(167),
    [aux_sym_label_token1] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(357),
    [anon_sym_POUND_LBRACK] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(179),
    [anon_sym_BANG_BANG] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(189),
    [sym_version] = ACTIONS(191),
    [sym_number] = ACTIONS(191),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_LBRACE_COLON] = ACTIONS(199),
    [anon_sym_] = ACTIONS(201),
    [anon_sym_3] = ACTIONS(203),
    [sym_char] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(207),
    [anon_sym_maybe] = ACTIONS(207),
    [sym_null] = ACTIONS(191),
    [sym_builtin] = ACTIONS(209),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [sym_shebang] = ACTIONS(359),
    [sym_comment] = ACTIONS(359),
    [aux_sym_label_token1] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(359),
    [anon_sym_POUND_LBRACK] = ACTIONS(359),
    [anon_sym_BANG] = ACTIONS(361),
    [anon_sym_BANG_BANG] = ACTIONS(359),
    [anon_sym_TILDE] = ACTIONS(361),
    [anon_sym_BSLASH] = ACTIONS(359),
    [anon_sym_AT] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(361),
    [anon_sym_DOLLAR] = ACTIONS(359),
    [anon_sym_QMARK] = ACTIONS(359),
    [anon_sym_BQUOTE] = ACTIONS(361),
    [anon_sym_CARET] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(365),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_PLUS] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(369),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(373),
    [anon_sym_AMP] = ACTIONS(373),
    [anon_sym_PIPE] = ACTIONS(373),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(373),
    [anon_sym_DASH_GT] = ACTIONS(373),
    [anon_sym_EQ_GT] = ACTIONS(373),
    [anon_sym_COLON_COLON] = ACTIONS(373),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [anon_sym_DOT] = ACTIONS(361),
    [sym_version] = ACTIONS(361),
    [sym_number] = ACTIONS(361),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(359),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [anon_sym_LBRACE] = ACTIONS(361),
    [anon_sym_LBRACE_COLON] = ACTIONS(359),
    [anon_sym_] = ACTIONS(359),
    [anon_sym_3] = ACTIONS(361),
    [sym_char] = ACTIONS(359),
    [anon_sym_true] = ACTIONS(361),
    [anon_sym_false] = ACTIONS(361),
    [anon_sym_maybe] = ACTIONS(361),
    [sym_null] = ACTIONS(361),
    [sym_builtin] = ACTIONS(361),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [sym_shebang] = ACTIONS(375),
    [sym_comment] = ACTIONS(375),
    [aux_sym_label_token1] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_POUND_LBRACK] = ACTIONS(375),
    [anon_sym_BANG] = ACTIONS(377),
    [anon_sym_BANG_BANG] = ACTIONS(375),
    [anon_sym_TILDE] = ACTIONS(377),
    [anon_sym_BSLASH] = ACTIONS(375),
    [anon_sym_AT] = ACTIONS(375),
    [anon_sym_POUND] = ACTIONS(377),
    [anon_sym_DOLLAR] = ACTIONS(375),
    [anon_sym_QMARK] = ACTIONS(375),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [anon_sym_CARET] = ACTIONS(375),
    [anon_sym_STAR] = ACTIONS(375),
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(375),
    [anon_sym_PLUS] = ACTIONS(375),
    [anon_sym_DASH] = ACTIONS(377),
    [anon_sym_EQ] = ACTIONS(377),
    [anon_sym_LT] = ACTIONS(375),
    [anon_sym_GT] = ACTIONS(375),
    [anon_sym_AMP] = ACTIONS(375),
    [anon_sym_PIPE] = ACTIONS(375),
    [anon_sym_DOT_DOT] = ACTIONS(377),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(375),
    [anon_sym_DASH_GT] = ACTIONS(375),
    [anon_sym_EQ_GT] = ACTIONS(375),
    [anon_sym_COLON_COLON] = ACTIONS(375),
    [anon_sym_SQUOTE] = ACTIONS(375),
    [anon_sym_DOT] = ACTIONS(377),
    [sym_version] = ACTIONS(377),
    [sym_number] = ACTIONS(377),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(375),
    [anon_sym_DQUOTE] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_LBRACE_COLON] = ACTIONS(375),
    [anon_sym_] = ACTIONS(375),
    [anon_sym_3] = ACTIONS(377),
    [sym_char] = ACTIONS(375),
    [anon_sym_true] = ACTIONS(377),
    [anon_sym_false] = ACTIONS(377),
    [anon_sym_maybe] = ACTIONS(377),
    [sym_null] = ACTIONS(377),
    [sym_builtin] = ACTIONS(377),
  },
  [15] = {
    [sym_shebang] = ACTIONS(379),
    [sym_comment] = ACTIONS(379),
    [aux_sym_label_token1] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_RBRACK] = ACTIONS(379),
    [anon_sym_POUND_LBRACK] = ACTIONS(379),
    [anon_sym_BANG] = ACTIONS(381),
    [anon_sym_BANG_BANG] = ACTIONS(379),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_BSLASH] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(379),
    [anon_sym_POUND] = ACTIONS(381),
    [anon_sym_DOLLAR] = ACTIONS(379),
    [anon_sym_QMARK] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_CARET] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(385),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(385),
    [anon_sym_PLUS] = ACTIONS(387),
    [anon_sym_DASH] = ACTIONS(389),
    [anon_sym_EQ] = ACTIONS(391),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_DOT_DOT] = ACTIONS(391),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(393),
    [anon_sym_DASH_GT] = ACTIONS(393),
    [anon_sym_EQ_GT] = ACTIONS(393),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_DOT] = ACTIONS(381),
    [sym_version] = ACTIONS(381),
    [sym_number] = ACTIONS(381),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_LBRACE_COLON] = ACTIONS(379),
    [anon_sym_] = ACTIONS(379),
    [anon_sym_3] = ACTIONS(381),
    [sym_char] = ACTIONS(379),
    [anon_sym_true] = ACTIONS(381),
    [anon_sym_false] = ACTIONS(381),
    [anon_sym_maybe] = ACTIONS(381),
    [sym_null] = ACTIONS(381),
    [sym_builtin] = ACTIONS(381),
  },
  [16] = {
    [sym_shebang] = ACTIONS(359),
    [sym_comment] = ACTIONS(359),
    [aux_sym_label_token1] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(359),
    [anon_sym_RBRACK] = ACTIONS(359),
    [anon_sym_POUND_LBRACK] = ACTIONS(359),
    [anon_sym_BANG] = ACTIONS(361),
    [anon_sym_BANG_BANG] = ACTIONS(359),
    [anon_sym_TILDE] = ACTIONS(361),
    [anon_sym_BSLASH] = ACTIONS(359),
    [anon_sym_AT] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(361),
    [anon_sym_DOLLAR] = ACTIONS(359),
    [anon_sym_QMARK] = ACTIONS(359),
    [anon_sym_BQUOTE] = ACTIONS(361),
    [anon_sym_CARET] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(385),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(385),
    [anon_sym_PLUS] = ACTIONS(387),
    [anon_sym_DASH] = ACTIONS(389),
    [anon_sym_EQ] = ACTIONS(391),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_DOT_DOT] = ACTIONS(391),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(393),
    [anon_sym_DASH_GT] = ACTIONS(393),
    [anon_sym_EQ_GT] = ACTIONS(393),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [anon_sym_DOT] = ACTIONS(361),
    [sym_version] = ACTIONS(361),
    [sym_number] = ACTIONS(361),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(359),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [anon_sym_LBRACE] = ACTIONS(361),
    [anon_sym_LBRACE_COLON] = ACTIONS(359),
    [anon_sym_] = ACTIONS(359),
    [anon_sym_3] = ACTIONS(361),
    [sym_char] = ACTIONS(359),
    [anon_sym_true] = ACTIONS(361),
    [anon_sym_false] = ACTIONS(361),
    [anon_sym_maybe] = ACTIONS(361),
    [sym_null] = ACTIONS(361),
    [sym_builtin] = ACTIONS(361),
  },
  [17] = {
    [sym_shebang] = ACTIONS(395),
    [sym_comment] = ACTIONS(395),
    [aux_sym_label_token1] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(395),
    [anon_sym_POUND_LBRACK] = ACTIONS(395),
    [anon_sym_BANG] = ACTIONS(397),
    [anon_sym_BANG_BANG] = ACTIONS(395),
    [anon_sym_TILDE] = ACTIONS(397),
    [anon_sym_BSLASH] = ACTIONS(395),
    [anon_sym_AT] = ACTIONS(395),
    [anon_sym_POUND] = ACTIONS(397),
    [anon_sym_DOLLAR] = ACTIONS(395),
    [anon_sym_QMARK] = ACTIONS(395),
    [anon_sym_BQUOTE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(395),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_PERCENT] = ACTIONS(395),
    [anon_sym_PLUS] = ACTIONS(395),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_EQ] = ACTIONS(397),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(395),
    [anon_sym_DOT_DOT] = ACTIONS(397),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(395),
    [anon_sym_DASH_GT] = ACTIONS(395),
    [anon_sym_EQ_GT] = ACTIONS(395),
    [anon_sym_COLON_COLON] = ACTIONS(395),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [anon_sym_DOT] = ACTIONS(397),
    [sym_version] = ACTIONS(397),
    [sym_number] = ACTIONS(397),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(395),
    [anon_sym_DQUOTE] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(397),
    [anon_sym_LBRACE_COLON] = ACTIONS(395),
    [anon_sym_] = ACTIONS(395),
    [anon_sym_3] = ACTIONS(397),
    [sym_char] = ACTIONS(395),
    [anon_sym_true] = ACTIONS(397),
    [anon_sym_false] = ACTIONS(397),
    [anon_sym_maybe] = ACTIONS(397),
    [sym_null] = ACTIONS(397),
    [sym_builtin] = ACTIONS(397),
  },
  [18] = {
    [sym_shebang] = ACTIONS(399),
    [sym_comment] = ACTIONS(399),
    [aux_sym_label_token1] = ACTIONS(401),
    [anon_sym_COLON] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(399),
    [anon_sym_RBRACK] = ACTIONS(399),
    [anon_sym_POUND_LBRACK] = ACTIONS(399),
    [anon_sym_BANG] = ACTIONS(401),
    [anon_sym_BANG_BANG] = ACTIONS(399),
    [anon_sym_TILDE] = ACTIONS(401),
    [anon_sym_BSLASH] = ACTIONS(399),
    [anon_sym_AT] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(401),
    [anon_sym_DOLLAR] = ACTIONS(399),
    [anon_sym_QMARK] = ACTIONS(399),
    [anon_sym_BQUOTE] = ACTIONS(401),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_STAR] = ACTIONS(399),
    [anon_sym_SLASH] = ACTIONS(399),
    [anon_sym_PERCENT] = ACTIONS(399),
    [anon_sym_PLUS] = ACTIONS(399),
    [anon_sym_DASH] = ACTIONS(401),
    [anon_sym_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(399),
    [anon_sym_GT] = ACTIONS(399),
    [anon_sym_AMP] = ACTIONS(399),
    [anon_sym_PIPE] = ACTIONS(399),
    [anon_sym_DOT_DOT] = ACTIONS(401),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(399),
    [anon_sym_DASH_GT] = ACTIONS(399),
    [anon_sym_EQ_GT] = ACTIONS(399),
    [anon_sym_COLON_COLON] = ACTIONS(399),
    [anon_sym_SQUOTE] = ACTIONS(399),
    [anon_sym_DOT] = ACTIONS(401),
    [sym_version] = ACTIONS(401),
    [sym_number] = ACTIONS(401),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(399),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_LBRACE_COLON] = ACTIONS(399),
    [anon_sym_] = ACTIONS(399),
    [anon_sym_3] = ACTIONS(401),
    [sym_char] = ACTIONS(399),
    [anon_sym_true] = ACTIONS(401),
    [anon_sym_false] = ACTIONS(401),
    [anon_sym_maybe] = ACTIONS(401),
    [sym_null] = ACTIONS(401),
    [sym_builtin] = ACTIONS(401),
  },
  [19] = {
    [sym_shebang] = ACTIONS(403),
    [sym_comment] = ACTIONS(403),
    [aux_sym_label_token1] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(403),
    [anon_sym_RBRACK] = ACTIONS(403),
    [anon_sym_POUND_LBRACK] = ACTIONS(403),
    [anon_sym_BANG] = ACTIONS(405),
    [anon_sym_BANG_BANG] = ACTIONS(403),
    [anon_sym_TILDE] = ACTIONS(405),
    [anon_sym_BSLASH] = ACTIONS(403),
    [anon_sym_AT] = ACTIONS(403),
    [anon_sym_POUND] = ACTIONS(405),
    [anon_sym_DOLLAR] = ACTIONS(403),
    [anon_sym_QMARK] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_CARET] = ACTIONS(403),
    [anon_sym_STAR] = ACTIONS(403),
    [anon_sym_SLASH] = ACTIONS(403),
    [anon_sym_PERCENT] = ACTIONS(403),
    [anon_sym_PLUS] = ACTIONS(403),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_EQ] = ACTIONS(405),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_DOT_DOT] = ACTIONS(405),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(403),
    [anon_sym_DASH_GT] = ACTIONS(403),
    [anon_sym_EQ_GT] = ACTIONS(403),
    [anon_sym_COLON_COLON] = ACTIONS(403),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_DOT] = ACTIONS(405),
    [sym_version] = ACTIONS(405),
    [sym_number] = ACTIONS(405),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_LBRACE_COLON] = ACTIONS(403),
    [anon_sym_] = ACTIONS(403),
    [anon_sym_3] = ACTIONS(405),
    [sym_char] = ACTIONS(403),
    [anon_sym_true] = ACTIONS(405),
    [anon_sym_false] = ACTIONS(405),
    [anon_sym_maybe] = ACTIONS(405),
    [sym_null] = ACTIONS(405),
    [sym_builtin] = ACTIONS(405),
  },
  [20] = {
    [sym_shebang] = ACTIONS(407),
    [sym_comment] = ACTIONS(407),
    [aux_sym_label_token1] = ACTIONS(409),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(407),
    [anon_sym_RBRACK] = ACTIONS(407),
    [anon_sym_POUND_LBRACK] = ACTIONS(407),
    [anon_sym_BANG] = ACTIONS(409),
    [anon_sym_BANG_BANG] = ACTIONS(407),
    [anon_sym_TILDE] = ACTIONS(409),
    [anon_sym_BSLASH] = ACTIONS(407),
    [anon_sym_AT] = ACTIONS(407),
    [anon_sym_POUND] = ACTIONS(409),
    [anon_sym_DOLLAR] = ACTIONS(407),
    [anon_sym_QMARK] = ACTIONS(407),
    [anon_sym_BQUOTE] = ACTIONS(409),
    [anon_sym_CARET] = ACTIONS(407),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(407),
    [anon_sym_PERCENT] = ACTIONS(407),
    [anon_sym_PLUS] = ACTIONS(407),
    [anon_sym_DASH] = ACTIONS(409),
    [anon_sym_EQ] = ACTIONS(409),
    [anon_sym_LT] = ACTIONS(407),
    [anon_sym_GT] = ACTIONS(407),
    [anon_sym_AMP] = ACTIONS(407),
    [anon_sym_PIPE] = ACTIONS(407),
    [anon_sym_DOT_DOT] = ACTIONS(409),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(407),
    [anon_sym_DASH_GT] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(407),
    [anon_sym_SQUOTE] = ACTIONS(407),
    [anon_sym_DOT] = ACTIONS(409),
    [sym_version] = ACTIONS(409),
    [sym_number] = ACTIONS(409),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(407),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_LBRACE] = ACTIONS(409),
    [anon_sym_LBRACE_COLON] = ACTIONS(407),
    [anon_sym_] = ACTIONS(407),
    [anon_sym_3] = ACTIONS(409),
    [sym_char] = ACTIONS(407),
    [anon_sym_true] = ACTIONS(409),
    [anon_sym_false] = ACTIONS(409),
    [anon_sym_maybe] = ACTIONS(409),
    [sym_null] = ACTIONS(409),
    [sym_builtin] = ACTIONS(409),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [sym_shebang] = ACTIONS(411),
    [sym_comment] = ACTIONS(411),
    [aux_sym_label_token1] = ACTIONS(413),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(411),
    [anon_sym_POUND_LBRACK] = ACTIONS(411),
    [anon_sym_BANG] = ACTIONS(413),
    [anon_sym_BANG_BANG] = ACTIONS(411),
    [anon_sym_TILDE] = ACTIONS(413),
    [anon_sym_BSLASH] = ACTIONS(411),
    [anon_sym_AT] = ACTIONS(411),
    [anon_sym_POUND] = ACTIONS(413),
    [anon_sym_DOLLAR] = ACTIONS(411),
    [anon_sym_QMARK] = ACTIONS(411),
    [anon_sym_BQUOTE] = ACTIONS(413),
    [anon_sym_CARET] = ACTIONS(411),
    [anon_sym_STAR] = ACTIONS(411),
    [anon_sym_SLASH] = ACTIONS(411),
    [anon_sym_PERCENT] = ACTIONS(411),
    [anon_sym_PLUS] = ACTIONS(411),
    [anon_sym_DASH] = ACTIONS(413),
    [anon_sym_EQ] = ACTIONS(413),
    [anon_sym_LT] = ACTIONS(411),
    [anon_sym_GT] = ACTIONS(411),
    [anon_sym_AMP] = ACTIONS(411),
    [anon_sym_PIPE] = ACTIONS(411),
    [anon_sym_DOT_DOT] = ACTIONS(413),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(411),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_EQ_GT] = ACTIONS(411),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_SQUOTE] = ACTIONS(411),
    [anon_sym_DOT] = ACTIONS(413),
    [sym_version] = ACTIONS(413),
    [sym_number] = ACTIONS(413),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(411),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(413),
    [anon_sym_LBRACE_COLON] = ACTIONS(411),
    [anon_sym_] = ACTIONS(411),
    [anon_sym_3] = ACTIONS(413),
    [sym_char] = ACTIONS(411),
    [anon_sym_true] = ACTIONS(413),
    [anon_sym_false] = ACTIONS(413),
    [anon_sym_maybe] = ACTIONS(413),
    [sym_null] = ACTIONS(413),
    [sym_builtin] = ACTIONS(413),
  },
  [22] = {
    [sym_shebang] = ACTIONS(415),
    [sym_comment] = ACTIONS(415),
    [aux_sym_label_token1] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(415),
    [anon_sym_RBRACK] = ACTIONS(415),
    [anon_sym_POUND_LBRACK] = ACTIONS(415),
    [anon_sym_BANG] = ACTIONS(417),
    [anon_sym_BANG_BANG] = ACTIONS(415),
    [anon_sym_TILDE] = ACTIONS(417),
    [anon_sym_BSLASH] = ACTIONS(415),
    [anon_sym_AT] = ACTIONS(415),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_DOLLAR] = ACTIONS(415),
    [anon_sym_QMARK] = ACTIONS(415),
    [anon_sym_BQUOTE] = ACTIONS(417),
    [anon_sym_CARET] = ACTIONS(415),
    [anon_sym_STAR] = ACTIONS(415),
    [anon_sym_SLASH] = ACTIONS(415),
    [anon_sym_PERCENT] = ACTIONS(415),
    [anon_sym_PLUS] = ACTIONS(415),
    [anon_sym_DASH] = ACTIONS(417),
    [anon_sym_EQ] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(415),
    [anon_sym_AMP] = ACTIONS(415),
    [anon_sym_PIPE] = ACTIONS(415),
    [anon_sym_DOT_DOT] = ACTIONS(417),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(415),
    [anon_sym_EQ_GT] = ACTIONS(415),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_SQUOTE] = ACTIONS(415),
    [anon_sym_DOT] = ACTIONS(417),
    [sym_version] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(415),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_LBRACE_COLON] = ACTIONS(415),
    [anon_sym_] = ACTIONS(415),
    [anon_sym_3] = ACTIONS(417),
    [sym_char] = ACTIONS(415),
    [anon_sym_true] = ACTIONS(417),
    [anon_sym_false] = ACTIONS(417),
    [anon_sym_maybe] = ACTIONS(417),
    [sym_null] = ACTIONS(417),
    [sym_builtin] = ACTIONS(417),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(419),
    [sym_shebang] = ACTIONS(419),
    [sym_comment] = ACTIONS(419),
    [aux_sym_label_token1] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(419),
    [anon_sym_POUND_LBRACK] = ACTIONS(419),
    [anon_sym_BANG] = ACTIONS(421),
    [anon_sym_BANG_BANG] = ACTIONS(419),
    [anon_sym_TILDE] = ACTIONS(421),
    [anon_sym_BSLASH] = ACTIONS(419),
    [anon_sym_AT] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(421),
    [anon_sym_DOLLAR] = ACTIONS(419),
    [anon_sym_QMARK] = ACTIONS(419),
    [anon_sym_BQUOTE] = ACTIONS(421),
    [anon_sym_CARET] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(365),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_PLUS] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(369),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(373),
    [anon_sym_AMP] = ACTIONS(373),
    [anon_sym_PIPE] = ACTIONS(373),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(373),
    [anon_sym_DASH_GT] = ACTIONS(373),
    [anon_sym_EQ_GT] = ACTIONS(373),
    [anon_sym_COLON_COLON] = ACTIONS(373),
    [anon_sym_SQUOTE] = ACTIONS(419),
    [anon_sym_DOT] = ACTIONS(421),
    [sym_version] = ACTIONS(421),
    [sym_number] = ACTIONS(421),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(421),
    [anon_sym_LBRACE_COLON] = ACTIONS(419),
    [anon_sym_] = ACTIONS(419),
    [anon_sym_3] = ACTIONS(421),
    [sym_char] = ACTIONS(419),
    [anon_sym_true] = ACTIONS(421),
    [anon_sym_false] = ACTIONS(421),
    [anon_sym_maybe] = ACTIONS(421),
    [sym_null] = ACTIONS(421),
    [sym_builtin] = ACTIONS(421),
  },
  [24] = {
    [sym_shebang] = ACTIONS(423),
    [sym_comment] = ACTIONS(423),
    [aux_sym_label_token1] = ACTIONS(425),
    [anon_sym_COLON] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_RBRACK] = ACTIONS(423),
    [anon_sym_POUND_LBRACK] = ACTIONS(423),
    [anon_sym_BANG] = ACTIONS(425),
    [anon_sym_BANG_BANG] = ACTIONS(423),
    [anon_sym_TILDE] = ACTIONS(425),
    [anon_sym_BSLASH] = ACTIONS(423),
    [anon_sym_AT] = ACTIONS(423),
    [anon_sym_POUND] = ACTIONS(425),
    [anon_sym_DOLLAR] = ACTIONS(423),
    [anon_sym_QMARK] = ACTIONS(423),
    [anon_sym_BQUOTE] = ACTIONS(425),
    [anon_sym_CARET] = ACTIONS(423),
    [anon_sym_STAR] = ACTIONS(423),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_PERCENT] = ACTIONS(423),
    [anon_sym_PLUS] = ACTIONS(423),
    [anon_sym_DASH] = ACTIONS(425),
    [anon_sym_EQ] = ACTIONS(425),
    [anon_sym_LT] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_DOT_DOT] = ACTIONS(425),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(423),
    [anon_sym_DASH_GT] = ACTIONS(423),
    [anon_sym_EQ_GT] = ACTIONS(423),
    [anon_sym_COLON_COLON] = ACTIONS(423),
    [anon_sym_SQUOTE] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(425),
    [sym_version] = ACTIONS(425),
    [sym_number] = ACTIONS(425),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_LBRACE_COLON] = ACTIONS(423),
    [anon_sym_] = ACTIONS(423),
    [anon_sym_3] = ACTIONS(425),
    [sym_char] = ACTIONS(423),
    [anon_sym_true] = ACTIONS(425),
    [anon_sym_false] = ACTIONS(425),
    [anon_sym_maybe] = ACTIONS(425),
    [sym_null] = ACTIONS(425),
    [sym_builtin] = ACTIONS(425),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [sym_shebang] = ACTIONS(427),
    [sym_comment] = ACTIONS(427),
    [aux_sym_label_token1] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_POUND_LBRACK] = ACTIONS(427),
    [anon_sym_BANG] = ACTIONS(429),
    [anon_sym_BANG_BANG] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(429),
    [anon_sym_BSLASH] = ACTIONS(427),
    [anon_sym_AT] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(429),
    [anon_sym_DOLLAR] = ACTIONS(427),
    [anon_sym_QMARK] = ACTIONS(427),
    [anon_sym_BQUOTE] = ACTIONS(429),
    [anon_sym_CARET] = ACTIONS(427),
    [anon_sym_STAR] = ACTIONS(427),
    [anon_sym_SLASH] = ACTIONS(427),
    [anon_sym_PERCENT] = ACTIONS(427),
    [anon_sym_PLUS] = ACTIONS(427),
    [anon_sym_DASH] = ACTIONS(429),
    [anon_sym_EQ] = ACTIONS(429),
    [anon_sym_LT] = ACTIONS(427),
    [anon_sym_GT] = ACTIONS(427),
    [anon_sym_AMP] = ACTIONS(427),
    [anon_sym_PIPE] = ACTIONS(427),
    [anon_sym_DOT_DOT] = ACTIONS(429),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(427),
    [anon_sym_DASH_GT] = ACTIONS(427),
    [anon_sym_EQ_GT] = ACTIONS(427),
    [anon_sym_COLON_COLON] = ACTIONS(427),
    [anon_sym_SQUOTE] = ACTIONS(427),
    [anon_sym_DOT] = ACTIONS(429),
    [sym_version] = ACTIONS(429),
    [sym_number] = ACTIONS(429),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_LBRACE_COLON] = ACTIONS(427),
    [anon_sym_] = ACTIONS(427),
    [anon_sym_3] = ACTIONS(429),
    [sym_char] = ACTIONS(427),
    [anon_sym_true] = ACTIONS(429),
    [anon_sym_false] = ACTIONS(429),
    [anon_sym_maybe] = ACTIONS(429),
    [sym_null] = ACTIONS(429),
    [sym_builtin] = ACTIONS(429),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [sym_shebang] = ACTIONS(431),
    [sym_comment] = ACTIONS(431),
    [aux_sym_label_token1] = ACTIONS(433),
    [anon_sym_COLON] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_POUND_LBRACK] = ACTIONS(431),
    [anon_sym_BANG] = ACTIONS(433),
    [anon_sym_BANG_BANG] = ACTIONS(431),
    [anon_sym_TILDE] = ACTIONS(433),
    [anon_sym_BSLASH] = ACTIONS(431),
    [anon_sym_AT] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_DOLLAR] = ACTIONS(431),
    [anon_sym_QMARK] = ACTIONS(431),
    [anon_sym_BQUOTE] = ACTIONS(433),
    [anon_sym_CARET] = ACTIONS(431),
    [anon_sym_STAR] = ACTIONS(431),
    [anon_sym_SLASH] = ACTIONS(431),
    [anon_sym_PERCENT] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(431),
    [anon_sym_DASH] = ACTIONS(433),
    [anon_sym_EQ] = ACTIONS(433),
    [anon_sym_LT] = ACTIONS(431),
    [anon_sym_GT] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(431),
    [anon_sym_PIPE] = ACTIONS(431),
    [anon_sym_DOT_DOT] = ACTIONS(433),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(431),
    [anon_sym_DASH_GT] = ACTIONS(431),
    [anon_sym_EQ_GT] = ACTIONS(431),
    [anon_sym_COLON_COLON] = ACTIONS(431),
    [anon_sym_SQUOTE] = ACTIONS(431),
    [anon_sym_DOT] = ACTIONS(433),
    [sym_version] = ACTIONS(433),
    [sym_number] = ACTIONS(433),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(433),
    [anon_sym_LBRACE_COLON] = ACTIONS(431),
    [anon_sym_] = ACTIONS(431),
    [anon_sym_3] = ACTIONS(433),
    [sym_char] = ACTIONS(431),
    [anon_sym_true] = ACTIONS(433),
    [anon_sym_false] = ACTIONS(433),
    [anon_sym_maybe] = ACTIONS(433),
    [sym_null] = ACTIONS(433),
    [sym_builtin] = ACTIONS(433),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [sym_shebang] = ACTIONS(435),
    [sym_comment] = ACTIONS(435),
    [aux_sym_label_token1] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_POUND_LBRACK] = ACTIONS(435),
    [anon_sym_BANG] = ACTIONS(437),
    [anon_sym_BANG_BANG] = ACTIONS(435),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_BSLASH] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(437),
    [anon_sym_DOLLAR] = ACTIONS(435),
    [anon_sym_QMARK] = ACTIONS(435),
    [anon_sym_BQUOTE] = ACTIONS(437),
    [anon_sym_CARET] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(435),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(437),
    [anon_sym_EQ] = ACTIONS(437),
    [anon_sym_LT] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [anon_sym_AMP] = ACTIONS(435),
    [anon_sym_PIPE] = ACTIONS(435),
    [anon_sym_DOT_DOT] = ACTIONS(437),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(435),
    [anon_sym_DASH_GT] = ACTIONS(435),
    [anon_sym_EQ_GT] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(435),
    [anon_sym_SQUOTE] = ACTIONS(435),
    [anon_sym_DOT] = ACTIONS(437),
    [sym_version] = ACTIONS(437),
    [sym_number] = ACTIONS(437),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(437),
    [anon_sym_LBRACE_COLON] = ACTIONS(435),
    [anon_sym_] = ACTIONS(435),
    [anon_sym_3] = ACTIONS(437),
    [sym_char] = ACTIONS(435),
    [anon_sym_true] = ACTIONS(437),
    [anon_sym_false] = ACTIONS(437),
    [anon_sym_maybe] = ACTIONS(437),
    [sym_null] = ACTIONS(437),
    [sym_builtin] = ACTIONS(437),
  },
  [28] = {
    [sym_shebang] = ACTIONS(439),
    [sym_comment] = ACTIONS(439),
    [aux_sym_label_token1] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(439),
    [anon_sym_RBRACK] = ACTIONS(439),
    [anon_sym_POUND_LBRACK] = ACTIONS(439),
    [anon_sym_BANG] = ACTIONS(441),
    [anon_sym_BANG_BANG] = ACTIONS(439),
    [anon_sym_TILDE] = ACTIONS(441),
    [anon_sym_BSLASH] = ACTIONS(439),
    [anon_sym_AT] = ACTIONS(439),
    [anon_sym_POUND] = ACTIONS(441),
    [anon_sym_DOLLAR] = ACTIONS(439),
    [anon_sym_QMARK] = ACTIONS(439),
    [anon_sym_BQUOTE] = ACTIONS(441),
    [anon_sym_CARET] = ACTIONS(439),
    [anon_sym_STAR] = ACTIONS(439),
    [anon_sym_SLASH] = ACTIONS(439),
    [anon_sym_PERCENT] = ACTIONS(439),
    [anon_sym_PLUS] = ACTIONS(439),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_EQ] = ACTIONS(441),
    [anon_sym_LT] = ACTIONS(439),
    [anon_sym_GT] = ACTIONS(439),
    [anon_sym_AMP] = ACTIONS(439),
    [anon_sym_PIPE] = ACTIONS(439),
    [anon_sym_DOT_DOT] = ACTIONS(441),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(439),
    [anon_sym_DASH_GT] = ACTIONS(439),
    [anon_sym_EQ_GT] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(439),
    [anon_sym_SQUOTE] = ACTIONS(439),
    [anon_sym_DOT] = ACTIONS(441),
    [sym_version] = ACTIONS(441),
    [sym_number] = ACTIONS(441),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(439),
    [anon_sym_DQUOTE] = ACTIONS(439),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_LBRACE_COLON] = ACTIONS(439),
    [anon_sym_] = ACTIONS(439),
    [anon_sym_3] = ACTIONS(441),
    [sym_char] = ACTIONS(439),
    [anon_sym_true] = ACTIONS(441),
    [anon_sym_false] = ACTIONS(441),
    [anon_sym_maybe] = ACTIONS(441),
    [sym_null] = ACTIONS(441),
    [sym_builtin] = ACTIONS(441),
  },
  [29] = {
    [sym_shebang] = ACTIONS(443),
    [sym_comment] = ACTIONS(443),
    [aux_sym_label_token1] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [anon_sym_POUND_LBRACK] = ACTIONS(443),
    [anon_sym_BANG] = ACTIONS(445),
    [anon_sym_BANG_BANG] = ACTIONS(443),
    [anon_sym_TILDE] = ACTIONS(445),
    [anon_sym_BSLASH] = ACTIONS(443),
    [anon_sym_AT] = ACTIONS(443),
    [anon_sym_POUND] = ACTIONS(445),
    [anon_sym_DOLLAR] = ACTIONS(443),
    [anon_sym_QMARK] = ACTIONS(443),
    [anon_sym_BQUOTE] = ACTIONS(445),
    [anon_sym_CARET] = ACTIONS(443),
    [anon_sym_STAR] = ACTIONS(443),
    [anon_sym_SLASH] = ACTIONS(443),
    [anon_sym_PERCENT] = ACTIONS(443),
    [anon_sym_PLUS] = ACTIONS(443),
    [anon_sym_DASH] = ACTIONS(445),
    [anon_sym_EQ] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(443),
    [anon_sym_AMP] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(443),
    [anon_sym_DOT_DOT] = ACTIONS(445),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(443),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [anon_sym_COLON_COLON] = ACTIONS(443),
    [anon_sym_SQUOTE] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(445),
    [sym_version] = ACTIONS(445),
    [sym_number] = ACTIONS(445),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_LBRACE_COLON] = ACTIONS(443),
    [anon_sym_] = ACTIONS(443),
    [anon_sym_3] = ACTIONS(445),
    [sym_char] = ACTIONS(443),
    [anon_sym_true] = ACTIONS(445),
    [anon_sym_false] = ACTIONS(445),
    [anon_sym_maybe] = ACTIONS(445),
    [sym_null] = ACTIONS(445),
    [sym_builtin] = ACTIONS(445),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [sym_shebang] = ACTIONS(443),
    [sym_comment] = ACTIONS(443),
    [aux_sym_label_token1] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_POUND_LBRACK] = ACTIONS(443),
    [anon_sym_BANG] = ACTIONS(445),
    [anon_sym_BANG_BANG] = ACTIONS(443),
    [anon_sym_TILDE] = ACTIONS(445),
    [anon_sym_BSLASH] = ACTIONS(443),
    [anon_sym_AT] = ACTIONS(443),
    [anon_sym_POUND] = ACTIONS(445),
    [anon_sym_DOLLAR] = ACTIONS(443),
    [anon_sym_QMARK] = ACTIONS(443),
    [anon_sym_BQUOTE] = ACTIONS(445),
    [anon_sym_CARET] = ACTIONS(443),
    [anon_sym_STAR] = ACTIONS(443),
    [anon_sym_SLASH] = ACTIONS(443),
    [anon_sym_PERCENT] = ACTIONS(443),
    [anon_sym_PLUS] = ACTIONS(443),
    [anon_sym_DASH] = ACTIONS(445),
    [anon_sym_EQ] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(443),
    [anon_sym_AMP] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(443),
    [anon_sym_DOT_DOT] = ACTIONS(445),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(443),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [anon_sym_COLON_COLON] = ACTIONS(443),
    [anon_sym_SQUOTE] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(445),
    [sym_version] = ACTIONS(445),
    [sym_number] = ACTIONS(445),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_LBRACE_COLON] = ACTIONS(443),
    [anon_sym_] = ACTIONS(443),
    [anon_sym_3] = ACTIONS(445),
    [sym_char] = ACTIONS(443),
    [anon_sym_true] = ACTIONS(445),
    [anon_sym_false] = ACTIONS(445),
    [anon_sym_maybe] = ACTIONS(445),
    [sym_null] = ACTIONS(445),
    [sym_builtin] = ACTIONS(445),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(439),
    [sym_shebang] = ACTIONS(439),
    [sym_comment] = ACTIONS(439),
    [aux_sym_label_token1] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(439),
    [anon_sym_POUND_LBRACK] = ACTIONS(439),
    [anon_sym_BANG] = ACTIONS(441),
    [anon_sym_BANG_BANG] = ACTIONS(439),
    [anon_sym_TILDE] = ACTIONS(441),
    [anon_sym_BSLASH] = ACTIONS(439),
    [anon_sym_AT] = ACTIONS(439),
    [anon_sym_POUND] = ACTIONS(441),
    [anon_sym_DOLLAR] = ACTIONS(439),
    [anon_sym_QMARK] = ACTIONS(439),
    [anon_sym_BQUOTE] = ACTIONS(441),
    [anon_sym_CARET] = ACTIONS(439),
    [anon_sym_STAR] = ACTIONS(439),
    [anon_sym_SLASH] = ACTIONS(439),
    [anon_sym_PERCENT] = ACTIONS(439),
    [anon_sym_PLUS] = ACTIONS(439),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_EQ] = ACTIONS(441),
    [anon_sym_LT] = ACTIONS(439),
    [anon_sym_GT] = ACTIONS(439),
    [anon_sym_AMP] = ACTIONS(439),
    [anon_sym_PIPE] = ACTIONS(439),
    [anon_sym_DOT_DOT] = ACTIONS(441),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(439),
    [anon_sym_DASH_GT] = ACTIONS(439),
    [anon_sym_EQ_GT] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(439),
    [anon_sym_SQUOTE] = ACTIONS(439),
    [anon_sym_DOT] = ACTIONS(441),
    [sym_version] = ACTIONS(441),
    [sym_number] = ACTIONS(441),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(439),
    [anon_sym_DQUOTE] = ACTIONS(439),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_LBRACE_COLON] = ACTIONS(439),
    [anon_sym_] = ACTIONS(439),
    [anon_sym_3] = ACTIONS(441),
    [sym_char] = ACTIONS(439),
    [anon_sym_true] = ACTIONS(441),
    [anon_sym_false] = ACTIONS(441),
    [anon_sym_maybe] = ACTIONS(441),
    [sym_null] = ACTIONS(441),
    [sym_builtin] = ACTIONS(441),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [sym_shebang] = ACTIONS(423),
    [sym_comment] = ACTIONS(423),
    [aux_sym_label_token1] = ACTIONS(425),
    [anon_sym_COLON] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_POUND_LBRACK] = ACTIONS(423),
    [anon_sym_BANG] = ACTIONS(425),
    [anon_sym_BANG_BANG] = ACTIONS(423),
    [anon_sym_TILDE] = ACTIONS(425),
    [anon_sym_BSLASH] = ACTIONS(423),
    [anon_sym_AT] = ACTIONS(423),
    [anon_sym_POUND] = ACTIONS(425),
    [anon_sym_DOLLAR] = ACTIONS(423),
    [anon_sym_QMARK] = ACTIONS(423),
    [anon_sym_BQUOTE] = ACTIONS(425),
    [anon_sym_CARET] = ACTIONS(423),
    [anon_sym_STAR] = ACTIONS(423),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_PERCENT] = ACTIONS(423),
    [anon_sym_PLUS] = ACTIONS(423),
    [anon_sym_DASH] = ACTIONS(425),
    [anon_sym_EQ] = ACTIONS(425),
    [anon_sym_LT] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_DOT_DOT] = ACTIONS(425),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(423),
    [anon_sym_DASH_GT] = ACTIONS(423),
    [anon_sym_EQ_GT] = ACTIONS(423),
    [anon_sym_COLON_COLON] = ACTIONS(423),
    [anon_sym_SQUOTE] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(425),
    [sym_version] = ACTIONS(425),
    [sym_number] = ACTIONS(425),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_LBRACE_COLON] = ACTIONS(423),
    [anon_sym_] = ACTIONS(423),
    [anon_sym_3] = ACTIONS(425),
    [sym_char] = ACTIONS(423),
    [anon_sym_true] = ACTIONS(425),
    [anon_sym_false] = ACTIONS(425),
    [anon_sym_maybe] = ACTIONS(425),
    [sym_null] = ACTIONS(425),
    [sym_builtin] = ACTIONS(425),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [sym_shebang] = ACTIONS(415),
    [sym_comment] = ACTIONS(415),
    [aux_sym_label_token1] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(415),
    [anon_sym_POUND_LBRACK] = ACTIONS(415),
    [anon_sym_BANG] = ACTIONS(417),
    [anon_sym_BANG_BANG] = ACTIONS(415),
    [anon_sym_TILDE] = ACTIONS(417),
    [anon_sym_BSLASH] = ACTIONS(415),
    [anon_sym_AT] = ACTIONS(415),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_DOLLAR] = ACTIONS(415),
    [anon_sym_QMARK] = ACTIONS(415),
    [anon_sym_BQUOTE] = ACTIONS(417),
    [anon_sym_CARET] = ACTIONS(415),
    [anon_sym_STAR] = ACTIONS(415),
    [anon_sym_SLASH] = ACTIONS(415),
    [anon_sym_PERCENT] = ACTIONS(415),
    [anon_sym_PLUS] = ACTIONS(415),
    [anon_sym_DASH] = ACTIONS(417),
    [anon_sym_EQ] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(415),
    [anon_sym_AMP] = ACTIONS(415),
    [anon_sym_PIPE] = ACTIONS(415),
    [anon_sym_DOT_DOT] = ACTIONS(417),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(415),
    [anon_sym_DASH_GT] = ACTIONS(415),
    [anon_sym_EQ_GT] = ACTIONS(415),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_SQUOTE] = ACTIONS(415),
    [anon_sym_DOT] = ACTIONS(417),
    [sym_version] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(415),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_LBRACE_COLON] = ACTIONS(415),
    [anon_sym_] = ACTIONS(415),
    [anon_sym_3] = ACTIONS(417),
    [sym_char] = ACTIONS(415),
    [anon_sym_true] = ACTIONS(417),
    [anon_sym_false] = ACTIONS(417),
    [anon_sym_maybe] = ACTIONS(417),
    [sym_null] = ACTIONS(417),
    [sym_builtin] = ACTIONS(417),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [sym_shebang] = ACTIONS(407),
    [sym_comment] = ACTIONS(407),
    [aux_sym_label_token1] = ACTIONS(409),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(407),
    [anon_sym_POUND_LBRACK] = ACTIONS(407),
    [anon_sym_BANG] = ACTIONS(409),
    [anon_sym_BANG_BANG] = ACTIONS(407),
    [anon_sym_TILDE] = ACTIONS(409),
    [anon_sym_BSLASH] = ACTIONS(407),
    [anon_sym_AT] = ACTIONS(407),
    [anon_sym_POUND] = ACTIONS(409),
    [anon_sym_DOLLAR] = ACTIONS(407),
    [anon_sym_QMARK] = ACTIONS(407),
    [anon_sym_BQUOTE] = ACTIONS(409),
    [anon_sym_CARET] = ACTIONS(407),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(407),
    [anon_sym_PERCENT] = ACTIONS(407),
    [anon_sym_PLUS] = ACTIONS(407),
    [anon_sym_DASH] = ACTIONS(409),
    [anon_sym_EQ] = ACTIONS(409),
    [anon_sym_LT] = ACTIONS(407),
    [anon_sym_GT] = ACTIONS(407),
    [anon_sym_AMP] = ACTIONS(407),
    [anon_sym_PIPE] = ACTIONS(407),
    [anon_sym_DOT_DOT] = ACTIONS(409),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(407),
    [anon_sym_DASH_GT] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(407),
    [anon_sym_SQUOTE] = ACTIONS(407),
    [anon_sym_DOT] = ACTIONS(409),
    [sym_version] = ACTIONS(409),
    [sym_number] = ACTIONS(409),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(407),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_LBRACE] = ACTIONS(409),
    [anon_sym_LBRACE_COLON] = ACTIONS(407),
    [anon_sym_] = ACTIONS(407),
    [anon_sym_3] = ACTIONS(409),
    [sym_char] = ACTIONS(407),
    [anon_sym_true] = ACTIONS(409),
    [anon_sym_false] = ACTIONS(409),
    [anon_sym_maybe] = ACTIONS(409),
    [sym_null] = ACTIONS(409),
    [sym_builtin] = ACTIONS(409),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(403),
    [sym_shebang] = ACTIONS(403),
    [sym_comment] = ACTIONS(403),
    [aux_sym_label_token1] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(403),
    [anon_sym_POUND_LBRACK] = ACTIONS(403),
    [anon_sym_BANG] = ACTIONS(405),
    [anon_sym_BANG_BANG] = ACTIONS(403),
    [anon_sym_TILDE] = ACTIONS(405),
    [anon_sym_BSLASH] = ACTIONS(403),
    [anon_sym_AT] = ACTIONS(403),
    [anon_sym_POUND] = ACTIONS(405),
    [anon_sym_DOLLAR] = ACTIONS(403),
    [anon_sym_QMARK] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_CARET] = ACTIONS(403),
    [anon_sym_STAR] = ACTIONS(403),
    [anon_sym_SLASH] = ACTIONS(403),
    [anon_sym_PERCENT] = ACTIONS(403),
    [anon_sym_PLUS] = ACTIONS(403),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_EQ] = ACTIONS(405),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_DOT_DOT] = ACTIONS(405),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(403),
    [anon_sym_DASH_GT] = ACTIONS(403),
    [anon_sym_EQ_GT] = ACTIONS(403),
    [anon_sym_COLON_COLON] = ACTIONS(403),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_DOT] = ACTIONS(405),
    [sym_version] = ACTIONS(405),
    [sym_number] = ACTIONS(405),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_LBRACE_COLON] = ACTIONS(403),
    [anon_sym_] = ACTIONS(403),
    [anon_sym_3] = ACTIONS(405),
    [sym_char] = ACTIONS(403),
    [anon_sym_true] = ACTIONS(405),
    [anon_sym_false] = ACTIONS(405),
    [anon_sym_maybe] = ACTIONS(405),
    [sym_null] = ACTIONS(405),
    [sym_builtin] = ACTIONS(405),
  },
  [36] = {
    [sym_shebang] = ACTIONS(435),
    [sym_comment] = ACTIONS(435),
    [aux_sym_label_token1] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_RBRACK] = ACTIONS(435),
    [anon_sym_POUND_LBRACK] = ACTIONS(435),
    [anon_sym_BANG] = ACTIONS(437),
    [anon_sym_BANG_BANG] = ACTIONS(435),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_BSLASH] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(437),
    [anon_sym_DOLLAR] = ACTIONS(435),
    [anon_sym_QMARK] = ACTIONS(435),
    [anon_sym_BQUOTE] = ACTIONS(437),
    [anon_sym_CARET] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(435),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(437),
    [anon_sym_EQ] = ACTIONS(437),
    [anon_sym_LT] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [anon_sym_AMP] = ACTIONS(435),
    [anon_sym_PIPE] = ACTIONS(435),
    [anon_sym_DOT_DOT] = ACTIONS(437),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(435),
    [anon_sym_DASH_GT] = ACTIONS(435),
    [anon_sym_EQ_GT] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(435),
    [anon_sym_SQUOTE] = ACTIONS(435),
    [anon_sym_DOT] = ACTIONS(437),
    [sym_version] = ACTIONS(437),
    [sym_number] = ACTIONS(437),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(437),
    [anon_sym_LBRACE_COLON] = ACTIONS(435),
    [anon_sym_] = ACTIONS(435),
    [anon_sym_3] = ACTIONS(437),
    [sym_char] = ACTIONS(435),
    [anon_sym_true] = ACTIONS(437),
    [anon_sym_false] = ACTIONS(437),
    [anon_sym_maybe] = ACTIONS(437),
    [sym_null] = ACTIONS(437),
    [sym_builtin] = ACTIONS(437),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [sym_shebang] = ACTIONS(399),
    [sym_comment] = ACTIONS(399),
    [aux_sym_label_token1] = ACTIONS(401),
    [anon_sym_COLON] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(399),
    [anon_sym_POUND_LBRACK] = ACTIONS(399),
    [anon_sym_BANG] = ACTIONS(401),
    [anon_sym_BANG_BANG] = ACTIONS(399),
    [anon_sym_TILDE] = ACTIONS(401),
    [anon_sym_BSLASH] = ACTIONS(399),
    [anon_sym_AT] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(401),
    [anon_sym_DOLLAR] = ACTIONS(399),
    [anon_sym_QMARK] = ACTIONS(399),
    [anon_sym_BQUOTE] = ACTIONS(401),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_STAR] = ACTIONS(399),
    [anon_sym_SLASH] = ACTIONS(399),
    [anon_sym_PERCENT] = ACTIONS(399),
    [anon_sym_PLUS] = ACTIONS(399),
    [anon_sym_DASH] = ACTIONS(401),
    [anon_sym_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(399),
    [anon_sym_GT] = ACTIONS(399),
    [anon_sym_AMP] = ACTIONS(399),
    [anon_sym_PIPE] = ACTIONS(399),
    [anon_sym_DOT_DOT] = ACTIONS(401),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(399),
    [anon_sym_DASH_GT] = ACTIONS(399),
    [anon_sym_EQ_GT] = ACTIONS(399),
    [anon_sym_COLON_COLON] = ACTIONS(399),
    [anon_sym_SQUOTE] = ACTIONS(399),
    [anon_sym_DOT] = ACTIONS(401),
    [sym_version] = ACTIONS(401),
    [sym_number] = ACTIONS(401),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(399),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_LBRACE_COLON] = ACTIONS(399),
    [anon_sym_] = ACTIONS(399),
    [anon_sym_3] = ACTIONS(401),
    [sym_char] = ACTIONS(399),
    [anon_sym_true] = ACTIONS(401),
    [anon_sym_false] = ACTIONS(401),
    [anon_sym_maybe] = ACTIONS(401),
    [sym_null] = ACTIONS(401),
    [sym_builtin] = ACTIONS(401),
  },
  [38] = {
    [sym_shebang] = ACTIONS(431),
    [sym_comment] = ACTIONS(431),
    [aux_sym_label_token1] = ACTIONS(433),
    [anon_sym_COLON] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_RBRACK] = ACTIONS(431),
    [anon_sym_POUND_LBRACK] = ACTIONS(431),
    [anon_sym_BANG] = ACTIONS(433),
    [anon_sym_BANG_BANG] = ACTIONS(431),
    [anon_sym_TILDE] = ACTIONS(433),
    [anon_sym_BSLASH] = ACTIONS(431),
    [anon_sym_AT] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_DOLLAR] = ACTIONS(431),
    [anon_sym_QMARK] = ACTIONS(431),
    [anon_sym_BQUOTE] = ACTIONS(433),
    [anon_sym_CARET] = ACTIONS(431),
    [anon_sym_STAR] = ACTIONS(431),
    [anon_sym_SLASH] = ACTIONS(431),
    [anon_sym_PERCENT] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(431),
    [anon_sym_DASH] = ACTIONS(433),
    [anon_sym_EQ] = ACTIONS(433),
    [anon_sym_LT] = ACTIONS(431),
    [anon_sym_GT] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(431),
    [anon_sym_PIPE] = ACTIONS(431),
    [anon_sym_DOT_DOT] = ACTIONS(433),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(431),
    [anon_sym_DASH_GT] = ACTIONS(431),
    [anon_sym_EQ_GT] = ACTIONS(431),
    [anon_sym_COLON_COLON] = ACTIONS(431),
    [anon_sym_SQUOTE] = ACTIONS(431),
    [anon_sym_DOT] = ACTIONS(433),
    [sym_version] = ACTIONS(433),
    [sym_number] = ACTIONS(433),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(433),
    [anon_sym_LBRACE_COLON] = ACTIONS(431),
    [anon_sym_] = ACTIONS(431),
    [anon_sym_3] = ACTIONS(433),
    [sym_char] = ACTIONS(431),
    [anon_sym_true] = ACTIONS(433),
    [anon_sym_false] = ACTIONS(433),
    [anon_sym_maybe] = ACTIONS(433),
    [sym_null] = ACTIONS(433),
    [sym_builtin] = ACTIONS(433),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [sym_shebang] = ACTIONS(395),
    [sym_comment] = ACTIONS(395),
    [aux_sym_label_token1] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_POUND_LBRACK] = ACTIONS(395),
    [anon_sym_BANG] = ACTIONS(397),
    [anon_sym_BANG_BANG] = ACTIONS(395),
    [anon_sym_TILDE] = ACTIONS(397),
    [anon_sym_BSLASH] = ACTIONS(395),
    [anon_sym_AT] = ACTIONS(395),
    [anon_sym_POUND] = ACTIONS(397),
    [anon_sym_DOLLAR] = ACTIONS(395),
    [anon_sym_QMARK] = ACTIONS(395),
    [anon_sym_BQUOTE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(395),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_PERCENT] = ACTIONS(395),
    [anon_sym_PLUS] = ACTIONS(395),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_EQ] = ACTIONS(397),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(395),
    [anon_sym_DOT_DOT] = ACTIONS(397),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(395),
    [anon_sym_DASH_GT] = ACTIONS(395),
    [anon_sym_EQ_GT] = ACTIONS(395),
    [anon_sym_COLON_COLON] = ACTIONS(395),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [anon_sym_DOT] = ACTIONS(397),
    [sym_version] = ACTIONS(397),
    [sym_number] = ACTIONS(397),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(395),
    [anon_sym_DQUOTE] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(397),
    [anon_sym_LBRACE_COLON] = ACTIONS(395),
    [anon_sym_] = ACTIONS(395),
    [anon_sym_3] = ACTIONS(397),
    [sym_char] = ACTIONS(395),
    [anon_sym_true] = ACTIONS(397),
    [anon_sym_false] = ACTIONS(397),
    [anon_sym_maybe] = ACTIONS(397),
    [sym_null] = ACTIONS(397),
    [sym_builtin] = ACTIONS(397),
  },
  [40] = {
    [sym_shebang] = ACTIONS(427),
    [sym_comment] = ACTIONS(427),
    [aux_sym_label_token1] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(427),
    [anon_sym_POUND_LBRACK] = ACTIONS(427),
    [anon_sym_BANG] = ACTIONS(429),
    [anon_sym_BANG_BANG] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(429),
    [anon_sym_BSLASH] = ACTIONS(427),
    [anon_sym_AT] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(429),
    [anon_sym_DOLLAR] = ACTIONS(427),
    [anon_sym_QMARK] = ACTIONS(427),
    [anon_sym_BQUOTE] = ACTIONS(429),
    [anon_sym_CARET] = ACTIONS(427),
    [anon_sym_STAR] = ACTIONS(427),
    [anon_sym_SLASH] = ACTIONS(427),
    [anon_sym_PERCENT] = ACTIONS(427),
    [anon_sym_PLUS] = ACTIONS(427),
    [anon_sym_DASH] = ACTIONS(429),
    [anon_sym_EQ] = ACTIONS(429),
    [anon_sym_LT] = ACTIONS(427),
    [anon_sym_GT] = ACTIONS(427),
    [anon_sym_AMP] = ACTIONS(427),
    [anon_sym_PIPE] = ACTIONS(427),
    [anon_sym_DOT_DOT] = ACTIONS(429),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(427),
    [anon_sym_DASH_GT] = ACTIONS(427),
    [anon_sym_EQ_GT] = ACTIONS(427),
    [anon_sym_COLON_COLON] = ACTIONS(427),
    [anon_sym_SQUOTE] = ACTIONS(427),
    [anon_sym_DOT] = ACTIONS(429),
    [sym_version] = ACTIONS(429),
    [sym_number] = ACTIONS(429),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_LBRACE_COLON] = ACTIONS(427),
    [anon_sym_] = ACTIONS(427),
    [anon_sym_3] = ACTIONS(429),
    [sym_char] = ACTIONS(427),
    [anon_sym_true] = ACTIONS(429),
    [anon_sym_false] = ACTIONS(429),
    [anon_sym_maybe] = ACTIONS(429),
    [sym_null] = ACTIONS(429),
    [sym_builtin] = ACTIONS(429),
  },
  [41] = {
    [sym_shebang] = ACTIONS(419),
    [sym_comment] = ACTIONS(419),
    [aux_sym_label_token1] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(419),
    [anon_sym_RBRACK] = ACTIONS(419),
    [anon_sym_POUND_LBRACK] = ACTIONS(419),
    [anon_sym_BANG] = ACTIONS(421),
    [anon_sym_BANG_BANG] = ACTIONS(419),
    [anon_sym_TILDE] = ACTIONS(421),
    [anon_sym_BSLASH] = ACTIONS(419),
    [anon_sym_AT] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(421),
    [anon_sym_DOLLAR] = ACTIONS(419),
    [anon_sym_QMARK] = ACTIONS(419),
    [anon_sym_BQUOTE] = ACTIONS(421),
    [anon_sym_CARET] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(385),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(385),
    [anon_sym_PLUS] = ACTIONS(387),
    [anon_sym_DASH] = ACTIONS(389),
    [anon_sym_EQ] = ACTIONS(391),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_DOT_DOT] = ACTIONS(391),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(393),
    [anon_sym_DASH_GT] = ACTIONS(393),
    [anon_sym_EQ_GT] = ACTIONS(393),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(419),
    [anon_sym_DOT] = ACTIONS(421),
    [sym_version] = ACTIONS(421),
    [sym_number] = ACTIONS(421),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(421),
    [anon_sym_LBRACE_COLON] = ACTIONS(419),
    [anon_sym_] = ACTIONS(419),
    [anon_sym_3] = ACTIONS(421),
    [sym_char] = ACTIONS(419),
    [anon_sym_true] = ACTIONS(421),
    [anon_sym_false] = ACTIONS(421),
    [anon_sym_maybe] = ACTIONS(421),
    [sym_null] = ACTIONS(421),
    [sym_builtin] = ACTIONS(421),
  },
  [42] = {
    [sym_shebang] = ACTIONS(447),
    [sym_comment] = ACTIONS(447),
    [aux_sym_label_token1] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_RBRACK] = ACTIONS(447),
    [anon_sym_POUND_LBRACK] = ACTIONS(447),
    [anon_sym_BANG] = ACTIONS(449),
    [anon_sym_BANG_BANG] = ACTIONS(447),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_BSLASH] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(447),
    [anon_sym_POUND] = ACTIONS(449),
    [anon_sym_DOLLAR] = ACTIONS(447),
    [anon_sym_QMARK] = ACTIONS(447),
    [anon_sym_BQUOTE] = ACTIONS(449),
    [anon_sym_CARET] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(385),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(385),
    [anon_sym_PLUS] = ACTIONS(387),
    [anon_sym_DASH] = ACTIONS(389),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LT] = ACTIONS(447),
    [anon_sym_GT] = ACTIONS(447),
    [anon_sym_AMP] = ACTIONS(447),
    [anon_sym_PIPE] = ACTIONS(447),
    [anon_sym_DOT_DOT] = ACTIONS(449),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(447),
    [anon_sym_DASH_GT] = ACTIONS(447),
    [anon_sym_EQ_GT] = ACTIONS(447),
    [anon_sym_COLON_COLON] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(449),
    [sym_version] = ACTIONS(449),
    [sym_number] = ACTIONS(449),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_LBRACE_COLON] = ACTIONS(447),
    [anon_sym_] = ACTIONS(447),
    [anon_sym_3] = ACTIONS(449),
    [sym_char] = ACTIONS(447),
    [anon_sym_true] = ACTIONS(449),
    [anon_sym_false] = ACTIONS(449),
    [anon_sym_maybe] = ACTIONS(449),
    [sym_null] = ACTIONS(449),
    [sym_builtin] = ACTIONS(449),
  },
  [43] = {
    [sym_shebang] = ACTIONS(447),
    [sym_comment] = ACTIONS(447),
    [aux_sym_label_token1] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_RBRACK] = ACTIONS(447),
    [anon_sym_POUND_LBRACK] = ACTIONS(447),
    [anon_sym_BANG] = ACTIONS(449),
    [anon_sym_BANG_BANG] = ACTIONS(447),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_BSLASH] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(447),
    [anon_sym_POUND] = ACTIONS(449),
    [anon_sym_DOLLAR] = ACTIONS(447),
    [anon_sym_QMARK] = ACTIONS(447),
    [anon_sym_BQUOTE] = ACTIONS(449),
    [anon_sym_CARET] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(385),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(385),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(449),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LT] = ACTIONS(447),
    [anon_sym_GT] = ACTIONS(447),
    [anon_sym_AMP] = ACTIONS(447),
    [anon_sym_PIPE] = ACTIONS(447),
    [anon_sym_DOT_DOT] = ACTIONS(449),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(447),
    [anon_sym_DASH_GT] = ACTIONS(447),
    [anon_sym_EQ_GT] = ACTIONS(447),
    [anon_sym_COLON_COLON] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(449),
    [sym_version] = ACTIONS(449),
    [sym_number] = ACTIONS(449),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_LBRACE_COLON] = ACTIONS(447),
    [anon_sym_] = ACTIONS(447),
    [anon_sym_3] = ACTIONS(449),
    [sym_char] = ACTIONS(447),
    [anon_sym_true] = ACTIONS(449),
    [anon_sym_false] = ACTIONS(449),
    [anon_sym_maybe] = ACTIONS(449),
    [sym_null] = ACTIONS(449),
    [sym_builtin] = ACTIONS(449),
  },
  [44] = {
    [sym_shebang] = ACTIONS(411),
    [sym_comment] = ACTIONS(411),
    [aux_sym_label_token1] = ACTIONS(413),
    [anon_sym_COLON] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(411),
    [anon_sym_RBRACK] = ACTIONS(411),
    [anon_sym_POUND_LBRACK] = ACTIONS(411),
    [anon_sym_BANG] = ACTIONS(413),
    [anon_sym_BANG_BANG] = ACTIONS(411),
    [anon_sym_TILDE] = ACTIONS(413),
    [anon_sym_BSLASH] = ACTIONS(411),
    [anon_sym_AT] = ACTIONS(411),
    [anon_sym_POUND] = ACTIONS(413),
    [anon_sym_DOLLAR] = ACTIONS(411),
    [anon_sym_QMARK] = ACTIONS(411),
    [anon_sym_BQUOTE] = ACTIONS(413),
    [anon_sym_CARET] = ACTIONS(411),
    [anon_sym_STAR] = ACTIONS(411),
    [anon_sym_SLASH] = ACTIONS(411),
    [anon_sym_PERCENT] = ACTIONS(411),
    [anon_sym_PLUS] = ACTIONS(411),
    [anon_sym_DASH] = ACTIONS(413),
    [anon_sym_EQ] = ACTIONS(413),
    [anon_sym_LT] = ACTIONS(411),
    [anon_sym_GT] = ACTIONS(411),
    [anon_sym_AMP] = ACTIONS(411),
    [anon_sym_PIPE] = ACTIONS(411),
    [anon_sym_DOT_DOT] = ACTIONS(413),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(411),
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_EQ_GT] = ACTIONS(411),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_SQUOTE] = ACTIONS(411),
    [anon_sym_DOT] = ACTIONS(413),
    [sym_version] = ACTIONS(413),
    [sym_number] = ACTIONS(413),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(411),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(413),
    [anon_sym_LBRACE_COLON] = ACTIONS(411),
    [anon_sym_] = ACTIONS(411),
    [anon_sym_3] = ACTIONS(413),
    [sym_char] = ACTIONS(411),
    [anon_sym_true] = ACTIONS(413),
    [anon_sym_false] = ACTIONS(413),
    [anon_sym_maybe] = ACTIONS(413),
    [sym_null] = ACTIONS(413),
    [sym_builtin] = ACTIONS(413),
  },
  [45] = {
    [sym_shebang] = ACTIONS(443),
    [sym_comment] = ACTIONS(443),
    [aux_sym_label_token1] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [anon_sym_POUND_LBRACK] = ACTIONS(443),
    [anon_sym_BANG] = ACTIONS(445),
    [anon_sym_BANG_BANG] = ACTIONS(443),
    [anon_sym_TILDE] = ACTIONS(445),
    [anon_sym_BSLASH] = ACTIONS(443),
    [anon_sym_AT] = ACTIONS(443),
    [anon_sym_POUND] = ACTIONS(445),
    [anon_sym_DOLLAR] = ACTIONS(443),
    [anon_sym_QMARK] = ACTIONS(443),
    [anon_sym_BQUOTE] = ACTIONS(445),
    [anon_sym_CARET] = ACTIONS(443),
    [anon_sym_STAR] = ACTIONS(443),
    [anon_sym_SLASH] = ACTIONS(443),
    [anon_sym_PERCENT] = ACTIONS(443),
    [anon_sym_PLUS] = ACTIONS(443),
    [anon_sym_DASH] = ACTIONS(445),
    [anon_sym_EQ] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(443),
    [anon_sym_AMP] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(443),
    [anon_sym_DOT_DOT] = ACTIONS(445),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(443),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [anon_sym_COLON_COLON] = ACTIONS(443),
    [anon_sym_SQUOTE] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(445),
    [sym_version] = ACTIONS(445),
    [sym_number] = ACTIONS(445),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_LBRACE_COLON] = ACTIONS(443),
    [anon_sym_] = ACTIONS(443),
    [anon_sym_3] = ACTIONS(445),
    [sym_char] = ACTIONS(443),
    [anon_sym_true] = ACTIONS(445),
    [anon_sym_false] = ACTIONS(445),
    [anon_sym_maybe] = ACTIONS(445),
    [sym_null] = ACTIONS(445),
    [sym_builtin] = ACTIONS(445),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [sym_shebang] = ACTIONS(379),
    [sym_comment] = ACTIONS(379),
    [aux_sym_label_token1] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_POUND_LBRACK] = ACTIONS(379),
    [anon_sym_BANG] = ACTIONS(381),
    [anon_sym_BANG_BANG] = ACTIONS(379),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_BSLASH] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(379),
    [anon_sym_POUND] = ACTIONS(381),
    [anon_sym_DOLLAR] = ACTIONS(379),
    [anon_sym_QMARK] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_CARET] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(365),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_PLUS] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(369),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(373),
    [anon_sym_AMP] = ACTIONS(373),
    [anon_sym_PIPE] = ACTIONS(373),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(373),
    [anon_sym_DASH_GT] = ACTIONS(373),
    [anon_sym_EQ_GT] = ACTIONS(373),
    [anon_sym_COLON_COLON] = ACTIONS(373),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_DOT] = ACTIONS(381),
    [sym_version] = ACTIONS(381),
    [sym_number] = ACTIONS(381),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_LBRACE_COLON] = ACTIONS(379),
    [anon_sym_] = ACTIONS(379),
    [anon_sym_3] = ACTIONS(381),
    [sym_char] = ACTIONS(379),
    [anon_sym_true] = ACTIONS(381),
    [anon_sym_false] = ACTIONS(381),
    [anon_sym_maybe] = ACTIONS(381),
    [sym_null] = ACTIONS(381),
    [sym_builtin] = ACTIONS(381),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [sym_shebang] = ACTIONS(447),
    [sym_comment] = ACTIONS(447),
    [aux_sym_label_token1] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_POUND_LBRACK] = ACTIONS(447),
    [anon_sym_BANG] = ACTIONS(449),
    [anon_sym_BANG_BANG] = ACTIONS(447),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_BSLASH] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(447),
    [anon_sym_POUND] = ACTIONS(449),
    [anon_sym_DOLLAR] = ACTIONS(447),
    [anon_sym_QMARK] = ACTIONS(447),
    [anon_sym_BQUOTE] = ACTIONS(449),
    [anon_sym_CARET] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(365),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_PLUS] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(369),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LT] = ACTIONS(447),
    [anon_sym_GT] = ACTIONS(447),
    [anon_sym_AMP] = ACTIONS(447),
    [anon_sym_PIPE] = ACTIONS(447),
    [anon_sym_DOT_DOT] = ACTIONS(449),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(447),
    [anon_sym_DASH_GT] = ACTIONS(447),
    [anon_sym_EQ_GT] = ACTIONS(447),
    [anon_sym_COLON_COLON] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(449),
    [sym_version] = ACTIONS(449),
    [sym_number] = ACTIONS(449),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_LBRACE_COLON] = ACTIONS(447),
    [anon_sym_] = ACTIONS(447),
    [anon_sym_3] = ACTIONS(449),
    [sym_char] = ACTIONS(447),
    [anon_sym_true] = ACTIONS(449),
    [anon_sym_false] = ACTIONS(449),
    [anon_sym_maybe] = ACTIONS(449),
    [sym_null] = ACTIONS(449),
    [sym_builtin] = ACTIONS(449),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [sym_shebang] = ACTIONS(447),
    [sym_comment] = ACTIONS(447),
    [aux_sym_label_token1] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_POUND_LBRACK] = ACTIONS(447),
    [anon_sym_BANG] = ACTIONS(449),
    [anon_sym_BANG_BANG] = ACTIONS(447),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_BSLASH] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(447),
    [anon_sym_POUND] = ACTIONS(449),
    [anon_sym_DOLLAR] = ACTIONS(447),
    [anon_sym_QMARK] = ACTIONS(447),
    [anon_sym_BQUOTE] = ACTIONS(449),
    [anon_sym_CARET] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(365),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(449),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LT] = ACTIONS(447),
    [anon_sym_GT] = ACTIONS(447),
    [anon_sym_AMP] = ACTIONS(447),
    [anon_sym_PIPE] = ACTIONS(447),
    [anon_sym_DOT_DOT] = ACTIONS(449),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(447),
    [anon_sym_DASH_GT] = ACTIONS(447),
    [anon_sym_EQ_GT] = ACTIONS(447),
    [anon_sym_COLON_COLON] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(449),
    [sym_version] = ACTIONS(449),
    [sym_number] = ACTIONS(449),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_LBRACE_COLON] = ACTIONS(447),
    [anon_sym_] = ACTIONS(447),
    [anon_sym_3] = ACTIONS(449),
    [sym_char] = ACTIONS(447),
    [anon_sym_true] = ACTIONS(449),
    [anon_sym_false] = ACTIONS(449),
    [anon_sym_maybe] = ACTIONS(449),
    [sym_null] = ACTIONS(449),
    [sym_builtin] = ACTIONS(449),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [sym_shebang] = ACTIONS(447),
    [sym_comment] = ACTIONS(447),
    [aux_sym_label_token1] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_POUND_LBRACK] = ACTIONS(447),
    [anon_sym_BANG] = ACTIONS(449),
    [anon_sym_BANG_BANG] = ACTIONS(447),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_BSLASH] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(447),
    [anon_sym_POUND] = ACTIONS(449),
    [anon_sym_DOLLAR] = ACTIONS(447),
    [anon_sym_QMARK] = ACTIONS(447),
    [anon_sym_BQUOTE] = ACTIONS(449),
    [anon_sym_CARET] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(449),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LT] = ACTIONS(447),
    [anon_sym_GT] = ACTIONS(447),
    [anon_sym_AMP] = ACTIONS(447),
    [anon_sym_PIPE] = ACTIONS(447),
    [anon_sym_DOT_DOT] = ACTIONS(449),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(447),
    [anon_sym_DASH_GT] = ACTIONS(447),
    [anon_sym_EQ_GT] = ACTIONS(447),
    [anon_sym_COLON_COLON] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(449),
    [sym_version] = ACTIONS(449),
    [sym_number] = ACTIONS(449),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_LBRACE_COLON] = ACTIONS(447),
    [anon_sym_] = ACTIONS(447),
    [anon_sym_3] = ACTIONS(449),
    [sym_char] = ACTIONS(447),
    [anon_sym_true] = ACTIONS(449),
    [anon_sym_false] = ACTIONS(449),
    [anon_sym_maybe] = ACTIONS(449),
    [sym_null] = ACTIONS(449),
    [sym_builtin] = ACTIONS(449),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [sym_shebang] = ACTIONS(447),
    [sym_comment] = ACTIONS(447),
    [aux_sym_label_token1] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_POUND_LBRACK] = ACTIONS(447),
    [anon_sym_BANG] = ACTIONS(449),
    [anon_sym_BANG_BANG] = ACTIONS(447),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_BSLASH] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(447),
    [anon_sym_POUND] = ACTIONS(449),
    [anon_sym_DOLLAR] = ACTIONS(447),
    [anon_sym_QMARK] = ACTIONS(447),
    [anon_sym_BQUOTE] = ACTIONS(449),
    [anon_sym_CARET] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(449),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LT] = ACTIONS(447),
    [anon_sym_GT] = ACTIONS(447),
    [anon_sym_AMP] = ACTIONS(447),
    [anon_sym_PIPE] = ACTIONS(447),
    [anon_sym_DOT_DOT] = ACTIONS(449),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(447),
    [anon_sym_DASH_GT] = ACTIONS(447),
    [anon_sym_EQ_GT] = ACTIONS(447),
    [anon_sym_COLON_COLON] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(449),
    [sym_version] = ACTIONS(449),
    [sym_number] = ACTIONS(449),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_LBRACE_COLON] = ACTIONS(447),
    [anon_sym_] = ACTIONS(447),
    [anon_sym_3] = ACTIONS(449),
    [sym_char] = ACTIONS(447),
    [anon_sym_true] = ACTIONS(449),
    [anon_sym_false] = ACTIONS(449),
    [anon_sym_maybe] = ACTIONS(449),
    [sym_null] = ACTIONS(449),
    [sym_builtin] = ACTIONS(449),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [sym_shebang] = ACTIONS(443),
    [sym_comment] = ACTIONS(443),
    [aux_sym_label_token1] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_POUND_LBRACK] = ACTIONS(443),
    [anon_sym_BANG] = ACTIONS(445),
    [anon_sym_BANG_BANG] = ACTIONS(443),
    [anon_sym_TILDE] = ACTIONS(445),
    [anon_sym_BSLASH] = ACTIONS(443),
    [anon_sym_AT] = ACTIONS(443),
    [anon_sym_POUND] = ACTIONS(445),
    [anon_sym_DOLLAR] = ACTIONS(443),
    [anon_sym_QMARK] = ACTIONS(443),
    [anon_sym_BQUOTE] = ACTIONS(445),
    [anon_sym_CARET] = ACTIONS(443),
    [anon_sym_STAR] = ACTIONS(443),
    [anon_sym_SLASH] = ACTIONS(443),
    [anon_sym_PERCENT] = ACTIONS(443),
    [anon_sym_PLUS] = ACTIONS(443),
    [anon_sym_DASH] = ACTIONS(445),
    [anon_sym_EQ] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(443),
    [anon_sym_AMP] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(443),
    [anon_sym_DOT_DOT] = ACTIONS(445),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(443),
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [anon_sym_COLON_COLON] = ACTIONS(443),
    [anon_sym_SQUOTE] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(445),
    [sym_version] = ACTIONS(445),
    [sym_number] = ACTIONS(445),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_LBRACE_COLON] = ACTIONS(443),
    [anon_sym_] = ACTIONS(443),
    [anon_sym_3] = ACTIONS(445),
    [sym_char] = ACTIONS(443),
    [anon_sym_true] = ACTIONS(445),
    [anon_sym_false] = ACTIONS(445),
    [anon_sym_maybe] = ACTIONS(445),
    [sym_null] = ACTIONS(445),
    [sym_builtin] = ACTIONS(445),
  },
  [52] = {
    [sym_shebang] = ACTIONS(375),
    [sym_comment] = ACTIONS(375),
    [aux_sym_label_token1] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_RBRACK] = ACTIONS(375),
    [anon_sym_POUND_LBRACK] = ACTIONS(375),
    [anon_sym_BANG] = ACTIONS(377),
    [anon_sym_BANG_BANG] = ACTIONS(375),
    [anon_sym_TILDE] = ACTIONS(377),
    [anon_sym_BSLASH] = ACTIONS(375),
    [anon_sym_AT] = ACTIONS(375),
    [anon_sym_POUND] = ACTIONS(377),
    [anon_sym_DOLLAR] = ACTIONS(375),
    [anon_sym_QMARK] = ACTIONS(375),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [anon_sym_CARET] = ACTIONS(375),
    [anon_sym_STAR] = ACTIONS(375),
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(375),
    [anon_sym_PLUS] = ACTIONS(375),
    [anon_sym_DASH] = ACTIONS(377),
    [anon_sym_EQ] = ACTIONS(377),
    [anon_sym_LT] = ACTIONS(375),
    [anon_sym_GT] = ACTIONS(375),
    [anon_sym_AMP] = ACTIONS(375),
    [anon_sym_PIPE] = ACTIONS(375),
    [anon_sym_DOT_DOT] = ACTIONS(377),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(375),
    [anon_sym_DASH_GT] = ACTIONS(375),
    [anon_sym_EQ_GT] = ACTIONS(375),
    [anon_sym_COLON_COLON] = ACTIONS(375),
    [anon_sym_SQUOTE] = ACTIONS(375),
    [anon_sym_DOT] = ACTIONS(377),
    [sym_version] = ACTIONS(377),
    [sym_number] = ACTIONS(377),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(375),
    [anon_sym_DQUOTE] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_LBRACE_COLON] = ACTIONS(375),
    [anon_sym_] = ACTIONS(375),
    [anon_sym_3] = ACTIONS(377),
    [sym_char] = ACTIONS(375),
    [anon_sym_true] = ACTIONS(377),
    [anon_sym_false] = ACTIONS(377),
    [anon_sym_maybe] = ACTIONS(377),
    [sym_null] = ACTIONS(377),
    [sym_builtin] = ACTIONS(377),
  },
  [53] = {
    [sym_shebang] = ACTIONS(447),
    [sym_comment] = ACTIONS(447),
    [aux_sym_label_token1] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_RBRACK] = ACTIONS(447),
    [anon_sym_POUND_LBRACK] = ACTIONS(447),
    [anon_sym_BANG] = ACTIONS(449),
    [anon_sym_BANG_BANG] = ACTIONS(447),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_BSLASH] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(447),
    [anon_sym_POUND] = ACTIONS(449),
    [anon_sym_DOLLAR] = ACTIONS(447),
    [anon_sym_QMARK] = ACTIONS(447),
    [anon_sym_BQUOTE] = ACTIONS(449),
    [anon_sym_CARET] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(449),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LT] = ACTIONS(447),
    [anon_sym_GT] = ACTIONS(447),
    [anon_sym_AMP] = ACTIONS(447),
    [anon_sym_PIPE] = ACTIONS(447),
    [anon_sym_DOT_DOT] = ACTIONS(449),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(447),
    [anon_sym_DASH_GT] = ACTIONS(447),
    [anon_sym_EQ_GT] = ACTIONS(447),
    [anon_sym_COLON_COLON] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(449),
    [sym_version] = ACTIONS(449),
    [sym_number] = ACTIONS(449),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_LBRACE_COLON] = ACTIONS(447),
    [anon_sym_] = ACTIONS(447),
    [anon_sym_3] = ACTIONS(449),
    [sym_char] = ACTIONS(447),
    [anon_sym_true] = ACTIONS(449),
    [anon_sym_false] = ACTIONS(449),
    [anon_sym_maybe] = ACTIONS(449),
    [sym_null] = ACTIONS(449),
    [sym_builtin] = ACTIONS(449),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(454),
    [sym_shebang] = ACTIONS(454),
    [sym_comment] = ACTIONS(454),
    [aux_sym_label_token1] = ACTIONS(456),
    [anon_sym_COLON] = ACTIONS(456),
    [anon_sym_LBRACK] = ACTIONS(454),
    [anon_sym_POUND_LBRACK] = ACTIONS(454),
    [anon_sym_BANG] = ACTIONS(456),
    [anon_sym_BANG_BANG] = ACTIONS(454),
    [anon_sym_TILDE] = ACTIONS(456),
    [anon_sym_BSLASH] = ACTIONS(454),
    [anon_sym_AT] = ACTIONS(454),
    [anon_sym_POUND] = ACTIONS(456),
    [anon_sym_DOLLAR] = ACTIONS(454),
    [anon_sym_QMARK] = ACTIONS(454),
    [anon_sym_BQUOTE] = ACTIONS(456),
    [anon_sym_CARET] = ACTIONS(454),
    [anon_sym_STAR] = ACTIONS(454),
    [anon_sym_SLASH] = ACTIONS(454),
    [anon_sym_PERCENT] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(454),
    [anon_sym_DASH] = ACTIONS(456),
    [anon_sym_EQ] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(454),
    [anon_sym_GT] = ACTIONS(454),
    [anon_sym_AMP] = ACTIONS(454),
    [anon_sym_PIPE] = ACTIONS(454),
    [anon_sym_DOT_DOT] = ACTIONS(456),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(454),
    [anon_sym_DASH_GT] = ACTIONS(454),
    [anon_sym_EQ_GT] = ACTIONS(454),
    [anon_sym_COLON_COLON] = ACTIONS(454),
    [anon_sym_SQUOTE] = ACTIONS(454),
    [anon_sym_DOT] = ACTIONS(456),
    [sym_version] = ACTIONS(456),
    [sym_number] = ACTIONS(456),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(454),
    [anon_sym_DQUOTE] = ACTIONS(454),
    [anon_sym_LBRACE] = ACTIONS(456),
    [anon_sym_LBRACE_COLON] = ACTIONS(454),
    [anon_sym_] = ACTIONS(454),
    [anon_sym_3] = ACTIONS(456),
    [sym_char] = ACTIONS(454),
    [anon_sym_true] = ACTIONS(456),
    [anon_sym_false] = ACTIONS(456),
    [anon_sym_maybe] = ACTIONS(456),
    [sym_null] = ACTIONS(456),
    [sym_builtin] = ACTIONS(456),
  },
  [55] = {
    [sym_shebang] = ACTIONS(447),
    [sym_comment] = ACTIONS(447),
    [aux_sym_label_token1] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_RBRACK] = ACTIONS(447),
    [anon_sym_POUND_LBRACK] = ACTIONS(447),
    [anon_sym_BANG] = ACTIONS(449),
    [anon_sym_BANG_BANG] = ACTIONS(447),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_BSLASH] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(447),
    [anon_sym_POUND] = ACTIONS(449),
    [anon_sym_DOLLAR] = ACTIONS(447),
    [anon_sym_QMARK] = ACTIONS(447),
    [anon_sym_BQUOTE] = ACTIONS(449),
    [anon_sym_CARET] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(449),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LT] = ACTIONS(447),
    [anon_sym_GT] = ACTIONS(447),
    [anon_sym_AMP] = ACTIONS(447),
    [anon_sym_PIPE] = ACTIONS(447),
    [anon_sym_DOT_DOT] = ACTIONS(449),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(447),
    [anon_sym_DASH_GT] = ACTIONS(447),
    [anon_sym_EQ_GT] = ACTIONS(447),
    [anon_sym_COLON_COLON] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(449),
    [sym_version] = ACTIONS(449),
    [sym_number] = ACTIONS(449),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_LBRACE_COLON] = ACTIONS(447),
    [anon_sym_] = ACTIONS(447),
    [anon_sym_3] = ACTIONS(449),
    [sym_char] = ACTIONS(447),
    [anon_sym_true] = ACTIONS(449),
    [anon_sym_false] = ACTIONS(449),
    [anon_sym_maybe] = ACTIONS(449),
    [sym_null] = ACTIONS(449),
    [sym_builtin] = ACTIONS(449),
  },
  [56] = {
    [sym_shebang] = ACTIONS(454),
    [sym_comment] = ACTIONS(454),
    [aux_sym_label_token1] = ACTIONS(456),
    [anon_sym_COLON] = ACTIONS(456),
    [anon_sym_LBRACK] = ACTIONS(454),
    [anon_sym_RBRACK] = ACTIONS(454),
    [anon_sym_POUND_LBRACK] = ACTIONS(454),
    [anon_sym_BANG] = ACTIONS(456),
    [anon_sym_BANG_BANG] = ACTIONS(454),
    [anon_sym_TILDE] = ACTIONS(456),
    [anon_sym_BSLASH] = ACTIONS(454),
    [anon_sym_AT] = ACTIONS(454),
    [anon_sym_POUND] = ACTIONS(456),
    [anon_sym_DOLLAR] = ACTIONS(454),
    [anon_sym_QMARK] = ACTIONS(454),
    [anon_sym_BQUOTE] = ACTIONS(456),
    [anon_sym_CARET] = ACTIONS(454),
    [anon_sym_STAR] = ACTIONS(454),
    [anon_sym_SLASH] = ACTIONS(454),
    [anon_sym_PERCENT] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(454),
    [anon_sym_DASH] = ACTIONS(456),
    [anon_sym_EQ] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(454),
    [anon_sym_GT] = ACTIONS(454),
    [anon_sym_AMP] = ACTIONS(454),
    [anon_sym_PIPE] = ACTIONS(454),
    [anon_sym_DOT_DOT] = ACTIONS(456),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(454),
    [anon_sym_DASH_GT] = ACTIONS(454),
    [anon_sym_EQ_GT] = ACTIONS(454),
    [anon_sym_COLON_COLON] = ACTIONS(454),
    [anon_sym_SQUOTE] = ACTIONS(454),
    [anon_sym_DOT] = ACTIONS(456),
    [sym_version] = ACTIONS(456),
    [sym_number] = ACTIONS(456),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(454),
    [anon_sym_DQUOTE] = ACTIONS(454),
    [anon_sym_LBRACE] = ACTIONS(456),
    [anon_sym_LBRACE_COLON] = ACTIONS(454),
    [anon_sym_] = ACTIONS(454),
    [anon_sym_3] = ACTIONS(456),
    [sym_char] = ACTIONS(454),
    [anon_sym_true] = ACTIONS(456),
    [anon_sym_false] = ACTIONS(456),
    [anon_sym_maybe] = ACTIONS(456),
    [sym_null] = ACTIONS(456),
    [sym_builtin] = ACTIONS(456),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(458),
    [sym_shebang] = ACTIONS(458),
    [sym_comment] = ACTIONS(458),
    [aux_sym_label_token1] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(460),
    [anon_sym_LBRACK] = ACTIONS(458),
    [anon_sym_POUND_LBRACK] = ACTIONS(458),
    [anon_sym_BANG] = ACTIONS(460),
    [anon_sym_BANG_BANG] = ACTIONS(458),
    [anon_sym_TILDE] = ACTIONS(460),
    [anon_sym_BSLASH] = ACTIONS(458),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_POUND] = ACTIONS(460),
    [anon_sym_DOLLAR] = ACTIONS(458),
    [anon_sym_QMARK] = ACTIONS(458),
    [anon_sym_BQUOTE] = ACTIONS(460),
    [anon_sym_CARET] = ACTIONS(458),
    [anon_sym_STAR] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(458),
    [anon_sym_PERCENT] = ACTIONS(458),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(460),
    [anon_sym_EQ] = ACTIONS(460),
    [anon_sym_LT] = ACTIONS(458),
    [anon_sym_GT] = ACTIONS(458),
    [anon_sym_AMP] = ACTIONS(458),
    [anon_sym_PIPE] = ACTIONS(458),
    [anon_sym_DOT_DOT] = ACTIONS(460),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(458),
    [anon_sym_DASH_GT] = ACTIONS(458),
    [anon_sym_EQ_GT] = ACTIONS(458),
    [anon_sym_COLON_COLON] = ACTIONS(458),
    [anon_sym_SQUOTE] = ACTIONS(458),
    [anon_sym_DOT] = ACTIONS(460),
    [sym_version] = ACTIONS(460),
    [sym_number] = ACTIONS(460),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(458),
    [anon_sym_DQUOTE] = ACTIONS(458),
    [anon_sym_LBRACE] = ACTIONS(460),
    [anon_sym_LBRACE_COLON] = ACTIONS(458),
    [anon_sym_] = ACTIONS(458),
    [anon_sym_3] = ACTIONS(460),
    [sym_char] = ACTIONS(458),
    [anon_sym_true] = ACTIONS(460),
    [anon_sym_false] = ACTIONS(460),
    [anon_sym_maybe] = ACTIONS(460),
    [sym_null] = ACTIONS(460),
    [sym_builtin] = ACTIONS(460),
  },
  [58] = {
    [sym_shebang] = ACTIONS(462),
    [sym_comment] = ACTIONS(462),
    [aux_sym_label_token1] = ACTIONS(464),
    [anon_sym_COLON] = ACTIONS(464),
    [anon_sym_LBRACK] = ACTIONS(462),
    [anon_sym_RBRACK] = ACTIONS(462),
    [anon_sym_POUND_LBRACK] = ACTIONS(462),
    [anon_sym_BANG] = ACTIONS(464),
    [anon_sym_BANG_BANG] = ACTIONS(462),
    [anon_sym_TILDE] = ACTIONS(464),
    [anon_sym_BSLASH] = ACTIONS(462),
    [anon_sym_AT] = ACTIONS(462),
    [anon_sym_POUND] = ACTIONS(464),
    [anon_sym_DOLLAR] = ACTIONS(462),
    [anon_sym_QMARK] = ACTIONS(462),
    [anon_sym_BQUOTE] = ACTIONS(464),
    [anon_sym_CARET] = ACTIONS(462),
    [anon_sym_STAR] = ACTIONS(462),
    [anon_sym_SLASH] = ACTIONS(462),
    [anon_sym_PERCENT] = ACTIONS(462),
    [anon_sym_PLUS] = ACTIONS(462),
    [anon_sym_DASH] = ACTIONS(464),
    [anon_sym_EQ] = ACTIONS(464),
    [anon_sym_LT] = ACTIONS(462),
    [anon_sym_GT] = ACTIONS(462),
    [anon_sym_AMP] = ACTIONS(462),
    [anon_sym_PIPE] = ACTIONS(462),
    [anon_sym_DOT_DOT] = ACTIONS(464),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(462),
    [anon_sym_DASH_GT] = ACTIONS(462),
    [anon_sym_EQ_GT] = ACTIONS(462),
    [anon_sym_COLON_COLON] = ACTIONS(462),
    [anon_sym_SQUOTE] = ACTIONS(462),
    [anon_sym_DOT] = ACTIONS(464),
    [sym_version] = ACTIONS(464),
    [sym_number] = ACTIONS(464),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(462),
    [anon_sym_DQUOTE] = ACTIONS(462),
    [anon_sym_LBRACE] = ACTIONS(464),
    [anon_sym_LBRACE_COLON] = ACTIONS(462),
    [anon_sym_] = ACTIONS(462),
    [anon_sym_3] = ACTIONS(464),
    [sym_char] = ACTIONS(462),
    [anon_sym_true] = ACTIONS(464),
    [anon_sym_false] = ACTIONS(464),
    [anon_sym_maybe] = ACTIONS(464),
    [sym_null] = ACTIONS(464),
    [sym_builtin] = ACTIONS(464),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(462),
    [sym_shebang] = ACTIONS(462),
    [sym_comment] = ACTIONS(462),
    [aux_sym_label_token1] = ACTIONS(464),
    [anon_sym_COLON] = ACTIONS(464),
    [anon_sym_LBRACK] = ACTIONS(462),
    [anon_sym_POUND_LBRACK] = ACTIONS(462),
    [anon_sym_BANG] = ACTIONS(464),
    [anon_sym_BANG_BANG] = ACTIONS(462),
    [anon_sym_TILDE] = ACTIONS(464),
    [anon_sym_BSLASH] = ACTIONS(462),
    [anon_sym_AT] = ACTIONS(462),
    [anon_sym_POUND] = ACTIONS(464),
    [anon_sym_DOLLAR] = ACTIONS(462),
    [anon_sym_QMARK] = ACTIONS(462),
    [anon_sym_BQUOTE] = ACTIONS(464),
    [anon_sym_CARET] = ACTIONS(462),
    [anon_sym_STAR] = ACTIONS(462),
    [anon_sym_SLASH] = ACTIONS(462),
    [anon_sym_PERCENT] = ACTIONS(462),
    [anon_sym_PLUS] = ACTIONS(462),
    [anon_sym_DASH] = ACTIONS(464),
    [anon_sym_EQ] = ACTIONS(464),
    [anon_sym_LT] = ACTIONS(462),
    [anon_sym_GT] = ACTIONS(462),
    [anon_sym_AMP] = ACTIONS(462),
    [anon_sym_PIPE] = ACTIONS(462),
    [anon_sym_DOT_DOT] = ACTIONS(464),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(462),
    [anon_sym_DASH_GT] = ACTIONS(462),
    [anon_sym_EQ_GT] = ACTIONS(462),
    [anon_sym_COLON_COLON] = ACTIONS(462),
    [anon_sym_SQUOTE] = ACTIONS(462),
    [anon_sym_DOT] = ACTIONS(464),
    [sym_version] = ACTIONS(464),
    [sym_number] = ACTIONS(464),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(462),
    [anon_sym_DQUOTE] = ACTIONS(462),
    [anon_sym_LBRACE] = ACTIONS(464),
    [anon_sym_LBRACE_COLON] = ACTIONS(462),
    [anon_sym_] = ACTIONS(462),
    [anon_sym_3] = ACTIONS(464),
    [sym_char] = ACTIONS(462),
    [anon_sym_true] = ACTIONS(464),
    [anon_sym_false] = ACTIONS(464),
    [anon_sym_maybe] = ACTIONS(464),
    [sym_null] = ACTIONS(464),
    [sym_builtin] = ACTIONS(464),
  },
  [60] = {
    [sym_shebang] = ACTIONS(458),
    [sym_comment] = ACTIONS(458),
    [aux_sym_label_token1] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(460),
    [anon_sym_LBRACK] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(458),
    [anon_sym_POUND_LBRACK] = ACTIONS(458),
    [anon_sym_BANG] = ACTIONS(460),
    [anon_sym_BANG_BANG] = ACTIONS(458),
    [anon_sym_TILDE] = ACTIONS(460),
    [anon_sym_BSLASH] = ACTIONS(458),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_POUND] = ACTIONS(460),
    [anon_sym_DOLLAR] = ACTIONS(458),
    [anon_sym_QMARK] = ACTIONS(458),
    [anon_sym_BQUOTE] = ACTIONS(460),
    [anon_sym_CARET] = ACTIONS(458),
    [anon_sym_STAR] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(458),
    [anon_sym_PERCENT] = ACTIONS(458),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(460),
    [anon_sym_EQ] = ACTIONS(460),
    [anon_sym_LT] = ACTIONS(458),
    [anon_sym_GT] = ACTIONS(458),
    [anon_sym_AMP] = ACTIONS(458),
    [anon_sym_PIPE] = ACTIONS(458),
    [anon_sym_DOT_DOT] = ACTIONS(460),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(458),
    [anon_sym_DASH_GT] = ACTIONS(458),
    [anon_sym_EQ_GT] = ACTIONS(458),
    [anon_sym_COLON_COLON] = ACTIONS(458),
    [anon_sym_SQUOTE] = ACTIONS(458),
    [anon_sym_DOT] = ACTIONS(460),
    [sym_version] = ACTIONS(460),
    [sym_number] = ACTIONS(460),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(458),
    [anon_sym_DQUOTE] = ACTIONS(458),
    [anon_sym_LBRACE] = ACTIONS(460),
    [anon_sym_LBRACE_COLON] = ACTIONS(458),
    [anon_sym_] = ACTIONS(458),
    [anon_sym_3] = ACTIONS(460),
    [sym_char] = ACTIONS(458),
    [anon_sym_true] = ACTIONS(460),
    [anon_sym_false] = ACTIONS(460),
    [anon_sym_maybe] = ACTIONS(460),
    [sym_null] = ACTIONS(460),
    [sym_builtin] = ACTIONS(460),
  },
  [61] = {
    [sym_block] = STATE(13),
    [sym_dictionary] = STATE(13),
    [sym__expression] = STATE(13),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_literal] = STATE(13),
    [sym_type_annotation] = STATE(13),
    [sym_attribute] = STATE(13),
    [sym_color] = STATE(13),
    [sym_unit] = STATE(13),
    [sym_interpolated_string] = STATE(13),
    [sym_string] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_identifier] = STATE(13),
    [aux_sym_function_call_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(466),
    [sym_shebang] = ACTIONS(466),
    [sym_comment] = ACTIONS(466),
    [aux_sym_label_token1] = ACTIONS(468),
    [anon_sym_COLON] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(474),
    [anon_sym_POUND_LBRACK] = ACTIONS(477),
    [anon_sym_BANG] = ACTIONS(480),
    [anon_sym_BANG_BANG] = ACTIONS(483),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_BSLASH] = ACTIONS(483),
    [anon_sym_AT] = ACTIONS(483),
    [anon_sym_POUND] = ACTIONS(486),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_QMARK] = ACTIONS(483),
    [anon_sym_BQUOTE] = ACTIONS(489),
    [anon_sym_SQUOTE] = ACTIONS(492),
    [anon_sym_DOT] = ACTIONS(495),
    [sym_version] = ACTIONS(498),
    [sym_number] = ACTIONS(498),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(501),
    [anon_sym_DQUOTE] = ACTIONS(504),
    [anon_sym_LBRACE] = ACTIONS(507),
    [anon_sym_LBRACE_COLON] = ACTIONS(510),
    [anon_sym_] = ACTIONS(513),
    [anon_sym_3] = ACTIONS(516),
    [sym_char] = ACTIONS(519),
    [anon_sym_true] = ACTIONS(522),
    [anon_sym_false] = ACTIONS(522),
    [anon_sym_maybe] = ACTIONS(522),
    [sym_null] = ACTIONS(498),
    [sym_builtin] = ACTIONS(498),
  },
  [62] = {
    [sym_block] = STATE(16),
    [sym_dictionary] = STATE(16),
    [sym__expression] = STATE(16),
    [sym_unary_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_literal] = STATE(16),
    [sym_type_annotation] = STATE(16),
    [sym_attribute] = STATE(16),
    [sym_color] = STATE(16),
    [sym_unit] = STATE(16),
    [sym_interpolated_string] = STATE(16),
    [sym_string] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym_identifier] = STATE(16),
    [aux_sym_function_call_repeat1] = STATE(64),
    [sym_shebang] = ACTIONS(525),
    [sym_comment] = ACTIONS(525),
    [aux_sym_label_token1] = ACTIONS(527),
    [anon_sym_COLON] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(525),
    [anon_sym_RBRACK] = ACTIONS(525),
    [anon_sym_POUND_LBRACK] = ACTIONS(525),
    [anon_sym_BANG] = ACTIONS(527),
    [anon_sym_BANG_BANG] = ACTIONS(525),
    [anon_sym_TILDE] = ACTIONS(527),
    [anon_sym_BSLASH] = ACTIONS(525),
    [anon_sym_AT] = ACTIONS(525),
    [anon_sym_POUND] = ACTIONS(527),
    [anon_sym_DOLLAR] = ACTIONS(525),
    [anon_sym_QMARK] = ACTIONS(525),
    [anon_sym_BQUOTE] = ACTIONS(527),
    [anon_sym_SQUOTE] = ACTIONS(525),
    [anon_sym_DOT] = ACTIONS(525),
    [sym_version] = ACTIONS(527),
    [sym_number] = ACTIONS(527),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(525),
    [anon_sym_DQUOTE] = ACTIONS(525),
    [anon_sym_LBRACE] = ACTIONS(527),
    [anon_sym_LBRACE_COLON] = ACTIONS(525),
    [anon_sym_] = ACTIONS(525),
    [anon_sym_3] = ACTIONS(527),
    [sym_char] = ACTIONS(525),
    [anon_sym_true] = ACTIONS(527),
    [anon_sym_false] = ACTIONS(527),
    [anon_sym_maybe] = ACTIONS(527),
    [sym_null] = ACTIONS(527),
    [sym_builtin] = ACTIONS(527),
  },
  [63] = {
    [sym_block] = STATE(13),
    [sym_dictionary] = STATE(13),
    [sym__expression] = STATE(13),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_literal] = STATE(13),
    [sym_type_annotation] = STATE(13),
    [sym_attribute] = STATE(13),
    [sym_color] = STATE(13),
    [sym_unit] = STATE(13),
    [sym_interpolated_string] = STATE(13),
    [sym_string] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_identifier] = STATE(13),
    [aux_sym_function_call_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(525),
    [sym_shebang] = ACTIONS(525),
    [sym_comment] = ACTIONS(525),
    [aux_sym_label_token1] = ACTIONS(527),
    [anon_sym_COLON] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(525),
    [anon_sym_POUND_LBRACK] = ACTIONS(525),
    [anon_sym_BANG] = ACTIONS(527),
    [anon_sym_BANG_BANG] = ACTIONS(525),
    [anon_sym_TILDE] = ACTIONS(527),
    [anon_sym_BSLASH] = ACTIONS(525),
    [anon_sym_AT] = ACTIONS(525),
    [anon_sym_POUND] = ACTIONS(527),
    [anon_sym_DOLLAR] = ACTIONS(525),
    [anon_sym_QMARK] = ACTIONS(525),
    [anon_sym_BQUOTE] = ACTIONS(527),
    [anon_sym_SQUOTE] = ACTIONS(525),
    [anon_sym_DOT] = ACTIONS(525),
    [sym_version] = ACTIONS(527),
    [sym_number] = ACTIONS(527),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(525),
    [anon_sym_DQUOTE] = ACTIONS(525),
    [anon_sym_LBRACE] = ACTIONS(527),
    [anon_sym_LBRACE_COLON] = ACTIONS(525),
    [anon_sym_] = ACTIONS(525),
    [anon_sym_3] = ACTIONS(527),
    [sym_char] = ACTIONS(525),
    [anon_sym_true] = ACTIONS(527),
    [anon_sym_false] = ACTIONS(527),
    [anon_sym_maybe] = ACTIONS(527),
    [sym_null] = ACTIONS(527),
    [sym_builtin] = ACTIONS(527),
  },
  [64] = {
    [sym_block] = STATE(16),
    [sym_dictionary] = STATE(16),
    [sym__expression] = STATE(16),
    [sym_unary_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_literal] = STATE(16),
    [sym_type_annotation] = STATE(16),
    [sym_attribute] = STATE(16),
    [sym_color] = STATE(16),
    [sym_unit] = STATE(16),
    [sym_interpolated_string] = STATE(16),
    [sym_string] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym_identifier] = STATE(16),
    [aux_sym_function_call_repeat1] = STATE(64),
    [sym_shebang] = ACTIONS(466),
    [sym_comment] = ACTIONS(466),
    [aux_sym_label_token1] = ACTIONS(529),
    [anon_sym_COLON] = ACTIONS(532),
    [anon_sym_LBRACK] = ACTIONS(535),
    [anon_sym_RBRACK] = ACTIONS(466),
    [anon_sym_POUND_LBRACK] = ACTIONS(538),
    [anon_sym_BANG] = ACTIONS(541),
    [anon_sym_BANG_BANG] = ACTIONS(544),
    [anon_sym_TILDE] = ACTIONS(541),
    [anon_sym_BSLASH] = ACTIONS(544),
    [anon_sym_AT] = ACTIONS(544),
    [anon_sym_POUND] = ACTIONS(547),
    [anon_sym_DOLLAR] = ACTIONS(544),
    [anon_sym_QMARK] = ACTIONS(544),
    [anon_sym_BQUOTE] = ACTIONS(550),
    [anon_sym_SQUOTE] = ACTIONS(553),
    [anon_sym_DOT] = ACTIONS(556),
    [sym_version] = ACTIONS(559),
    [sym_number] = ACTIONS(559),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(562),
    [anon_sym_DQUOTE] = ACTIONS(565),
    [anon_sym_LBRACE] = ACTIONS(568),
    [anon_sym_LBRACE_COLON] = ACTIONS(571),
    [anon_sym_] = ACTIONS(574),
    [anon_sym_3] = ACTIONS(577),
    [sym_char] = ACTIONS(580),
    [anon_sym_true] = ACTIONS(583),
    [anon_sym_false] = ACTIONS(583),
    [anon_sym_maybe] = ACTIONS(583),
    [sym_null] = ACTIONS(559),
    [sym_builtin] = ACTIONS(559),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      aux_sym_label_token1,
    ACTIONS(588), 1,
      anon_sym_COLON,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(592), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(598), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      anon_sym_BQUOTE,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    ACTIONS(604), 1,
      anon_sym_DOT,
    ACTIONS(606), 1,
      aux_sym_unit_token1,
    ACTIONS(610), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(618), 1,
      anon_sym_,
    ACTIONS(620), 1,
      anon_sym_3,
    ACTIONS(622), 1,
      sym_char,
    ACTIONS(594), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(624), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(608), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(596), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(109), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [90] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_3,
    ACTIONS(626), 1,
      aux_sym_label_token1,
    ACTIONS(628), 1,
      aux_sym_color_token1,
    ACTIONS(632), 1,
      sym_char,
    ACTIONS(17), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(45), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(630), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(19), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(31), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [180] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_3,
    ACTIONS(626), 1,
      aux_sym_label_token1,
    ACTIONS(632), 1,
      sym_char,
    ACTIONS(634), 1,
      aux_sym_unit_token1,
    ACTIONS(17), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(45), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(630), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(19), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(31), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [270] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      aux_sym_label_token1,
    ACTIONS(588), 1,
      anon_sym_COLON,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(592), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(598), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      anon_sym_BQUOTE,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    ACTIONS(604), 1,
      anon_sym_DOT,
    ACTIONS(610), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(618), 1,
      anon_sym_,
    ACTIONS(620), 1,
      anon_sym_3,
    ACTIONS(622), 1,
      sym_char,
    ACTIONS(636), 1,
      aux_sym_color_token1,
    ACTIONS(594), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(624), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(608), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(596), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(109), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [360] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_BQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(201), 1,
      anon_sym_,
    ACTIONS(203), 1,
      anon_sym_3,
    ACTIONS(638), 1,
      aux_sym_label_token1,
    ACTIONS(640), 1,
      aux_sym_unit_token1,
    ACTIONS(644), 1,
      sym_char,
    ACTIONS(179), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(207), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(642), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(181), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(28), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [450] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_BQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(201), 1,
      anon_sym_,
    ACTIONS(203), 1,
      anon_sym_3,
    ACTIONS(638), 1,
      aux_sym_label_token1,
    ACTIONS(644), 1,
      sym_char,
    ACTIONS(646), 1,
      aux_sym_color_token1,
    ACTIONS(179), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(207), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(642), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(181), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(28), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [540] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_COLON,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(592), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(598), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      anon_sym_BQUOTE,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    ACTIONS(604), 1,
      anon_sym_DOT,
    ACTIONS(610), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(618), 1,
      anon_sym_,
    ACTIONS(620), 1,
      anon_sym_3,
    ACTIONS(648), 1,
      aux_sym_label_token1,
    ACTIONS(651), 1,
      anon_sym_RBRACK,
    ACTIONS(655), 1,
      sym_char,
    ACTIONS(594), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(624), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(653), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(596), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(101), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [630] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      aux_sym_label_token1,
    ACTIONS(588), 1,
      anon_sym_COLON,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(592), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(598), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      anon_sym_BQUOTE,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    ACTIONS(604), 1,
      anon_sym_DOT,
    ACTIONS(610), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(618), 1,
      anon_sym_,
    ACTIONS(620), 1,
      anon_sym_3,
    ACTIONS(659), 1,
      sym_char,
    ACTIONS(594), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(624), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(657), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(596), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(95), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [717] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_BQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(201), 1,
      anon_sym_,
    ACTIONS(203), 1,
      anon_sym_3,
    ACTIONS(638), 1,
      aux_sym_label_token1,
    ACTIONS(663), 1,
      sym_char,
    ACTIONS(179), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(207), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(661), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(181), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(43), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [804] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_BQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(201), 1,
      anon_sym_,
    ACTIONS(203), 1,
      anon_sym_3,
    ACTIONS(638), 1,
      aux_sym_label_token1,
    ACTIONS(667), 1,
      sym_char,
    ACTIONS(179), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(207), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(665), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(181), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(15), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [891] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      aux_sym_label_token1,
    ACTIONS(588), 1,
      anon_sym_COLON,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(592), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(598), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      anon_sym_BQUOTE,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    ACTIONS(604), 1,
      anon_sym_DOT,
    ACTIONS(610), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(618), 1,
      anon_sym_,
    ACTIONS(620), 1,
      anon_sym_3,
    ACTIONS(671), 1,
      sym_char,
    ACTIONS(594), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(624), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(669), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(596), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(94), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [978] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      aux_sym_label_token1,
    ACTIONS(588), 1,
      anon_sym_COLON,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(592), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(598), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      anon_sym_BQUOTE,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    ACTIONS(604), 1,
      anon_sym_DOT,
    ACTIONS(610), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(618), 1,
      anon_sym_,
    ACTIONS(620), 1,
      anon_sym_3,
    ACTIONS(675), 1,
      sym_char,
    ACTIONS(594), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(624), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(673), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(596), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(91), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [1065] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      aux_sym_label_token1,
    ACTIONS(588), 1,
      anon_sym_COLON,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(592), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(598), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      anon_sym_BQUOTE,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    ACTIONS(604), 1,
      anon_sym_DOT,
    ACTIONS(610), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(618), 1,
      anon_sym_,
    ACTIONS(620), 1,
      anon_sym_3,
    ACTIONS(679), 1,
      sym_char,
    ACTIONS(594), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(624), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(677), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(596), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(93), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [1152] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_3,
    ACTIONS(626), 1,
      aux_sym_label_token1,
    ACTIONS(632), 1,
      sym_char,
    ACTIONS(17), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(45), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(630), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(19), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(31), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [1239] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_3,
    ACTIONS(626), 1,
      aux_sym_label_token1,
    ACTIONS(683), 1,
      sym_char,
    ACTIONS(17), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(45), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(681), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(19), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(46), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [1326] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_BQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(201), 1,
      anon_sym_,
    ACTIONS(203), 1,
      anon_sym_3,
    ACTIONS(638), 1,
      aux_sym_label_token1,
    ACTIONS(644), 1,
      sym_char,
    ACTIONS(179), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(207), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(642), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(181), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(28), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [1413] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_BQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(201), 1,
      anon_sym_,
    ACTIONS(203), 1,
      anon_sym_3,
    ACTIONS(638), 1,
      aux_sym_label_token1,
    ACTIONS(687), 1,
      sym_char,
    ACTIONS(179), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(207), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(685), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(181), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(42), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [1500] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_3,
    ACTIONS(626), 1,
      aux_sym_label_token1,
    ACTIONS(691), 1,
      sym_char,
    ACTIONS(17), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(45), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(689), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(19), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(50), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [1587] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      aux_sym_label_token1,
    ACTIONS(588), 1,
      anon_sym_COLON,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(592), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(598), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      anon_sym_BQUOTE,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    ACTIONS(604), 1,
      anon_sym_DOT,
    ACTIONS(610), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(618), 1,
      anon_sym_,
    ACTIONS(620), 1,
      anon_sym_3,
    ACTIONS(622), 1,
      sym_char,
    ACTIONS(594), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(624), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(608), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(596), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(109), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [1674] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_3,
    ACTIONS(626), 1,
      aux_sym_label_token1,
    ACTIONS(695), 1,
      sym_char,
    ACTIONS(17), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(45), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(693), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(19), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(49), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [1761] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_3,
    ACTIONS(626), 1,
      aux_sym_label_token1,
    ACTIONS(699), 1,
      sym_char,
    ACTIONS(17), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(45), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(697), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(19), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(48), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [1848] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_3,
    ACTIONS(626), 1,
      aux_sym_label_token1,
    ACTIONS(703), 1,
      sym_char,
    ACTIONS(17), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(45), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(701), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(19), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(47), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [1935] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_BQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(201), 1,
      anon_sym_,
    ACTIONS(203), 1,
      anon_sym_3,
    ACTIONS(638), 1,
      aux_sym_label_token1,
    ACTIONS(707), 1,
      sym_char,
    ACTIONS(179), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(207), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(705), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(181), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(55), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [2022] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_BQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(201), 1,
      anon_sym_,
    ACTIONS(203), 1,
      anon_sym_3,
    ACTIONS(638), 1,
      aux_sym_label_token1,
    ACTIONS(711), 1,
      sym_char,
    ACTIONS(179), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(207), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(709), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(181), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(53), 14,
      sym_block,
      sym_dictionary,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
      sym_type_annotation,
      sym_attribute,
      sym_color,
      sym_unit,
      sym_interpolated_string,
      sym_string,
      sym_boolean,
      sym_identifier,
  [2109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_COLON,
    ACTIONS(445), 14,
      aux_sym_label_token1,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_POUND,
      anon_sym_BQUOTE,
      sym_version,
      sym_number,
      anon_sym_LBRACE,
      anon_sym_3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
      sym_null,
      sym_builtin,
    ACTIONS(443), 15,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_TILDE_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_COLON,
      anon_sym_,
      sym_char,
  [2149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 14,
      aux_sym_label_token1,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_POUND,
      anon_sym_BQUOTE,
      sym_version,
      sym_number,
      anon_sym_LBRACE,
      anon_sym_3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
      sym_null,
      sym_builtin,
    ACTIONS(718), 16,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_TILDE_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_COLON,
      anon_sym_,
      sym_char,
  [2187] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_CARET,
    ACTIONS(449), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(722), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(447), 11,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(458), 15,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2243] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_CARET,
    ACTIONS(724), 1,
      anon_sym_PLUS,
    ACTIONS(726), 1,
      anon_sym_DASH,
    ACTIONS(449), 2,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(722), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(447), 10,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_CARET,
    ACTIONS(449), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(447), 14,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_CARET,
    ACTIONS(449), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(447), 14,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(462), 15,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(454), 15,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(375), 15,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(395), 15,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(399), 15,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2463] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_CARET,
    ACTIONS(724), 1,
      anon_sym_PLUS,
    ACTIONS(726), 1,
      anon_sym_DASH,
    ACTIONS(728), 2,
      aux_sym_label_token1,
      anon_sym_RBRACK,
    ACTIONS(730), 2,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(722), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(732), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(403), 15,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(407), 15,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(411), 15,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(427), 15,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(431), 15,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(435), 15,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(443), 15,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(439), 15,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(423), 15,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(415), 15,
      aux_sym_label_token1,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2759] = 5,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_PIPE,
    ACTIONS(740), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(114), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2777] = 5,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(118), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2795] = 5,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_PIPE,
    ACTIONS(748), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(115), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2813] = 5,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_PIPE,
    ACTIONS(756), 1,
      anon_sym_DQUOTE,
    ACTIONS(753), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(115), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2831] = 5,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_PIPE,
    ACTIONS(760), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(117), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2849] = 5,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_PIPE,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(115), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2867] = 5,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_PIPE,
    ACTIONS(764), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(115), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2885] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_label_token1,
    ACTIONS(768), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      aux_sym_dictionary_repeat1,
    STATE(71), 2,
      sym_label,
      sym_identifier,
  [2902] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_label_token1,
    ACTIONS(770), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_dictionary_repeat1,
    STATE(71), 2,
      sym_label,
      sym_identifier,
  [2919] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_label_token1,
    ACTIONS(775), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_dictionary_repeat1,
    STATE(71), 2,
      sym_label,
      sym_identifier,
  [2936] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_label_token1,
    ACTIONS(777), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      aux_sym_dictionary_repeat1,
    STATE(71), 2,
      sym_label,
      sym_identifier,
  [2953] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_label_token1,
    ACTIONS(779), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_dictionary_repeat1,
    STATE(71), 2,
      sym_label,
      sym_identifier,
  [2970] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_label_token1,
    ACTIONS(781), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_dictionary_repeat1,
    STATE(71), 2,
      sym_label,
      sym_identifier,
  [2987] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_label_token1,
    ACTIONS(783), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_dictionary_repeat1,
    STATE(71), 2,
      sym_label,
      sym_identifier,
  [3004] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_string_repeat1,
    ACTIONS(785), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [3018] = 2,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(789), 4,
      anon_sym_PIPE,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
      anon_sym_DQUOTE,
  [3028] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      aux_sym_string_repeat1,
    ACTIONS(791), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [3042] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_string_repeat1,
    ACTIONS(785), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [3056] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_string_repeat1,
    ACTIONS(785), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [3070] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      aux_sym_string_repeat1,
    ACTIONS(799), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [3084] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
      aux_sym_string_repeat1,
    ACTIONS(803), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [3098] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_string_repeat1,
    ACTIONS(807), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [3112] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_2,
    ACTIONS(812), 1,
      aux_sym_string_token4,
    STATE(145), 1,
      aux_sym_string_repeat4,
  [3125] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
    ACTIONS(814), 1,
      aux_sym_string_token2,
    STATE(144), 1,
      aux_sym_string_repeat2,
  [3138] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_2,
    ACTIONS(812), 1,
      aux_sym_string_token4,
    STATE(145), 1,
      aux_sym_string_repeat4,
  [3151] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_2,
    ACTIONS(816), 1,
      aux_sym_string_token4,
    STATE(150), 1,
      aux_sym_string_repeat4,
  [3164] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
    ACTIONS(818), 1,
      aux_sym_string_token2,
    STATE(146), 1,
      aux_sym_string_repeat2,
  [3177] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(820), 1,
      aux_sym_string_token3,
    STATE(147), 1,
      aux_sym_string_repeat3,
  [3190] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_2,
    ACTIONS(822), 1,
      aux_sym_string_token4,
    STATE(134), 1,
      aux_sym_string_repeat4,
  [3203] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(824), 1,
      aux_sym_string_token3,
    STATE(148), 1,
      aux_sym_string_repeat3,
  [3216] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    ACTIONS(826), 1,
      aux_sym_string_token2,
    STATE(154), 1,
      aux_sym_string_repeat2,
  [3229] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(828), 1,
      aux_sym_string_token3,
    STATE(153), 1,
      aux_sym_string_repeat3,
  [3242] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    ACTIONS(830), 1,
      aux_sym_string_token2,
    STATE(149), 1,
      aux_sym_string_repeat2,
  [3255] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(832), 1,
      aux_sym_string_token4,
    ACTIONS(835), 1,
      anon_sym_2,
    STATE(145), 1,
      aux_sym_string_repeat4,
  [3268] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_RBRACE,
    ACTIONS(830), 1,
      aux_sym_string_token2,
    STATE(149), 1,
      aux_sym_string_repeat2,
  [3281] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(824), 1,
      aux_sym_string_token3,
    STATE(148), 1,
      aux_sym_string_repeat3,
  [3294] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym_string_token3,
    ACTIONS(840), 1,
      anon_sym_COLON_RBRACE,
    STATE(148), 1,
      aux_sym_string_repeat3,
  [3307] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(842), 1,
      aux_sym_string_token2,
    ACTIONS(845), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      aux_sym_string_repeat2,
  [3320] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_2,
    ACTIONS(812), 1,
      aux_sym_string_token4,
    STATE(145), 1,
      aux_sym_string_repeat4,
  [3333] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_2,
    ACTIONS(847), 1,
      aux_sym_string_token4,
    STATE(136), 1,
      aux_sym_string_repeat4,
  [3346] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(849), 1,
      aux_sym_string_token3,
    STATE(141), 1,
      aux_sym_string_repeat3,
  [3359] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(824), 1,
      aux_sym_string_token3,
    STATE(148), 1,
      aux_sym_string_repeat3,
  [3372] = 4,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_RBRACE,
    ACTIONS(830), 1,
      aux_sym_string_token2,
    STATE(149), 1,
      aux_sym_string_repeat2,
  [3385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      aux_sym_literal_token1,
  [3392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      aux_sym_literal_token1,
  [3399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      aux_sym_literal_token1,
  [3406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      aux_sym_literal_token1,
  [3413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      aux_sym_literal_token1,
  [3420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      aux_sym_label_token1,
  [3427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      aux_sym_type_annotation_token1,
  [3434] = 2,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(801), 1,
      aux_sym_string_token5,
  [3441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      ts_builtin_sym_end,
  [3448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_PIPE,
  [3455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      aux_sym_type_annotation_token1,
  [3462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      aux_sym_type_annotation_token1,
  [3469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      aux_sym_literal_token1,
  [3476] = 2,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(805), 1,
      aux_sym_string_token5,
  [3483] = 2,
    ACTIONS(734), 1,
      sym_comment,
    ACTIONS(793), 1,
      aux_sym_string_token5,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(65)] = 0,
  [SMALL_STATE(66)] = 90,
  [SMALL_STATE(67)] = 180,
  [SMALL_STATE(68)] = 270,
  [SMALL_STATE(69)] = 360,
  [SMALL_STATE(70)] = 450,
  [SMALL_STATE(71)] = 540,
  [SMALL_STATE(72)] = 630,
  [SMALL_STATE(73)] = 717,
  [SMALL_STATE(74)] = 804,
  [SMALL_STATE(75)] = 891,
  [SMALL_STATE(76)] = 978,
  [SMALL_STATE(77)] = 1065,
  [SMALL_STATE(78)] = 1152,
  [SMALL_STATE(79)] = 1239,
  [SMALL_STATE(80)] = 1326,
  [SMALL_STATE(81)] = 1413,
  [SMALL_STATE(82)] = 1500,
  [SMALL_STATE(83)] = 1587,
  [SMALL_STATE(84)] = 1674,
  [SMALL_STATE(85)] = 1761,
  [SMALL_STATE(86)] = 1848,
  [SMALL_STATE(87)] = 1935,
  [SMALL_STATE(88)] = 2022,
  [SMALL_STATE(89)] = 2109,
  [SMALL_STATE(90)] = 2149,
  [SMALL_STATE(91)] = 2187,
  [SMALL_STATE(92)] = 2217,
  [SMALL_STATE(93)] = 2243,
  [SMALL_STATE(94)] = 2277,
  [SMALL_STATE(95)] = 2305,
  [SMALL_STATE(96)] = 2333,
  [SMALL_STATE(97)] = 2359,
  [SMALL_STATE(98)] = 2385,
  [SMALL_STATE(99)] = 2411,
  [SMALL_STATE(100)] = 2437,
  [SMALL_STATE(101)] = 2463,
  [SMALL_STATE(102)] = 2499,
  [SMALL_STATE(103)] = 2525,
  [SMALL_STATE(104)] = 2551,
  [SMALL_STATE(105)] = 2577,
  [SMALL_STATE(106)] = 2603,
  [SMALL_STATE(107)] = 2629,
  [SMALL_STATE(108)] = 2655,
  [SMALL_STATE(109)] = 2681,
  [SMALL_STATE(110)] = 2707,
  [SMALL_STATE(111)] = 2733,
  [SMALL_STATE(112)] = 2759,
  [SMALL_STATE(113)] = 2777,
  [SMALL_STATE(114)] = 2795,
  [SMALL_STATE(115)] = 2813,
  [SMALL_STATE(116)] = 2831,
  [SMALL_STATE(117)] = 2849,
  [SMALL_STATE(118)] = 2867,
  [SMALL_STATE(119)] = 2885,
  [SMALL_STATE(120)] = 2902,
  [SMALL_STATE(121)] = 2919,
  [SMALL_STATE(122)] = 2936,
  [SMALL_STATE(123)] = 2953,
  [SMALL_STATE(124)] = 2970,
  [SMALL_STATE(125)] = 2987,
  [SMALL_STATE(126)] = 3004,
  [SMALL_STATE(127)] = 3018,
  [SMALL_STATE(128)] = 3028,
  [SMALL_STATE(129)] = 3042,
  [SMALL_STATE(130)] = 3056,
  [SMALL_STATE(131)] = 3070,
  [SMALL_STATE(132)] = 3084,
  [SMALL_STATE(133)] = 3098,
  [SMALL_STATE(134)] = 3112,
  [SMALL_STATE(135)] = 3125,
  [SMALL_STATE(136)] = 3138,
  [SMALL_STATE(137)] = 3151,
  [SMALL_STATE(138)] = 3164,
  [SMALL_STATE(139)] = 3177,
  [SMALL_STATE(140)] = 3190,
  [SMALL_STATE(141)] = 3203,
  [SMALL_STATE(142)] = 3216,
  [SMALL_STATE(143)] = 3229,
  [SMALL_STATE(144)] = 3242,
  [SMALL_STATE(145)] = 3255,
  [SMALL_STATE(146)] = 3268,
  [SMALL_STATE(147)] = 3281,
  [SMALL_STATE(148)] = 3294,
  [SMALL_STATE(149)] = 3307,
  [SMALL_STATE(150)] = 3320,
  [SMALL_STATE(151)] = 3333,
  [SMALL_STATE(152)] = 3346,
  [SMALL_STATE(153)] = 3359,
  [SMALL_STATE(154)] = 3372,
  [SMALL_STATE(155)] = 3385,
  [SMALL_STATE(156)] = 3392,
  [SMALL_STATE(157)] = 3399,
  [SMALL_STATE(158)] = 3406,
  [SMALL_STATE(159)] = 3413,
  [SMALL_STATE(160)] = 3420,
  [SMALL_STATE(161)] = 3427,
  [SMALL_STATE(162)] = 3434,
  [SMALL_STATE(163)] = 3441,
  [SMALL_STATE(164)] = 3448,
  [SMALL_STATE(165)] = 3455,
  [SMALL_STATE(166)] = 3462,
  [SMALL_STATE(167)] = 3469,
  [SMALL_STATE(168)] = 3476,
  [SMALL_STATE(169)] = 3483,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(30),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(166),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(5),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(122),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(78),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(78),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(66),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(67),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(157),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(158),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(13),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(112),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(128),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(142),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(143),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(137),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(169),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(13),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(21),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(29),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(161),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(9),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(119),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(80),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(80),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(70),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(69),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(167),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(159),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(16),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(116),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(132),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(138),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(139),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(140),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(168),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(16),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(44),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2, .production_id = 5),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 2, .production_id = 5),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_annotation, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 1), SHIFT(90),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, .production_id = 7),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3, .production_id = 7),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(30),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(166),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(5),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(122),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(78),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(78),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(66),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(67),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(157),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(158),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(13),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(112),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(128),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(142),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(143),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(137),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(169),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(13),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(21),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .dynamic_precedence = 1, .production_id = 4),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .dynamic_precedence = 1, .production_id = 4),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(29),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(161),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(9),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(119),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(80),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(80),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(70),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(69),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(167),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(159),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(16),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(116),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(132),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(138),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(139),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(140),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(168),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(16),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(44),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [648] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 1, .production_id = 2), SHIFT_REPEAT(108),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 1, .production_id = 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1), SHIFT(90),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, .production_id = 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, .production_id = 6),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(160),
  [753] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(115),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, .production_id = 8), SHIFT_REPEAT(89),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, .production_id = 8),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [807] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(133),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat4, 2), SHIFT_REPEAT(145),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat4, 2),
  [837] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(148),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2),
  [842] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(149),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [865] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
