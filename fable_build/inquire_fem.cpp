#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

int
istring_tail(
  str_cref s)
{
  int return_value = fem::int0;
  int i = fem::int0;
  FEM_DOSTEP(i, fem::len(s), 1, -1) {
    if (s(i, i) != " ") {
      return_value = i;
      return return_value;
    }
  }
  return_value = 0;
  return return_value;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  fem::str<1024> cvar = fem::char0;
  int i = fem::int0;
  bool lvar = fem::bool0;
  cmn.io.open(10, "fable_tmp_5d70aa2a");
  cmn.io.inquire_unit(10)
    .name(cvar);
  i = istring_tail(cvar);
  if (i < 18) {
    write(6, "(3a)"), "[", "FAILURE: ", cvar, "]";
  }
  else {
    write(6, "(3a)"), "[", cvar(i - 17, i), "]";
  }
  cmn.io.inquire_unit(10)
    .exist(lvar);
  write(6, "(a,l1,a)"), "(", lvar, ")";
  cmn.io.inquire_unit(10)
    .opened(lvar);
  write(6, "(a,l1,a)"), "(", lvar, ")";
  cmn.io.inquire_file("fable_tmp_5d70aa2a")
    .opened(lvar);
  write(6, "(a,l1,a)"), "(", lvar, ")";
  cmn.io.inquire_unit(10)
    .access(cvar);
  i = istring_tail(cvar);
  if (i < 4) {
    write(6, "(3a)"), "[", "FAILURE: ", cvar, "]";
  }
  else {
    write(6, "(3a)"), "[", cvar(i - 3, i), "]";
  }
  cmn.io.inquire_unit(10)
    .sequential(cvar);
  i = istring_tail(cvar);
  if (i < 2) {
    write(6, "(3a)"), "[", "FAILURE: ", cvar, "]";
  }
  else {
    write(6, "(3a)"), "[", cvar(i - 1, i), "]";
  }
  cmn.io.inquire_unit(10)
    .direct(cvar);
  i = istring_tail(cvar);
  if (i < 2) {
    write(6, "(3a)"), "[", "FAILURE: ", cvar, "]";
  }
  else {
    write(6, "(3a)"), "[", cvar(i - 1, i), "]";
  }
  cmn.io.inquire_unit(10)
    .blank(cvar);
  i = istring_tail(cvar);
  if (i < 4) {
    write(6, "(4a)"), "[", "FAILURE: ", cvar, "]";
  }
  else {
    write(6, "(3a)"), "[", cvar(i - 3, i), "]";
  }
  write(10, "(a)"), "Abc";
  cmn.io.close(10);
  cmn.io.inquire_unit(10)
    .opened(lvar);
  write(6, "(a,l1,a)"), "(", lvar, ")";
  cmn.io.inquire_file("fable_tmp_5d70aa2a")
    .opened(lvar);
  write(6, "(a,l1,a)"), "(", lvar, ")";
  try {
    cmn.io.inquire_file("fable_tmp_5d70aa2a")
      .exist(lvar);
  }
  catch (fem::io_err const&) {
    goto statement_10;
  }
  write(6, "(a,l1,a)"), "(", lvar, ")";
  goto statement_20;
  statement_10:
  write(6, "(a)"), "FAILURE inquire file";
  statement_20:
  cvar = " ";
  cmn.io.inquire_file("fable_tmp_d185826b")
    .name(cvar);
  i = istring_tail(cvar);
  if (i < 18) {
    write(6, "(3a)"), "[", "FAILURE: ", cvar, "]";
  }
  else {
    write(6, "(3a)"), "[", cvar(i - 17, i), "]";
  }
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
