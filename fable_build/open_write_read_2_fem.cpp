#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_read read(cmn);
  common_write write(cmn);
  cmn.io.open(10, "fable_tmp_7895777d")
    .form("unformatted")
    .status("unknown");
  write(10, fem::unformatted), -123;
  cmn.io.close(10);
  cmn.io.open(10, "fable_tmp_7895777d")
    .form("unformatted")
    .status("old");
  int num = fem::int0;
  read(10, fem::unformatted), num;
  cmn.io.close(10);
  if (num !=  - 123) {
    write(6, "(a)"), "FAILURE int", num;
  }
  else {
    write(6, "(a)"), "OK";
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
