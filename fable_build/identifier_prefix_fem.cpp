#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_vars
{
  int identifier_template;

  common_vars() :
    identifier_template(fem::int0)
  {}
};

struct common :
  fem::common,
  common_vars
{
  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

void
identifier_switch(
  common& cmn)
{
  common_write write(cmn);
  write(6, "(a)"), "SwItCh";
}

void
exercise_common_member(
  common& cmn)
{
  common_write write(cmn);
  // COMMON vars
  int& identifier_template = cmn.identifier_template;
  //
  identifier_template = 123;
  write(6, star), identifier_template;
  identifier_switch(cmn);
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  int identifier_arr = 1;
  int identifier_arr_index = identifier_arr + 2;
  int identifier_arr_cref = identifier_arr_index + 3;
  int identifier_arr_ref = identifier_arr_cref + 4;
  int identifier_arr_size = identifier_arr_ref + 5;
  int identifier_arr_1d = identifier_arr_size + 6;
  int identifier_arr_2d = identifier_arr_1d + 7;
  int identifier_arr_3d = identifier_arr_2d + 8;
  int identifier_common_read = identifier_arr_3d + 9;
  int identifier_common_variant = identifier_common_read + 10;
  int identifier_common_write = identifier_common_variant + 11;
  int identifier_datum = identifier_common_write + 12;
  int identifier_dimension = identifier_datum + 13;
  int identifier_dim1 = identifier_dimension + 14;
  int identifier_equivalence = identifier_dim1 + 15;
  int identifier_local_equivalences = identifier_equivalence + 16;
  int identifier_read_loop = identifier_local_equivalences + 17;
  int identifier_save_equivalences = identifier_read_loop + 18;
  int identifier_star = identifier_save_equivalences + 19;
  int identifier_str_arr_cref = identifier_star + 20;
  int identifier_str_arr_ref = identifier_str_arr_cref + 21;
  int identifier_str_cref = identifier_str_arr_ref + 22;
  int identifier_str_index = identifier_str_cref + 23;
  int identifier_str_ref = identifier_str_index + 24;
  int identifier_values = identifier_str_ref + 25;
  int identifier_write_loop = identifier_values + 26;
  int identifier_and = identifier_write_loop + 27;
  int identifier_and_eq = identifier_and + 28;
  int identifier_asm = identifier_and_eq + 29;
  int identifier_auto = identifier_asm + 30;
  int identifier_bitand = identifier_auto + 31;
  int identifier_bitor = identifier_bitand + 32;
  int identifier_bool = identifier_bitor + 33;
  int identifier_break = identifier_bool + 34;
  int identifier_case = identifier_break + 35;
  int identifier_catch = identifier_case + 36;
  int identifier_char = identifier_catch + 37;
  int identifier_class = identifier_char + 38;
  int identifier_compl = identifier_class + 39;
  int identifier_const = identifier_compl + 40;
  int identifier_const_cast = identifier_const + 41;
  int identifier_continue = identifier_const_cast + 42;
  int identifier_default = identifier_continue + 43;
  int identifier_delete = identifier_default + 44;
  int identifier_do = identifier_delete + 45;
  int identifier_double = identifier_do + 46;
  int identifier_dynamic_cast = identifier_double + 47;
  int identifier_else = identifier_dynamic_cast + 48;
  int identifier_enum = identifier_else + 49;
  int identifier_explicit = identifier_enum + 50;
  int identifier_export = identifier_explicit + 51;
  int identifier_extern = identifier_export + 52;
  int identifier_false = identifier_extern + 53;
  int identifier_float = identifier_false + 54;
  int identifier_for = identifier_float + 55;
  int identifier_friend = identifier_for + 56;
  int identifier_goto = identifier_friend + 57;
  int identifier_if = identifier_goto + 58;
  int identifier_inline = identifier_if + 59;
  int identifier_int = identifier_inline + 60;
  int identifier_long = identifier_int + 61;
  int identifier_mutable = identifier_long + 62;
  int identifier_namespace = identifier_mutable + 63;
  int identifier_new = identifier_namespace + 64;
  int identifier_not = identifier_new + 65;
  int identifier_not_eq = identifier_not + 66;
  int identifier_operator = identifier_not_eq + 67;
  int identifier_or = identifier_operator + 68;
  int identifier_or_eq = identifier_or + 69;
  int identifier_private = identifier_or_eq + 70;
  int identifier_protected = identifier_private + 71;
  int identifier_public = identifier_protected + 72;
  int identifier_register = identifier_public + 73;
  int identifier_reinterpret_cast = identifier_register + 74;
  int identifier_return = identifier_reinterpret_cast + 75;
  int identifier_short = identifier_return + 76;
  int identifier_signed = identifier_short + 77;
  int identifier_sizeof = identifier_signed + 78;
  int identifier_static = identifier_sizeof + 79;
  int identifier_static_cast = identifier_static + 80;
  int identifier_struct = identifier_static_cast + 81;
  int identifier_switch = identifier_struct + 82;
  int identifier_template = identifier_switch + 83;
  int identifier_this = identifier_template + 84;
  int identifier_throw = identifier_this + 85;
  int identifier_true = identifier_throw + 86;
  int identifier_try = identifier_true + 87;
  int identifier_typedef = identifier_try + 88;
  int identifier_typeid = identifier_typedef + 89;
  int identifier_typename = identifier_typeid + 90;
  int identifier_union = identifier_typename + 91;
  int identifier_unsigned = identifier_union + 92;
  int identifier_using = identifier_unsigned + 93;
  int identifier_virtual = identifier_using + 94;
  int identifier_void = identifier_virtual + 95;
  int identifier_volatile = identifier_void + 96;
  int identifier_wchar_t = identifier_volatile + 97;
  int identifier_while = identifier_wchar_t + 98;
  int identifier_xor = identifier_while + 99;
  int identifier_xor_eq = identifier_xor + 100;
  write(6, star), identifier_xor_eq;
  exercise_common_member(cmn);
}

} // namespace placeholder_please_replace

int
main(
  int argc,
  char const* argv[])
{
  return fem::main_with_catch(
    argc, argv,
    placeholder_please_replace::program_prog);
}
