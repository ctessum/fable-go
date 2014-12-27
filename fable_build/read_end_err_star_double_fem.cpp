#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

bool
f(
  common& cmn,
  str_cref txt)
{
  bool return_value = fem::bool0;
  common_read read(cmn);
  common_write write(cmn);
  double value = fem::double0;
  fem::str<1> buf = fem::char0;
  //C
  cmn.io.open(10, "fable_tmp_sio8miey")
    .status("old");
  //C
  try {
    read(10, "(d1.0)"), value;
  }
  catch (fem::read_end const&) {
    goto statement_200;
  }
  catch (fem::io_err const&) {
    goto statement_100;
  }
  write(6, star), "value from file = ", value;
  //C
  cmn.io.rewind(10);
  //C
  try {
    read(10, star), value;
  }
  catch (fem::read_end const&) {
    goto statement_200;
  }
  catch (fem::io_err const&) {
    goto statement_100;
  }
  write(6, star), "value from file = ", value;
  //C
  cmn.io.close(10);
  //C
  try {
    read(txt, star), value;
  }
  catch (fem::read_end const&) {
    goto statement_200;
  }
  catch (fem::io_err const&) {
    goto statement_100;
  }
  write(6, star), "value from txt = ", value;
  //C
  write(buf, "(a1,$)"), "7";
  try {
    read(buf, "(d6.3)"), value;
  }
  catch (fem::read_end const&) {
    goto statement_200;
  }
  catch (fem::io_err const&) {
    goto statement_100;
  }
  write(6, star), "value from buf = ", value;
  //C
  return_value = true;
  return return_value;
  //C
  statement_100:
  write(6, star), "ERROR: err";
  return_value = false;
  return return_value;
  //C
  statement_200:
  write(6, star), "ERROR: end";
  return_value = false;
  return return_value;
  //C
}

void
program_read_err_end(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  //C
  cmn.io.open(10, "fable_tmp_sio8miey")
    .status("unknown");
  write(10, "(a1,$)"), "0";
  cmn.io.close(10);
  //C
  fem::str<1> zero = "0";
  bool ff = f(cmn, zero);
  if (ff) {
    write(6, star), "OK";
  }
  //C
}

} // namespace placeholder_please_replace

int
main(
  int argc,
  char const* argv[])
{
  return fem::main_with_catch(
    argc, argv,
    placeholder_please_replace::program_read_err_end);
}
