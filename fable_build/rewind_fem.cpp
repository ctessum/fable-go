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
  int num = fem::int0;
  cmn.io.open(1, "fable_tmp_103fa7e8")
    .status("unknown");
  write(1, "(i3)"), 12 + 34;
  cmn.io.rewind(1);
  read(1, "(i3)"), num;
  write(6, star), num;
  try {
    cmn.io.rewind(1);
  }
  catch (fem::io_err const&) {
    goto statement_10;
  }
  goto statement_20;
  statement_10:
  write(6, star), "rewind FAILURE";
  statement_20:
  write(1, "(i3)"), 56 + 78;
  cmn.io.rewind(1);
  read(1, "(i3)"), num;
  write(6, star), num;
  cmn.io.rewind(1);
  cmn.io.endfile(1);
  cmn.io.rewind(1);
  try {
    read(1, "(i3)"), num;
  }
  catch (fem::read_end const&) {
    goto statement_30;
  }
  write(6, star), "endfile FAILURE";
  statement_30:;
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
