#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 167
#define LARGE_STATE_COUNT 64
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
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
  anon_sym_BANG = 7,
  anon_sym_BANG_BANG = 8,
  anon_sym_TILDE = 9,
  anon_sym_BSLASH = 10,
  anon_sym_AT = 11,
  anon_sym_POUND = 12,
  anon_sym_DOLLAR = 13,
  anon_sym_QMARK = 14,
  anon_sym_BQUOTE = 15,
  anon_sym_CARET = 16,
  anon_sym_STAR = 17,
  anon_sym_SLASH = 18,
  anon_sym_PERCENT = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_EQ = 22,
  anon_sym_LT = 23,
  anon_sym_GT = 24,
  anon_sym_AMP = 25,
  anon_sym_PIPE = 26,
  anon_sym_DOT_DOT = 27,
  anon_sym_DOT_DOT_DOT = 28,
  anon_sym_DASH_GT = 29,
  anon_sym_EQ_GT = 30,
  anon_sym_COLON_COLON = 31,
  anon_sym_SQUOTE = 32,
  aux_sym_literal_token1 = 33,
  anon_sym_COLON = 34,
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
  aux_sym_interpolation_token1 = 45,
  aux_sym_string_token1 = 46,
  anon_sym_LBRACE = 47,
  aux_sym_string_token2 = 48,
  anon_sym_RBRACE = 49,
  anon_sym_LBRACE_COLON = 50,
  aux_sym_string_token3 = 51,
  anon_sym_COLON_RBRACE = 52,
  anon_sym_ = 53,
  aux_sym_string_token4 = 54,
  anon_sym_2 = 55,
  anon_sym_3 = 56,
  aux_sym_string_token5 = 57,
  sym_char = 58,
  anon_sym_true = 59,
  anon_sym_false = 60,
  anon_sym_maybe = 61,
  sym_null = 62,
  sym_builtin = 63,
  sym_source_file = 64,
  sym__statement = 65,
  sym_assignment = 66,
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
  [sym_label] = "label",
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
  [sym_label] = sym_label,
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
  [8] = 7,
  [9] = 6,
  [10] = 5,
  [11] = 5,
  [12] = 6,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
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
  [30] = 27,
  [31] = 23,
  [32] = 21,
  [33] = 20,
  [34] = 19,
  [35] = 29,
  [36] = 17,
  [37] = 28,
  [38] = 16,
  [39] = 26,
  [40] = 25,
  [41] = 24,
  [42] = 42,
  [43] = 15,
  [44] = 22,
  [45] = 18,
  [46] = 42,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 49,
  [51] = 51,
  [52] = 51,
  [53] = 47,
  [54] = 48,
  [55] = 55,
  [56] = 55,
  [57] = 57,
  [58] = 57,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 59,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 64,
  [68] = 66,
  [69] = 66,
  [70] = 70,
  [71] = 71,
  [72] = 70,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 75,
  [77] = 77,
  [78] = 77,
  [79] = 71,
  [80] = 77,
  [81] = 74,
  [82] = 73,
  [83] = 74,
  [84] = 71,
  [85] = 70,
  [86] = 73,
  [87] = 18,
  [88] = 42,
  [89] = 20,
  [90] = 55,
  [91] = 13,
  [92] = 51,
  [93] = 49,
  [94] = 47,
  [95] = 16,
  [96] = 48,
  [97] = 18,
  [98] = 98,
  [99] = 17,
  [100] = 22,
  [101] = 26,
  [102] = 28,
  [103] = 29,
  [104] = 27,
  [105] = 23,
  [106] = 21,
  [107] = 57,
  [108] = 19,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 109,
  [113] = 111,
  [114] = 111,
  [115] = 109,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 118,
  [120] = 117,
  [121] = 117,
  [122] = 118,
  [123] = 123,
  [124] = 123,
  [125] = 125,
  [126] = 126,
  [127] = 123,
  [128] = 128,
  [129] = 125,
  [130] = 125,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 131,
  [135] = 135,
  [136] = 132,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 132,
  [141] = 135,
  [142] = 131,
  [143] = 135,
  [144] = 144,
  [145] = 133,
  [146] = 133,
  [147] = 138,
  [148] = 137,
  [149] = 137,
  [150] = 138,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 152,
  [156] = 153,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 154,
  [161] = 161,
  [162] = 159,
  [163] = 159,
  [164] = 153,
  [165] = 152,
  [166] = 154,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '&') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '^') ADVANCE(54);
      if (lookahead == '`') ADVANCE(53);
      if (lookahead == 'b') ADVANCE(172);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == 'w') ADVANCE(168);
      if (lookahead == 'y') ADVANCE(165);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '~') ADVANCE(46);
      if (lookahead == 171) ADVANCE(227);
      if (lookahead == 187) ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('G' <= lookahead && lookahead <= '_')) ADVANCE(212);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '`') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '~') ADVANCE(46);
      if (lookahead == 171) ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(145);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '`') ADVANCE(53);
      if (lookahead == 'b') ADVANCE(172);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == 'w') ADVANCE(168);
      if (lookahead == 'y') ADVANCE(165);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '~') ADVANCE(46);
      if (lookahead == 171) ADVANCE(227);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(212);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '`') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '~') ADVANCE(46);
      if (lookahead == 171) ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '`') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 'm') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '~') ADVANCE(46);
      if (lookahead == 171) ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(212);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '&') ADVANCE(63);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '^') ADVANCE(54);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(65);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(221);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 14:
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 187) ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(222);
      END_STATE();
    case 17:
      if (lookahead == 187) ADVANCE(226);
      END_STATE();
    case 18:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 20:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 21:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 29:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '&') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '^') ADVANCE(54);
      if (lookahead == '`') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 'm') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '~') ADVANCE(46);
      if (lookahead == 171) ADVANCE(227);
      if (lookahead == 187) ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= '_')) ADVANCE(212);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '&') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '^') ADVANCE(54);
      if (lookahead == '`') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '~') ADVANCE(46);
      if (lookahead == 171) ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= '_')) ADVANCE(145);
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
      if (lookahead == '\n') ADVANCE(124);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == '|') ADVANCE(39);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == ':' ||
          lookahead == '}') ADVANCE(39);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == 187) ADVANCE(39);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '"') ADVANCE(122);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(33);
      if (lookahead == '[') ADVANCE(43);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '[') ADVANCE(43);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '?') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '}') ADVANCE(222);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(65);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(205);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 's') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'y') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_TILDE_DQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token2);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'g') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'g') ADVANCE(164);
      if (lookahead == 'y') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'h') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(203);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'w') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'y') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'y') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'y') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(203);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(203);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(204);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ':') ADVANCE(219);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LBRACE_COLON);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_COLON_RBRACE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != 187) ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead != 0 &&
          lookahead != 187) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_3);
      if (lookahead == 171) ADVANCE(223);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_string_token5);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_string_token5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_maybe);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_maybe);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_maybe);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '?') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 31},
  [9] = {.lex_state = 31},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 31},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 31},
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 31},
  [21] = {.lex_state = 31},
  [22] = {.lex_state = 31},
  [23] = {.lex_state = 31},
  [24] = {.lex_state = 31},
  [25] = {.lex_state = 31},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 31},
  [28] = {.lex_state = 31},
  [29] = {.lex_state = 31},
  [30] = {.lex_state = 31},
  [31] = {.lex_state = 31},
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 31},
  [34] = {.lex_state = 31},
  [35] = {.lex_state = 31},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 31},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 31},
  [42] = {.lex_state = 31},
  [43] = {.lex_state = 31},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 31},
  [46] = {.lex_state = 31},
  [47] = {.lex_state = 31},
  [48] = {.lex_state = 31},
  [49] = {.lex_state = 31},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 31},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 31},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 31},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 31},
  [61] = {.lex_state = 31},
  [62] = {.lex_state = 31},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
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
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
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
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 15},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 14},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 15},
  [139] = {.lex_state = 15},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 15},
  [146] = {.lex_state = 15},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 15},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 11},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 228},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 228},
  [163] = {.lex_state = 228},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_color_token1] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_interpolation_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(157),
    [sym__statement] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_block] = STATE(24),
    [sym_dictionary] = STATE(24),
    [sym_function_call] = STATE(4),
    [sym__expression] = STATE(24),
    [sym_unary_expression] = STATE(24),
    [sym_binary_expression] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_type_annotation] = STATE(24),
    [sym_attribute] = STATE(24),
    [sym_color] = STATE(24),
    [sym_unit] = STATE(24),
    [sym_interpolated_string] = STATE(24),
    [sym_string] = STATE(24),
    [sym_boolean] = STATE(24),
    [sym_identifier] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(4),
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
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACE_COLON] = ACTIONS(39),
    [anon_sym_] = ACTIONS(41),
    [anon_sym_3] = ACTIONS(43),
    [sym_char] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_maybe] = ACTIONS(47),
    [sym_null] = ACTIONS(29),
    [sym_builtin] = ACTIONS(49),
  },
  [2] = {
    [sym_block] = STATE(15),
    [sym_dictionary] = STATE(15),
    [sym__expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_literal] = STATE(15),
    [sym_type_annotation] = STATE(15),
    [sym_attribute] = STATE(15),
    [sym_color] = STATE(15),
    [sym_unit] = STATE(15),
    [sym_interpolated_string] = STATE(15),
    [sym_string] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_identifier] = STATE(15),
    [aux_sym_function_call_repeat1] = STATE(59),
    [sym_shebang] = ACTIONS(51),
    [sym_comment] = ACTIONS(51),
    [sym_label] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_POUND_LBRACK] = ACTIONS(56),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_BANG_BANG] = ACTIONS(62),
    [anon_sym_TILDE] = ACTIONS(59),
    [anon_sym_BSLASH] = ACTIONS(62),
    [anon_sym_AT] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(62),
    [anon_sym_QMARK] = ACTIONS(62),
    [anon_sym_BQUOTE] = ACTIONS(68),
    [anon_sym_CARET] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_PERCENT] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_DOT_DOT] = ACTIONS(71),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(51),
    [anon_sym_DASH_GT] = ACTIONS(51),
    [anon_sym_EQ_GT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_DOT] = ACTIONS(79),
    [sym_version] = ACTIONS(82),
    [sym_number] = ACTIONS(82),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [aux_sym_interpolation_token1] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_LBRACE_COLON] = ACTIONS(97),
    [anon_sym_] = ACTIONS(100),
    [anon_sym_3] = ACTIONS(103),
    [sym_char] = ACTIONS(106),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [anon_sym_maybe] = ACTIONS(109),
    [sym_null] = ACTIONS(82),
    [sym_builtin] = ACTIONS(82),
  },
  [3] = {
    [sym_block] = STATE(43),
    [sym_dictionary] = STATE(43),
    [sym__expression] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym_binary_expression] = STATE(43),
    [sym_literal] = STATE(43),
    [sym_type_annotation] = STATE(43),
    [sym_attribute] = STATE(43),
    [sym_color] = STATE(43),
    [sym_unit] = STATE(43),
    [sym_interpolated_string] = STATE(43),
    [sym_string] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_identifier] = STATE(43),
    [aux_sym_function_call_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_shebang] = ACTIONS(51),
    [sym_comment] = ACTIONS(51),
    [sym_label] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_POUND_LBRACK] = ACTIONS(115),
    [anon_sym_BANG] = ACTIONS(118),
    [anon_sym_BANG_BANG] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(118),
    [anon_sym_BSLASH] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_BQUOTE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_PERCENT] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_DOT_DOT] = ACTIONS(71),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(51),
    [anon_sym_DASH_GT] = ACTIONS(51),
    [anon_sym_EQ_GT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(130),
    [anon_sym_COLON] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(136),
    [sym_version] = ACTIONS(139),
    [sym_number] = ACTIONS(139),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(142),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [aux_sym_interpolation_token1] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_LBRACE_COLON] = ACTIONS(154),
    [anon_sym_] = ACTIONS(157),
    [anon_sym_3] = ACTIONS(160),
    [sym_char] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [anon_sym_maybe] = ACTIONS(166),
    [sym_null] = ACTIONS(139),
    [sym_builtin] = ACTIONS(139),
  },
  [4] = {
    [sym__statement] = STATE(8),
    [sym_assignment] = STATE(8),
    [sym_block] = STATE(24),
    [sym_dictionary] = STATE(24),
    [sym_function_call] = STATE(8),
    [sym__expression] = STATE(24),
    [sym_unary_expression] = STATE(24),
    [sym_binary_expression] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_type_annotation] = STATE(24),
    [sym_attribute] = STATE(24),
    [sym_color] = STATE(24),
    [sym_unit] = STATE(24),
    [sym_interpolated_string] = STATE(24),
    [sym_string] = STATE(24),
    [sym_boolean] = STATE(24),
    [sym_identifier] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_shebang] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
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
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACE_COLON] = ACTIONS(39),
    [anon_sym_] = ACTIONS(41),
    [anon_sym_3] = ACTIONS(43),
    [sym_char] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_maybe] = ACTIONS(47),
    [sym_null] = ACTIONS(29),
    [sym_builtin] = ACTIONS(49),
  },
  [5] = {
    [sym__statement] = STATE(9),
    [sym_assignment] = STATE(9),
    [sym_block] = STATE(41),
    [sym_dictionary] = STATE(41),
    [sym_function_call] = STATE(9),
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
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_shebang] = ACTIONS(173),
    [sym_comment] = ACTIONS(173),
    [sym_label] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(179),
    [anon_sym_POUND_LBRACK] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_BANG_BANG] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_BSLASH] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_QMARK] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(195),
    [sym_version] = ACTIONS(197),
    [sym_number] = ACTIONS(197),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [aux_sym_interpolation_token1] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_LBRACE_COLON] = ACTIONS(207),
    [anon_sym_] = ACTIONS(209),
    [anon_sym_3] = ACTIONS(211),
    [sym_char] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [anon_sym_maybe] = ACTIONS(215),
    [sym_null] = ACTIONS(197),
    [sym_builtin] = ACTIONS(217),
  },
  [6] = {
    [sym__statement] = STATE(7),
    [sym_assignment] = STATE(7),
    [sym_block] = STATE(41),
    [sym_dictionary] = STATE(41),
    [sym_function_call] = STATE(7),
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
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_shebang] = ACTIONS(219),
    [sym_comment] = ACTIONS(219),
    [sym_label] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(221),
    [anon_sym_POUND_LBRACK] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_BANG_BANG] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_BSLASH] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_QMARK] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(195),
    [sym_version] = ACTIONS(197),
    [sym_number] = ACTIONS(197),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [aux_sym_interpolation_token1] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_LBRACE_COLON] = ACTIONS(207),
    [anon_sym_] = ACTIONS(209),
    [anon_sym_3] = ACTIONS(211),
    [sym_char] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [anon_sym_maybe] = ACTIONS(215),
    [sym_null] = ACTIONS(197),
    [sym_builtin] = ACTIONS(217),
  },
  [7] = {
    [sym__statement] = STATE(7),
    [sym_assignment] = STATE(7),
    [sym_block] = STATE(41),
    [sym_dictionary] = STATE(41),
    [sym_function_call] = STATE(7),
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
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_shebang] = ACTIONS(223),
    [sym_comment] = ACTIONS(223),
    [sym_label] = ACTIONS(226),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(232),
    [anon_sym_POUND_LBRACK] = ACTIONS(234),
    [anon_sym_BANG] = ACTIONS(237),
    [anon_sym_BANG_BANG] = ACTIONS(240),
    [anon_sym_TILDE] = ACTIONS(237),
    [anon_sym_BSLASH] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(240),
    [anon_sym_POUND] = ACTIONS(243),
    [anon_sym_DOLLAR] = ACTIONS(240),
    [anon_sym_QMARK] = ACTIONS(240),
    [anon_sym_BQUOTE] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_COLON] = ACTIONS(252),
    [anon_sym_DOT] = ACTIONS(255),
    [sym_version] = ACTIONS(258),
    [sym_number] = ACTIONS(258),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(264),
    [aux_sym_interpolation_token1] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(270),
    [anon_sym_LBRACE_COLON] = ACTIONS(273),
    [anon_sym_] = ACTIONS(276),
    [anon_sym_3] = ACTIONS(279),
    [sym_char] = ACTIONS(282),
    [anon_sym_true] = ACTIONS(285),
    [anon_sym_false] = ACTIONS(285),
    [anon_sym_maybe] = ACTIONS(285),
    [sym_null] = ACTIONS(258),
    [sym_builtin] = ACTIONS(288),
  },
  [8] = {
    [sym__statement] = STATE(8),
    [sym_assignment] = STATE(8),
    [sym_block] = STATE(24),
    [sym_dictionary] = STATE(24),
    [sym_function_call] = STATE(8),
    [sym__expression] = STATE(24),
    [sym_unary_expression] = STATE(24),
    [sym_binary_expression] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_type_annotation] = STATE(24),
    [sym_attribute] = STATE(24),
    [sym_color] = STATE(24),
    [sym_unit] = STATE(24),
    [sym_interpolated_string] = STATE(24),
    [sym_string] = STATE(24),
    [sym_boolean] = STATE(24),
    [sym_identifier] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_shebang] = ACTIONS(291),
    [sym_comment] = ACTIONS(291),
    [sym_label] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_POUND_LBRACK] = ACTIONS(300),
    [anon_sym_BANG] = ACTIONS(303),
    [anon_sym_BANG_BANG] = ACTIONS(306),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_BSLASH] = ACTIONS(306),
    [anon_sym_AT] = ACTIONS(306),
    [anon_sym_POUND] = ACTIONS(309),
    [anon_sym_DOLLAR] = ACTIONS(306),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_BQUOTE] = ACTIONS(312),
    [anon_sym_SQUOTE] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(318),
    [anon_sym_DOT] = ACTIONS(321),
    [sym_version] = ACTIONS(324),
    [sym_number] = ACTIONS(324),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(330),
    [aux_sym_interpolation_token1] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(336),
    [anon_sym_LBRACE_COLON] = ACTIONS(339),
    [anon_sym_] = ACTIONS(342),
    [anon_sym_3] = ACTIONS(345),
    [sym_char] = ACTIONS(348),
    [anon_sym_true] = ACTIONS(351),
    [anon_sym_false] = ACTIONS(351),
    [anon_sym_maybe] = ACTIONS(351),
    [sym_null] = ACTIONS(324),
    [sym_builtin] = ACTIONS(354),
  },
  [9] = {
    [sym__statement] = STATE(7),
    [sym_assignment] = STATE(7),
    [sym_block] = STATE(41),
    [sym_dictionary] = STATE(41),
    [sym_function_call] = STATE(7),
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
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_shebang] = ACTIONS(219),
    [sym_comment] = ACTIONS(219),
    [sym_label] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(357),
    [anon_sym_POUND_LBRACK] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_BANG_BANG] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_BSLASH] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_QMARK] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(195),
    [sym_version] = ACTIONS(197),
    [sym_number] = ACTIONS(197),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [aux_sym_interpolation_token1] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_LBRACE_COLON] = ACTIONS(207),
    [anon_sym_] = ACTIONS(209),
    [anon_sym_3] = ACTIONS(211),
    [sym_char] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [anon_sym_maybe] = ACTIONS(215),
    [sym_null] = ACTIONS(197),
    [sym_builtin] = ACTIONS(217),
  },
  [10] = {
    [sym__statement] = STATE(12),
    [sym_assignment] = STATE(12),
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
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_shebang] = ACTIONS(359),
    [sym_comment] = ACTIONS(359),
    [sym_label] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(361),
    [anon_sym_POUND_LBRACK] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_BANG_BANG] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_BSLASH] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_QMARK] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(195),
    [sym_version] = ACTIONS(197),
    [sym_number] = ACTIONS(197),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [aux_sym_interpolation_token1] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_LBRACE_COLON] = ACTIONS(207),
    [anon_sym_] = ACTIONS(209),
    [anon_sym_3] = ACTIONS(211),
    [sym_char] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [anon_sym_maybe] = ACTIONS(215),
    [sym_null] = ACTIONS(197),
    [sym_builtin] = ACTIONS(217),
  },
  [11] = {
    [sym__statement] = STATE(6),
    [sym_assignment] = STATE(6),
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
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_shebang] = ACTIONS(363),
    [sym_comment] = ACTIONS(363),
    [sym_label] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(365),
    [anon_sym_POUND_LBRACK] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_BANG_BANG] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_BSLASH] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_QMARK] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(195),
    [sym_version] = ACTIONS(197),
    [sym_number] = ACTIONS(197),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [aux_sym_interpolation_token1] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_LBRACE_COLON] = ACTIONS(207),
    [anon_sym_] = ACTIONS(209),
    [anon_sym_3] = ACTIONS(211),
    [sym_char] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [anon_sym_maybe] = ACTIONS(215),
    [sym_null] = ACTIONS(197),
    [sym_builtin] = ACTIONS(217),
  },
  [12] = {
    [sym__statement] = STATE(7),
    [sym_assignment] = STATE(7),
    [sym_block] = STATE(41),
    [sym_dictionary] = STATE(41),
    [sym_function_call] = STATE(7),
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
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_shebang] = ACTIONS(219),
    [sym_comment] = ACTIONS(219),
    [sym_label] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(367),
    [anon_sym_POUND_LBRACK] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_BANG_BANG] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_BSLASH] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_QMARK] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(195),
    [sym_version] = ACTIONS(197),
    [sym_number] = ACTIONS(197),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [aux_sym_interpolation_token1] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_LBRACE_COLON] = ACTIONS(207),
    [anon_sym_] = ACTIONS(209),
    [anon_sym_3] = ACTIONS(211),
    [sym_char] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [anon_sym_maybe] = ACTIONS(215),
    [sym_null] = ACTIONS(197),
    [sym_builtin] = ACTIONS(217),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [sym_shebang] = ACTIONS(369),
    [sym_comment] = ACTIONS(369),
    [sym_label] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_POUND_LBRACK] = ACTIONS(369),
    [anon_sym_BANG] = ACTIONS(371),
    [anon_sym_BANG_BANG] = ACTIONS(369),
    [anon_sym_TILDE] = ACTIONS(371),
    [anon_sym_BSLASH] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(371),
    [anon_sym_DOLLAR] = ACTIONS(369),
    [anon_sym_QMARK] = ACTIONS(369),
    [anon_sym_BQUOTE] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(375),
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(375),
    [anon_sym_PLUS] = ACTIONS(369),
    [anon_sym_DASH] = ACTIONS(371),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_AMP] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(369),
    [anon_sym_DASH_GT] = ACTIONS(369),
    [anon_sym_EQ_GT] = ACTIONS(369),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(371),
    [anon_sym_DOT] = ACTIONS(371),
    [sym_version] = ACTIONS(371),
    [sym_number] = ACTIONS(371),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [aux_sym_interpolation_token1] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_LBRACE_COLON] = ACTIONS(369),
    [anon_sym_] = ACTIONS(369),
    [anon_sym_3] = ACTIONS(371),
    [sym_char] = ACTIONS(369),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_false] = ACTIONS(371),
    [anon_sym_maybe] = ACTIONS(371),
    [sym_null] = ACTIONS(371),
    [sym_builtin] = ACTIONS(371),
  },
  [14] = {
    [sym_shebang] = ACTIONS(369),
    [sym_comment] = ACTIONS(369),
    [sym_label] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
    [anon_sym_POUND_LBRACK] = ACTIONS(369),
    [anon_sym_BANG] = ACTIONS(371),
    [anon_sym_BANG_BANG] = ACTIONS(369),
    [anon_sym_TILDE] = ACTIONS(371),
    [anon_sym_BSLASH] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(371),
    [anon_sym_DOLLAR] = ACTIONS(369),
    [anon_sym_QMARK] = ACTIONS(369),
    [anon_sym_BQUOTE] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_SLASH] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(369),
    [anon_sym_DASH] = ACTIONS(371),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_AMP] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(369),
    [anon_sym_DASH_GT] = ACTIONS(369),
    [anon_sym_EQ_GT] = ACTIONS(369),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(371),
    [anon_sym_DOT] = ACTIONS(371),
    [sym_version] = ACTIONS(371),
    [sym_number] = ACTIONS(371),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [aux_sym_interpolation_token1] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_LBRACE_COLON] = ACTIONS(369),
    [anon_sym_] = ACTIONS(369),
    [anon_sym_3] = ACTIONS(371),
    [sym_char] = ACTIONS(369),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_false] = ACTIONS(371),
    [anon_sym_maybe] = ACTIONS(371),
    [sym_null] = ACTIONS(371),
    [sym_builtin] = ACTIONS(371),
  },
  [15] = {
    [sym_shebang] = ACTIONS(381),
    [sym_comment] = ACTIONS(381),
    [sym_label] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_POUND_LBRACK] = ACTIONS(381),
    [anon_sym_BANG] = ACTIONS(383),
    [anon_sym_BANG_BANG] = ACTIONS(381),
    [anon_sym_TILDE] = ACTIONS(383),
    [anon_sym_BSLASH] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(383),
    [anon_sym_DOLLAR] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(381),
    [anon_sym_BQUOTE] = ACTIONS(383),
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_SLASH] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(385),
    [anon_sym_DASH] = ACTIONS(387),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_LT] = ACTIONS(391),
    [anon_sym_GT] = ACTIONS(391),
    [anon_sym_AMP] = ACTIONS(391),
    [anon_sym_PIPE] = ACTIONS(391),
    [anon_sym_DOT_DOT] = ACTIONS(389),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(391),
    [anon_sym_DASH_GT] = ACTIONS(391),
    [anon_sym_EQ_GT] = ACTIONS(391),
    [anon_sym_COLON_COLON] = ACTIONS(391),
    [anon_sym_SQUOTE] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_DOT] = ACTIONS(383),
    [sym_version] = ACTIONS(383),
    [sym_number] = ACTIONS(383),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [aux_sym_interpolation_token1] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_LBRACE_COLON] = ACTIONS(381),
    [anon_sym_] = ACTIONS(381),
    [anon_sym_3] = ACTIONS(383),
    [sym_char] = ACTIONS(381),
    [anon_sym_true] = ACTIONS(383),
    [anon_sym_false] = ACTIONS(383),
    [anon_sym_maybe] = ACTIONS(383),
    [sym_null] = ACTIONS(383),
    [sym_builtin] = ACTIONS(383),
  },
  [16] = {
    [sym_shebang] = ACTIONS(393),
    [sym_comment] = ACTIONS(393),
    [sym_label] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_RBRACK] = ACTIONS(393),
    [anon_sym_POUND_LBRACK] = ACTIONS(393),
    [anon_sym_BANG] = ACTIONS(395),
    [anon_sym_BANG_BANG] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(395),
    [anon_sym_BSLASH] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(393),
    [anon_sym_POUND] = ACTIONS(395),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [anon_sym_QMARK] = ACTIONS(393),
    [anon_sym_BQUOTE] = ACTIONS(395),
    [anon_sym_CARET] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(395),
    [anon_sym_EQ] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_DOT_DOT] = ACTIONS(395),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(393),
    [anon_sym_DASH_GT] = ACTIONS(393),
    [anon_sym_EQ_GT] = ACTIONS(393),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(395),
    [anon_sym_DOT] = ACTIONS(395),
    [sym_version] = ACTIONS(395),
    [sym_number] = ACTIONS(395),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [aux_sym_interpolation_token1] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [anon_sym_LBRACE_COLON] = ACTIONS(393),
    [anon_sym_] = ACTIONS(393),
    [anon_sym_3] = ACTIONS(395),
    [sym_char] = ACTIONS(393),
    [anon_sym_true] = ACTIONS(395),
    [anon_sym_false] = ACTIONS(395),
    [anon_sym_maybe] = ACTIONS(395),
    [sym_null] = ACTIONS(395),
    [sym_builtin] = ACTIONS(395),
  },
  [17] = {
    [sym_shebang] = ACTIONS(397),
    [sym_comment] = ACTIONS(397),
    [sym_label] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(397),
    [anon_sym_POUND_LBRACK] = ACTIONS(397),
    [anon_sym_BANG] = ACTIONS(399),
    [anon_sym_BANG_BANG] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(399),
    [anon_sym_BSLASH] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(397),
    [anon_sym_POUND] = ACTIONS(399),
    [anon_sym_DOLLAR] = ACTIONS(397),
    [anon_sym_QMARK] = ACTIONS(397),
    [anon_sym_BQUOTE] = ACTIONS(399),
    [anon_sym_CARET] = ACTIONS(397),
    [anon_sym_STAR] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(397),
    [anon_sym_PERCENT] = ACTIONS(397),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(399),
    [anon_sym_EQ] = ACTIONS(399),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_DOT_DOT] = ACTIONS(399),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(397),
    [anon_sym_DASH_GT] = ACTIONS(397),
    [anon_sym_EQ_GT] = ACTIONS(397),
    [anon_sym_COLON_COLON] = ACTIONS(397),
    [anon_sym_SQUOTE] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(399),
    [anon_sym_DOT] = ACTIONS(399),
    [sym_version] = ACTIONS(399),
    [sym_number] = ACTIONS(399),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [aux_sym_interpolation_token1] = ACTIONS(399),
    [anon_sym_LBRACE] = ACTIONS(399),
    [anon_sym_LBRACE_COLON] = ACTIONS(397),
    [anon_sym_] = ACTIONS(397),
    [anon_sym_3] = ACTIONS(399),
    [sym_char] = ACTIONS(397),
    [anon_sym_true] = ACTIONS(399),
    [anon_sym_false] = ACTIONS(399),
    [anon_sym_maybe] = ACTIONS(399),
    [sym_null] = ACTIONS(399),
    [sym_builtin] = ACTIONS(399),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [sym_shebang] = ACTIONS(401),
    [sym_comment] = ACTIONS(401),
    [sym_label] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_POUND_LBRACK] = ACTIONS(401),
    [anon_sym_BANG] = ACTIONS(403),
    [anon_sym_BANG_BANG] = ACTIONS(401),
    [anon_sym_TILDE] = ACTIONS(403),
    [anon_sym_BSLASH] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(403),
    [anon_sym_DOLLAR] = ACTIONS(401),
    [anon_sym_QMARK] = ACTIONS(401),
    [anon_sym_BQUOTE] = ACTIONS(403),
    [anon_sym_CARET] = ACTIONS(401),
    [anon_sym_STAR] = ACTIONS(401),
    [anon_sym_SLASH] = ACTIONS(401),
    [anon_sym_PERCENT] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(401),
    [anon_sym_DASH] = ACTIONS(403),
    [anon_sym_EQ] = ACTIONS(403),
    [anon_sym_LT] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_AMP] = ACTIONS(401),
    [anon_sym_PIPE] = ACTIONS(401),
    [anon_sym_DOT_DOT] = ACTIONS(403),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(401),
    [anon_sym_DASH_GT] = ACTIONS(401),
    [anon_sym_EQ_GT] = ACTIONS(401),
    [anon_sym_COLON_COLON] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(401),
    [anon_sym_COLON] = ACTIONS(403),
    [anon_sym_DOT] = ACTIONS(403),
    [sym_version] = ACTIONS(403),
    [sym_number] = ACTIONS(403),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(401),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [aux_sym_interpolation_token1] = ACTIONS(403),
    [anon_sym_LBRACE] = ACTIONS(403),
    [anon_sym_LBRACE_COLON] = ACTIONS(401),
    [anon_sym_] = ACTIONS(401),
    [anon_sym_3] = ACTIONS(403),
    [sym_char] = ACTIONS(401),
    [anon_sym_true] = ACTIONS(403),
    [anon_sym_false] = ACTIONS(403),
    [anon_sym_maybe] = ACTIONS(403),
    [sym_null] = ACTIONS(403),
    [sym_builtin] = ACTIONS(403),
  },
  [19] = {
    [sym_shebang] = ACTIONS(405),
    [sym_comment] = ACTIONS(405),
    [sym_label] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_RBRACK] = ACTIONS(405),
    [anon_sym_POUND_LBRACK] = ACTIONS(405),
    [anon_sym_BANG] = ACTIONS(407),
    [anon_sym_BANG_BANG] = ACTIONS(405),
    [anon_sym_TILDE] = ACTIONS(407),
    [anon_sym_BSLASH] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [anon_sym_DOLLAR] = ACTIONS(405),
    [anon_sym_QMARK] = ACTIONS(405),
    [anon_sym_BQUOTE] = ACTIONS(407),
    [anon_sym_CARET] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(405),
    [anon_sym_SLASH] = ACTIONS(405),
    [anon_sym_PERCENT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(407),
    [anon_sym_EQ] = ACTIONS(407),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_DOT_DOT] = ACTIONS(407),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(405),
    [anon_sym_DASH_GT] = ACTIONS(405),
    [anon_sym_EQ_GT] = ACTIONS(405),
    [anon_sym_COLON_COLON] = ACTIONS(405),
    [anon_sym_SQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_DOT] = ACTIONS(407),
    [sym_version] = ACTIONS(407),
    [sym_number] = ACTIONS(407),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [aux_sym_interpolation_token1] = ACTIONS(407),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_LBRACE_COLON] = ACTIONS(405),
    [anon_sym_] = ACTIONS(405),
    [anon_sym_3] = ACTIONS(407),
    [sym_char] = ACTIONS(405),
    [anon_sym_true] = ACTIONS(407),
    [anon_sym_false] = ACTIONS(407),
    [anon_sym_maybe] = ACTIONS(407),
    [sym_null] = ACTIONS(407),
    [sym_builtin] = ACTIONS(407),
  },
  [20] = {
    [sym_shebang] = ACTIONS(409),
    [sym_comment] = ACTIONS(409),
    [sym_label] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_RBRACK] = ACTIONS(409),
    [anon_sym_POUND_LBRACK] = ACTIONS(409),
    [anon_sym_BANG] = ACTIONS(411),
    [anon_sym_BANG_BANG] = ACTIONS(409),
    [anon_sym_TILDE] = ACTIONS(411),
    [anon_sym_BSLASH] = ACTIONS(409),
    [anon_sym_AT] = ACTIONS(409),
    [anon_sym_POUND] = ACTIONS(411),
    [anon_sym_DOLLAR] = ACTIONS(409),
    [anon_sym_QMARK] = ACTIONS(409),
    [anon_sym_BQUOTE] = ACTIONS(411),
    [anon_sym_CARET] = ACTIONS(409),
    [anon_sym_STAR] = ACTIONS(409),
    [anon_sym_SLASH] = ACTIONS(409),
    [anon_sym_PERCENT] = ACTIONS(409),
    [anon_sym_PLUS] = ACTIONS(409),
    [anon_sym_DASH] = ACTIONS(411),
    [anon_sym_EQ] = ACTIONS(411),
    [anon_sym_LT] = ACTIONS(409),
    [anon_sym_GT] = ACTIONS(409),
    [anon_sym_AMP] = ACTIONS(409),
    [anon_sym_PIPE] = ACTIONS(409),
    [anon_sym_DOT_DOT] = ACTIONS(411),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_SQUOTE] = ACTIONS(409),
    [anon_sym_COLON] = ACTIONS(411),
    [anon_sym_DOT] = ACTIONS(411),
    [sym_version] = ACTIONS(411),
    [sym_number] = ACTIONS(411),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [aux_sym_interpolation_token1] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(411),
    [anon_sym_LBRACE_COLON] = ACTIONS(409),
    [anon_sym_] = ACTIONS(409),
    [anon_sym_3] = ACTIONS(411),
    [sym_char] = ACTIONS(409),
    [anon_sym_true] = ACTIONS(411),
    [anon_sym_false] = ACTIONS(411),
    [anon_sym_maybe] = ACTIONS(411),
    [sym_null] = ACTIONS(411),
    [sym_builtin] = ACTIONS(411),
  },
  [21] = {
    [sym_shebang] = ACTIONS(413),
    [sym_comment] = ACTIONS(413),
    [sym_label] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_RBRACK] = ACTIONS(413),
    [anon_sym_POUND_LBRACK] = ACTIONS(413),
    [anon_sym_BANG] = ACTIONS(415),
    [anon_sym_BANG_BANG] = ACTIONS(413),
    [anon_sym_TILDE] = ACTIONS(415),
    [anon_sym_BSLASH] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(413),
    [anon_sym_POUND] = ACTIONS(415),
    [anon_sym_DOLLAR] = ACTIONS(413),
    [anon_sym_QMARK] = ACTIONS(413),
    [anon_sym_BQUOTE] = ACTIONS(415),
    [anon_sym_CARET] = ACTIONS(413),
    [anon_sym_STAR] = ACTIONS(413),
    [anon_sym_SLASH] = ACTIONS(413),
    [anon_sym_PERCENT] = ACTIONS(413),
    [anon_sym_PLUS] = ACTIONS(413),
    [anon_sym_DASH] = ACTIONS(415),
    [anon_sym_EQ] = ACTIONS(415),
    [anon_sym_LT] = ACTIONS(413),
    [anon_sym_GT] = ACTIONS(413),
    [anon_sym_AMP] = ACTIONS(413),
    [anon_sym_PIPE] = ACTIONS(413),
    [anon_sym_DOT_DOT] = ACTIONS(415),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(413),
    [anon_sym_DASH_GT] = ACTIONS(413),
    [anon_sym_EQ_GT] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(413),
    [anon_sym_SQUOTE] = ACTIONS(413),
    [anon_sym_COLON] = ACTIONS(415),
    [anon_sym_DOT] = ACTIONS(415),
    [sym_version] = ACTIONS(415),
    [sym_number] = ACTIONS(415),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [aux_sym_interpolation_token1] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(415),
    [anon_sym_LBRACE_COLON] = ACTIONS(413),
    [anon_sym_] = ACTIONS(413),
    [anon_sym_3] = ACTIONS(415),
    [sym_char] = ACTIONS(413),
    [anon_sym_true] = ACTIONS(415),
    [anon_sym_false] = ACTIONS(415),
    [anon_sym_maybe] = ACTIONS(415),
    [sym_null] = ACTIONS(415),
    [sym_builtin] = ACTIONS(415),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [sym_shebang] = ACTIONS(417),
    [sym_comment] = ACTIONS(417),
    [sym_label] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_POUND_LBRACK] = ACTIONS(417),
    [anon_sym_BANG] = ACTIONS(419),
    [anon_sym_BANG_BANG] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_BSLASH] = ACTIONS(417),
    [anon_sym_AT] = ACTIONS(417),
    [anon_sym_POUND] = ACTIONS(419),
    [anon_sym_DOLLAR] = ACTIONS(417),
    [anon_sym_QMARK] = ACTIONS(417),
    [anon_sym_BQUOTE] = ACTIONS(419),
    [anon_sym_CARET] = ACTIONS(417),
    [anon_sym_STAR] = ACTIONS(417),
    [anon_sym_SLASH] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(419),
    [anon_sym_EQ] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_DOT_DOT] = ACTIONS(419),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(417),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_EQ_GT] = ACTIONS(417),
    [anon_sym_COLON_COLON] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(419),
    [anon_sym_DOT] = ACTIONS(419),
    [sym_version] = ACTIONS(419),
    [sym_number] = ACTIONS(419),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [aux_sym_interpolation_token1] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_LBRACE_COLON] = ACTIONS(417),
    [anon_sym_] = ACTIONS(417),
    [anon_sym_3] = ACTIONS(419),
    [sym_char] = ACTIONS(417),
    [anon_sym_true] = ACTIONS(419),
    [anon_sym_false] = ACTIONS(419),
    [anon_sym_maybe] = ACTIONS(419),
    [sym_null] = ACTIONS(419),
    [sym_builtin] = ACTIONS(419),
  },
  [23] = {
    [sym_shebang] = ACTIONS(421),
    [sym_comment] = ACTIONS(421),
    [sym_label] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_RBRACK] = ACTIONS(421),
    [anon_sym_POUND_LBRACK] = ACTIONS(421),
    [anon_sym_BANG] = ACTIONS(423),
    [anon_sym_BANG_BANG] = ACTIONS(421),
    [anon_sym_TILDE] = ACTIONS(423),
    [anon_sym_BSLASH] = ACTIONS(421),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_POUND] = ACTIONS(423),
    [anon_sym_DOLLAR] = ACTIONS(421),
    [anon_sym_QMARK] = ACTIONS(421),
    [anon_sym_BQUOTE] = ACTIONS(423),
    [anon_sym_CARET] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(421),
    [anon_sym_SLASH] = ACTIONS(421),
    [anon_sym_PERCENT] = ACTIONS(421),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(423),
    [anon_sym_EQ] = ACTIONS(423),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_DOT_DOT] = ACTIONS(423),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(421),
    [anon_sym_DASH_GT] = ACTIONS(421),
    [anon_sym_EQ_GT] = ACTIONS(421),
    [anon_sym_COLON_COLON] = ACTIONS(421),
    [anon_sym_SQUOTE] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [sym_version] = ACTIONS(423),
    [sym_number] = ACTIONS(423),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(421),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [aux_sym_interpolation_token1] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(423),
    [anon_sym_LBRACE_COLON] = ACTIONS(421),
    [anon_sym_] = ACTIONS(421),
    [anon_sym_3] = ACTIONS(423),
    [sym_char] = ACTIONS(421),
    [anon_sym_true] = ACTIONS(423),
    [anon_sym_false] = ACTIONS(423),
    [anon_sym_maybe] = ACTIONS(423),
    [sym_null] = ACTIONS(423),
    [sym_builtin] = ACTIONS(423),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(425),
    [sym_shebang] = ACTIONS(425),
    [sym_comment] = ACTIONS(425),
    [sym_label] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(425),
    [anon_sym_POUND_LBRACK] = ACTIONS(425),
    [anon_sym_BANG] = ACTIONS(427),
    [anon_sym_BANG_BANG] = ACTIONS(425),
    [anon_sym_TILDE] = ACTIONS(427),
    [anon_sym_BSLASH] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(425),
    [anon_sym_POUND] = ACTIONS(427),
    [anon_sym_DOLLAR] = ACTIONS(425),
    [anon_sym_QMARK] = ACTIONS(425),
    [anon_sym_BQUOTE] = ACTIONS(427),
    [anon_sym_CARET] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(375),
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(375),
    [anon_sym_PLUS] = ACTIONS(429),
    [anon_sym_DASH] = ACTIONS(431),
    [anon_sym_EQ] = ACTIONS(433),
    [anon_sym_LT] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [anon_sym_AMP] = ACTIONS(435),
    [anon_sym_PIPE] = ACTIONS(435),
    [anon_sym_DOT_DOT] = ACTIONS(433),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(435),
    [anon_sym_DASH_GT] = ACTIONS(435),
    [anon_sym_EQ_GT] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(435),
    [anon_sym_SQUOTE] = ACTIONS(425),
    [anon_sym_COLON] = ACTIONS(427),
    [anon_sym_DOT] = ACTIONS(427),
    [sym_version] = ACTIONS(427),
    [sym_number] = ACTIONS(427),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(425),
    [aux_sym_interpolation_token1] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(427),
    [anon_sym_LBRACE_COLON] = ACTIONS(425),
    [anon_sym_] = ACTIONS(425),
    [anon_sym_3] = ACTIONS(427),
    [sym_char] = ACTIONS(425),
    [anon_sym_true] = ACTIONS(427),
    [anon_sym_false] = ACTIONS(427),
    [anon_sym_maybe] = ACTIONS(427),
    [sym_null] = ACTIONS(427),
    [sym_builtin] = ACTIONS(427),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [sym_shebang] = ACTIONS(437),
    [sym_comment] = ACTIONS(437),
    [sym_label] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_POUND_LBRACK] = ACTIONS(437),
    [anon_sym_BANG] = ACTIONS(439),
    [anon_sym_BANG_BANG] = ACTIONS(437),
    [anon_sym_TILDE] = ACTIONS(439),
    [anon_sym_BSLASH] = ACTIONS(437),
    [anon_sym_AT] = ACTIONS(437),
    [anon_sym_POUND] = ACTIONS(439),
    [anon_sym_DOLLAR] = ACTIONS(437),
    [anon_sym_QMARK] = ACTIONS(437),
    [anon_sym_BQUOTE] = ACTIONS(439),
    [anon_sym_CARET] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(375),
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(375),
    [anon_sym_PLUS] = ACTIONS(429),
    [anon_sym_DASH] = ACTIONS(431),
    [anon_sym_EQ] = ACTIONS(433),
    [anon_sym_LT] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [anon_sym_AMP] = ACTIONS(435),
    [anon_sym_PIPE] = ACTIONS(435),
    [anon_sym_DOT_DOT] = ACTIONS(433),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(435),
    [anon_sym_DASH_GT] = ACTIONS(435),
    [anon_sym_EQ_GT] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(435),
    [anon_sym_SQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_DOT] = ACTIONS(439),
    [sym_version] = ACTIONS(439),
    [sym_number] = ACTIONS(439),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [aux_sym_interpolation_token1] = ACTIONS(439),
    [anon_sym_LBRACE] = ACTIONS(439),
    [anon_sym_LBRACE_COLON] = ACTIONS(437),
    [anon_sym_] = ACTIONS(437),
    [anon_sym_3] = ACTIONS(439),
    [sym_char] = ACTIONS(437),
    [anon_sym_true] = ACTIONS(439),
    [anon_sym_false] = ACTIONS(439),
    [anon_sym_maybe] = ACTIONS(439),
    [sym_null] = ACTIONS(439),
    [sym_builtin] = ACTIONS(439),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [sym_shebang] = ACTIONS(441),
    [sym_comment] = ACTIONS(441),
    [sym_label] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_POUND_LBRACK] = ACTIONS(441),
    [anon_sym_BANG] = ACTIONS(443),
    [anon_sym_BANG_BANG] = ACTIONS(441),
    [anon_sym_TILDE] = ACTIONS(443),
    [anon_sym_BSLASH] = ACTIONS(441),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_POUND] = ACTIONS(443),
    [anon_sym_DOLLAR] = ACTIONS(441),
    [anon_sym_QMARK] = ACTIONS(441),
    [anon_sym_BQUOTE] = ACTIONS(443),
    [anon_sym_CARET] = ACTIONS(441),
    [anon_sym_STAR] = ACTIONS(441),
    [anon_sym_SLASH] = ACTIONS(441),
    [anon_sym_PERCENT] = ACTIONS(441),
    [anon_sym_PLUS] = ACTIONS(441),
    [anon_sym_DASH] = ACTIONS(443),
    [anon_sym_EQ] = ACTIONS(443),
    [anon_sym_LT] = ACTIONS(441),
    [anon_sym_GT] = ACTIONS(441),
    [anon_sym_AMP] = ACTIONS(441),
    [anon_sym_PIPE] = ACTIONS(441),
    [anon_sym_DOT_DOT] = ACTIONS(443),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(441),
    [anon_sym_EQ_GT] = ACTIONS(441),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_SQUOTE] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(443),
    [sym_version] = ACTIONS(443),
    [sym_number] = ACTIONS(443),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [aux_sym_interpolation_token1] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(443),
    [anon_sym_LBRACE_COLON] = ACTIONS(441),
    [anon_sym_] = ACTIONS(441),
    [anon_sym_3] = ACTIONS(443),
    [sym_char] = ACTIONS(441),
    [anon_sym_true] = ACTIONS(443),
    [anon_sym_false] = ACTIONS(443),
    [anon_sym_maybe] = ACTIONS(443),
    [sym_null] = ACTIONS(443),
    [sym_builtin] = ACTIONS(443),
  },
  [27] = {
    [sym_shebang] = ACTIONS(445),
    [sym_comment] = ACTIONS(445),
    [sym_label] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(445),
    [anon_sym_POUND_LBRACK] = ACTIONS(445),
    [anon_sym_BANG] = ACTIONS(447),
    [anon_sym_BANG_BANG] = ACTIONS(445),
    [anon_sym_TILDE] = ACTIONS(447),
    [anon_sym_BSLASH] = ACTIONS(445),
    [anon_sym_AT] = ACTIONS(445),
    [anon_sym_POUND] = ACTIONS(447),
    [anon_sym_DOLLAR] = ACTIONS(445),
    [anon_sym_QMARK] = ACTIONS(445),
    [anon_sym_BQUOTE] = ACTIONS(447),
    [anon_sym_CARET] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(445),
    [anon_sym_SLASH] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(445),
    [anon_sym_PLUS] = ACTIONS(445),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_EQ] = ACTIONS(447),
    [anon_sym_LT] = ACTIONS(445),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_AMP] = ACTIONS(445),
    [anon_sym_PIPE] = ACTIONS(445),
    [anon_sym_DOT_DOT] = ACTIONS(447),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(445),
    [anon_sym_DASH_GT] = ACTIONS(445),
    [anon_sym_EQ_GT] = ACTIONS(445),
    [anon_sym_COLON_COLON] = ACTIONS(445),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(447),
    [sym_version] = ACTIONS(447),
    [sym_number] = ACTIONS(447),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [aux_sym_interpolation_token1] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(447),
    [anon_sym_LBRACE_COLON] = ACTIONS(445),
    [anon_sym_] = ACTIONS(445),
    [anon_sym_3] = ACTIONS(447),
    [sym_char] = ACTIONS(445),
    [anon_sym_true] = ACTIONS(447),
    [anon_sym_false] = ACTIONS(447),
    [anon_sym_maybe] = ACTIONS(447),
    [sym_null] = ACTIONS(447),
    [sym_builtin] = ACTIONS(447),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [sym_shebang] = ACTIONS(449),
    [sym_comment] = ACTIONS(449),
    [sym_label] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_POUND_LBRACK] = ACTIONS(449),
    [anon_sym_BANG] = ACTIONS(451),
    [anon_sym_BANG_BANG] = ACTIONS(449),
    [anon_sym_TILDE] = ACTIONS(451),
    [anon_sym_BSLASH] = ACTIONS(449),
    [anon_sym_AT] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_DOLLAR] = ACTIONS(449),
    [anon_sym_QMARK] = ACTIONS(449),
    [anon_sym_BQUOTE] = ACTIONS(451),
    [anon_sym_CARET] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(449),
    [anon_sym_SLASH] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(451),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_LT] = ACTIONS(449),
    [anon_sym_GT] = ACTIONS(449),
    [anon_sym_AMP] = ACTIONS(449),
    [anon_sym_PIPE] = ACTIONS(449),
    [anon_sym_DOT_DOT] = ACTIONS(451),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(449),
    [anon_sym_DASH_GT] = ACTIONS(449),
    [anon_sym_EQ_GT] = ACTIONS(449),
    [anon_sym_COLON_COLON] = ACTIONS(449),
    [anon_sym_SQUOTE] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(451),
    [anon_sym_DOT] = ACTIONS(451),
    [sym_version] = ACTIONS(451),
    [sym_number] = ACTIONS(451),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [aux_sym_interpolation_token1] = ACTIONS(451),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_LBRACE_COLON] = ACTIONS(449),
    [anon_sym_] = ACTIONS(449),
    [anon_sym_3] = ACTIONS(451),
    [sym_char] = ACTIONS(449),
    [anon_sym_true] = ACTIONS(451),
    [anon_sym_false] = ACTIONS(451),
    [anon_sym_maybe] = ACTIONS(451),
    [sym_null] = ACTIONS(451),
    [sym_builtin] = ACTIONS(451),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [sym_shebang] = ACTIONS(453),
    [sym_comment] = ACTIONS(453),
    [sym_label] = ACTIONS(453),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_POUND_LBRACK] = ACTIONS(453),
    [anon_sym_BANG] = ACTIONS(455),
    [anon_sym_BANG_BANG] = ACTIONS(453),
    [anon_sym_TILDE] = ACTIONS(455),
    [anon_sym_BSLASH] = ACTIONS(453),
    [anon_sym_AT] = ACTIONS(453),
    [anon_sym_POUND] = ACTIONS(455),
    [anon_sym_DOLLAR] = ACTIONS(453),
    [anon_sym_QMARK] = ACTIONS(453),
    [anon_sym_BQUOTE] = ACTIONS(455),
    [anon_sym_CARET] = ACTIONS(453),
    [anon_sym_STAR] = ACTIONS(453),
    [anon_sym_SLASH] = ACTIONS(453),
    [anon_sym_PERCENT] = ACTIONS(453),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(455),
    [anon_sym_EQ] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_DOT_DOT] = ACTIONS(455),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(453),
    [anon_sym_DASH_GT] = ACTIONS(453),
    [anon_sym_EQ_GT] = ACTIONS(453),
    [anon_sym_COLON_COLON] = ACTIONS(453),
    [anon_sym_SQUOTE] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(455),
    [anon_sym_DOT] = ACTIONS(455),
    [sym_version] = ACTIONS(455),
    [sym_number] = ACTIONS(455),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [aux_sym_interpolation_token1] = ACTIONS(455),
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_LBRACE_COLON] = ACTIONS(453),
    [anon_sym_] = ACTIONS(453),
    [anon_sym_3] = ACTIONS(455),
    [sym_char] = ACTIONS(453),
    [anon_sym_true] = ACTIONS(455),
    [anon_sym_false] = ACTIONS(455),
    [anon_sym_maybe] = ACTIONS(455),
    [sym_null] = ACTIONS(455),
    [sym_builtin] = ACTIONS(455),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [sym_shebang] = ACTIONS(445),
    [sym_comment] = ACTIONS(445),
    [sym_label] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_POUND_LBRACK] = ACTIONS(445),
    [anon_sym_BANG] = ACTIONS(447),
    [anon_sym_BANG_BANG] = ACTIONS(445),
    [anon_sym_TILDE] = ACTIONS(447),
    [anon_sym_BSLASH] = ACTIONS(445),
    [anon_sym_AT] = ACTIONS(445),
    [anon_sym_POUND] = ACTIONS(447),
    [anon_sym_DOLLAR] = ACTIONS(445),
    [anon_sym_QMARK] = ACTIONS(445),
    [anon_sym_BQUOTE] = ACTIONS(447),
    [anon_sym_CARET] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(445),
    [anon_sym_SLASH] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(445),
    [anon_sym_PLUS] = ACTIONS(445),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_EQ] = ACTIONS(447),
    [anon_sym_LT] = ACTIONS(445),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_AMP] = ACTIONS(445),
    [anon_sym_PIPE] = ACTIONS(445),
    [anon_sym_DOT_DOT] = ACTIONS(447),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(445),
    [anon_sym_DASH_GT] = ACTIONS(445),
    [anon_sym_EQ_GT] = ACTIONS(445),
    [anon_sym_COLON_COLON] = ACTIONS(445),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(447),
    [sym_version] = ACTIONS(447),
    [sym_number] = ACTIONS(447),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [aux_sym_interpolation_token1] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(447),
    [anon_sym_LBRACE_COLON] = ACTIONS(445),
    [anon_sym_] = ACTIONS(445),
    [anon_sym_3] = ACTIONS(447),
    [sym_char] = ACTIONS(445),
    [anon_sym_true] = ACTIONS(447),
    [anon_sym_false] = ACTIONS(447),
    [anon_sym_maybe] = ACTIONS(447),
    [sym_null] = ACTIONS(447),
    [sym_builtin] = ACTIONS(447),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(421),
    [sym_shebang] = ACTIONS(421),
    [sym_comment] = ACTIONS(421),
    [sym_label] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_POUND_LBRACK] = ACTIONS(421),
    [anon_sym_BANG] = ACTIONS(423),
    [anon_sym_BANG_BANG] = ACTIONS(421),
    [anon_sym_TILDE] = ACTIONS(423),
    [anon_sym_BSLASH] = ACTIONS(421),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_POUND] = ACTIONS(423),
    [anon_sym_DOLLAR] = ACTIONS(421),
    [anon_sym_QMARK] = ACTIONS(421),
    [anon_sym_BQUOTE] = ACTIONS(423),
    [anon_sym_CARET] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(421),
    [anon_sym_SLASH] = ACTIONS(421),
    [anon_sym_PERCENT] = ACTIONS(421),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(423),
    [anon_sym_EQ] = ACTIONS(423),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_DOT_DOT] = ACTIONS(423),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(421),
    [anon_sym_DASH_GT] = ACTIONS(421),
    [anon_sym_EQ_GT] = ACTIONS(421),
    [anon_sym_COLON_COLON] = ACTIONS(421),
    [anon_sym_SQUOTE] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [sym_version] = ACTIONS(423),
    [sym_number] = ACTIONS(423),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(421),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [aux_sym_interpolation_token1] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(423),
    [anon_sym_LBRACE_COLON] = ACTIONS(421),
    [anon_sym_] = ACTIONS(421),
    [anon_sym_3] = ACTIONS(423),
    [sym_char] = ACTIONS(421),
    [anon_sym_true] = ACTIONS(423),
    [anon_sym_false] = ACTIONS(423),
    [anon_sym_maybe] = ACTIONS(423),
    [sym_null] = ACTIONS(423),
    [sym_builtin] = ACTIONS(423),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(413),
    [sym_shebang] = ACTIONS(413),
    [sym_comment] = ACTIONS(413),
    [sym_label] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_POUND_LBRACK] = ACTIONS(413),
    [anon_sym_BANG] = ACTIONS(415),
    [anon_sym_BANG_BANG] = ACTIONS(413),
    [anon_sym_TILDE] = ACTIONS(415),
    [anon_sym_BSLASH] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(413),
    [anon_sym_POUND] = ACTIONS(415),
    [anon_sym_DOLLAR] = ACTIONS(413),
    [anon_sym_QMARK] = ACTIONS(413),
    [anon_sym_BQUOTE] = ACTIONS(415),
    [anon_sym_CARET] = ACTIONS(413),
    [anon_sym_STAR] = ACTIONS(413),
    [anon_sym_SLASH] = ACTIONS(413),
    [anon_sym_PERCENT] = ACTIONS(413),
    [anon_sym_PLUS] = ACTIONS(413),
    [anon_sym_DASH] = ACTIONS(415),
    [anon_sym_EQ] = ACTIONS(415),
    [anon_sym_LT] = ACTIONS(413),
    [anon_sym_GT] = ACTIONS(413),
    [anon_sym_AMP] = ACTIONS(413),
    [anon_sym_PIPE] = ACTIONS(413),
    [anon_sym_DOT_DOT] = ACTIONS(415),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(413),
    [anon_sym_DASH_GT] = ACTIONS(413),
    [anon_sym_EQ_GT] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(413),
    [anon_sym_SQUOTE] = ACTIONS(413),
    [anon_sym_COLON] = ACTIONS(415),
    [anon_sym_DOT] = ACTIONS(415),
    [sym_version] = ACTIONS(415),
    [sym_number] = ACTIONS(415),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [aux_sym_interpolation_token1] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(415),
    [anon_sym_LBRACE_COLON] = ACTIONS(413),
    [anon_sym_] = ACTIONS(413),
    [anon_sym_3] = ACTIONS(415),
    [sym_char] = ACTIONS(413),
    [anon_sym_true] = ACTIONS(415),
    [anon_sym_false] = ACTIONS(415),
    [anon_sym_maybe] = ACTIONS(415),
    [sym_null] = ACTIONS(415),
    [sym_builtin] = ACTIONS(415),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [sym_shebang] = ACTIONS(409),
    [sym_comment] = ACTIONS(409),
    [sym_label] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_POUND_LBRACK] = ACTIONS(409),
    [anon_sym_BANG] = ACTIONS(411),
    [anon_sym_BANG_BANG] = ACTIONS(409),
    [anon_sym_TILDE] = ACTIONS(411),
    [anon_sym_BSLASH] = ACTIONS(409),
    [anon_sym_AT] = ACTIONS(409),
    [anon_sym_POUND] = ACTIONS(411),
    [anon_sym_DOLLAR] = ACTIONS(409),
    [anon_sym_QMARK] = ACTIONS(409),
    [anon_sym_BQUOTE] = ACTIONS(411),
    [anon_sym_CARET] = ACTIONS(409),
    [anon_sym_STAR] = ACTIONS(409),
    [anon_sym_SLASH] = ACTIONS(409),
    [anon_sym_PERCENT] = ACTIONS(409),
    [anon_sym_PLUS] = ACTIONS(409),
    [anon_sym_DASH] = ACTIONS(411),
    [anon_sym_EQ] = ACTIONS(411),
    [anon_sym_LT] = ACTIONS(409),
    [anon_sym_GT] = ACTIONS(409),
    [anon_sym_AMP] = ACTIONS(409),
    [anon_sym_PIPE] = ACTIONS(409),
    [anon_sym_DOT_DOT] = ACTIONS(411),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(409),
    [anon_sym_DASH_GT] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_SQUOTE] = ACTIONS(409),
    [anon_sym_COLON] = ACTIONS(411),
    [anon_sym_DOT] = ACTIONS(411),
    [sym_version] = ACTIONS(411),
    [sym_number] = ACTIONS(411),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [aux_sym_interpolation_token1] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(411),
    [anon_sym_LBRACE_COLON] = ACTIONS(409),
    [anon_sym_] = ACTIONS(409),
    [anon_sym_3] = ACTIONS(411),
    [sym_char] = ACTIONS(409),
    [anon_sym_true] = ACTIONS(411),
    [anon_sym_false] = ACTIONS(411),
    [anon_sym_maybe] = ACTIONS(411),
    [sym_null] = ACTIONS(411),
    [sym_builtin] = ACTIONS(411),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [sym_shebang] = ACTIONS(405),
    [sym_comment] = ACTIONS(405),
    [sym_label] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_POUND_LBRACK] = ACTIONS(405),
    [anon_sym_BANG] = ACTIONS(407),
    [anon_sym_BANG_BANG] = ACTIONS(405),
    [anon_sym_TILDE] = ACTIONS(407),
    [anon_sym_BSLASH] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(407),
    [anon_sym_DOLLAR] = ACTIONS(405),
    [anon_sym_QMARK] = ACTIONS(405),
    [anon_sym_BQUOTE] = ACTIONS(407),
    [anon_sym_CARET] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(405),
    [anon_sym_SLASH] = ACTIONS(405),
    [anon_sym_PERCENT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(407),
    [anon_sym_EQ] = ACTIONS(407),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_DOT_DOT] = ACTIONS(407),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(405),
    [anon_sym_DASH_GT] = ACTIONS(405),
    [anon_sym_EQ_GT] = ACTIONS(405),
    [anon_sym_COLON_COLON] = ACTIONS(405),
    [anon_sym_SQUOTE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_DOT] = ACTIONS(407),
    [sym_version] = ACTIONS(407),
    [sym_number] = ACTIONS(407),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [aux_sym_interpolation_token1] = ACTIONS(407),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_LBRACE_COLON] = ACTIONS(405),
    [anon_sym_] = ACTIONS(405),
    [anon_sym_3] = ACTIONS(407),
    [sym_char] = ACTIONS(405),
    [anon_sym_true] = ACTIONS(407),
    [anon_sym_false] = ACTIONS(407),
    [anon_sym_maybe] = ACTIONS(407),
    [sym_null] = ACTIONS(407),
    [sym_builtin] = ACTIONS(407),
  },
  [35] = {
    [sym_shebang] = ACTIONS(453),
    [sym_comment] = ACTIONS(453),
    [sym_label] = ACTIONS(453),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(453),
    [anon_sym_POUND_LBRACK] = ACTIONS(453),
    [anon_sym_BANG] = ACTIONS(455),
    [anon_sym_BANG_BANG] = ACTIONS(453),
    [anon_sym_TILDE] = ACTIONS(455),
    [anon_sym_BSLASH] = ACTIONS(453),
    [anon_sym_AT] = ACTIONS(453),
    [anon_sym_POUND] = ACTIONS(455),
    [anon_sym_DOLLAR] = ACTIONS(453),
    [anon_sym_QMARK] = ACTIONS(453),
    [anon_sym_BQUOTE] = ACTIONS(455),
    [anon_sym_CARET] = ACTIONS(453),
    [anon_sym_STAR] = ACTIONS(453),
    [anon_sym_SLASH] = ACTIONS(453),
    [anon_sym_PERCENT] = ACTIONS(453),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(455),
    [anon_sym_EQ] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_DOT_DOT] = ACTIONS(455),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(453),
    [anon_sym_DASH_GT] = ACTIONS(453),
    [anon_sym_EQ_GT] = ACTIONS(453),
    [anon_sym_COLON_COLON] = ACTIONS(453),
    [anon_sym_SQUOTE] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(455),
    [anon_sym_DOT] = ACTIONS(455),
    [sym_version] = ACTIONS(455),
    [sym_number] = ACTIONS(455),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [aux_sym_interpolation_token1] = ACTIONS(455),
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_LBRACE_COLON] = ACTIONS(453),
    [anon_sym_] = ACTIONS(453),
    [anon_sym_3] = ACTIONS(455),
    [sym_char] = ACTIONS(453),
    [anon_sym_true] = ACTIONS(455),
    [anon_sym_false] = ACTIONS(455),
    [anon_sym_maybe] = ACTIONS(455),
    [sym_null] = ACTIONS(455),
    [sym_builtin] = ACTIONS(455),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [sym_shebang] = ACTIONS(397),
    [sym_comment] = ACTIONS(397),
    [sym_label] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_POUND_LBRACK] = ACTIONS(397),
    [anon_sym_BANG] = ACTIONS(399),
    [anon_sym_BANG_BANG] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(399),
    [anon_sym_BSLASH] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(397),
    [anon_sym_POUND] = ACTIONS(399),
    [anon_sym_DOLLAR] = ACTIONS(397),
    [anon_sym_QMARK] = ACTIONS(397),
    [anon_sym_BQUOTE] = ACTIONS(399),
    [anon_sym_CARET] = ACTIONS(397),
    [anon_sym_STAR] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(397),
    [anon_sym_PERCENT] = ACTIONS(397),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(399),
    [anon_sym_EQ] = ACTIONS(399),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_DOT_DOT] = ACTIONS(399),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(397),
    [anon_sym_DASH_GT] = ACTIONS(397),
    [anon_sym_EQ_GT] = ACTIONS(397),
    [anon_sym_COLON_COLON] = ACTIONS(397),
    [anon_sym_SQUOTE] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(399),
    [anon_sym_DOT] = ACTIONS(399),
    [sym_version] = ACTIONS(399),
    [sym_number] = ACTIONS(399),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [aux_sym_interpolation_token1] = ACTIONS(399),
    [anon_sym_LBRACE] = ACTIONS(399),
    [anon_sym_LBRACE_COLON] = ACTIONS(397),
    [anon_sym_] = ACTIONS(397),
    [anon_sym_3] = ACTIONS(399),
    [sym_char] = ACTIONS(397),
    [anon_sym_true] = ACTIONS(399),
    [anon_sym_false] = ACTIONS(399),
    [anon_sym_maybe] = ACTIONS(399),
    [sym_null] = ACTIONS(399),
    [sym_builtin] = ACTIONS(399),
  },
  [37] = {
    [sym_shebang] = ACTIONS(449),
    [sym_comment] = ACTIONS(449),
    [sym_label] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_RBRACK] = ACTIONS(449),
    [anon_sym_POUND_LBRACK] = ACTIONS(449),
    [anon_sym_BANG] = ACTIONS(451),
    [anon_sym_BANG_BANG] = ACTIONS(449),
    [anon_sym_TILDE] = ACTIONS(451),
    [anon_sym_BSLASH] = ACTIONS(449),
    [anon_sym_AT] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_DOLLAR] = ACTIONS(449),
    [anon_sym_QMARK] = ACTIONS(449),
    [anon_sym_BQUOTE] = ACTIONS(451),
    [anon_sym_CARET] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(449),
    [anon_sym_SLASH] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(451),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_LT] = ACTIONS(449),
    [anon_sym_GT] = ACTIONS(449),
    [anon_sym_AMP] = ACTIONS(449),
    [anon_sym_PIPE] = ACTIONS(449),
    [anon_sym_DOT_DOT] = ACTIONS(451),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(449),
    [anon_sym_DASH_GT] = ACTIONS(449),
    [anon_sym_EQ_GT] = ACTIONS(449),
    [anon_sym_COLON_COLON] = ACTIONS(449),
    [anon_sym_SQUOTE] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(451),
    [anon_sym_DOT] = ACTIONS(451),
    [sym_version] = ACTIONS(451),
    [sym_number] = ACTIONS(451),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [aux_sym_interpolation_token1] = ACTIONS(451),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_LBRACE_COLON] = ACTIONS(449),
    [anon_sym_] = ACTIONS(449),
    [anon_sym_3] = ACTIONS(451),
    [sym_char] = ACTIONS(449),
    [anon_sym_true] = ACTIONS(451),
    [anon_sym_false] = ACTIONS(451),
    [anon_sym_maybe] = ACTIONS(451),
    [sym_null] = ACTIONS(451),
    [sym_builtin] = ACTIONS(451),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [sym_shebang] = ACTIONS(393),
    [sym_comment] = ACTIONS(393),
    [sym_label] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_POUND_LBRACK] = ACTIONS(393),
    [anon_sym_BANG] = ACTIONS(395),
    [anon_sym_BANG_BANG] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(395),
    [anon_sym_BSLASH] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(393),
    [anon_sym_POUND] = ACTIONS(395),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [anon_sym_QMARK] = ACTIONS(393),
    [anon_sym_BQUOTE] = ACTIONS(395),
    [anon_sym_CARET] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(395),
    [anon_sym_EQ] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_DOT_DOT] = ACTIONS(395),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(393),
    [anon_sym_DASH_GT] = ACTIONS(393),
    [anon_sym_EQ_GT] = ACTIONS(393),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(395),
    [anon_sym_DOT] = ACTIONS(395),
    [sym_version] = ACTIONS(395),
    [sym_number] = ACTIONS(395),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [aux_sym_interpolation_token1] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [anon_sym_LBRACE_COLON] = ACTIONS(393),
    [anon_sym_] = ACTIONS(393),
    [anon_sym_3] = ACTIONS(395),
    [sym_char] = ACTIONS(393),
    [anon_sym_true] = ACTIONS(395),
    [anon_sym_false] = ACTIONS(395),
    [anon_sym_maybe] = ACTIONS(395),
    [sym_null] = ACTIONS(395),
    [sym_builtin] = ACTIONS(395),
  },
  [39] = {
    [sym_shebang] = ACTIONS(441),
    [sym_comment] = ACTIONS(441),
    [sym_label] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(441),
    [anon_sym_POUND_LBRACK] = ACTIONS(441),
    [anon_sym_BANG] = ACTIONS(443),
    [anon_sym_BANG_BANG] = ACTIONS(441),
    [anon_sym_TILDE] = ACTIONS(443),
    [anon_sym_BSLASH] = ACTIONS(441),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_POUND] = ACTIONS(443),
    [anon_sym_DOLLAR] = ACTIONS(441),
    [anon_sym_QMARK] = ACTIONS(441),
    [anon_sym_BQUOTE] = ACTIONS(443),
    [anon_sym_CARET] = ACTIONS(441),
    [anon_sym_STAR] = ACTIONS(441),
    [anon_sym_SLASH] = ACTIONS(441),
    [anon_sym_PERCENT] = ACTIONS(441),
    [anon_sym_PLUS] = ACTIONS(441),
    [anon_sym_DASH] = ACTIONS(443),
    [anon_sym_EQ] = ACTIONS(443),
    [anon_sym_LT] = ACTIONS(441),
    [anon_sym_GT] = ACTIONS(441),
    [anon_sym_AMP] = ACTIONS(441),
    [anon_sym_PIPE] = ACTIONS(441),
    [anon_sym_DOT_DOT] = ACTIONS(443),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(441),
    [anon_sym_EQ_GT] = ACTIONS(441),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_SQUOTE] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(443),
    [sym_version] = ACTIONS(443),
    [sym_number] = ACTIONS(443),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [aux_sym_interpolation_token1] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(443),
    [anon_sym_LBRACE_COLON] = ACTIONS(441),
    [anon_sym_] = ACTIONS(441),
    [anon_sym_3] = ACTIONS(443),
    [sym_char] = ACTIONS(441),
    [anon_sym_true] = ACTIONS(443),
    [anon_sym_false] = ACTIONS(443),
    [anon_sym_maybe] = ACTIONS(443),
    [sym_null] = ACTIONS(443),
    [sym_builtin] = ACTIONS(443),
  },
  [40] = {
    [sym_shebang] = ACTIONS(437),
    [sym_comment] = ACTIONS(437),
    [sym_label] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_RBRACK] = ACTIONS(437),
    [anon_sym_POUND_LBRACK] = ACTIONS(437),
    [anon_sym_BANG] = ACTIONS(439),
    [anon_sym_BANG_BANG] = ACTIONS(437),
    [anon_sym_TILDE] = ACTIONS(439),
    [anon_sym_BSLASH] = ACTIONS(437),
    [anon_sym_AT] = ACTIONS(437),
    [anon_sym_POUND] = ACTIONS(439),
    [anon_sym_DOLLAR] = ACTIONS(437),
    [anon_sym_QMARK] = ACTIONS(437),
    [anon_sym_BQUOTE] = ACTIONS(439),
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_SLASH] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(385),
    [anon_sym_DASH] = ACTIONS(387),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_LT] = ACTIONS(391),
    [anon_sym_GT] = ACTIONS(391),
    [anon_sym_AMP] = ACTIONS(391),
    [anon_sym_PIPE] = ACTIONS(391),
    [anon_sym_DOT_DOT] = ACTIONS(389),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(391),
    [anon_sym_DASH_GT] = ACTIONS(391),
    [anon_sym_EQ_GT] = ACTIONS(391),
    [anon_sym_COLON_COLON] = ACTIONS(391),
    [anon_sym_SQUOTE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_DOT] = ACTIONS(439),
    [sym_version] = ACTIONS(439),
    [sym_number] = ACTIONS(439),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [aux_sym_interpolation_token1] = ACTIONS(439),
    [anon_sym_LBRACE] = ACTIONS(439),
    [anon_sym_LBRACE_COLON] = ACTIONS(437),
    [anon_sym_] = ACTIONS(437),
    [anon_sym_3] = ACTIONS(439),
    [sym_char] = ACTIONS(437),
    [anon_sym_true] = ACTIONS(439),
    [anon_sym_false] = ACTIONS(439),
    [anon_sym_maybe] = ACTIONS(439),
    [sym_null] = ACTIONS(439),
    [sym_builtin] = ACTIONS(439),
  },
  [41] = {
    [sym_shebang] = ACTIONS(425),
    [sym_comment] = ACTIONS(425),
    [sym_label] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(425),
    [anon_sym_RBRACK] = ACTIONS(425),
    [anon_sym_POUND_LBRACK] = ACTIONS(425),
    [anon_sym_BANG] = ACTIONS(427),
    [anon_sym_BANG_BANG] = ACTIONS(425),
    [anon_sym_TILDE] = ACTIONS(427),
    [anon_sym_BSLASH] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(425),
    [anon_sym_POUND] = ACTIONS(427),
    [anon_sym_DOLLAR] = ACTIONS(425),
    [anon_sym_QMARK] = ACTIONS(425),
    [anon_sym_BQUOTE] = ACTIONS(427),
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_SLASH] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(385),
    [anon_sym_DASH] = ACTIONS(387),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_LT] = ACTIONS(391),
    [anon_sym_GT] = ACTIONS(391),
    [anon_sym_AMP] = ACTIONS(391),
    [anon_sym_PIPE] = ACTIONS(391),
    [anon_sym_DOT_DOT] = ACTIONS(389),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(391),
    [anon_sym_DASH_GT] = ACTIONS(391),
    [anon_sym_EQ_GT] = ACTIONS(391),
    [anon_sym_COLON_COLON] = ACTIONS(391),
    [anon_sym_SQUOTE] = ACTIONS(425),
    [anon_sym_COLON] = ACTIONS(427),
    [anon_sym_DOT] = ACTIONS(427),
    [sym_version] = ACTIONS(427),
    [sym_number] = ACTIONS(427),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(425),
    [aux_sym_interpolation_token1] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(427),
    [anon_sym_LBRACE_COLON] = ACTIONS(425),
    [anon_sym_] = ACTIONS(425),
    [anon_sym_3] = ACTIONS(427),
    [sym_char] = ACTIONS(425),
    [anon_sym_true] = ACTIONS(427),
    [anon_sym_false] = ACTIONS(427),
    [anon_sym_maybe] = ACTIONS(427),
    [sym_null] = ACTIONS(427),
    [sym_builtin] = ACTIONS(427),
  },
  [42] = {
    [sym_shebang] = ACTIONS(369),
    [sym_comment] = ACTIONS(369),
    [sym_label] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
    [anon_sym_POUND_LBRACK] = ACTIONS(369),
    [anon_sym_BANG] = ACTIONS(371),
    [anon_sym_BANG_BANG] = ACTIONS(369),
    [anon_sym_TILDE] = ACTIONS(371),
    [anon_sym_BSLASH] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(371),
    [anon_sym_DOLLAR] = ACTIONS(369),
    [anon_sym_QMARK] = ACTIONS(369),
    [anon_sym_BQUOTE] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_SLASH] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(385),
    [anon_sym_DASH] = ACTIONS(387),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_AMP] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(369),
    [anon_sym_DASH_GT] = ACTIONS(369),
    [anon_sym_EQ_GT] = ACTIONS(369),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(371),
    [anon_sym_DOT] = ACTIONS(371),
    [sym_version] = ACTIONS(371),
    [sym_number] = ACTIONS(371),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [aux_sym_interpolation_token1] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_LBRACE_COLON] = ACTIONS(369),
    [anon_sym_] = ACTIONS(369),
    [anon_sym_3] = ACTIONS(371),
    [sym_char] = ACTIONS(369),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_false] = ACTIONS(371),
    [anon_sym_maybe] = ACTIONS(371),
    [sym_null] = ACTIONS(371),
    [sym_builtin] = ACTIONS(371),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [sym_shebang] = ACTIONS(381),
    [sym_comment] = ACTIONS(381),
    [sym_label] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_POUND_LBRACK] = ACTIONS(381),
    [anon_sym_BANG] = ACTIONS(383),
    [anon_sym_BANG_BANG] = ACTIONS(381),
    [anon_sym_TILDE] = ACTIONS(383),
    [anon_sym_BSLASH] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(383),
    [anon_sym_DOLLAR] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(381),
    [anon_sym_BQUOTE] = ACTIONS(383),
    [anon_sym_CARET] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(375),
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(375),
    [anon_sym_PLUS] = ACTIONS(429),
    [anon_sym_DASH] = ACTIONS(431),
    [anon_sym_EQ] = ACTIONS(433),
    [anon_sym_LT] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [anon_sym_AMP] = ACTIONS(435),
    [anon_sym_PIPE] = ACTIONS(435),
    [anon_sym_DOT_DOT] = ACTIONS(433),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(435),
    [anon_sym_DASH_GT] = ACTIONS(435),
    [anon_sym_EQ_GT] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(435),
    [anon_sym_SQUOTE] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_DOT] = ACTIONS(383),
    [sym_version] = ACTIONS(383),
    [sym_number] = ACTIONS(383),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [aux_sym_interpolation_token1] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_LBRACE_COLON] = ACTIONS(381),
    [anon_sym_] = ACTIONS(381),
    [anon_sym_3] = ACTIONS(383),
    [sym_char] = ACTIONS(381),
    [anon_sym_true] = ACTIONS(383),
    [anon_sym_false] = ACTIONS(383),
    [anon_sym_maybe] = ACTIONS(383),
    [sym_null] = ACTIONS(383),
    [sym_builtin] = ACTIONS(383),
  },
  [44] = {
    [sym_shebang] = ACTIONS(417),
    [sym_comment] = ACTIONS(417),
    [sym_label] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_POUND_LBRACK] = ACTIONS(417),
    [anon_sym_BANG] = ACTIONS(419),
    [anon_sym_BANG_BANG] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_BSLASH] = ACTIONS(417),
    [anon_sym_AT] = ACTIONS(417),
    [anon_sym_POUND] = ACTIONS(419),
    [anon_sym_DOLLAR] = ACTIONS(417),
    [anon_sym_QMARK] = ACTIONS(417),
    [anon_sym_BQUOTE] = ACTIONS(419),
    [anon_sym_CARET] = ACTIONS(417),
    [anon_sym_STAR] = ACTIONS(417),
    [anon_sym_SLASH] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(419),
    [anon_sym_EQ] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_DOT_DOT] = ACTIONS(419),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(417),
    [anon_sym_DASH_GT] = ACTIONS(417),
    [anon_sym_EQ_GT] = ACTIONS(417),
    [anon_sym_COLON_COLON] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(419),
    [anon_sym_DOT] = ACTIONS(419),
    [sym_version] = ACTIONS(419),
    [sym_number] = ACTIONS(419),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [aux_sym_interpolation_token1] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_LBRACE_COLON] = ACTIONS(417),
    [anon_sym_] = ACTIONS(417),
    [anon_sym_3] = ACTIONS(419),
    [sym_char] = ACTIONS(417),
    [anon_sym_true] = ACTIONS(419),
    [anon_sym_false] = ACTIONS(419),
    [anon_sym_maybe] = ACTIONS(419),
    [sym_null] = ACTIONS(419),
    [sym_builtin] = ACTIONS(419),
  },
  [45] = {
    [sym_shebang] = ACTIONS(401),
    [sym_comment] = ACTIONS(401),
    [sym_label] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(401),
    [anon_sym_POUND_LBRACK] = ACTIONS(401),
    [anon_sym_BANG] = ACTIONS(403),
    [anon_sym_BANG_BANG] = ACTIONS(401),
    [anon_sym_TILDE] = ACTIONS(403),
    [anon_sym_BSLASH] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(403),
    [anon_sym_DOLLAR] = ACTIONS(401),
    [anon_sym_QMARK] = ACTIONS(401),
    [anon_sym_BQUOTE] = ACTIONS(403),
    [anon_sym_CARET] = ACTIONS(401),
    [anon_sym_STAR] = ACTIONS(401),
    [anon_sym_SLASH] = ACTIONS(401),
    [anon_sym_PERCENT] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(401),
    [anon_sym_DASH] = ACTIONS(403),
    [anon_sym_EQ] = ACTIONS(403),
    [anon_sym_LT] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_AMP] = ACTIONS(401),
    [anon_sym_PIPE] = ACTIONS(401),
    [anon_sym_DOT_DOT] = ACTIONS(403),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(401),
    [anon_sym_DASH_GT] = ACTIONS(401),
    [anon_sym_EQ_GT] = ACTIONS(401),
    [anon_sym_COLON_COLON] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(401),
    [anon_sym_COLON] = ACTIONS(403),
    [anon_sym_DOT] = ACTIONS(403),
    [sym_version] = ACTIONS(403),
    [sym_number] = ACTIONS(403),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(401),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [aux_sym_interpolation_token1] = ACTIONS(403),
    [anon_sym_LBRACE] = ACTIONS(403),
    [anon_sym_LBRACE_COLON] = ACTIONS(401),
    [anon_sym_] = ACTIONS(401),
    [anon_sym_3] = ACTIONS(403),
    [sym_char] = ACTIONS(401),
    [anon_sym_true] = ACTIONS(403),
    [anon_sym_false] = ACTIONS(403),
    [anon_sym_maybe] = ACTIONS(403),
    [sym_null] = ACTIONS(403),
    [sym_builtin] = ACTIONS(403),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [sym_shebang] = ACTIONS(369),
    [sym_comment] = ACTIONS(369),
    [sym_label] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_POUND_LBRACK] = ACTIONS(369),
    [anon_sym_BANG] = ACTIONS(371),
    [anon_sym_BANG_BANG] = ACTIONS(369),
    [anon_sym_TILDE] = ACTIONS(371),
    [anon_sym_BSLASH] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(371),
    [anon_sym_DOLLAR] = ACTIONS(369),
    [anon_sym_QMARK] = ACTIONS(369),
    [anon_sym_BQUOTE] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(375),
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(375),
    [anon_sym_PLUS] = ACTIONS(429),
    [anon_sym_DASH] = ACTIONS(431),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_AMP] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(369),
    [anon_sym_DASH_GT] = ACTIONS(369),
    [anon_sym_EQ_GT] = ACTIONS(369),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(371),
    [anon_sym_DOT] = ACTIONS(371),
    [sym_version] = ACTIONS(371),
    [sym_number] = ACTIONS(371),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [aux_sym_interpolation_token1] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_LBRACE_COLON] = ACTIONS(369),
    [anon_sym_] = ACTIONS(369),
    [anon_sym_3] = ACTIONS(371),
    [sym_char] = ACTIONS(369),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_false] = ACTIONS(371),
    [anon_sym_maybe] = ACTIONS(371),
    [sym_null] = ACTIONS(371),
    [sym_builtin] = ACTIONS(371),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [sym_shebang] = ACTIONS(369),
    [sym_comment] = ACTIONS(369),
    [sym_label] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_POUND_LBRACK] = ACTIONS(369),
    [anon_sym_BANG] = ACTIONS(371),
    [anon_sym_BANG_BANG] = ACTIONS(369),
    [anon_sym_TILDE] = ACTIONS(371),
    [anon_sym_BSLASH] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(371),
    [anon_sym_DOLLAR] = ACTIONS(369),
    [anon_sym_QMARK] = ACTIONS(369),
    [anon_sym_BQUOTE] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(369),
    [anon_sym_SLASH] = ACTIONS(369),
    [anon_sym_PERCENT] = ACTIONS(369),
    [anon_sym_PLUS] = ACTIONS(369),
    [anon_sym_DASH] = ACTIONS(371),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_AMP] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(369),
    [anon_sym_DASH_GT] = ACTIONS(369),
    [anon_sym_EQ_GT] = ACTIONS(369),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(371),
    [anon_sym_DOT] = ACTIONS(371),
    [sym_version] = ACTIONS(371),
    [sym_number] = ACTIONS(371),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [aux_sym_interpolation_token1] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_LBRACE_COLON] = ACTIONS(369),
    [anon_sym_] = ACTIONS(369),
    [anon_sym_3] = ACTIONS(371),
    [sym_char] = ACTIONS(369),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_false] = ACTIONS(371),
    [anon_sym_maybe] = ACTIONS(371),
    [sym_null] = ACTIONS(371),
    [sym_builtin] = ACTIONS(371),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [sym_shebang] = ACTIONS(369),
    [sym_comment] = ACTIONS(369),
    [sym_label] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_POUND_LBRACK] = ACTIONS(369),
    [anon_sym_BANG] = ACTIONS(371),
    [anon_sym_BANG_BANG] = ACTIONS(369),
    [anon_sym_TILDE] = ACTIONS(371),
    [anon_sym_BSLASH] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(371),
    [anon_sym_DOLLAR] = ACTIONS(369),
    [anon_sym_QMARK] = ACTIONS(369),
    [anon_sym_BQUOTE] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(369),
    [anon_sym_SLASH] = ACTIONS(369),
    [anon_sym_PERCENT] = ACTIONS(369),
    [anon_sym_PLUS] = ACTIONS(369),
    [anon_sym_DASH] = ACTIONS(371),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_AMP] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(369),
    [anon_sym_DASH_GT] = ACTIONS(369),
    [anon_sym_EQ_GT] = ACTIONS(369),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(371),
    [anon_sym_DOT] = ACTIONS(371),
    [sym_version] = ACTIONS(371),
    [sym_number] = ACTIONS(371),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [aux_sym_interpolation_token1] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_LBRACE_COLON] = ACTIONS(369),
    [anon_sym_] = ACTIONS(369),
    [anon_sym_3] = ACTIONS(371),
    [sym_char] = ACTIONS(369),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_false] = ACTIONS(371),
    [anon_sym_maybe] = ACTIONS(371),
    [sym_null] = ACTIONS(371),
    [sym_builtin] = ACTIONS(371),
  },
  [49] = {
    [sym_shebang] = ACTIONS(457),
    [sym_comment] = ACTIONS(457),
    [sym_label] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(457),
    [anon_sym_POUND_LBRACK] = ACTIONS(457),
    [anon_sym_BANG] = ACTIONS(459),
    [anon_sym_BANG_BANG] = ACTIONS(457),
    [anon_sym_TILDE] = ACTIONS(459),
    [anon_sym_BSLASH] = ACTIONS(457),
    [anon_sym_AT] = ACTIONS(457),
    [anon_sym_POUND] = ACTIONS(459),
    [anon_sym_DOLLAR] = ACTIONS(457),
    [anon_sym_QMARK] = ACTIONS(457),
    [anon_sym_BQUOTE] = ACTIONS(459),
    [anon_sym_CARET] = ACTIONS(457),
    [anon_sym_STAR] = ACTIONS(457),
    [anon_sym_SLASH] = ACTIONS(457),
    [anon_sym_PERCENT] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_EQ] = ACTIONS(459),
    [anon_sym_LT] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(457),
    [anon_sym_AMP] = ACTIONS(457),
    [anon_sym_PIPE] = ACTIONS(457),
    [anon_sym_DOT_DOT] = ACTIONS(459),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(457),
    [anon_sym_DASH_GT] = ACTIONS(457),
    [anon_sym_EQ_GT] = ACTIONS(457),
    [anon_sym_COLON_COLON] = ACTIONS(457),
    [anon_sym_SQUOTE] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(459),
    [anon_sym_DOT] = ACTIONS(459),
    [sym_version] = ACTIONS(459),
    [sym_number] = ACTIONS(459),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [aux_sym_interpolation_token1] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(459),
    [anon_sym_LBRACE_COLON] = ACTIONS(457),
    [anon_sym_] = ACTIONS(457),
    [anon_sym_3] = ACTIONS(459),
    [sym_char] = ACTIONS(457),
    [anon_sym_true] = ACTIONS(459),
    [anon_sym_false] = ACTIONS(459),
    [anon_sym_maybe] = ACTIONS(459),
    [sym_null] = ACTIONS(459),
    [sym_builtin] = ACTIONS(459),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(457),
    [sym_shebang] = ACTIONS(457),
    [sym_comment] = ACTIONS(457),
    [sym_label] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_POUND_LBRACK] = ACTIONS(457),
    [anon_sym_BANG] = ACTIONS(459),
    [anon_sym_BANG_BANG] = ACTIONS(457),
    [anon_sym_TILDE] = ACTIONS(459),
    [anon_sym_BSLASH] = ACTIONS(457),
    [anon_sym_AT] = ACTIONS(457),
    [anon_sym_POUND] = ACTIONS(459),
    [anon_sym_DOLLAR] = ACTIONS(457),
    [anon_sym_QMARK] = ACTIONS(457),
    [anon_sym_BQUOTE] = ACTIONS(459),
    [anon_sym_CARET] = ACTIONS(457),
    [anon_sym_STAR] = ACTIONS(457),
    [anon_sym_SLASH] = ACTIONS(457),
    [anon_sym_PERCENT] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_EQ] = ACTIONS(459),
    [anon_sym_LT] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(457),
    [anon_sym_AMP] = ACTIONS(457),
    [anon_sym_PIPE] = ACTIONS(457),
    [anon_sym_DOT_DOT] = ACTIONS(459),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(457),
    [anon_sym_DASH_GT] = ACTIONS(457),
    [anon_sym_EQ_GT] = ACTIONS(457),
    [anon_sym_COLON_COLON] = ACTIONS(457),
    [anon_sym_SQUOTE] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(459),
    [anon_sym_DOT] = ACTIONS(459),
    [sym_version] = ACTIONS(459),
    [sym_number] = ACTIONS(459),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [aux_sym_interpolation_token1] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(459),
    [anon_sym_LBRACE_COLON] = ACTIONS(457),
    [anon_sym_] = ACTIONS(457),
    [anon_sym_3] = ACTIONS(459),
    [sym_char] = ACTIONS(457),
    [anon_sym_true] = ACTIONS(459),
    [anon_sym_false] = ACTIONS(459),
    [anon_sym_maybe] = ACTIONS(459),
    [sym_null] = ACTIONS(459),
    [sym_builtin] = ACTIONS(459),
  },
  [51] = {
    [sym_shebang] = ACTIONS(461),
    [sym_comment] = ACTIONS(461),
    [sym_label] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_RBRACK] = ACTIONS(461),
    [anon_sym_POUND_LBRACK] = ACTIONS(461),
    [anon_sym_BANG] = ACTIONS(463),
    [anon_sym_BANG_BANG] = ACTIONS(461),
    [anon_sym_TILDE] = ACTIONS(463),
    [anon_sym_BSLASH] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(463),
    [anon_sym_DOLLAR] = ACTIONS(461),
    [anon_sym_QMARK] = ACTIONS(461),
    [anon_sym_BQUOTE] = ACTIONS(463),
    [anon_sym_CARET] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_SLASH] = ACTIONS(461),
    [anon_sym_PERCENT] = ACTIONS(461),
    [anon_sym_PLUS] = ACTIONS(461),
    [anon_sym_DASH] = ACTIONS(463),
    [anon_sym_EQ] = ACTIONS(463),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_GT] = ACTIONS(461),
    [anon_sym_AMP] = ACTIONS(461),
    [anon_sym_PIPE] = ACTIONS(461),
    [anon_sym_DOT_DOT] = ACTIONS(463),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(461),
    [anon_sym_DASH_GT] = ACTIONS(461),
    [anon_sym_EQ_GT] = ACTIONS(461),
    [anon_sym_COLON_COLON] = ACTIONS(461),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(463),
    [anon_sym_DOT] = ACTIONS(463),
    [sym_version] = ACTIONS(463),
    [sym_number] = ACTIONS(463),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [aux_sym_interpolation_token1] = ACTIONS(463),
    [anon_sym_LBRACE] = ACTIONS(463),
    [anon_sym_LBRACE_COLON] = ACTIONS(461),
    [anon_sym_] = ACTIONS(461),
    [anon_sym_3] = ACTIONS(463),
    [sym_char] = ACTIONS(461),
    [anon_sym_true] = ACTIONS(463),
    [anon_sym_false] = ACTIONS(463),
    [anon_sym_maybe] = ACTIONS(463),
    [sym_null] = ACTIONS(463),
    [sym_builtin] = ACTIONS(463),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [sym_shebang] = ACTIONS(461),
    [sym_comment] = ACTIONS(461),
    [sym_label] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_POUND_LBRACK] = ACTIONS(461),
    [anon_sym_BANG] = ACTIONS(463),
    [anon_sym_BANG_BANG] = ACTIONS(461),
    [anon_sym_TILDE] = ACTIONS(463),
    [anon_sym_BSLASH] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(463),
    [anon_sym_DOLLAR] = ACTIONS(461),
    [anon_sym_QMARK] = ACTIONS(461),
    [anon_sym_BQUOTE] = ACTIONS(463),
    [anon_sym_CARET] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_SLASH] = ACTIONS(461),
    [anon_sym_PERCENT] = ACTIONS(461),
    [anon_sym_PLUS] = ACTIONS(461),
    [anon_sym_DASH] = ACTIONS(463),
    [anon_sym_EQ] = ACTIONS(463),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_GT] = ACTIONS(461),
    [anon_sym_AMP] = ACTIONS(461),
    [anon_sym_PIPE] = ACTIONS(461),
    [anon_sym_DOT_DOT] = ACTIONS(463),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(461),
    [anon_sym_DASH_GT] = ACTIONS(461),
    [anon_sym_EQ_GT] = ACTIONS(461),
    [anon_sym_COLON_COLON] = ACTIONS(461),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(463),
    [anon_sym_DOT] = ACTIONS(463),
    [sym_version] = ACTIONS(463),
    [sym_number] = ACTIONS(463),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [aux_sym_interpolation_token1] = ACTIONS(463),
    [anon_sym_LBRACE] = ACTIONS(463),
    [anon_sym_LBRACE_COLON] = ACTIONS(461),
    [anon_sym_] = ACTIONS(461),
    [anon_sym_3] = ACTIONS(463),
    [sym_char] = ACTIONS(461),
    [anon_sym_true] = ACTIONS(463),
    [anon_sym_false] = ACTIONS(463),
    [anon_sym_maybe] = ACTIONS(463),
    [sym_null] = ACTIONS(463),
    [sym_builtin] = ACTIONS(463),
  },
  [53] = {
    [sym_shebang] = ACTIONS(369),
    [sym_comment] = ACTIONS(369),
    [sym_label] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
    [anon_sym_POUND_LBRACK] = ACTIONS(369),
    [anon_sym_BANG] = ACTIONS(371),
    [anon_sym_BANG_BANG] = ACTIONS(369),
    [anon_sym_TILDE] = ACTIONS(371),
    [anon_sym_BSLASH] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(371),
    [anon_sym_DOLLAR] = ACTIONS(369),
    [anon_sym_QMARK] = ACTIONS(369),
    [anon_sym_BQUOTE] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(369),
    [anon_sym_SLASH] = ACTIONS(369),
    [anon_sym_PERCENT] = ACTIONS(369),
    [anon_sym_PLUS] = ACTIONS(369),
    [anon_sym_DASH] = ACTIONS(371),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_AMP] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(369),
    [anon_sym_DASH_GT] = ACTIONS(369),
    [anon_sym_EQ_GT] = ACTIONS(369),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(371),
    [anon_sym_DOT] = ACTIONS(371),
    [sym_version] = ACTIONS(371),
    [sym_number] = ACTIONS(371),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [aux_sym_interpolation_token1] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_LBRACE_COLON] = ACTIONS(369),
    [anon_sym_] = ACTIONS(369),
    [anon_sym_3] = ACTIONS(371),
    [sym_char] = ACTIONS(369),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_false] = ACTIONS(371),
    [anon_sym_maybe] = ACTIONS(371),
    [sym_null] = ACTIONS(371),
    [sym_builtin] = ACTIONS(371),
  },
  [54] = {
    [sym_shebang] = ACTIONS(369),
    [sym_comment] = ACTIONS(369),
    [sym_label] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
    [anon_sym_POUND_LBRACK] = ACTIONS(369),
    [anon_sym_BANG] = ACTIONS(371),
    [anon_sym_BANG_BANG] = ACTIONS(369),
    [anon_sym_TILDE] = ACTIONS(371),
    [anon_sym_BSLASH] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(371),
    [anon_sym_DOLLAR] = ACTIONS(369),
    [anon_sym_QMARK] = ACTIONS(369),
    [anon_sym_BQUOTE] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(369),
    [anon_sym_SLASH] = ACTIONS(369),
    [anon_sym_PERCENT] = ACTIONS(369),
    [anon_sym_PLUS] = ACTIONS(369),
    [anon_sym_DASH] = ACTIONS(371),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_AMP] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(369),
    [anon_sym_DASH_GT] = ACTIONS(369),
    [anon_sym_EQ_GT] = ACTIONS(369),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(371),
    [anon_sym_DOT] = ACTIONS(371),
    [sym_version] = ACTIONS(371),
    [sym_number] = ACTIONS(371),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [aux_sym_interpolation_token1] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_LBRACE_COLON] = ACTIONS(369),
    [anon_sym_] = ACTIONS(369),
    [anon_sym_3] = ACTIONS(371),
    [sym_char] = ACTIONS(369),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_false] = ACTIONS(371),
    [anon_sym_maybe] = ACTIONS(371),
    [sym_null] = ACTIONS(371),
    [sym_builtin] = ACTIONS(371),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [sym_shebang] = ACTIONS(465),
    [sym_comment] = ACTIONS(465),
    [sym_label] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(465),
    [anon_sym_POUND_LBRACK] = ACTIONS(465),
    [anon_sym_BANG] = ACTIONS(467),
    [anon_sym_BANG_BANG] = ACTIONS(465),
    [anon_sym_TILDE] = ACTIONS(467),
    [anon_sym_BSLASH] = ACTIONS(465),
    [anon_sym_AT] = ACTIONS(465),
    [anon_sym_POUND] = ACTIONS(467),
    [anon_sym_DOLLAR] = ACTIONS(465),
    [anon_sym_QMARK] = ACTIONS(465),
    [anon_sym_BQUOTE] = ACTIONS(467),
    [anon_sym_CARET] = ACTIONS(465),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_SLASH] = ACTIONS(465),
    [anon_sym_PERCENT] = ACTIONS(465),
    [anon_sym_PLUS] = ACTIONS(465),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_EQ] = ACTIONS(467),
    [anon_sym_LT] = ACTIONS(465),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_AMP] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_DOT_DOT] = ACTIONS(467),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(465),
    [anon_sym_DASH_GT] = ACTIONS(465),
    [anon_sym_EQ_GT] = ACTIONS(465),
    [anon_sym_COLON_COLON] = ACTIONS(465),
    [anon_sym_SQUOTE] = ACTIONS(465),
    [anon_sym_COLON] = ACTIONS(467),
    [anon_sym_DOT] = ACTIONS(467),
    [sym_version] = ACTIONS(467),
    [sym_number] = ACTIONS(467),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(465),
    [aux_sym_interpolation_token1] = ACTIONS(467),
    [anon_sym_LBRACE] = ACTIONS(467),
    [anon_sym_LBRACE_COLON] = ACTIONS(465),
    [anon_sym_] = ACTIONS(465),
    [anon_sym_3] = ACTIONS(467),
    [sym_char] = ACTIONS(465),
    [anon_sym_true] = ACTIONS(467),
    [anon_sym_false] = ACTIONS(467),
    [anon_sym_maybe] = ACTIONS(467),
    [sym_null] = ACTIONS(467),
    [sym_builtin] = ACTIONS(467),
  },
  [56] = {
    [sym_shebang] = ACTIONS(465),
    [sym_comment] = ACTIONS(465),
    [sym_label] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(465),
    [anon_sym_RBRACK] = ACTIONS(465),
    [anon_sym_POUND_LBRACK] = ACTIONS(465),
    [anon_sym_BANG] = ACTIONS(467),
    [anon_sym_BANG_BANG] = ACTIONS(465),
    [anon_sym_TILDE] = ACTIONS(467),
    [anon_sym_BSLASH] = ACTIONS(465),
    [anon_sym_AT] = ACTIONS(465),
    [anon_sym_POUND] = ACTIONS(467),
    [anon_sym_DOLLAR] = ACTIONS(465),
    [anon_sym_QMARK] = ACTIONS(465),
    [anon_sym_BQUOTE] = ACTIONS(467),
    [anon_sym_CARET] = ACTIONS(465),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_SLASH] = ACTIONS(465),
    [anon_sym_PERCENT] = ACTIONS(465),
    [anon_sym_PLUS] = ACTIONS(465),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_EQ] = ACTIONS(467),
    [anon_sym_LT] = ACTIONS(465),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_AMP] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_DOT_DOT] = ACTIONS(467),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(465),
    [anon_sym_DASH_GT] = ACTIONS(465),
    [anon_sym_EQ_GT] = ACTIONS(465),
    [anon_sym_COLON_COLON] = ACTIONS(465),
    [anon_sym_SQUOTE] = ACTIONS(465),
    [anon_sym_COLON] = ACTIONS(467),
    [anon_sym_DOT] = ACTIONS(467),
    [sym_version] = ACTIONS(467),
    [sym_number] = ACTIONS(467),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(465),
    [aux_sym_interpolation_token1] = ACTIONS(467),
    [anon_sym_LBRACE] = ACTIONS(467),
    [anon_sym_LBRACE_COLON] = ACTIONS(465),
    [anon_sym_] = ACTIONS(465),
    [anon_sym_3] = ACTIONS(467),
    [sym_char] = ACTIONS(465),
    [anon_sym_true] = ACTIONS(467),
    [anon_sym_false] = ACTIONS(467),
    [anon_sym_maybe] = ACTIONS(467),
    [sym_null] = ACTIONS(467),
    [sym_builtin] = ACTIONS(467),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(469),
    [sym_shebang] = ACTIONS(469),
    [sym_comment] = ACTIONS(469),
    [sym_label] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_POUND_LBRACK] = ACTIONS(469),
    [anon_sym_BANG] = ACTIONS(471),
    [anon_sym_BANG_BANG] = ACTIONS(469),
    [anon_sym_TILDE] = ACTIONS(471),
    [anon_sym_BSLASH] = ACTIONS(469),
    [anon_sym_AT] = ACTIONS(469),
    [anon_sym_POUND] = ACTIONS(471),
    [anon_sym_DOLLAR] = ACTIONS(469),
    [anon_sym_QMARK] = ACTIONS(469),
    [anon_sym_BQUOTE] = ACTIONS(471),
    [anon_sym_CARET] = ACTIONS(469),
    [anon_sym_STAR] = ACTIONS(469),
    [anon_sym_SLASH] = ACTIONS(469),
    [anon_sym_PERCENT] = ACTIONS(469),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(471),
    [anon_sym_EQ] = ACTIONS(471),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_AMP] = ACTIONS(469),
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_DOT_DOT] = ACTIONS(471),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(469),
    [anon_sym_DASH_GT] = ACTIONS(469),
    [anon_sym_EQ_GT] = ACTIONS(469),
    [anon_sym_COLON_COLON] = ACTIONS(469),
    [anon_sym_SQUOTE] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(471),
    [anon_sym_DOT] = ACTIONS(471),
    [sym_version] = ACTIONS(471),
    [sym_number] = ACTIONS(471),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(469),
    [anon_sym_DQUOTE] = ACTIONS(469),
    [aux_sym_interpolation_token1] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(471),
    [anon_sym_LBRACE_COLON] = ACTIONS(469),
    [anon_sym_] = ACTIONS(469),
    [anon_sym_3] = ACTIONS(471),
    [sym_char] = ACTIONS(469),
    [anon_sym_true] = ACTIONS(471),
    [anon_sym_false] = ACTIONS(471),
    [anon_sym_maybe] = ACTIONS(471),
    [sym_null] = ACTIONS(471),
    [sym_builtin] = ACTIONS(471),
  },
  [58] = {
    [sym_shebang] = ACTIONS(469),
    [sym_comment] = ACTIONS(469),
    [sym_label] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_RBRACK] = ACTIONS(469),
    [anon_sym_POUND_LBRACK] = ACTIONS(469),
    [anon_sym_BANG] = ACTIONS(471),
    [anon_sym_BANG_BANG] = ACTIONS(469),
    [anon_sym_TILDE] = ACTIONS(471),
    [anon_sym_BSLASH] = ACTIONS(469),
    [anon_sym_AT] = ACTIONS(469),
    [anon_sym_POUND] = ACTIONS(471),
    [anon_sym_DOLLAR] = ACTIONS(469),
    [anon_sym_QMARK] = ACTIONS(469),
    [anon_sym_BQUOTE] = ACTIONS(471),
    [anon_sym_CARET] = ACTIONS(469),
    [anon_sym_STAR] = ACTIONS(469),
    [anon_sym_SLASH] = ACTIONS(469),
    [anon_sym_PERCENT] = ACTIONS(469),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(471),
    [anon_sym_EQ] = ACTIONS(471),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_AMP] = ACTIONS(469),
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_DOT_DOT] = ACTIONS(471),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(469),
    [anon_sym_DASH_GT] = ACTIONS(469),
    [anon_sym_EQ_GT] = ACTIONS(469),
    [anon_sym_COLON_COLON] = ACTIONS(469),
    [anon_sym_SQUOTE] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(471),
    [anon_sym_DOT] = ACTIONS(471),
    [sym_version] = ACTIONS(471),
    [sym_number] = ACTIONS(471),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(469),
    [anon_sym_DQUOTE] = ACTIONS(469),
    [aux_sym_interpolation_token1] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(471),
    [anon_sym_LBRACE_COLON] = ACTIONS(469),
    [anon_sym_] = ACTIONS(469),
    [anon_sym_3] = ACTIONS(471),
    [sym_char] = ACTIONS(469),
    [anon_sym_true] = ACTIONS(471),
    [anon_sym_false] = ACTIONS(471),
    [anon_sym_maybe] = ACTIONS(471),
    [sym_null] = ACTIONS(471),
    [sym_builtin] = ACTIONS(471),
  },
  [59] = {
    [sym_block] = STATE(15),
    [sym_dictionary] = STATE(15),
    [sym__expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_literal] = STATE(15),
    [sym_type_annotation] = STATE(15),
    [sym_attribute] = STATE(15),
    [sym_color] = STATE(15),
    [sym_unit] = STATE(15),
    [sym_interpolated_string] = STATE(15),
    [sym_string] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_identifier] = STATE(15),
    [aux_sym_function_call_repeat1] = STATE(61),
    [sym_shebang] = ACTIONS(473),
    [sym_comment] = ACTIONS(473),
    [sym_label] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(473),
    [anon_sym_RBRACK] = ACTIONS(473),
    [anon_sym_POUND_LBRACK] = ACTIONS(473),
    [anon_sym_BANG] = ACTIONS(475),
    [anon_sym_BANG_BANG] = ACTIONS(473),
    [anon_sym_TILDE] = ACTIONS(475),
    [anon_sym_BSLASH] = ACTIONS(473),
    [anon_sym_AT] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(475),
    [anon_sym_DOLLAR] = ACTIONS(473),
    [anon_sym_QMARK] = ACTIONS(473),
    [anon_sym_BQUOTE] = ACTIONS(475),
    [anon_sym_SQUOTE] = ACTIONS(473),
    [anon_sym_COLON] = ACTIONS(473),
    [anon_sym_DOT] = ACTIONS(473),
    [sym_version] = ACTIONS(475),
    [sym_number] = ACTIONS(475),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(473),
    [anon_sym_DQUOTE] = ACTIONS(473),
    [aux_sym_interpolation_token1] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_LBRACE_COLON] = ACTIONS(473),
    [anon_sym_] = ACTIONS(473),
    [anon_sym_3] = ACTIONS(475),
    [sym_char] = ACTIONS(473),
    [anon_sym_true] = ACTIONS(475),
    [anon_sym_false] = ACTIONS(475),
    [anon_sym_maybe] = ACTIONS(475),
    [sym_null] = ACTIONS(475),
    [sym_builtin] = ACTIONS(475),
  },
  [60] = {
    [sym_block] = STATE(43),
    [sym_dictionary] = STATE(43),
    [sym__expression] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym_binary_expression] = STATE(43),
    [sym_literal] = STATE(43),
    [sym_type_annotation] = STATE(43),
    [sym_attribute] = STATE(43),
    [sym_color] = STATE(43),
    [sym_unit] = STATE(43),
    [sym_interpolated_string] = STATE(43),
    [sym_string] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_identifier] = STATE(43),
    [aux_sym_function_call_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(477),
    [sym_shebang] = ACTIONS(477),
    [sym_comment] = ACTIONS(477),
    [sym_label] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(479),
    [anon_sym_POUND_LBRACK] = ACTIONS(482),
    [anon_sym_BANG] = ACTIONS(485),
    [anon_sym_BANG_BANG] = ACTIONS(488),
    [anon_sym_TILDE] = ACTIONS(485),
    [anon_sym_BSLASH] = ACTIONS(488),
    [anon_sym_AT] = ACTIONS(488),
    [anon_sym_POUND] = ACTIONS(491),
    [anon_sym_DOLLAR] = ACTIONS(488),
    [anon_sym_QMARK] = ACTIONS(488),
    [anon_sym_BQUOTE] = ACTIONS(494),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(500),
    [anon_sym_DOT] = ACTIONS(503),
    [sym_version] = ACTIONS(506),
    [sym_number] = ACTIONS(506),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(512),
    [aux_sym_interpolation_token1] = ACTIONS(515),
    [anon_sym_LBRACE] = ACTIONS(518),
    [anon_sym_LBRACE_COLON] = ACTIONS(521),
    [anon_sym_] = ACTIONS(524),
    [anon_sym_3] = ACTIONS(527),
    [sym_char] = ACTIONS(530),
    [anon_sym_true] = ACTIONS(533),
    [anon_sym_false] = ACTIONS(533),
    [anon_sym_maybe] = ACTIONS(533),
    [sym_null] = ACTIONS(506),
    [sym_builtin] = ACTIONS(506),
  },
  [61] = {
    [sym_block] = STATE(15),
    [sym_dictionary] = STATE(15),
    [sym__expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_literal] = STATE(15),
    [sym_type_annotation] = STATE(15),
    [sym_attribute] = STATE(15),
    [sym_color] = STATE(15),
    [sym_unit] = STATE(15),
    [sym_interpolated_string] = STATE(15),
    [sym_string] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_identifier] = STATE(15),
    [aux_sym_function_call_repeat1] = STATE(61),
    [sym_shebang] = ACTIONS(477),
    [sym_comment] = ACTIONS(477),
    [sym_label] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(536),
    [anon_sym_RBRACK] = ACTIONS(477),
    [anon_sym_POUND_LBRACK] = ACTIONS(539),
    [anon_sym_BANG] = ACTIONS(542),
    [anon_sym_BANG_BANG] = ACTIONS(545),
    [anon_sym_TILDE] = ACTIONS(542),
    [anon_sym_BSLASH] = ACTIONS(545),
    [anon_sym_AT] = ACTIONS(545),
    [anon_sym_POUND] = ACTIONS(548),
    [anon_sym_DOLLAR] = ACTIONS(545),
    [anon_sym_QMARK] = ACTIONS(545),
    [anon_sym_BQUOTE] = ACTIONS(551),
    [anon_sym_SQUOTE] = ACTIONS(554),
    [anon_sym_COLON] = ACTIONS(557),
    [anon_sym_DOT] = ACTIONS(560),
    [sym_version] = ACTIONS(563),
    [sym_number] = ACTIONS(563),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(566),
    [anon_sym_DQUOTE] = ACTIONS(569),
    [aux_sym_interpolation_token1] = ACTIONS(572),
    [anon_sym_LBRACE] = ACTIONS(575),
    [anon_sym_LBRACE_COLON] = ACTIONS(578),
    [anon_sym_] = ACTIONS(581),
    [anon_sym_3] = ACTIONS(584),
    [sym_char] = ACTIONS(587),
    [anon_sym_true] = ACTIONS(590),
    [anon_sym_false] = ACTIONS(590),
    [anon_sym_maybe] = ACTIONS(590),
    [sym_null] = ACTIONS(563),
    [sym_builtin] = ACTIONS(563),
  },
  [62] = {
    [sym_block] = STATE(43),
    [sym_dictionary] = STATE(43),
    [sym__expression] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym_binary_expression] = STATE(43),
    [sym_literal] = STATE(43),
    [sym_type_annotation] = STATE(43),
    [sym_attribute] = STATE(43),
    [sym_color] = STATE(43),
    [sym_unit] = STATE(43),
    [sym_interpolated_string] = STATE(43),
    [sym_string] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_identifier] = STATE(43),
    [aux_sym_function_call_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(473),
    [sym_shebang] = ACTIONS(473),
    [sym_comment] = ACTIONS(473),
    [sym_label] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(473),
    [anon_sym_POUND_LBRACK] = ACTIONS(473),
    [anon_sym_BANG] = ACTIONS(475),
    [anon_sym_BANG_BANG] = ACTIONS(473),
    [anon_sym_TILDE] = ACTIONS(475),
    [anon_sym_BSLASH] = ACTIONS(473),
    [anon_sym_AT] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(475),
    [anon_sym_DOLLAR] = ACTIONS(473),
    [anon_sym_QMARK] = ACTIONS(473),
    [anon_sym_BQUOTE] = ACTIONS(475),
    [anon_sym_SQUOTE] = ACTIONS(473),
    [anon_sym_COLON] = ACTIONS(473),
    [anon_sym_DOT] = ACTIONS(473),
    [sym_version] = ACTIONS(475),
    [sym_number] = ACTIONS(475),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(473),
    [anon_sym_DQUOTE] = ACTIONS(473),
    [aux_sym_interpolation_token1] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_LBRACE_COLON] = ACTIONS(473),
    [anon_sym_] = ACTIONS(473),
    [anon_sym_3] = ACTIONS(475),
    [sym_char] = ACTIONS(473),
    [anon_sym_true] = ACTIONS(475),
    [anon_sym_false] = ACTIONS(475),
    [anon_sym_maybe] = ACTIONS(475),
    [sym_null] = ACTIONS(475),
    [sym_builtin] = ACTIONS(475),
  },
  [63] = {
    [sym_block] = STATE(98),
    [sym_dictionary] = STATE(98),
    [sym__expression] = STATE(98),
    [sym_unary_expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_literal] = STATE(98),
    [sym_type_annotation] = STATE(98),
    [sym_attribute] = STATE(98),
    [sym_color] = STATE(98),
    [sym_unit] = STATE(98),
    [sym_interpolated_string] = STATE(98),
    [sym_string] = STATE(98),
    [sym_boolean] = STATE(98),
    [sym_identifier] = STATE(98),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(593),
    [anon_sym_LBRACK] = ACTIONS(595),
    [anon_sym_RBRACK] = ACTIONS(593),
    [anon_sym_POUND_LBRACK] = ACTIONS(597),
    [anon_sym_BANG] = ACTIONS(599),
    [anon_sym_BANG_BANG] = ACTIONS(601),
    [anon_sym_TILDE] = ACTIONS(599),
    [anon_sym_BSLASH] = ACTIONS(601),
    [anon_sym_AT] = ACTIONS(601),
    [anon_sym_POUND] = ACTIONS(603),
    [anon_sym_DOLLAR] = ACTIONS(601),
    [anon_sym_QMARK] = ACTIONS(601),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [anon_sym_SQUOTE] = ACTIONS(607),
    [anon_sym_COLON] = ACTIONS(609),
    [anon_sym_DOT] = ACTIONS(611),
    [sym_version] = ACTIONS(613),
    [sym_number] = ACTIONS(613),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(615),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [aux_sym_interpolation_token1] = ACTIONS(619),
    [anon_sym_LBRACE] = ACTIONS(622),
    [anon_sym_LBRACE_COLON] = ACTIONS(624),
    [anon_sym_] = ACTIONS(626),
    [anon_sym_3] = ACTIONS(628),
    [sym_char] = ACTIONS(630),
    [anon_sym_true] = ACTIONS(632),
    [anon_sym_false] = ACTIONS(632),
    [anon_sym_maybe] = ACTIONS(632),
    [sym_null] = ACTIONS(613),
    [sym_builtin] = ACTIONS(613),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_interpolation_token1,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(41), 1,
      anon_sym_,
    ACTIONS(43), 1,
      anon_sym_3,
    ACTIONS(634), 1,
      aux_sym_unit_token1,
    ACTIONS(638), 1,
      sym_char,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(47), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(636), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(17), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(29), 14,
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
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(609), 1,
      anon_sym_COLON,
    ACTIONS(611), 1,
      anon_sym_DOT,
    ACTIONS(615), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(624), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(626), 1,
      anon_sym_,
    ACTIONS(628), 1,
      anon_sym_3,
    ACTIONS(640), 1,
      aux_sym_unit_token1,
    ACTIONS(644), 1,
      aux_sym_interpolation_token1,
    ACTIONS(646), 1,
      sym_char,
    ACTIONS(599), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(632), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(642), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(601), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(103), 14,
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
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(609), 1,
      anon_sym_COLON,
    ACTIONS(611), 1,
      anon_sym_DOT,
    ACTIONS(615), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(624), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(626), 1,
      anon_sym_,
    ACTIONS(628), 1,
      anon_sym_3,
    ACTIONS(644), 1,
      aux_sym_interpolation_token1,
    ACTIONS(646), 1,
      sym_char,
    ACTIONS(648), 1,
      aux_sym_color_token1,
    ACTIONS(599), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(632), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(642), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(601), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(103), 14,
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
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(187), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      aux_sym_interpolation_token1,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(211), 1,
      anon_sym_3,
    ACTIONS(650), 1,
      aux_sym_unit_token1,
    ACTIONS(654), 1,
      sym_char,
    ACTIONS(183), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(215), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(652), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(185), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(35), 14,
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
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_interpolation_token1,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(41), 1,
      anon_sym_,
    ACTIONS(43), 1,
      anon_sym_3,
    ACTIONS(638), 1,
      sym_char,
    ACTIONS(656), 1,
      aux_sym_color_token1,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(47), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(636), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(17), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(29), 14,
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
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(187), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      aux_sym_interpolation_token1,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(211), 1,
      anon_sym_3,
    ACTIONS(654), 1,
      sym_char,
    ACTIONS(658), 1,
      aux_sym_color_token1,
    ACTIONS(183), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(215), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(652), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(185), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(35), 14,
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
  [540] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_interpolation_token1,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(41), 1,
      anon_sym_,
    ACTIONS(43), 1,
      anon_sym_3,
    ACTIONS(662), 1,
      sym_char,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(47), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(660), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(17), 5,
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
  [627] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(609), 1,
      anon_sym_COLON,
    ACTIONS(611), 1,
      anon_sym_DOT,
    ACTIONS(615), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(624), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(626), 1,
      anon_sym_,
    ACTIONS(628), 1,
      anon_sym_3,
    ACTIONS(644), 1,
      aux_sym_interpolation_token1,
    ACTIONS(666), 1,
      sym_char,
    ACTIONS(599), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(632), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(664), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(601), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(96), 14,
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
  [714] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(609), 1,
      anon_sym_COLON,
    ACTIONS(611), 1,
      anon_sym_DOT,
    ACTIONS(615), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(624), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(626), 1,
      anon_sym_,
    ACTIONS(628), 1,
      anon_sym_3,
    ACTIONS(644), 1,
      aux_sym_interpolation_token1,
    ACTIONS(670), 1,
      sym_char,
    ACTIONS(599), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(632), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(668), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(601), 5,
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
  [801] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(609), 1,
      anon_sym_COLON,
    ACTIONS(611), 1,
      anon_sym_DOT,
    ACTIONS(615), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(624), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(626), 1,
      anon_sym_,
    ACTIONS(628), 1,
      anon_sym_3,
    ACTIONS(644), 1,
      aux_sym_interpolation_token1,
    ACTIONS(674), 1,
      sym_char,
    ACTIONS(599), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(632), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(672), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(601), 5,
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
  [888] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(609), 1,
      anon_sym_COLON,
    ACTIONS(611), 1,
      anon_sym_DOT,
    ACTIONS(615), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(624), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(626), 1,
      anon_sym_,
    ACTIONS(628), 1,
      anon_sym_3,
    ACTIONS(644), 1,
      aux_sym_interpolation_token1,
    ACTIONS(678), 1,
      sym_char,
    ACTIONS(599), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(632), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(676), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(601), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(88), 14,
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
  [975] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_interpolation_token1,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(41), 1,
      anon_sym_,
    ACTIONS(43), 1,
      anon_sym_3,
    ACTIONS(682), 1,
      sym_char,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(47), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(680), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(17), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(25), 14,
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
  [1062] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(187), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      aux_sym_interpolation_token1,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(211), 1,
      anon_sym_3,
    ACTIONS(686), 1,
      sym_char,
    ACTIONS(183), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(215), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(684), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(185), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(40), 14,
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
  [1149] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(187), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      aux_sym_interpolation_token1,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(211), 1,
      anon_sym_3,
    ACTIONS(654), 1,
      sym_char,
    ACTIONS(183), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(215), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(652), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(185), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(35), 14,
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
  [1236] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_interpolation_token1,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(41), 1,
      anon_sym_,
    ACTIONS(43), 1,
      anon_sym_3,
    ACTIONS(638), 1,
      sym_char,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(47), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(636), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(17), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(29), 14,
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
  [1323] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_interpolation_token1,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(41), 1,
      anon_sym_,
    ACTIONS(43), 1,
      anon_sym_3,
    ACTIONS(690), 1,
      sym_char,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(47), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(688), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(17), 5,
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
  [1410] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_BQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(609), 1,
      anon_sym_COLON,
    ACTIONS(611), 1,
      anon_sym_DOT,
    ACTIONS(615), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(624), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(626), 1,
      anon_sym_,
    ACTIONS(628), 1,
      anon_sym_3,
    ACTIONS(644), 1,
      aux_sym_interpolation_token1,
    ACTIONS(646), 1,
      sym_char,
    ACTIONS(599), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(632), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(642), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(601), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(103), 14,
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
  [1497] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(187), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      aux_sym_interpolation_token1,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(211), 1,
      anon_sym_3,
    ACTIONS(694), 1,
      sym_char,
    ACTIONS(183), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(215), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(692), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(185), 5,
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
  [1584] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_interpolation_token1,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(41), 1,
      anon_sym_,
    ACTIONS(43), 1,
      anon_sym_3,
    ACTIONS(698), 1,
      sym_char,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(47), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(696), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(17), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(13), 14,
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
  [1671] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_interpolation_token1,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(41), 1,
      anon_sym_,
    ACTIONS(43), 1,
      anon_sym_3,
    ACTIONS(702), 1,
      sym_char,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(47), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(700), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(17), 5,
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
  [1758] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(187), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      aux_sym_interpolation_token1,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(211), 1,
      anon_sym_3,
    ACTIONS(706), 1,
      sym_char,
    ACTIONS(183), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(215), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(704), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(185), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(54), 14,
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
  [1845] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(187), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      aux_sym_interpolation_token1,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(211), 1,
      anon_sym_3,
    ACTIONS(710), 1,
      sym_char,
    ACTIONS(183), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(215), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(708), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(185), 5,
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
  [1932] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(187), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      aux_sym_interpolation_token1,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(211), 1,
      anon_sym_3,
    ACTIONS(714), 1,
      sym_char,
    ACTIONS(183), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(215), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(712), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(185), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(14), 14,
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
  [2019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 14,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_POUND,
      anon_sym_BQUOTE,
      sym_version,
      sym_number,
      aux_sym_interpolation_token1,
      anon_sym_LBRACE,
      anon_sym_3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
      sym_null,
      sym_builtin,
    ACTIONS(401), 17,
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
      anon_sym_LBRACE_COLON,
      anon_sym_,
      sym_char,
  [2058] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_CARET,
    ACTIONS(720), 1,
      anon_sym_PLUS,
    ACTIONS(722), 1,
      anon_sym_DASH,
    ACTIONS(371), 3,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(718), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(369), 10,
      sym_label,
      anon_sym_RBRACK,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(409), 15,
      sym_label,
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
  [2120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(465), 15,
      sym_label,
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
  [2147] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_CARET,
    ACTIONS(718), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(371), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(369), 11,
      sym_label,
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
  [2178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(461), 15,
      sym_label,
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
  [2205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(457), 15,
      sym_label,
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
  [2232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_CARET,
    ACTIONS(371), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(369), 14,
      sym_label,
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
  [2261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(393), 15,
      sym_label,
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
  [2288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_CARET,
    ACTIONS(371), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(369), 14,
      sym_label,
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
  [2317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(401), 15,
      sym_label,
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
  [2344] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_CARET,
    ACTIONS(720), 1,
      anon_sym_PLUS,
    ACTIONS(722), 1,
      anon_sym_DASH,
    ACTIONS(730), 1,
      aux_sym_interpolation_token1,
    ACTIONS(724), 2,
      sym_label,
      anon_sym_RBRACK,
    ACTIONS(726), 2,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(718), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(728), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(397), 15,
      sym_label,
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
  [2410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(417), 15,
      sym_label,
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
    ACTIONS(443), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(441), 15,
      sym_label,
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
  [2464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(449), 15,
      sym_label,
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
  [2491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(453), 15,
      sym_label,
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
  [2518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(445), 15,
      sym_label,
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
  [2545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(421), 15,
      sym_label,
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
  [2572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(413), 15,
      sym_label,
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
  [2599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(469), 15,
      sym_label,
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
  [2626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 4,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      aux_sym_interpolation_token1,
    ACTIONS(405), 15,
      sym_label,
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
  [2653] = 5,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_PIPE,
    ACTIONS(738), 1,
      anon_sym_DQUOTE,
    ACTIONS(736), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(110), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2671] = 5,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_PIPE,
    ACTIONS(746), 1,
      anon_sym_DQUOTE,
    ACTIONS(743), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(110), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2689] = 5,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_PIPE,
    ACTIONS(750), 1,
      anon_sym_DQUOTE,
    ACTIONS(748), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(109), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2707] = 5,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_PIPE,
    ACTIONS(752), 1,
      anon_sym_DQUOTE,
    ACTIONS(736), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(110), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2725] = 5,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_PIPE,
    ACTIONS(756), 1,
      anon_sym_DQUOTE,
    ACTIONS(754), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(112), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2743] = 5,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_PIPE,
    ACTIONS(760), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(115), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2761] = 5,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_PIPE,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
    ACTIONS(736), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(110), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2779] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym_label,
    ACTIONS(767), 1,
      anon_sym_RBRACK,
    ACTIONS(769), 1,
      aux_sym_interpolation_token1,
    STATE(63), 1,
      sym_identifier,
    STATE(116), 1,
      aux_sym_dictionary_repeat1,
  [2798] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_label,
    ACTIONS(774), 1,
      anon_sym_RBRACK,
    ACTIONS(776), 1,
      aux_sym_interpolation_token1,
    STATE(63), 1,
      sym_identifier,
    STATE(118), 1,
      aux_sym_dictionary_repeat1,
  [2817] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_label,
    ACTIONS(776), 1,
      aux_sym_interpolation_token1,
    ACTIONS(778), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      sym_identifier,
    STATE(116), 1,
      aux_sym_dictionary_repeat1,
  [2836] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_label,
    ACTIONS(776), 1,
      aux_sym_interpolation_token1,
    ACTIONS(780), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      sym_identifier,
    STATE(116), 1,
      aux_sym_dictionary_repeat1,
  [2855] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_label,
    ACTIONS(776), 1,
      aux_sym_interpolation_token1,
    ACTIONS(782), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      sym_identifier,
    STATE(122), 1,
      aux_sym_dictionary_repeat1,
  [2874] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_label,
    ACTIONS(776), 1,
      aux_sym_interpolation_token1,
    ACTIONS(784), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      sym_identifier,
    STATE(119), 1,
      aux_sym_dictionary_repeat1,
  [2893] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_label,
    ACTIONS(776), 1,
      aux_sym_interpolation_token1,
    ACTIONS(786), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      sym_identifier,
    STATE(116), 1,
      aux_sym_dictionary_repeat1,
  [2912] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      aux_sym_string_repeat1,
    ACTIONS(788), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [2926] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
      aux_sym_string_repeat1,
    ACTIONS(792), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [2940] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      aux_sym_string_repeat1,
    ACTIONS(796), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [2954] = 2,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(800), 4,
      anon_sym_PIPE,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
      anon_sym_DQUOTE,
  [2964] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_string_repeat1,
    ACTIONS(802), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [2978] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      aux_sym_string_repeat1,
    ACTIONS(806), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [2992] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      aux_sym_string_repeat1,
    ACTIONS(796), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [3006] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      aux_sym_string_repeat1,
    ACTIONS(796), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [3020] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(815), 1,
      aux_sym_string_token3,
    STATE(144), 1,
      aux_sym_string_repeat3,
  [3033] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
    ACTIONS(817), 1,
      aux_sym_string_token2,
    STATE(135), 1,
      aux_sym_string_repeat2,
  [3046] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_2,
    ACTIONS(819), 1,
      aux_sym_string_token4,
    STATE(139), 1,
      aux_sym_string_repeat4,
  [3059] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(815), 1,
      aux_sym_string_token3,
    STATE(144), 1,
      aux_sym_string_repeat3,
  [3072] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    ACTIONS(821), 1,
      aux_sym_string_token2,
    STATE(151), 1,
      aux_sym_string_repeat2,
  [3085] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    ACTIONS(823), 1,
      aux_sym_string_token2,
    STATE(143), 1,
      aux_sym_string_repeat2,
  [3098] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(825), 1,
      aux_sym_string_token3,
    STATE(131), 1,
      aux_sym_string_repeat3,
  [3111] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_2,
    ACTIONS(827), 1,
      aux_sym_string_token4,
    STATE(145), 1,
      aux_sym_string_repeat4,
  [3124] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(829), 1,
      aux_sym_string_token4,
    ACTIONS(832), 1,
      anon_sym_2,
    STATE(139), 1,
      aux_sym_string_repeat4,
  [3137] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    ACTIONS(834), 1,
      aux_sym_string_token2,
    STATE(141), 1,
      aux_sym_string_repeat2,
  [3150] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_RBRACE,
    ACTIONS(821), 1,
      aux_sym_string_token2,
    STATE(151), 1,
      aux_sym_string_repeat2,
  [3163] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(815), 1,
      aux_sym_string_token3,
    STATE(144), 1,
      aux_sym_string_repeat3,
  [3176] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
    ACTIONS(821), 1,
      aux_sym_string_token2,
    STATE(151), 1,
      aux_sym_string_repeat2,
  [3189] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(836), 1,
      aux_sym_string_token3,
    ACTIONS(839), 1,
      anon_sym_COLON_RBRACE,
    STATE(144), 1,
      aux_sym_string_repeat3,
  [3202] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_2,
    ACTIONS(819), 1,
      aux_sym_string_token4,
    STATE(139), 1,
      aux_sym_string_repeat4,
  [3215] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_2,
    ACTIONS(819), 1,
      aux_sym_string_token4,
    STATE(139), 1,
      aux_sym_string_repeat4,
  [3228] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_2,
    ACTIONS(841), 1,
      aux_sym_string_token4,
    STATE(133), 1,
      aux_sym_string_repeat4,
  [3241] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(843), 1,
      aux_sym_string_token3,
    STATE(134), 1,
      aux_sym_string_repeat3,
  [3254] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(845), 1,
      aux_sym_string_token3,
    STATE(142), 1,
      aux_sym_string_repeat3,
  [3267] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_2,
    ACTIONS(847), 1,
      aux_sym_string_token4,
    STATE(146), 1,
      aux_sym_string_repeat4,
  [3280] = 4,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(849), 1,
      aux_sym_string_token2,
    ACTIONS(852), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_string_repeat2,
  [3293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      aux_sym_type_annotation_token1,
  [3300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      aux_sym_literal_token1,
  [3307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_literal_token1,
  [3314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      aux_sym_type_annotation_token1,
  [3321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_literal_token1,
  [3328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      ts_builtin_sym_end,
  [3335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_PIPE,
  [3342] = 2,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(804), 1,
      aux_sym_string_token5,
  [3349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      aux_sym_literal_token1,
  [3356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      aux_sym_interpolation_token1,
  [3363] = 2,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(794), 1,
      aux_sym_string_token5,
  [3370] = 2,
    ACTIONS(732), 1,
      sym_comment,
    ACTIONS(790), 1,
      aux_sym_string_token5,
  [3377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      aux_sym_literal_token1,
  [3384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      aux_sym_type_annotation_token1,
  [3391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      aux_sym_literal_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(64)] = 0,
  [SMALL_STATE(65)] = 90,
  [SMALL_STATE(66)] = 180,
  [SMALL_STATE(67)] = 270,
  [SMALL_STATE(68)] = 360,
  [SMALL_STATE(69)] = 450,
  [SMALL_STATE(70)] = 540,
  [SMALL_STATE(71)] = 627,
  [SMALL_STATE(72)] = 714,
  [SMALL_STATE(73)] = 801,
  [SMALL_STATE(74)] = 888,
  [SMALL_STATE(75)] = 975,
  [SMALL_STATE(76)] = 1062,
  [SMALL_STATE(77)] = 1149,
  [SMALL_STATE(78)] = 1236,
  [SMALL_STATE(79)] = 1323,
  [SMALL_STATE(80)] = 1410,
  [SMALL_STATE(81)] = 1497,
  [SMALL_STATE(82)] = 1584,
  [SMALL_STATE(83)] = 1671,
  [SMALL_STATE(84)] = 1758,
  [SMALL_STATE(85)] = 1845,
  [SMALL_STATE(86)] = 1932,
  [SMALL_STATE(87)] = 2019,
  [SMALL_STATE(88)] = 2058,
  [SMALL_STATE(89)] = 2093,
  [SMALL_STATE(90)] = 2120,
  [SMALL_STATE(91)] = 2147,
  [SMALL_STATE(92)] = 2178,
  [SMALL_STATE(93)] = 2205,
  [SMALL_STATE(94)] = 2232,
  [SMALL_STATE(95)] = 2261,
  [SMALL_STATE(96)] = 2288,
  [SMALL_STATE(97)] = 2317,
  [SMALL_STATE(98)] = 2344,
  [SMALL_STATE(99)] = 2383,
  [SMALL_STATE(100)] = 2410,
  [SMALL_STATE(101)] = 2437,
  [SMALL_STATE(102)] = 2464,
  [SMALL_STATE(103)] = 2491,
  [SMALL_STATE(104)] = 2518,
  [SMALL_STATE(105)] = 2545,
  [SMALL_STATE(106)] = 2572,
  [SMALL_STATE(107)] = 2599,
  [SMALL_STATE(108)] = 2626,
  [SMALL_STATE(109)] = 2653,
  [SMALL_STATE(110)] = 2671,
  [SMALL_STATE(111)] = 2689,
  [SMALL_STATE(112)] = 2707,
  [SMALL_STATE(113)] = 2725,
  [SMALL_STATE(114)] = 2743,
  [SMALL_STATE(115)] = 2761,
  [SMALL_STATE(116)] = 2779,
  [SMALL_STATE(117)] = 2798,
  [SMALL_STATE(118)] = 2817,
  [SMALL_STATE(119)] = 2836,
  [SMALL_STATE(120)] = 2855,
  [SMALL_STATE(121)] = 2874,
  [SMALL_STATE(122)] = 2893,
  [SMALL_STATE(123)] = 2912,
  [SMALL_STATE(124)] = 2926,
  [SMALL_STATE(125)] = 2940,
  [SMALL_STATE(126)] = 2954,
  [SMALL_STATE(127)] = 2964,
  [SMALL_STATE(128)] = 2978,
  [SMALL_STATE(129)] = 2992,
  [SMALL_STATE(130)] = 3006,
  [SMALL_STATE(131)] = 3020,
  [SMALL_STATE(132)] = 3033,
  [SMALL_STATE(133)] = 3046,
  [SMALL_STATE(134)] = 3059,
  [SMALL_STATE(135)] = 3072,
  [SMALL_STATE(136)] = 3085,
  [SMALL_STATE(137)] = 3098,
  [SMALL_STATE(138)] = 3111,
  [SMALL_STATE(139)] = 3124,
  [SMALL_STATE(140)] = 3137,
  [SMALL_STATE(141)] = 3150,
  [SMALL_STATE(142)] = 3163,
  [SMALL_STATE(143)] = 3176,
  [SMALL_STATE(144)] = 3189,
  [SMALL_STATE(145)] = 3202,
  [SMALL_STATE(146)] = 3215,
  [SMALL_STATE(147)] = 3228,
  [SMALL_STATE(148)] = 3241,
  [SMALL_STATE(149)] = 3254,
  [SMALL_STATE(150)] = 3267,
  [SMALL_STATE(151)] = 3280,
  [SMALL_STATE(152)] = 3293,
  [SMALL_STATE(153)] = 3300,
  [SMALL_STATE(154)] = 3307,
  [SMALL_STATE(155)] = 3314,
  [SMALL_STATE(156)] = 3321,
  [SMALL_STATE(157)] = 3328,
  [SMALL_STATE(158)] = 3335,
  [SMALL_STATE(159)] = 3342,
  [SMALL_STATE(160)] = 3349,
  [SMALL_STATE(161)] = 3356,
  [SMALL_STATE(162)] = 3363,
  [SMALL_STATE(163)] = 3370,
  [SMALL_STATE(164)] = 3377,
  [SMALL_STATE(165)] = 3384,
  [SMALL_STATE(166)] = 3391,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(10),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(117),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(77),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(77),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(69),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(67),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(166),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(165),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(164),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(15),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(111),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(124),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(45),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(136),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(137),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(138),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(162),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(15),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(44),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(5),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(120),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(78),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(78),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(68),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(64),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(160),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(155),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(156),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(43),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(113),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(123),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(18),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(140),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(149),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(150),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(163),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(43),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(22),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(162),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(123),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_annotation, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2, .production_id = 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 2, .production_id = 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, .production_id = 6),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3, .production_id = 6),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 3),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .dynamic_precedence = 1, .production_id = 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .dynamic_precedence = 1, .production_id = 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(5),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(120),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(78),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(78),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(68),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(64),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(160),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(155),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(156),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(43),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(113),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(123),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(18),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(140),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(149),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(150),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(163),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(43),
  [533] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(22),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(10),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(117),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(77),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(77),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(69),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(67),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(166),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(165),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(164),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(15),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(111),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(124),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(45),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(136),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(137),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(138),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(162),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(15),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 8), SHIFT_REPEAT(44),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 1, .production_id = 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 1, .production_id = 2), SHIFT_REPEAT(97),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, .production_id = 5),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, .production_id = 5),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(161),
  [743] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(110),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, .production_id = 7), SHIFT_REPEAT(63),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, .production_id = 7),
  [769] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, .production_id = 7), SHIFT_REPEAT(87),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(128),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [829] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat4, 2), SHIFT_REPEAT(139),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat4, 2),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [836] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(144),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [849] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(151),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [864] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
