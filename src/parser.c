#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 175
#define LARGE_STATE_COUNT 67
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
  anon_sym_COLON = 3,
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
  aux_sym_type_annotation_token1 = 34,
  anon_sym_DOT = 35,
  aux_sym_color_token1 = 36,
  aux_sym_unit_token1 = 37,
  sym_version = 38,
  sym_number = 39,
  anon_sym_TILDE_DQUOTE = 40,
  aux_sym_interpolated_string_token1 = 41,
  aux_sym_interpolated_string_token2 = 42,
  anon_sym_DQUOTE = 43,
  aux_sym_interpolation_token1 = 44,
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
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 4},
  [9] = {.index = 15, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
  [1] =
    {field_argument, 0},
  [2] =
    {field_argument, 1, .inherited = true},
    {field_function, 0},
  [4] =
    {field_name, 0},
    {field_value, 1},
  [6] =
    {field_identifier, 0},
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
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 8,
  [12] = 8,
  [13] = 6,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
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
  [30] = 30,
  [31] = 31,
  [32] = 30,
  [33] = 29,
  [34] = 28,
  [35] = 23,
  [36] = 31,
  [37] = 21,
  [38] = 27,
  [39] = 20,
  [40] = 26,
  [41] = 25,
  [42] = 24,
  [43] = 43,
  [44] = 19,
  [45] = 22,
  [46] = 17,
  [47] = 43,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 16,
  [53] = 53,
  [54] = 51,
  [55] = 48,
  [56] = 56,
  [57] = 49,
  [58] = 50,
  [59] = 53,
  [60] = 56,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 61,
  [65] = 62,
  [66] = 63,
  [67] = 67,
  [68] = 68,
  [69] = 68,
  [70] = 67,
  [71] = 71,
  [72] = 72,
  [73] = 68,
  [74] = 67,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 76,
  [82] = 80,
  [83] = 75,
  [84] = 77,
  [85] = 78,
  [86] = 79,
  [87] = 75,
  [88] = 76,
  [89] = 77,
  [90] = 78,
  [91] = 79,
  [92] = 92,
  [93] = 15,
  [94] = 92,
  [95] = 92,
  [96] = 49,
  [97] = 56,
  [98] = 15,
  [99] = 43,
  [100] = 48,
  [101] = 50,
  [102] = 53,
  [103] = 16,
  [104] = 51,
  [105] = 20,
  [106] = 106,
  [107] = 21,
  [108] = 22,
  [109] = 25,
  [110] = 26,
  [111] = 27,
  [112] = 31,
  [113] = 30,
  [114] = 29,
  [115] = 28,
  [116] = 23,
  [117] = 117,
  [118] = 118,
  [119] = 118,
  [120] = 118,
  [121] = 117,
  [122] = 117,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 124,
  [127] = 127,
  [128] = 124,
  [129] = 127,
  [130] = 127,
  [131] = 131,
  [132] = 132,
  [133] = 132,
  [134] = 134,
  [135] = 135,
  [136] = 132,
  [137] = 134,
  [138] = 134,
  [139] = 139,
  [140] = 140,
  [141] = 139,
  [142] = 142,
  [143] = 140,
  [144] = 144,
  [145] = 142,
  [146] = 146,
  [147] = 140,
  [148] = 144,
  [149] = 149,
  [150] = 150,
  [151] = 149,
  [152] = 146,
  [153] = 153,
  [154] = 154,
  [155] = 139,
  [156] = 142,
  [157] = 144,
  [158] = 146,
  [159] = 149,
  [160] = 160,
  [161] = 161,
  [162] = 160,
  [163] = 161,
  [164] = 161,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 166,
  [171] = 166,
  [172] = 160,
  [173] = 167,
  [174] = 167,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(57);
      if (lookahead == '`') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(171);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'g') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == 'y') ADVANCE(164);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '~') ADVANCE(49);
      if (lookahead == 171) ADVANCE(226);
      if (lookahead == 187) ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('G' <= lookahead && lookahead <= '_')) ADVANCE(211);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '`') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead == '~') ADVANCE(49);
      if (lookahead == 171) ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '`') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead == '~') ADVANCE(49);
      if (lookahead == 171) ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '`') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(171);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'g') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == 'y') ADVANCE(164);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead == '~') ADVANCE(49);
      if (lookahead == 171) ADVANCE(226);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '`') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead == '~') ADVANCE(49);
      if (lookahead == 171) ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(127);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '`') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead == '~') ADVANCE(49);
      if (lookahead == 171) ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(57);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(220);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 13:
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 14:
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == 187) ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(215);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(221);
      END_STATE();
    case 17:
      if (lookahead == 187) ADVANCE(225);
      END_STATE();
    case 18:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 19:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 20:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 29:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 30:
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(57);
      if (lookahead == '`') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '~') ADVANCE(49);
      if (lookahead == 171) ADVANCE(226);
      if (lookahead == 187) ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= '_')) ADVANCE(211);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(57);
      if (lookahead == '`') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '~') ADVANCE(49);
      if (lookahead == 171) ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= '_')) ADVANCE(211);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '`') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead == '~') ADVANCE(49);
      if (lookahead == 171) ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == '|') ADVANCE(40);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(40);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == 187) ADVANCE(40);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(220);
      if (lookahead == ':' ||
          lookahead == '}') ADVANCE(40);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '}') ADVANCE(221);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '"') ADVANCE(139);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '[') ADVANCE(46);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '[') ADVANCE(46);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_type_annotation_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(68);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(204);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 's') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_TILDE_DQUOTE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token2);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(211);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'h') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'k') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 's') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(203);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ':') ADVANCE(218);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LBRACE_COLON);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_COLON_RBRACE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != 187) ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead != 0 &&
          lookahead != 187) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_3);
      if (lookahead == 171) ADVANCE(222);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_string_token5);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_string_token5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_maybe);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_maybe);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_maybe);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '?') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
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
  [61] = {.lex_state = 32},
  [62] = {.lex_state = 32},
  [63] = {.lex_state = 32},
  [64] = {.lex_state = 32},
  [65] = {.lex_state = 32},
  [66] = {.lex_state = 32},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 15},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 15},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 15},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 15},
  [152] = {.lex_state = 11},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 15},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 15},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 13},
  [167] = {.lex_state = 227},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 13},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 227},
  [174] = {.lex_state = 227},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
    [sym_source_file] = STATE(168),
    [sym__statement] = STATE(14),
    [sym_assignment] = STATE(14),
    [sym_label] = STATE(82),
    [sym_block] = STATE(24),
    [sym_dictionary] = STATE(24),
    [sym_function_call] = STATE(14),
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
    [sym_identifier] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_shebang] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
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
    [anon_sym_DOT] = ACTIONS(25),
    [sym_version] = ACTIONS(27),
    [sym_number] = ACTIONS(27),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [aux_sym_interpolation_token1] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_COLON] = ACTIONS(37),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_3] = ACTIONS(41),
    [sym_char] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_maybe] = ACTIONS(45),
    [sym_null] = ACTIONS(27),
    [sym_builtin] = ACTIONS(47),
  },
  [2] = {
    [sym_block] = STATE(19),
    [sym_dictionary] = STATE(19),
    [sym__expression] = STATE(19),
    [sym_unary_expression] = STATE(19),
    [sym_binary_expression] = STATE(19),
    [sym_literal] = STATE(19),
    [sym_type_annotation] = STATE(19),
    [sym_attribute] = STATE(19),
    [sym_color] = STATE(19),
    [sym_unit] = STATE(19),
    [sym_interpolated_string] = STATE(19),
    [sym_string] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_identifier] = STATE(19),
    [aux_sym_function_call_repeat1] = STATE(65),
    [sym_shebang] = ACTIONS(49),
    [sym_comment] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_POUND_LBRACK] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(60),
    [anon_sym_BANG_BANG] = ACTIONS(63),
    [anon_sym_TILDE] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_AT] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DOLLAR] = ACTIONS(63),
    [anon_sym_QMARK] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(72),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(49),
    [anon_sym_DASH_GT] = ACTIONS(49),
    [anon_sym_EQ_GT] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(74),
    [anon_sym_DOT] = ACTIONS(77),
    [sym_version] = ACTIONS(80),
    [sym_number] = ACTIONS(80),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [aux_sym_interpolation_token1] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_LBRACE_COLON] = ACTIONS(95),
    [anon_sym_] = ACTIONS(98),
    [anon_sym_3] = ACTIONS(101),
    [sym_char] = ACTIONS(104),
    [anon_sym_true] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(107),
    [anon_sym_maybe] = ACTIONS(107),
    [sym_null] = ACTIONS(80),
    [sym_builtin] = ACTIONS(80),
  },
  [3] = {
    [sym_block] = STATE(19),
    [sym_dictionary] = STATE(19),
    [sym__expression] = STATE(19),
    [sym_unary_expression] = STATE(19),
    [sym_binary_expression] = STATE(19),
    [sym_literal] = STATE(19),
    [sym_type_annotation] = STATE(19),
    [sym_attribute] = STATE(19),
    [sym_color] = STATE(19),
    [sym_unit] = STATE(19),
    [sym_interpolated_string] = STATE(19),
    [sym_string] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_identifier] = STATE(19),
    [aux_sym_function_call_repeat1] = STATE(63),
    [sym_shebang] = ACTIONS(49),
    [sym_comment] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_POUND_LBRACK] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(60),
    [anon_sym_BANG_BANG] = ACTIONS(63),
    [anon_sym_TILDE] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_AT] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DOLLAR] = ACTIONS(63),
    [anon_sym_QMARK] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(72),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(49),
    [anon_sym_DASH_GT] = ACTIONS(49),
    [anon_sym_EQ_GT] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(74),
    [anon_sym_DOT] = ACTIONS(77),
    [sym_version] = ACTIONS(80),
    [sym_number] = ACTIONS(80),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [aux_sym_interpolation_token1] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_LBRACE_COLON] = ACTIONS(95),
    [anon_sym_] = ACTIONS(98),
    [anon_sym_3] = ACTIONS(101),
    [sym_char] = ACTIONS(104),
    [anon_sym_true] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(107),
    [anon_sym_maybe] = ACTIONS(107),
    [sym_null] = ACTIONS(80),
    [sym_builtin] = ACTIONS(80),
  },
  [4] = {
    [sym_block] = STATE(44),
    [sym_dictionary] = STATE(44),
    [sym__expression] = STATE(44),
    [sym_unary_expression] = STATE(44),
    [sym_binary_expression] = STATE(44),
    [sym_literal] = STATE(44),
    [sym_type_annotation] = STATE(44),
    [sym_attribute] = STATE(44),
    [sym_color] = STATE(44),
    [sym_unit] = STATE(44),
    [sym_interpolated_string] = STATE(44),
    [sym_string] = STATE(44),
    [sym_boolean] = STATE(44),
    [sym_identifier] = STATE(44),
    [aux_sym_function_call_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_shebang] = ACTIONS(49),
    [sym_comment] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(116),
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
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(72),
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
    [aux_sym_interpolation_token1] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_COLON] = ACTIONS(155),
    [anon_sym_] = ACTIONS(158),
    [anon_sym_3] = ACTIONS(161),
    [sym_char] = ACTIONS(164),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_maybe] = ACTIONS(167),
    [sym_null] = ACTIONS(140),
    [sym_builtin] = ACTIONS(140),
  },
  [5] = {
    [sym_block] = STATE(44),
    [sym_dictionary] = STATE(44),
    [sym__expression] = STATE(44),
    [sym_unary_expression] = STATE(44),
    [sym_binary_expression] = STATE(44),
    [sym_literal] = STATE(44),
    [sym_type_annotation] = STATE(44),
    [sym_attribute] = STATE(44),
    [sym_color] = STATE(44),
    [sym_unit] = STATE(44),
    [sym_interpolated_string] = STATE(44),
    [sym_string] = STATE(44),
    [sym_boolean] = STATE(44),
    [sym_identifier] = STATE(44),
    [aux_sym_function_call_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_shebang] = ACTIONS(49),
    [sym_comment] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(116),
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
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(72),
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
    [aux_sym_interpolation_token1] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_COLON] = ACTIONS(155),
    [anon_sym_] = ACTIONS(158),
    [anon_sym_3] = ACTIONS(161),
    [sym_char] = ACTIONS(164),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_maybe] = ACTIONS(167),
    [sym_null] = ACTIONS(140),
    [sym_builtin] = ACTIONS(140),
  },
  [6] = {
    [sym__statement] = STATE(9),
    [sym_assignment] = STATE(9),
    [sym_label] = STATE(80),
    [sym_block] = STATE(42),
    [sym_dictionary] = STATE(42),
    [sym_function_call] = STATE(9),
    [sym__expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_literal] = STATE(42),
    [sym_type_annotation] = STATE(42),
    [sym_attribute] = STATE(42),
    [sym_color] = STATE(42),
    [sym_unit] = STATE(42),
    [sym_interpolated_string] = STATE(42),
    [sym_string] = STATE(42),
    [sym_boolean] = STATE(42),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_shebang] = ACTIONS(173),
    [sym_comment] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(175),
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
    [anon_sym_DOT] = ACTIONS(193),
    [sym_version] = ACTIONS(195),
    [sym_number] = ACTIONS(195),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [aux_sym_interpolation_token1] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_LBRACE_COLON] = ACTIONS(205),
    [anon_sym_] = ACTIONS(207),
    [anon_sym_3] = ACTIONS(209),
    [sym_char] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(213),
    [anon_sym_false] = ACTIONS(213),
    [anon_sym_maybe] = ACTIONS(213),
    [sym_null] = ACTIONS(195),
    [sym_builtin] = ACTIONS(215),
  },
  [7] = {
    [sym__statement] = STATE(9),
    [sym_assignment] = STATE(9),
    [sym_label] = STATE(80),
    [sym_block] = STATE(42),
    [sym_dictionary] = STATE(42),
    [sym_function_call] = STATE(9),
    [sym__expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_literal] = STATE(42),
    [sym_type_annotation] = STATE(42),
    [sym_attribute] = STATE(42),
    [sym_color] = STATE(42),
    [sym_unit] = STATE(42),
    [sym_interpolated_string] = STATE(42),
    [sym_string] = STATE(42),
    [sym_boolean] = STATE(42),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_shebang] = ACTIONS(173),
    [sym_comment] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(217),
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
    [anon_sym_DOT] = ACTIONS(193),
    [sym_version] = ACTIONS(195),
    [sym_number] = ACTIONS(195),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [aux_sym_interpolation_token1] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_LBRACE_COLON] = ACTIONS(205),
    [anon_sym_] = ACTIONS(207),
    [anon_sym_3] = ACTIONS(209),
    [sym_char] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(213),
    [anon_sym_false] = ACTIONS(213),
    [anon_sym_maybe] = ACTIONS(213),
    [sym_null] = ACTIONS(195),
    [sym_builtin] = ACTIONS(215),
  },
  [8] = {
    [sym__statement] = STATE(6),
    [sym_assignment] = STATE(6),
    [sym_label] = STATE(80),
    [sym_block] = STATE(42),
    [sym_dictionary] = STATE(42),
    [sym_function_call] = STATE(6),
    [sym__expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_literal] = STATE(42),
    [sym_type_annotation] = STATE(42),
    [sym_attribute] = STATE(42),
    [sym_color] = STATE(42),
    [sym_unit] = STATE(42),
    [sym_interpolated_string] = STATE(42),
    [sym_string] = STATE(42),
    [sym_boolean] = STATE(42),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_shebang] = ACTIONS(219),
    [sym_comment] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(175),
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
    [anon_sym_DOT] = ACTIONS(193),
    [sym_version] = ACTIONS(195),
    [sym_number] = ACTIONS(195),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [aux_sym_interpolation_token1] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_LBRACE_COLON] = ACTIONS(205),
    [anon_sym_] = ACTIONS(207),
    [anon_sym_3] = ACTIONS(209),
    [sym_char] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(213),
    [anon_sym_false] = ACTIONS(213),
    [anon_sym_maybe] = ACTIONS(213),
    [sym_null] = ACTIONS(195),
    [sym_builtin] = ACTIONS(215),
  },
  [9] = {
    [sym__statement] = STATE(9),
    [sym_assignment] = STATE(9),
    [sym_label] = STATE(80),
    [sym_block] = STATE(42),
    [sym_dictionary] = STATE(42),
    [sym_function_call] = STATE(9),
    [sym__expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_literal] = STATE(42),
    [sym_type_annotation] = STATE(42),
    [sym_attribute] = STATE(42),
    [sym_color] = STATE(42),
    [sym_unit] = STATE(42),
    [sym_interpolated_string] = STATE(42),
    [sym_string] = STATE(42),
    [sym_boolean] = STATE(42),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_shebang] = ACTIONS(223),
    [sym_comment] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(226),
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
    [anon_sym_DOT] = ACTIONS(252),
    [sym_version] = ACTIONS(255),
    [sym_number] = ACTIONS(255),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [aux_sym_interpolation_token1] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_LBRACE_COLON] = ACTIONS(270),
    [anon_sym_] = ACTIONS(273),
    [anon_sym_3] = ACTIONS(276),
    [sym_char] = ACTIONS(279),
    [anon_sym_true] = ACTIONS(282),
    [anon_sym_false] = ACTIONS(282),
    [anon_sym_maybe] = ACTIONS(282),
    [sym_null] = ACTIONS(255),
    [sym_builtin] = ACTIONS(285),
  },
  [10] = {
    [sym__statement] = STATE(10),
    [sym_assignment] = STATE(10),
    [sym_label] = STATE(82),
    [sym_block] = STATE(24),
    [sym_dictionary] = STATE(24),
    [sym_function_call] = STATE(10),
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
    [sym_identifier] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_shebang] = ACTIONS(288),
    [sym_comment] = ACTIONS(288),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(294),
    [anon_sym_POUND_LBRACK] = ACTIONS(297),
    [anon_sym_BANG] = ACTIONS(300),
    [anon_sym_BANG_BANG] = ACTIONS(303),
    [anon_sym_TILDE] = ACTIONS(300),
    [anon_sym_BSLASH] = ACTIONS(303),
    [anon_sym_AT] = ACTIONS(303),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_DOLLAR] = ACTIONS(303),
    [anon_sym_QMARK] = ACTIONS(303),
    [anon_sym_BQUOTE] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(315),
    [sym_version] = ACTIONS(318),
    [sym_number] = ACTIONS(318),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [aux_sym_interpolation_token1] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(330),
    [anon_sym_LBRACE_COLON] = ACTIONS(333),
    [anon_sym_] = ACTIONS(336),
    [anon_sym_3] = ACTIONS(339),
    [sym_char] = ACTIONS(342),
    [anon_sym_true] = ACTIONS(345),
    [anon_sym_false] = ACTIONS(345),
    [anon_sym_maybe] = ACTIONS(345),
    [sym_null] = ACTIONS(318),
    [sym_builtin] = ACTIONS(348),
  },
  [11] = {
    [sym__statement] = STATE(13),
    [sym_assignment] = STATE(13),
    [sym_label] = STATE(80),
    [sym_block] = STATE(42),
    [sym_dictionary] = STATE(42),
    [sym_function_call] = STATE(13),
    [sym__expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_literal] = STATE(42),
    [sym_type_annotation] = STATE(42),
    [sym_attribute] = STATE(42),
    [sym_color] = STATE(42),
    [sym_unit] = STATE(42),
    [sym_interpolated_string] = STATE(42),
    [sym_string] = STATE(42),
    [sym_boolean] = STATE(42),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(13),
    [sym_shebang] = ACTIONS(351),
    [sym_comment] = ACTIONS(351),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(353),
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
    [anon_sym_DOT] = ACTIONS(193),
    [sym_version] = ACTIONS(195),
    [sym_number] = ACTIONS(195),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [aux_sym_interpolation_token1] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_LBRACE_COLON] = ACTIONS(205),
    [anon_sym_] = ACTIONS(207),
    [anon_sym_3] = ACTIONS(209),
    [sym_char] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(213),
    [anon_sym_false] = ACTIONS(213),
    [anon_sym_maybe] = ACTIONS(213),
    [sym_null] = ACTIONS(195),
    [sym_builtin] = ACTIONS(215),
  },
  [12] = {
    [sym__statement] = STATE(7),
    [sym_assignment] = STATE(7),
    [sym_label] = STATE(80),
    [sym_block] = STATE(42),
    [sym_dictionary] = STATE(42),
    [sym_function_call] = STATE(7),
    [sym__expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_literal] = STATE(42),
    [sym_type_annotation] = STATE(42),
    [sym_attribute] = STATE(42),
    [sym_color] = STATE(42),
    [sym_unit] = STATE(42),
    [sym_interpolated_string] = STATE(42),
    [sym_string] = STATE(42),
    [sym_boolean] = STATE(42),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_shebang] = ACTIONS(355),
    [sym_comment] = ACTIONS(355),
    [anon_sym_COLON] = ACTIONS(175),
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
    [anon_sym_DOT] = ACTIONS(193),
    [sym_version] = ACTIONS(195),
    [sym_number] = ACTIONS(195),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [aux_sym_interpolation_token1] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_LBRACE_COLON] = ACTIONS(205),
    [anon_sym_] = ACTIONS(207),
    [anon_sym_3] = ACTIONS(209),
    [sym_char] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(213),
    [anon_sym_false] = ACTIONS(213),
    [anon_sym_maybe] = ACTIONS(213),
    [sym_null] = ACTIONS(195),
    [sym_builtin] = ACTIONS(215),
  },
  [13] = {
    [sym__statement] = STATE(9),
    [sym_assignment] = STATE(9),
    [sym_label] = STATE(80),
    [sym_block] = STATE(42),
    [sym_dictionary] = STATE(42),
    [sym_function_call] = STATE(9),
    [sym__expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_literal] = STATE(42),
    [sym_type_annotation] = STATE(42),
    [sym_attribute] = STATE(42),
    [sym_color] = STATE(42),
    [sym_unit] = STATE(42),
    [sym_interpolated_string] = STATE(42),
    [sym_string] = STATE(42),
    [sym_boolean] = STATE(42),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_shebang] = ACTIONS(173),
    [sym_comment] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(359),
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
    [anon_sym_DOT] = ACTIONS(193),
    [sym_version] = ACTIONS(195),
    [sym_number] = ACTIONS(195),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [aux_sym_interpolation_token1] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_LBRACE_COLON] = ACTIONS(205),
    [anon_sym_] = ACTIONS(207),
    [anon_sym_3] = ACTIONS(209),
    [sym_char] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(213),
    [anon_sym_false] = ACTIONS(213),
    [anon_sym_maybe] = ACTIONS(213),
    [sym_null] = ACTIONS(195),
    [sym_builtin] = ACTIONS(215),
  },
  [14] = {
    [sym__statement] = STATE(10),
    [sym_assignment] = STATE(10),
    [sym_label] = STATE(82),
    [sym_block] = STATE(24),
    [sym_dictionary] = STATE(24),
    [sym_function_call] = STATE(10),
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
    [sym_identifier] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(361),
    [sym_shebang] = ACTIONS(363),
    [sym_comment] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(9),
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
    [anon_sym_DOT] = ACTIONS(25),
    [sym_version] = ACTIONS(27),
    [sym_number] = ACTIONS(27),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [aux_sym_interpolation_token1] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_COLON] = ACTIONS(37),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_3] = ACTIONS(41),
    [sym_char] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_maybe] = ACTIONS(45),
    [sym_null] = ACTIONS(27),
    [sym_builtin] = ACTIONS(47),
  },
  [15] = {
    [sym_shebang] = ACTIONS(365),
    [sym_comment] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
    [anon_sym_POUND_LBRACK] = ACTIONS(365),
    [anon_sym_BANG] = ACTIONS(367),
    [anon_sym_BANG_BANG] = ACTIONS(365),
    [anon_sym_TILDE] = ACTIONS(367),
    [anon_sym_BSLASH] = ACTIONS(365),
    [anon_sym_AT] = ACTIONS(365),
    [anon_sym_POUND] = ACTIONS(367),
    [anon_sym_DOLLAR] = ACTIONS(365),
    [anon_sym_QMARK] = ACTIONS(365),
    [anon_sym_BQUOTE] = ACTIONS(367),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(365),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(367),
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_DOT_DOT] = ACTIONS(367),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(365),
    [anon_sym_DASH_GT] = ACTIONS(365),
    [anon_sym_EQ_GT] = ACTIONS(365),
    [anon_sym_COLON_COLON] = ACTIONS(365),
    [anon_sym_SQUOTE] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(367),
    [sym_version] = ACTIONS(367),
    [sym_number] = ACTIONS(367),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [aux_sym_interpolation_token1] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(367),
    [anon_sym_LBRACE_COLON] = ACTIONS(365),
    [anon_sym_] = ACTIONS(365),
    [anon_sym_3] = ACTIONS(367),
    [sym_char] = ACTIONS(365),
    [anon_sym_true] = ACTIONS(367),
    [anon_sym_false] = ACTIONS(367),
    [anon_sym_maybe] = ACTIONS(367),
    [sym_null] = ACTIONS(367),
    [sym_builtin] = ACTIONS(367),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [sym_shebang] = ACTIONS(369),
    [sym_comment] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(371),
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
    [anon_sym_CARET] = ACTIONS(369),
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
  [17] = {
    [sym_shebang] = ACTIONS(373),
    [sym_comment] = ACTIONS(373),
    [anon_sym_COLON] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(373),
    [anon_sym_POUND_LBRACK] = ACTIONS(373),
    [anon_sym_BANG] = ACTIONS(375),
    [anon_sym_BANG_BANG] = ACTIONS(373),
    [anon_sym_TILDE] = ACTIONS(375),
    [anon_sym_BSLASH] = ACTIONS(373),
    [anon_sym_AT] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(375),
    [anon_sym_DOLLAR] = ACTIONS(373),
    [anon_sym_QMARK] = ACTIONS(373),
    [anon_sym_BQUOTE] = ACTIONS(375),
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_SLASH] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_EQ] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_AMP] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(387),
    [anon_sym_DOT_DOT] = ACTIONS(385),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(387),
    [anon_sym_DASH_GT] = ACTIONS(387),
    [anon_sym_EQ_GT] = ACTIONS(387),
    [anon_sym_COLON_COLON] = ACTIONS(387),
    [anon_sym_SQUOTE] = ACTIONS(373),
    [anon_sym_DOT] = ACTIONS(375),
    [sym_version] = ACTIONS(375),
    [sym_number] = ACTIONS(375),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(373),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [aux_sym_interpolation_token1] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(375),
    [anon_sym_LBRACE_COLON] = ACTIONS(373),
    [anon_sym_] = ACTIONS(373),
    [anon_sym_3] = ACTIONS(375),
    [sym_char] = ACTIONS(373),
    [anon_sym_true] = ACTIONS(375),
    [anon_sym_false] = ACTIONS(375),
    [anon_sym_maybe] = ACTIONS(375),
    [sym_null] = ACTIONS(375),
    [sym_builtin] = ACTIONS(375),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [sym_shebang] = ACTIONS(365),
    [sym_comment] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_POUND_LBRACK] = ACTIONS(365),
    [anon_sym_BANG] = ACTIONS(367),
    [anon_sym_BANG_BANG] = ACTIONS(365),
    [anon_sym_TILDE] = ACTIONS(367),
    [anon_sym_BSLASH] = ACTIONS(365),
    [anon_sym_AT] = ACTIONS(365),
    [anon_sym_POUND] = ACTIONS(367),
    [anon_sym_DOLLAR] = ACTIONS(365),
    [anon_sym_QMARK] = ACTIONS(365),
    [anon_sym_BQUOTE] = ACTIONS(367),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(365),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(367),
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_DOT_DOT] = ACTIONS(367),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(365),
    [anon_sym_DASH_GT] = ACTIONS(365),
    [anon_sym_EQ_GT] = ACTIONS(365),
    [anon_sym_COLON_COLON] = ACTIONS(365),
    [anon_sym_SQUOTE] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(367),
    [sym_version] = ACTIONS(367),
    [sym_number] = ACTIONS(367),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [aux_sym_interpolation_token1] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(367),
    [anon_sym_LBRACE_COLON] = ACTIONS(365),
    [anon_sym_] = ACTIONS(365),
    [anon_sym_3] = ACTIONS(367),
    [sym_char] = ACTIONS(365),
    [anon_sym_true] = ACTIONS(367),
    [anon_sym_false] = ACTIONS(367),
    [anon_sym_maybe] = ACTIONS(367),
    [sym_null] = ACTIONS(367),
    [sym_builtin] = ACTIONS(367),
  },
  [19] = {
    [sym_shebang] = ACTIONS(389),
    [sym_comment] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(389),
    [anon_sym_POUND_LBRACK] = ACTIONS(389),
    [anon_sym_BANG] = ACTIONS(391),
    [anon_sym_BANG_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(391),
    [anon_sym_BSLASH] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(389),
    [anon_sym_POUND] = ACTIONS(391),
    [anon_sym_DOLLAR] = ACTIONS(389),
    [anon_sym_QMARK] = ACTIONS(389),
    [anon_sym_BQUOTE] = ACTIONS(391),
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_SLASH] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_EQ] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_AMP] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(387),
    [anon_sym_DOT_DOT] = ACTIONS(385),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(387),
    [anon_sym_DASH_GT] = ACTIONS(387),
    [anon_sym_EQ_GT] = ACTIONS(387),
    [anon_sym_COLON_COLON] = ACTIONS(387),
    [anon_sym_SQUOTE] = ACTIONS(389),
    [anon_sym_DOT] = ACTIONS(391),
    [sym_version] = ACTIONS(391),
    [sym_number] = ACTIONS(391),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(389),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [aux_sym_interpolation_token1] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(391),
    [anon_sym_LBRACE_COLON] = ACTIONS(389),
    [anon_sym_] = ACTIONS(389),
    [anon_sym_3] = ACTIONS(391),
    [sym_char] = ACTIONS(389),
    [anon_sym_true] = ACTIONS(391),
    [anon_sym_false] = ACTIONS(391),
    [anon_sym_maybe] = ACTIONS(391),
    [sym_null] = ACTIONS(391),
    [sym_builtin] = ACTIONS(391),
  },
  [20] = {
    [sym_shebang] = ACTIONS(393),
    [sym_comment] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(395),
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
  [21] = {
    [sym_shebang] = ACTIONS(397),
    [sym_comment] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(399),
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [sym_shebang] = ACTIONS(401),
    [sym_comment] = ACTIONS(401),
    [anon_sym_COLON] = ACTIONS(403),
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
  [23] = {
    [sym_shebang] = ACTIONS(405),
    [sym_comment] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [sym_shebang] = ACTIONS(409),
    [sym_comment] = ACTIONS(409),
    [anon_sym_COLON] = ACTIONS(411),
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
    [anon_sym_CARET] = ACTIONS(413),
    [anon_sym_STAR] = ACTIONS(415),
    [anon_sym_SLASH] = ACTIONS(415),
    [anon_sym_PERCENT] = ACTIONS(415),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(419),
    [anon_sym_EQ] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_DOT_DOT] = ACTIONS(421),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(423),
    [anon_sym_DASH_GT] = ACTIONS(423),
    [anon_sym_EQ_GT] = ACTIONS(423),
    [anon_sym_COLON_COLON] = ACTIONS(423),
    [anon_sym_SQUOTE] = ACTIONS(409),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(425),
    [sym_shebang] = ACTIONS(425),
    [sym_comment] = ACTIONS(425),
    [anon_sym_COLON] = ACTIONS(427),
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
    [anon_sym_CARET] = ACTIONS(425),
    [anon_sym_STAR] = ACTIONS(425),
    [anon_sym_SLASH] = ACTIONS(425),
    [anon_sym_PERCENT] = ACTIONS(425),
    [anon_sym_PLUS] = ACTIONS(425),
    [anon_sym_DASH] = ACTIONS(427),
    [anon_sym_EQ] = ACTIONS(427),
    [anon_sym_LT] = ACTIONS(425),
    [anon_sym_GT] = ACTIONS(425),
    [anon_sym_AMP] = ACTIONS(425),
    [anon_sym_PIPE] = ACTIONS(425),
    [anon_sym_DOT_DOT] = ACTIONS(427),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(425),
    [anon_sym_DASH_GT] = ACTIONS(425),
    [anon_sym_EQ_GT] = ACTIONS(425),
    [anon_sym_COLON_COLON] = ACTIONS(425),
    [anon_sym_SQUOTE] = ACTIONS(425),
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
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(429),
    [sym_shebang] = ACTIONS(429),
    [sym_comment] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_POUND_LBRACK] = ACTIONS(429),
    [anon_sym_BANG] = ACTIONS(431),
    [anon_sym_BANG_BANG] = ACTIONS(429),
    [anon_sym_TILDE] = ACTIONS(431),
    [anon_sym_BSLASH] = ACTIONS(429),
    [anon_sym_AT] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(431),
    [anon_sym_DOLLAR] = ACTIONS(429),
    [anon_sym_QMARK] = ACTIONS(429),
    [anon_sym_BQUOTE] = ACTIONS(431),
    [anon_sym_CARET] = ACTIONS(429),
    [anon_sym_STAR] = ACTIONS(429),
    [anon_sym_SLASH] = ACTIONS(429),
    [anon_sym_PERCENT] = ACTIONS(429),
    [anon_sym_PLUS] = ACTIONS(429),
    [anon_sym_DASH] = ACTIONS(431),
    [anon_sym_EQ] = ACTIONS(431),
    [anon_sym_LT] = ACTIONS(429),
    [anon_sym_GT] = ACTIONS(429),
    [anon_sym_AMP] = ACTIONS(429),
    [anon_sym_PIPE] = ACTIONS(429),
    [anon_sym_DOT_DOT] = ACTIONS(431),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(429),
    [anon_sym_DASH_GT] = ACTIONS(429),
    [anon_sym_EQ_GT] = ACTIONS(429),
    [anon_sym_COLON_COLON] = ACTIONS(429),
    [anon_sym_SQUOTE] = ACTIONS(429),
    [anon_sym_DOT] = ACTIONS(431),
    [sym_version] = ACTIONS(431),
    [sym_number] = ACTIONS(431),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [aux_sym_interpolation_token1] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_LBRACE_COLON] = ACTIONS(429),
    [anon_sym_] = ACTIONS(429),
    [anon_sym_3] = ACTIONS(431),
    [sym_char] = ACTIONS(429),
    [anon_sym_true] = ACTIONS(431),
    [anon_sym_false] = ACTIONS(431),
    [anon_sym_maybe] = ACTIONS(431),
    [sym_null] = ACTIONS(431),
    [sym_builtin] = ACTIONS(431),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [sym_shebang] = ACTIONS(433),
    [sym_comment] = ACTIONS(433),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_POUND_LBRACK] = ACTIONS(433),
    [anon_sym_BANG] = ACTIONS(435),
    [anon_sym_BANG_BANG] = ACTIONS(433),
    [anon_sym_TILDE] = ACTIONS(435),
    [anon_sym_BSLASH] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(435),
    [anon_sym_DOLLAR] = ACTIONS(433),
    [anon_sym_QMARK] = ACTIONS(433),
    [anon_sym_BQUOTE] = ACTIONS(435),
    [anon_sym_CARET] = ACTIONS(433),
    [anon_sym_STAR] = ACTIONS(433),
    [anon_sym_SLASH] = ACTIONS(433),
    [anon_sym_PERCENT] = ACTIONS(433),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_EQ] = ACTIONS(435),
    [anon_sym_LT] = ACTIONS(433),
    [anon_sym_GT] = ACTIONS(433),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_PIPE] = ACTIONS(433),
    [anon_sym_DOT_DOT] = ACTIONS(435),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(433),
    [anon_sym_DASH_GT] = ACTIONS(433),
    [anon_sym_EQ_GT] = ACTIONS(433),
    [anon_sym_COLON_COLON] = ACTIONS(433),
    [anon_sym_SQUOTE] = ACTIONS(433),
    [anon_sym_DOT] = ACTIONS(435),
    [sym_version] = ACTIONS(435),
    [sym_number] = ACTIONS(435),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [aux_sym_interpolation_token1] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_LBRACE_COLON] = ACTIONS(433),
    [anon_sym_] = ACTIONS(433),
    [anon_sym_3] = ACTIONS(435),
    [sym_char] = ACTIONS(433),
    [anon_sym_true] = ACTIONS(435),
    [anon_sym_false] = ACTIONS(435),
    [anon_sym_maybe] = ACTIONS(435),
    [sym_null] = ACTIONS(435),
    [sym_builtin] = ACTIONS(435),
  },
  [28] = {
    [sym_shebang] = ACTIONS(437),
    [sym_comment] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
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
    [anon_sym_CARET] = ACTIONS(437),
    [anon_sym_STAR] = ACTIONS(437),
    [anon_sym_SLASH] = ACTIONS(437),
    [anon_sym_PERCENT] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(437),
    [anon_sym_DASH] = ACTIONS(439),
    [anon_sym_EQ] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(437),
    [anon_sym_GT] = ACTIONS(437),
    [anon_sym_AMP] = ACTIONS(437),
    [anon_sym_PIPE] = ACTIONS(437),
    [anon_sym_DOT_DOT] = ACTIONS(439),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(437),
    [anon_sym_DASH_GT] = ACTIONS(437),
    [anon_sym_EQ_GT] = ACTIONS(437),
    [anon_sym_COLON_COLON] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(437),
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
  [29] = {
    [sym_shebang] = ACTIONS(441),
    [sym_comment] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(443),
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
  [30] = {
    [sym_shebang] = ACTIONS(445),
    [sym_comment] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(447),
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
    [ts_builtin_sym_end] = ACTIONS(449),
    [sym_shebang] = ACTIONS(449),
    [sym_comment] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(451),
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
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [sym_shebang] = ACTIONS(445),
    [sym_comment] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(447),
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
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [sym_shebang] = ACTIONS(441),
    [sym_comment] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(443),
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
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [sym_shebang] = ACTIONS(437),
    [sym_comment] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
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
    [anon_sym_CARET] = ACTIONS(437),
    [anon_sym_STAR] = ACTIONS(437),
    [anon_sym_SLASH] = ACTIONS(437),
    [anon_sym_PERCENT] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(437),
    [anon_sym_DASH] = ACTIONS(439),
    [anon_sym_EQ] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(437),
    [anon_sym_GT] = ACTIONS(437),
    [anon_sym_AMP] = ACTIONS(437),
    [anon_sym_PIPE] = ACTIONS(437),
    [anon_sym_DOT_DOT] = ACTIONS(439),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(437),
    [anon_sym_DASH_GT] = ACTIONS(437),
    [anon_sym_EQ_GT] = ACTIONS(437),
    [anon_sym_COLON_COLON] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(437),
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
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [sym_shebang] = ACTIONS(405),
    [sym_comment] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
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
  [36] = {
    [sym_shebang] = ACTIONS(449),
    [sym_comment] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(451),
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
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [sym_shebang] = ACTIONS(397),
    [sym_comment] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(399),
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
  [38] = {
    [sym_shebang] = ACTIONS(433),
    [sym_comment] = ACTIONS(433),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_RBRACK] = ACTIONS(433),
    [anon_sym_POUND_LBRACK] = ACTIONS(433),
    [anon_sym_BANG] = ACTIONS(435),
    [anon_sym_BANG_BANG] = ACTIONS(433),
    [anon_sym_TILDE] = ACTIONS(435),
    [anon_sym_BSLASH] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(435),
    [anon_sym_DOLLAR] = ACTIONS(433),
    [anon_sym_QMARK] = ACTIONS(433),
    [anon_sym_BQUOTE] = ACTIONS(435),
    [anon_sym_CARET] = ACTIONS(433),
    [anon_sym_STAR] = ACTIONS(433),
    [anon_sym_SLASH] = ACTIONS(433),
    [anon_sym_PERCENT] = ACTIONS(433),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_EQ] = ACTIONS(435),
    [anon_sym_LT] = ACTIONS(433),
    [anon_sym_GT] = ACTIONS(433),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_PIPE] = ACTIONS(433),
    [anon_sym_DOT_DOT] = ACTIONS(435),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(433),
    [anon_sym_DASH_GT] = ACTIONS(433),
    [anon_sym_EQ_GT] = ACTIONS(433),
    [anon_sym_COLON_COLON] = ACTIONS(433),
    [anon_sym_SQUOTE] = ACTIONS(433),
    [anon_sym_DOT] = ACTIONS(435),
    [sym_version] = ACTIONS(435),
    [sym_number] = ACTIONS(435),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [aux_sym_interpolation_token1] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_LBRACE_COLON] = ACTIONS(433),
    [anon_sym_] = ACTIONS(433),
    [anon_sym_3] = ACTIONS(435),
    [sym_char] = ACTIONS(433),
    [anon_sym_true] = ACTIONS(435),
    [anon_sym_false] = ACTIONS(435),
    [anon_sym_maybe] = ACTIONS(435),
    [sym_null] = ACTIONS(435),
    [sym_builtin] = ACTIONS(435),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [sym_shebang] = ACTIONS(393),
    [sym_comment] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(395),
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
  [40] = {
    [sym_shebang] = ACTIONS(429),
    [sym_comment] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_RBRACK] = ACTIONS(429),
    [anon_sym_POUND_LBRACK] = ACTIONS(429),
    [anon_sym_BANG] = ACTIONS(431),
    [anon_sym_BANG_BANG] = ACTIONS(429),
    [anon_sym_TILDE] = ACTIONS(431),
    [anon_sym_BSLASH] = ACTIONS(429),
    [anon_sym_AT] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(431),
    [anon_sym_DOLLAR] = ACTIONS(429),
    [anon_sym_QMARK] = ACTIONS(429),
    [anon_sym_BQUOTE] = ACTIONS(431),
    [anon_sym_CARET] = ACTIONS(429),
    [anon_sym_STAR] = ACTIONS(429),
    [anon_sym_SLASH] = ACTIONS(429),
    [anon_sym_PERCENT] = ACTIONS(429),
    [anon_sym_PLUS] = ACTIONS(429),
    [anon_sym_DASH] = ACTIONS(431),
    [anon_sym_EQ] = ACTIONS(431),
    [anon_sym_LT] = ACTIONS(429),
    [anon_sym_GT] = ACTIONS(429),
    [anon_sym_AMP] = ACTIONS(429),
    [anon_sym_PIPE] = ACTIONS(429),
    [anon_sym_DOT_DOT] = ACTIONS(431),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(429),
    [anon_sym_DASH_GT] = ACTIONS(429),
    [anon_sym_EQ_GT] = ACTIONS(429),
    [anon_sym_COLON_COLON] = ACTIONS(429),
    [anon_sym_SQUOTE] = ACTIONS(429),
    [anon_sym_DOT] = ACTIONS(431),
    [sym_version] = ACTIONS(431),
    [sym_number] = ACTIONS(431),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [aux_sym_interpolation_token1] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_LBRACE_COLON] = ACTIONS(429),
    [anon_sym_] = ACTIONS(429),
    [anon_sym_3] = ACTIONS(431),
    [sym_char] = ACTIONS(429),
    [anon_sym_true] = ACTIONS(431),
    [anon_sym_false] = ACTIONS(431),
    [anon_sym_maybe] = ACTIONS(431),
    [sym_null] = ACTIONS(431),
    [sym_builtin] = ACTIONS(431),
  },
  [41] = {
    [sym_shebang] = ACTIONS(425),
    [sym_comment] = ACTIONS(425),
    [anon_sym_COLON] = ACTIONS(427),
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
    [anon_sym_CARET] = ACTIONS(425),
    [anon_sym_STAR] = ACTIONS(425),
    [anon_sym_SLASH] = ACTIONS(425),
    [anon_sym_PERCENT] = ACTIONS(425),
    [anon_sym_PLUS] = ACTIONS(425),
    [anon_sym_DASH] = ACTIONS(427),
    [anon_sym_EQ] = ACTIONS(427),
    [anon_sym_LT] = ACTIONS(425),
    [anon_sym_GT] = ACTIONS(425),
    [anon_sym_AMP] = ACTIONS(425),
    [anon_sym_PIPE] = ACTIONS(425),
    [anon_sym_DOT_DOT] = ACTIONS(427),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(425),
    [anon_sym_DASH_GT] = ACTIONS(425),
    [anon_sym_EQ_GT] = ACTIONS(425),
    [anon_sym_COLON_COLON] = ACTIONS(425),
    [anon_sym_SQUOTE] = ACTIONS(425),
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
    [sym_shebang] = ACTIONS(409),
    [sym_comment] = ACTIONS(409),
    [anon_sym_COLON] = ACTIONS(411),
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
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_SLASH] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_EQ] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_AMP] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(387),
    [anon_sym_DOT_DOT] = ACTIONS(385),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(387),
    [anon_sym_DASH_GT] = ACTIONS(387),
    [anon_sym_EQ_GT] = ACTIONS(387),
    [anon_sym_COLON_COLON] = ACTIONS(387),
    [anon_sym_SQUOTE] = ACTIONS(409),
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
  [43] = {
    [sym_shebang] = ACTIONS(453),
    [sym_comment] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(455),
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
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_SLASH] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(383),
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
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [sym_shebang] = ACTIONS(389),
    [sym_comment] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_POUND_LBRACK] = ACTIONS(389),
    [anon_sym_BANG] = ACTIONS(391),
    [anon_sym_BANG_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(391),
    [anon_sym_BSLASH] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(389),
    [anon_sym_POUND] = ACTIONS(391),
    [anon_sym_DOLLAR] = ACTIONS(389),
    [anon_sym_QMARK] = ACTIONS(389),
    [anon_sym_BQUOTE] = ACTIONS(391),
    [anon_sym_CARET] = ACTIONS(413),
    [anon_sym_STAR] = ACTIONS(415),
    [anon_sym_SLASH] = ACTIONS(415),
    [anon_sym_PERCENT] = ACTIONS(415),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(419),
    [anon_sym_EQ] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_DOT_DOT] = ACTIONS(421),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(423),
    [anon_sym_DASH_GT] = ACTIONS(423),
    [anon_sym_EQ_GT] = ACTIONS(423),
    [anon_sym_COLON_COLON] = ACTIONS(423),
    [anon_sym_SQUOTE] = ACTIONS(389),
    [anon_sym_DOT] = ACTIONS(391),
    [sym_version] = ACTIONS(391),
    [sym_number] = ACTIONS(391),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(389),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [aux_sym_interpolation_token1] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(391),
    [anon_sym_LBRACE_COLON] = ACTIONS(389),
    [anon_sym_] = ACTIONS(389),
    [anon_sym_3] = ACTIONS(391),
    [sym_char] = ACTIONS(389),
    [anon_sym_true] = ACTIONS(391),
    [anon_sym_false] = ACTIONS(391),
    [anon_sym_maybe] = ACTIONS(391),
    [sym_null] = ACTIONS(391),
    [sym_builtin] = ACTIONS(391),
  },
  [45] = {
    [sym_shebang] = ACTIONS(401),
    [sym_comment] = ACTIONS(401),
    [anon_sym_COLON] = ACTIONS(403),
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
    [ts_builtin_sym_end] = ACTIONS(373),
    [sym_shebang] = ACTIONS(373),
    [sym_comment] = ACTIONS(373),
    [anon_sym_COLON] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_POUND_LBRACK] = ACTIONS(373),
    [anon_sym_BANG] = ACTIONS(375),
    [anon_sym_BANG_BANG] = ACTIONS(373),
    [anon_sym_TILDE] = ACTIONS(375),
    [anon_sym_BSLASH] = ACTIONS(373),
    [anon_sym_AT] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(375),
    [anon_sym_DOLLAR] = ACTIONS(373),
    [anon_sym_QMARK] = ACTIONS(373),
    [anon_sym_BQUOTE] = ACTIONS(375),
    [anon_sym_CARET] = ACTIONS(413),
    [anon_sym_STAR] = ACTIONS(415),
    [anon_sym_SLASH] = ACTIONS(415),
    [anon_sym_PERCENT] = ACTIONS(415),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(419),
    [anon_sym_EQ] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_DOT_DOT] = ACTIONS(421),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(423),
    [anon_sym_DASH_GT] = ACTIONS(423),
    [anon_sym_EQ_GT] = ACTIONS(423),
    [anon_sym_COLON_COLON] = ACTIONS(423),
    [anon_sym_SQUOTE] = ACTIONS(373),
    [anon_sym_DOT] = ACTIONS(375),
    [sym_version] = ACTIONS(375),
    [sym_number] = ACTIONS(375),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(373),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [aux_sym_interpolation_token1] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(375),
    [anon_sym_LBRACE_COLON] = ACTIONS(373),
    [anon_sym_] = ACTIONS(373),
    [anon_sym_3] = ACTIONS(375),
    [sym_char] = ACTIONS(373),
    [anon_sym_true] = ACTIONS(375),
    [anon_sym_false] = ACTIONS(375),
    [anon_sym_maybe] = ACTIONS(375),
    [sym_null] = ACTIONS(375),
    [sym_builtin] = ACTIONS(375),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [sym_shebang] = ACTIONS(453),
    [sym_comment] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(455),
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
    [anon_sym_CARET] = ACTIONS(413),
    [anon_sym_STAR] = ACTIONS(415),
    [anon_sym_SLASH] = ACTIONS(415),
    [anon_sym_PERCENT] = ACTIONS(415),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(419),
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
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [sym_shebang] = ACTIONS(453),
    [sym_comment] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(455),
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
    [anon_sym_CARET] = ACTIONS(413),
    [anon_sym_STAR] = ACTIONS(415),
    [anon_sym_SLASH] = ACTIONS(415),
    [anon_sym_PERCENT] = ACTIONS(415),
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
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [sym_shebang] = ACTIONS(453),
    [sym_comment] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(455),
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
    [anon_sym_CARET] = ACTIONS(413),
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
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [sym_shebang] = ACTIONS(453),
    [sym_comment] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(455),
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
    [anon_sym_CARET] = ACTIONS(413),
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
  [51] = {
    [sym_shebang] = ACTIONS(457),
    [sym_comment] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(459),
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
  [52] = {
    [sym_shebang] = ACTIONS(369),
    [sym_comment] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(371),
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
    [anon_sym_CARET] = ACTIONS(369),
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
  [53] = {
    [sym_shebang] = ACTIONS(461),
    [sym_comment] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(463),
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
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(457),
    [sym_shebang] = ACTIONS(457),
    [sym_comment] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(459),
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
  [55] = {
    [sym_shebang] = ACTIONS(453),
    [sym_comment] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(455),
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
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_SLASH] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(379),
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
  [56] = {
    [sym_shebang] = ACTIONS(465),
    [sym_comment] = ACTIONS(465),
    [anon_sym_COLON] = ACTIONS(467),
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
    [sym_shebang] = ACTIONS(453),
    [sym_comment] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(455),
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
    [anon_sym_CARET] = ACTIONS(377),
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
  [58] = {
    [sym_shebang] = ACTIONS(453),
    [sym_comment] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(455),
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
    [anon_sym_CARET] = ACTIONS(377),
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
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [sym_shebang] = ACTIONS(461),
    [sym_comment] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(463),
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
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [sym_shebang] = ACTIONS(465),
    [sym_comment] = ACTIONS(465),
    [anon_sym_COLON] = ACTIONS(467),
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
  [61] = {
    [sym_block] = STATE(19),
    [sym_dictionary] = STATE(19),
    [sym__expression] = STATE(19),
    [sym_unary_expression] = STATE(19),
    [sym_binary_expression] = STATE(19),
    [sym_literal] = STATE(19),
    [sym_type_annotation] = STATE(19),
    [sym_attribute] = STATE(19),
    [sym_color] = STATE(19),
    [sym_unit] = STATE(19),
    [sym_interpolated_string] = STATE(19),
    [sym_string] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_identifier] = STATE(19),
    [aux_sym_function_call_repeat1] = STATE(61),
    [sym_shebang] = ACTIONS(469),
    [sym_comment] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(474),
    [anon_sym_RBRACK] = ACTIONS(469),
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
    [aux_sym_interpolation_token1] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(510),
    [anon_sym_LBRACE_COLON] = ACTIONS(513),
    [anon_sym_] = ACTIONS(516),
    [anon_sym_3] = ACTIONS(519),
    [sym_char] = ACTIONS(522),
    [anon_sym_true] = ACTIONS(525),
    [anon_sym_false] = ACTIONS(525),
    [anon_sym_maybe] = ACTIONS(525),
    [sym_null] = ACTIONS(498),
    [sym_builtin] = ACTIONS(498),
  },
  [62] = {
    [sym_block] = STATE(44),
    [sym_dictionary] = STATE(44),
    [sym__expression] = STATE(44),
    [sym_unary_expression] = STATE(44),
    [sym_binary_expression] = STATE(44),
    [sym_literal] = STATE(44),
    [sym_type_annotation] = STATE(44),
    [sym_attribute] = STATE(44),
    [sym_color] = STATE(44),
    [sym_unit] = STATE(44),
    [sym_interpolated_string] = STATE(44),
    [sym_string] = STATE(44),
    [sym_boolean] = STATE(44),
    [sym_identifier] = STATE(44),
    [aux_sym_function_call_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(528),
    [sym_shebang] = ACTIONS(528),
    [sym_comment] = ACTIONS(528),
    [anon_sym_COLON] = ACTIONS(528),
    [anon_sym_LBRACK] = ACTIONS(528),
    [anon_sym_POUND_LBRACK] = ACTIONS(528),
    [anon_sym_BANG] = ACTIONS(530),
    [anon_sym_BANG_BANG] = ACTIONS(528),
    [anon_sym_TILDE] = ACTIONS(530),
    [anon_sym_BSLASH] = ACTIONS(528),
    [anon_sym_AT] = ACTIONS(528),
    [anon_sym_POUND] = ACTIONS(530),
    [anon_sym_DOLLAR] = ACTIONS(528),
    [anon_sym_QMARK] = ACTIONS(528),
    [anon_sym_BQUOTE] = ACTIONS(530),
    [anon_sym_SQUOTE] = ACTIONS(528),
    [anon_sym_DOT] = ACTIONS(528),
    [sym_version] = ACTIONS(530),
    [sym_number] = ACTIONS(530),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(528),
    [anon_sym_DQUOTE] = ACTIONS(528),
    [aux_sym_interpolation_token1] = ACTIONS(530),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_LBRACE_COLON] = ACTIONS(528),
    [anon_sym_] = ACTIONS(528),
    [anon_sym_3] = ACTIONS(530),
    [sym_char] = ACTIONS(528),
    [anon_sym_true] = ACTIONS(530),
    [anon_sym_false] = ACTIONS(530),
    [anon_sym_maybe] = ACTIONS(530),
    [sym_null] = ACTIONS(530),
    [sym_builtin] = ACTIONS(530),
  },
  [63] = {
    [sym_block] = STATE(19),
    [sym_dictionary] = STATE(19),
    [sym__expression] = STATE(19),
    [sym_unary_expression] = STATE(19),
    [sym_binary_expression] = STATE(19),
    [sym_literal] = STATE(19),
    [sym_type_annotation] = STATE(19),
    [sym_attribute] = STATE(19),
    [sym_color] = STATE(19),
    [sym_unit] = STATE(19),
    [sym_interpolated_string] = STATE(19),
    [sym_string] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_identifier] = STATE(19),
    [aux_sym_function_call_repeat1] = STATE(61),
    [sym_shebang] = ACTIONS(528),
    [sym_comment] = ACTIONS(528),
    [anon_sym_COLON] = ACTIONS(528),
    [anon_sym_LBRACK] = ACTIONS(528),
    [anon_sym_RBRACK] = ACTIONS(528),
    [anon_sym_POUND_LBRACK] = ACTIONS(528),
    [anon_sym_BANG] = ACTIONS(530),
    [anon_sym_BANG_BANG] = ACTIONS(528),
    [anon_sym_TILDE] = ACTIONS(530),
    [anon_sym_BSLASH] = ACTIONS(528),
    [anon_sym_AT] = ACTIONS(528),
    [anon_sym_POUND] = ACTIONS(530),
    [anon_sym_DOLLAR] = ACTIONS(528),
    [anon_sym_QMARK] = ACTIONS(528),
    [anon_sym_BQUOTE] = ACTIONS(530),
    [anon_sym_SQUOTE] = ACTIONS(528),
    [anon_sym_DOT] = ACTIONS(528),
    [sym_version] = ACTIONS(530),
    [sym_number] = ACTIONS(530),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(528),
    [anon_sym_DQUOTE] = ACTIONS(528),
    [aux_sym_interpolation_token1] = ACTIONS(530),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_LBRACE_COLON] = ACTIONS(528),
    [anon_sym_] = ACTIONS(528),
    [anon_sym_3] = ACTIONS(530),
    [sym_char] = ACTIONS(528),
    [anon_sym_true] = ACTIONS(530),
    [anon_sym_false] = ACTIONS(530),
    [anon_sym_maybe] = ACTIONS(530),
    [sym_null] = ACTIONS(530),
    [sym_builtin] = ACTIONS(530),
  },
  [64] = {
    [sym_block] = STATE(44),
    [sym_dictionary] = STATE(44),
    [sym__expression] = STATE(44),
    [sym_unary_expression] = STATE(44),
    [sym_binary_expression] = STATE(44),
    [sym_literal] = STATE(44),
    [sym_type_annotation] = STATE(44),
    [sym_attribute] = STATE(44),
    [sym_color] = STATE(44),
    [sym_unit] = STATE(44),
    [sym_interpolated_string] = STATE(44),
    [sym_string] = STATE(44),
    [sym_boolean] = STATE(44),
    [sym_identifier] = STATE(44),
    [aux_sym_function_call_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(469),
    [sym_shebang] = ACTIONS(469),
    [sym_comment] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(532),
    [anon_sym_LBRACK] = ACTIONS(535),
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
    [aux_sym_interpolation_token1] = ACTIONS(568),
    [anon_sym_LBRACE] = ACTIONS(571),
    [anon_sym_LBRACE_COLON] = ACTIONS(574),
    [anon_sym_] = ACTIONS(577),
    [anon_sym_3] = ACTIONS(580),
    [sym_char] = ACTIONS(583),
    [anon_sym_true] = ACTIONS(586),
    [anon_sym_false] = ACTIONS(586),
    [anon_sym_maybe] = ACTIONS(586),
    [sym_null] = ACTIONS(559),
    [sym_builtin] = ACTIONS(559),
  },
  [65] = {
    [sym_block] = STATE(19),
    [sym_dictionary] = STATE(19),
    [sym__expression] = STATE(19),
    [sym_unary_expression] = STATE(19),
    [sym_binary_expression] = STATE(19),
    [sym_literal] = STATE(19),
    [sym_type_annotation] = STATE(19),
    [sym_attribute] = STATE(19),
    [sym_color] = STATE(19),
    [sym_unit] = STATE(19),
    [sym_interpolated_string] = STATE(19),
    [sym_string] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_identifier] = STATE(19),
    [aux_sym_function_call_repeat1] = STATE(61),
    [sym_shebang] = ACTIONS(528),
    [sym_comment] = ACTIONS(528),
    [anon_sym_COLON] = ACTIONS(528),
    [anon_sym_LBRACK] = ACTIONS(528),
    [anon_sym_RBRACK] = ACTIONS(528),
    [anon_sym_POUND_LBRACK] = ACTIONS(528),
    [anon_sym_BANG] = ACTIONS(530),
    [anon_sym_BANG_BANG] = ACTIONS(528),
    [anon_sym_TILDE] = ACTIONS(530),
    [anon_sym_BSLASH] = ACTIONS(528),
    [anon_sym_AT] = ACTIONS(528),
    [anon_sym_POUND] = ACTIONS(530),
    [anon_sym_DOLLAR] = ACTIONS(528),
    [anon_sym_QMARK] = ACTIONS(528),
    [anon_sym_BQUOTE] = ACTIONS(530),
    [anon_sym_SQUOTE] = ACTIONS(528),
    [anon_sym_DOT] = ACTIONS(528),
    [sym_version] = ACTIONS(530),
    [sym_number] = ACTIONS(530),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(528),
    [anon_sym_DQUOTE] = ACTIONS(528),
    [aux_sym_interpolation_token1] = ACTIONS(530),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_LBRACE_COLON] = ACTIONS(528),
    [anon_sym_] = ACTIONS(528),
    [anon_sym_3] = ACTIONS(530),
    [sym_char] = ACTIONS(528),
    [anon_sym_true] = ACTIONS(530),
    [anon_sym_false] = ACTIONS(530),
    [anon_sym_maybe] = ACTIONS(530),
    [sym_null] = ACTIONS(530),
    [sym_builtin] = ACTIONS(530),
  },
  [66] = {
    [sym_block] = STATE(44),
    [sym_dictionary] = STATE(44),
    [sym__expression] = STATE(44),
    [sym_unary_expression] = STATE(44),
    [sym_binary_expression] = STATE(44),
    [sym_literal] = STATE(44),
    [sym_type_annotation] = STATE(44),
    [sym_attribute] = STATE(44),
    [sym_color] = STATE(44),
    [sym_unit] = STATE(44),
    [sym_interpolated_string] = STATE(44),
    [sym_string] = STATE(44),
    [sym_boolean] = STATE(44),
    [sym_identifier] = STATE(44),
    [aux_sym_function_call_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(528),
    [sym_shebang] = ACTIONS(528),
    [sym_comment] = ACTIONS(528),
    [anon_sym_COLON] = ACTIONS(528),
    [anon_sym_LBRACK] = ACTIONS(528),
    [anon_sym_POUND_LBRACK] = ACTIONS(528),
    [anon_sym_BANG] = ACTIONS(530),
    [anon_sym_BANG_BANG] = ACTIONS(528),
    [anon_sym_TILDE] = ACTIONS(530),
    [anon_sym_BSLASH] = ACTIONS(528),
    [anon_sym_AT] = ACTIONS(528),
    [anon_sym_POUND] = ACTIONS(530),
    [anon_sym_DOLLAR] = ACTIONS(528),
    [anon_sym_QMARK] = ACTIONS(528),
    [anon_sym_BQUOTE] = ACTIONS(530),
    [anon_sym_SQUOTE] = ACTIONS(528),
    [anon_sym_DOT] = ACTIONS(528),
    [sym_version] = ACTIONS(530),
    [sym_number] = ACTIONS(530),
    [anon_sym_TILDE_DQUOTE] = ACTIONS(528),
    [anon_sym_DQUOTE] = ACTIONS(528),
    [aux_sym_interpolation_token1] = ACTIONS(530),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_LBRACE_COLON] = ACTIONS(528),
    [anon_sym_] = ACTIONS(528),
    [anon_sym_3] = ACTIONS(530),
    [sym_char] = ACTIONS(528),
    [anon_sym_true] = ACTIONS(530),
    [anon_sym_false] = ACTIONS(530),
    [anon_sym_maybe] = ACTIONS(530),
    [sym_null] = ACTIONS(530),
    [sym_builtin] = ACTIONS(530),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(593), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(599), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_BQUOTE,
    ACTIONS(603), 1,
      anon_sym_SQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOT,
    ACTIONS(607), 1,
      aux_sym_color_token1,
    ACTIONS(611), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    ACTIONS(615), 1,
      aux_sym_interpolation_token1,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(619), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(621), 1,
      anon_sym_,
    ACTIONS(623), 1,
      anon_sym_3,
    ACTIONS(625), 1,
      sym_char,
    ACTIONS(595), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(627), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(609), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(597), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(112), 14,
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
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(593), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(599), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_BQUOTE,
    ACTIONS(603), 1,
      anon_sym_SQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOT,
    ACTIONS(611), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    ACTIONS(615), 1,
      aux_sym_interpolation_token1,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(619), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(621), 1,
      anon_sym_,
    ACTIONS(623), 1,
      anon_sym_3,
    ACTIONS(625), 1,
      sym_char,
    ACTIONS(629), 1,
      aux_sym_unit_token1,
    ACTIONS(595), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(627), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(609), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(597), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(112), 14,
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
    ACTIONS(175), 1,
      anon_sym_COLON,
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
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      aux_sym_interpolation_token1,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(207), 1,
      anon_sym_,
    ACTIONS(209), 1,
      anon_sym_3,
    ACTIONS(631), 1,
      aux_sym_unit_token1,
    ACTIONS(635), 1,
      sym_char,
    ACTIONS(183), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(213), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(633), 4,
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
    STATE(36), 14,
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
    ACTIONS(175), 1,
      anon_sym_COLON,
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
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      aux_sym_interpolation_token1,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(207), 1,
      anon_sym_,
    ACTIONS(209), 1,
      anon_sym_3,
    ACTIONS(635), 1,
      sym_char,
    ACTIONS(637), 1,
      aux_sym_color_token1,
    ACTIONS(183), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(213), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(633), 4,
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
    STATE(36), 14,
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
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(593), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(599), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_BQUOTE,
    ACTIONS(603), 1,
      anon_sym_SQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOT,
    ACTIONS(611), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(619), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(621), 1,
      anon_sym_,
    ACTIONS(623), 1,
      anon_sym_3,
    ACTIONS(639), 1,
      anon_sym_RBRACK,
    ACTIONS(643), 1,
      aux_sym_interpolation_token1,
    ACTIONS(646), 1,
      sym_char,
    ACTIONS(595), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(627), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(641), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(597), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(106), 14,
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
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(593), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(599), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_BQUOTE,
    ACTIONS(603), 1,
      anon_sym_SQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOT,
    ACTIONS(611), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(619), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(621), 1,
      anon_sym_,
    ACTIONS(623), 1,
      anon_sym_3,
    ACTIONS(639), 1,
      anon_sym_RBRACK,
    ACTIONS(643), 1,
      aux_sym_interpolation_token1,
    ACTIONS(646), 1,
      sym_char,
    ACTIONS(648), 1,
      anon_sym_COLON,
    ACTIONS(595), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(627), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(641), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(597), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(106), 14,
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
    ACTIONS(9), 1,
      anon_sym_COLON,
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
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_interpolation_token1,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_3,
    ACTIONS(650), 1,
      aux_sym_unit_token1,
    ACTIONS(654), 1,
      sym_char,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(45), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(652), 4,
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
  [630] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
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
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_interpolation_token1,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_3,
    ACTIONS(654), 1,
      sym_char,
    ACTIONS(656), 1,
      aux_sym_color_token1,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(45), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(652), 4,
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
  [720] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
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
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_interpolation_token1,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_3,
    ACTIONS(654), 1,
      sym_char,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(45), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(652), 4,
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
  [807] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(593), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(599), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_BQUOTE,
    ACTIONS(603), 1,
      anon_sym_SQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOT,
    ACTIONS(611), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    ACTIONS(615), 1,
      aux_sym_interpolation_token1,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(619), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(621), 1,
      anon_sym_,
    ACTIONS(623), 1,
      anon_sym_3,
    ACTIONS(660), 1,
      sym_char,
    ACTIONS(595), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(627), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(658), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(597), 5,
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
  [894] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(593), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(599), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_BQUOTE,
    ACTIONS(603), 1,
      anon_sym_SQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOT,
    ACTIONS(611), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    ACTIONS(615), 1,
      aux_sym_interpolation_token1,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(619), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(621), 1,
      anon_sym_,
    ACTIONS(623), 1,
      anon_sym_3,
    ACTIONS(664), 1,
      sym_char,
    ACTIONS(595), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(627), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(662), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(597), 5,
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
  [981] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(593), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(599), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_BQUOTE,
    ACTIONS(603), 1,
      anon_sym_SQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOT,
    ACTIONS(611), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    ACTIONS(615), 1,
      aux_sym_interpolation_token1,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(619), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(621), 1,
      anon_sym_,
    ACTIONS(623), 1,
      anon_sym_3,
    ACTIONS(668), 1,
      sym_char,
    ACTIONS(595), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(627), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(666), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(597), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(100), 14,
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
  [1068] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(593), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(599), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_BQUOTE,
    ACTIONS(603), 1,
      anon_sym_SQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOT,
    ACTIONS(611), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    ACTIONS(615), 1,
      aux_sym_interpolation_token1,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(619), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(621), 1,
      anon_sym_,
    ACTIONS(623), 1,
      anon_sym_3,
    ACTIONS(672), 1,
      sym_char,
    ACTIONS(595), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(627), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(670), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(597), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(99), 14,
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
  [1155] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COLON,
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
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      aux_sym_interpolation_token1,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(207), 1,
      anon_sym_,
    ACTIONS(209), 1,
      anon_sym_3,
    ACTIONS(676), 1,
      sym_char,
    ACTIONS(183), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(213), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(674), 4,
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
    STATE(17), 14,
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
  [1242] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
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
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_interpolation_token1,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_3,
    ACTIONS(680), 1,
      sym_char,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(45), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(678), 4,
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
  [1329] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
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
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_interpolation_token1,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_3,
    ACTIONS(684), 1,
      sym_char,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(45), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(682), 4,
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
  [1416] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COLON,
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
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      aux_sym_interpolation_token1,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(207), 1,
      anon_sym_,
    ACTIONS(209), 1,
      anon_sym_3,
    ACTIONS(635), 1,
      sym_char,
    ACTIONS(183), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(213), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(633), 4,
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
    STATE(36), 14,
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
  [1503] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
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
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_interpolation_token1,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_3,
    ACTIONS(688), 1,
      sym_char,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(45), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(686), 4,
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
  [1590] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
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
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_interpolation_token1,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_3,
    ACTIONS(692), 1,
      sym_char,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(45), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(690), 4,
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
  [1677] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
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
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_interpolation_token1,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_3,
    ACTIONS(696), 1,
      sym_char,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(45), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(694), 4,
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
  [1764] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(593), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(599), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_BQUOTE,
    ACTIONS(603), 1,
      anon_sym_SQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOT,
    ACTIONS(611), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    ACTIONS(615), 1,
      aux_sym_interpolation_token1,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(619), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(621), 1,
      anon_sym_,
    ACTIONS(623), 1,
      anon_sym_3,
    ACTIONS(625), 1,
      sym_char,
    ACTIONS(595), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(627), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(609), 4,
      sym_version,
      sym_number,
      sym_null,
      sym_builtin,
    ACTIONS(597), 5,
      anon_sym_BANG_BANG,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
    STATE(112), 14,
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
  [1851] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COLON,
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
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      aux_sym_interpolation_token1,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(207), 1,
      anon_sym_,
    ACTIONS(209), 1,
      anon_sym_3,
    ACTIONS(700), 1,
      sym_char,
    ACTIONS(183), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(213), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(698), 4,
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
    STATE(58), 14,
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
  [1938] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COLON,
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
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      aux_sym_interpolation_token1,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(207), 1,
      anon_sym_,
    ACTIONS(209), 1,
      anon_sym_3,
    ACTIONS(704), 1,
      sym_char,
    ACTIONS(183), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(213), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(702), 4,
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
    STATE(57), 14,
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
  [2025] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COLON,
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
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      aux_sym_interpolation_token1,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(207), 1,
      anon_sym_,
    ACTIONS(209), 1,
      anon_sym_3,
    ACTIONS(708), 1,
      sym_char,
    ACTIONS(183), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(213), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(706), 4,
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
  [2112] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COLON,
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
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_TILDE_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      aux_sym_interpolation_token1,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_LBRACE_COLON,
    ACTIONS(207), 1,
      anon_sym_,
    ACTIONS(209), 1,
      anon_sym_3,
    ACTIONS(712), 1,
      sym_char,
    ACTIONS(183), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(213), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_maybe,
    ACTIONS(710), 4,
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
  [2199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      aux_sym_type_annotation_token1,
    ACTIONS(716), 14,
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
    ACTIONS(714), 16,
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
  [2240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 14,
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
    ACTIONS(365), 16,
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
  [2278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      aux_sym_type_annotation_token1,
    ACTIONS(716), 14,
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
    ACTIONS(714), 15,
      anon_sym_COLON,
      anon_sym_LBRACK,
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
  [2318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      aux_sym_type_annotation_token1,
    ACTIONS(716), 14,
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
    ACTIONS(714), 15,
      anon_sym_COLON,
      anon_sym_LBRACK,
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
  [2358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_CARET,
    ACTIONS(455), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(453), 14,
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
      aux_sym_interpolation_token1,
  [2386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(465), 15,
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
      aux_sym_interpolation_token1,
  [2412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(365), 15,
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
      aux_sym_interpolation_token1,
  [2438] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_CARET,
    ACTIONS(728), 1,
      anon_sym_PLUS,
    ACTIONS(730), 1,
      anon_sym_DASH,
    ACTIONS(455), 2,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(726), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(453), 10,
      anon_sym_RBRACK,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      aux_sym_interpolation_token1,
  [2472] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_CARET,
    ACTIONS(455), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(726), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(453), 11,
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
      aux_sym_interpolation_token1,
  [2502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_CARET,
    ACTIONS(455), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(453), 14,
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
      aux_sym_interpolation_token1,
  [2530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(461), 15,
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
      aux_sym_interpolation_token1,
  [2556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(369), 15,
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
      aux_sym_interpolation_token1,
  [2582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(457), 15,
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
      aux_sym_interpolation_token1,
  [2608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(393), 15,
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
      aux_sym_interpolation_token1,
  [2634] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_CARET,
    ACTIONS(728), 1,
      anon_sym_PLUS,
    ACTIONS(730), 1,
      anon_sym_DASH,
    ACTIONS(732), 2,
      anon_sym_RBRACK,
      aux_sym_interpolation_token1,
    ACTIONS(734), 2,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(726), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(736), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [2670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(397), 15,
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
      aux_sym_interpolation_token1,
  [2696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(401), 15,
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
      aux_sym_interpolation_token1,
  [2722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(425), 15,
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
      aux_sym_interpolation_token1,
  [2748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(429), 15,
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
      aux_sym_interpolation_token1,
  [2774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(433), 15,
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
      aux_sym_interpolation_token1,
  [2800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(449), 15,
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
      aux_sym_interpolation_token1,
  [2826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(445), 15,
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
      aux_sym_interpolation_token1,
  [2852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(441), 15,
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
      aux_sym_interpolation_token1,
  [2878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(437), 15,
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
      aux_sym_interpolation_token1,
  [2904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 3,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
    ACTIONS(405), 15,
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
      aux_sym_interpolation_token1,
  [2930] = 5,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(123), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2948] = 5,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_PIPE,
    ACTIONS(748), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(121), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2966] = 5,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_PIPE,
    ACTIONS(752), 1,
      anon_sym_DQUOTE,
    ACTIONS(750), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(117), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [2984] = 5,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_PIPE,
    ACTIONS(756), 1,
      anon_sym_DQUOTE,
    ACTIONS(754), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(122), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [3002] = 5,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_PIPE,
    ACTIONS(758), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(123), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [3020] = 5,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_PIPE,
    ACTIONS(760), 1,
      anon_sym_DQUOTE,
    ACTIONS(742), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(123), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [3038] = 5,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_PIPE,
    ACTIONS(768), 1,
      anon_sym_DQUOTE,
    ACTIONS(765), 2,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
    STATE(123), 2,
      sym_interpolation,
      aux_sym_interpolated_string_repeat1,
  [3056] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RBRACK,
    ACTIONS(772), 1,
      aux_sym_interpolation_token1,
    STATE(71), 1,
      sym_label,
    STATE(72), 1,
      sym_identifier,
    STATE(127), 1,
      aux_sym_dictionary_repeat1,
  [3075] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_RBRACK,
    ACTIONS(776), 1,
      aux_sym_interpolation_token1,
    STATE(71), 1,
      sym_label,
    STATE(72), 1,
      sym_identifier,
    STATE(125), 1,
      aux_sym_dictionary_repeat1,
  [3094] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_interpolation_token1,
    ACTIONS(779), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym_label,
    STATE(72), 1,
      sym_identifier,
    STATE(129), 1,
      aux_sym_dictionary_repeat1,
  [3113] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_interpolation_token1,
    ACTIONS(781), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym_label,
    STATE(72), 1,
      sym_identifier,
    STATE(125), 1,
      aux_sym_dictionary_repeat1,
  [3132] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_interpolation_token1,
    ACTIONS(783), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym_label,
    STATE(72), 1,
      sym_identifier,
    STATE(130), 1,
      aux_sym_dictionary_repeat1,
  [3151] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_interpolation_token1,
    ACTIONS(785), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym_label,
    STATE(72), 1,
      sym_identifier,
    STATE(125), 1,
      aux_sym_dictionary_repeat1,
  [3170] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_interpolation_token1,
    ACTIONS(787), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym_label,
    STATE(72), 1,
      sym_identifier,
    STATE(125), 1,
      aux_sym_dictionary_repeat1,
  [3189] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_DQUOTE,
    STATE(131), 1,
      aux_sym_string_repeat1,
    ACTIONS(789), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [3203] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      aux_sym_string_repeat1,
    ACTIONS(794), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [3217] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_DQUOTE,
    STATE(137), 1,
      aux_sym_string_repeat1,
    ACTIONS(798), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [3231] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_DQUOTE,
    STATE(131), 1,
      aux_sym_string_repeat1,
    ACTIONS(802), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [3245] = 2,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(806), 4,
      anon_sym_PIPE,
      aux_sym_interpolated_string_token1,
      aux_sym_interpolated_string_token2,
      anon_sym_DQUOTE,
  [3255] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      aux_sym_string_repeat1,
    ACTIONS(808), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [3269] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_DQUOTE,
    STATE(131), 1,
      aux_sym_string_repeat1,
    ACTIONS(802), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [3283] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_DQUOTE,
    STATE(131), 1,
      aux_sym_string_repeat1,
    ACTIONS(802), 2,
      aux_sym_interpolated_string_token2,
      aux_sym_string_token1,
  [3297] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_2,
    ACTIONS(816), 1,
      aux_sym_string_token4,
    STATE(150), 1,
      aux_sym_string_repeat4,
  [3310] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_RBRACE,
    ACTIONS(818), 1,
      aux_sym_string_token2,
    STATE(149), 1,
      aux_sym_string_repeat2,
  [3323] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_2,
    ACTIONS(816), 1,
      aux_sym_string_token4,
    STATE(150), 1,
      aux_sym_string_repeat4,
  [3336] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_2,
    ACTIONS(820), 1,
      aux_sym_string_token4,
    STATE(155), 1,
      aux_sym_string_repeat4,
  [3349] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_RBRACE,
    ACTIONS(822), 1,
      aux_sym_string_token2,
    STATE(151), 1,
      aux_sym_string_repeat2,
  [3362] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(824), 1,
      aux_sym_string_token3,
    STATE(152), 1,
      aux_sym_string_repeat3,
  [3375] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_2,
    ACTIONS(826), 1,
      aux_sym_string_token4,
    STATE(139), 1,
      aux_sym_string_repeat4,
  [3388] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(828), 1,
      aux_sym_string_token3,
    STATE(153), 1,
      aux_sym_string_repeat3,
  [3401] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
    ACTIONS(830), 1,
      aux_sym_string_token2,
    STATE(159), 1,
      aux_sym_string_repeat2,
  [3414] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(832), 1,
      aux_sym_string_token3,
    STATE(158), 1,
      aux_sym_string_repeat3,
  [3427] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
    ACTIONS(834), 1,
      aux_sym_string_token2,
    STATE(154), 1,
      aux_sym_string_repeat2,
  [3440] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(836), 1,
      aux_sym_string_token4,
    ACTIONS(839), 1,
      anon_sym_2,
    STATE(150), 1,
      aux_sym_string_repeat4,
  [3453] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_RBRACE,
    ACTIONS(834), 1,
      aux_sym_string_token2,
    STATE(154), 1,
      aux_sym_string_repeat2,
  [3466] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(828), 1,
      aux_sym_string_token3,
    STATE(153), 1,
      aux_sym_string_repeat3,
  [3479] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(841), 1,
      aux_sym_string_token3,
    ACTIONS(844), 1,
      anon_sym_COLON_RBRACE,
    STATE(153), 1,
      aux_sym_string_repeat3,
  [3492] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(846), 1,
      aux_sym_string_token2,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
    STATE(154), 1,
      aux_sym_string_repeat2,
  [3505] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_2,
    ACTIONS(816), 1,
      aux_sym_string_token4,
    STATE(150), 1,
      aux_sym_string_repeat4,
  [3518] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_2,
    ACTIONS(851), 1,
      aux_sym_string_token4,
    STATE(141), 1,
      aux_sym_string_repeat4,
  [3531] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(853), 1,
      aux_sym_string_token3,
    STATE(146), 1,
      aux_sym_string_repeat3,
  [3544] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_COLON_RBRACE,
    ACTIONS(828), 1,
      aux_sym_string_token3,
    STATE(153), 1,
      aux_sym_string_repeat3,
  [3557] = 4,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
    ACTIONS(834), 1,
      aux_sym_string_token2,
    STATE(154), 1,
      aux_sym_string_repeat2,
  [3570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      aux_sym_literal_token1,
  [3577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      aux_sym_literal_token1,
  [3584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      aux_sym_literal_token1,
  [3591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      aux_sym_literal_token1,
  [3598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      aux_sym_literal_token1,
  [3605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      aux_sym_interpolation_token1,
  [3612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      aux_sym_type_annotation_token1,
  [3619] = 2,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(796), 1,
      aux_sym_string_token5,
  [3626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      ts_builtin_sym_end,
  [3633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_PIPE,
  [3640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      aux_sym_type_annotation_token1,
  [3647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      aux_sym_type_annotation_token1,
  [3654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym_literal_token1,
  [3661] = 2,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(800), 1,
      aux_sym_string_token5,
  [3668] = 2,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(810), 1,
      aux_sym_string_token5,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(67)] = 0,
  [SMALL_STATE(68)] = 90,
  [SMALL_STATE(69)] = 180,
  [SMALL_STATE(70)] = 270,
  [SMALL_STATE(71)] = 360,
  [SMALL_STATE(72)] = 450,
  [SMALL_STATE(73)] = 540,
  [SMALL_STATE(74)] = 630,
  [SMALL_STATE(75)] = 720,
  [SMALL_STATE(76)] = 807,
  [SMALL_STATE(77)] = 894,
  [SMALL_STATE(78)] = 981,
  [SMALL_STATE(79)] = 1068,
  [SMALL_STATE(80)] = 1155,
  [SMALL_STATE(81)] = 1242,
  [SMALL_STATE(82)] = 1329,
  [SMALL_STATE(83)] = 1416,
  [SMALL_STATE(84)] = 1503,
  [SMALL_STATE(85)] = 1590,
  [SMALL_STATE(86)] = 1677,
  [SMALL_STATE(87)] = 1764,
  [SMALL_STATE(88)] = 1851,
  [SMALL_STATE(89)] = 1938,
  [SMALL_STATE(90)] = 2025,
  [SMALL_STATE(91)] = 2112,
  [SMALL_STATE(92)] = 2199,
  [SMALL_STATE(93)] = 2240,
  [SMALL_STATE(94)] = 2278,
  [SMALL_STATE(95)] = 2318,
  [SMALL_STATE(96)] = 2358,
  [SMALL_STATE(97)] = 2386,
  [SMALL_STATE(98)] = 2412,
  [SMALL_STATE(99)] = 2438,
  [SMALL_STATE(100)] = 2472,
  [SMALL_STATE(101)] = 2502,
  [SMALL_STATE(102)] = 2530,
  [SMALL_STATE(103)] = 2556,
  [SMALL_STATE(104)] = 2582,
  [SMALL_STATE(105)] = 2608,
  [SMALL_STATE(106)] = 2634,
  [SMALL_STATE(107)] = 2670,
  [SMALL_STATE(108)] = 2696,
  [SMALL_STATE(109)] = 2722,
  [SMALL_STATE(110)] = 2748,
  [SMALL_STATE(111)] = 2774,
  [SMALL_STATE(112)] = 2800,
  [SMALL_STATE(113)] = 2826,
  [SMALL_STATE(114)] = 2852,
  [SMALL_STATE(115)] = 2878,
  [SMALL_STATE(116)] = 2904,
  [SMALL_STATE(117)] = 2930,
  [SMALL_STATE(118)] = 2948,
  [SMALL_STATE(119)] = 2966,
  [SMALL_STATE(120)] = 2984,
  [SMALL_STATE(121)] = 3002,
  [SMALL_STATE(122)] = 3020,
  [SMALL_STATE(123)] = 3038,
  [SMALL_STATE(124)] = 3056,
  [SMALL_STATE(125)] = 3075,
  [SMALL_STATE(126)] = 3094,
  [SMALL_STATE(127)] = 3113,
  [SMALL_STATE(128)] = 3132,
  [SMALL_STATE(129)] = 3151,
  [SMALL_STATE(130)] = 3170,
  [SMALL_STATE(131)] = 3189,
  [SMALL_STATE(132)] = 3203,
  [SMALL_STATE(133)] = 3217,
  [SMALL_STATE(134)] = 3231,
  [SMALL_STATE(135)] = 3245,
  [SMALL_STATE(136)] = 3255,
  [SMALL_STATE(137)] = 3269,
  [SMALL_STATE(138)] = 3283,
  [SMALL_STATE(139)] = 3297,
  [SMALL_STATE(140)] = 3310,
  [SMALL_STATE(141)] = 3323,
  [SMALL_STATE(142)] = 3336,
  [SMALL_STATE(143)] = 3349,
  [SMALL_STATE(144)] = 3362,
  [SMALL_STATE(145)] = 3375,
  [SMALL_STATE(146)] = 3388,
  [SMALL_STATE(147)] = 3401,
  [SMALL_STATE(148)] = 3414,
  [SMALL_STATE(149)] = 3427,
  [SMALL_STATE(150)] = 3440,
  [SMALL_STATE(151)] = 3453,
  [SMALL_STATE(152)] = 3466,
  [SMALL_STATE(153)] = 3479,
  [SMALL_STATE(154)] = 3492,
  [SMALL_STATE(155)] = 3505,
  [SMALL_STATE(156)] = 3518,
  [SMALL_STATE(157)] = 3531,
  [SMALL_STATE(158)] = 3544,
  [SMALL_STATE(159)] = 3557,
  [SMALL_STATE(160)] = 3570,
  [SMALL_STATE(161)] = 3577,
  [SMALL_STATE(162)] = 3584,
  [SMALL_STATE(163)] = 3591,
  [SMALL_STATE(164)] = 3598,
  [SMALL_STATE(165)] = 3605,
  [SMALL_STATE(166)] = 3612,
  [SMALL_STATE(167)] = 3619,
  [SMALL_STATE(168)] = 3626,
  [SMALL_STATE(169)] = 3633,
  [SMALL_STATE(170)] = 3640,
  [SMALL_STATE(171)] = 3647,
  [SMALL_STATE(172)] = 3654,
  [SMALL_STATE(173)] = 3661,
  [SMALL_STATE(174)] = 3668,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(95),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(11),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(128),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(83),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(83),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(70),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(69),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(172),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(164),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(19),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(119),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(133),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(15),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(143),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(144),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(145),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(173),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(19),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(45),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(166),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(94),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(8),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(126),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(75),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(75),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(74),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(73),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(162),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(163),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(44),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(120),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(136),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(18),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(147),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(148),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(142),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(174),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(44),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(22),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(171),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(172),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(162),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, .production_id = 7),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3, .production_id = 7),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2, .production_id = 4),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 2, .production_id = 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_annotation, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 3),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(166),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(11),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(128),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(83),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(83),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(70),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(69),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(172),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(164),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(19),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(119),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(133),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(15),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(143),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(144),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(145),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(173),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(19),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(45),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .dynamic_precedence = 1, .production_id = 3),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .dynamic_precedence = 1, .production_id = 3),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(171),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(8),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(126),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(75),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(75),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(74),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(73),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(162),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(163),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(44),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(120),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(136),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(18),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(147),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(148),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(142),
  [580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(174),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(44),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, .production_id = 9), SHIFT_REPEAT(22),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 1, .production_id = 1),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 1, .production_id = 1), SHIFT_REPEAT(98),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 5),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, .production_id = 5),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, .production_id = 6),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [762] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(165),
  [765] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(123),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, .production_id = 8),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, .production_id = 8), SHIFT_REPEAT(93),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [789] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(131),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [836] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat4, 2), SHIFT_REPEAT(150),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat4, 2),
  [841] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(153),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2),
  [846] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(154),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [869] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
