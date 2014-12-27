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
  common_write write(cmn);
  cmn.io.open(10, "fable_tmp_661de075");
  cmn.io.close(10);
  cmn.io.open(10, "fable_tmp_661de075")
    .form("formatted")
    .status("unknown");
  cmn.io.close(10);
  try {
    cmn.io.open(10, "fable_tmp_661de075")
      .access("sequential")
      .form("formatted")
      .status("new");
  }
  catch (fem::io_err const&) {
    goto statement_10;
  }
  goto statement_20;
  statement_10:
  write(6, "(a)"), "open err statement";
  statement_20:
  try {
    cmn.io.close(10)
      .status("keep");
  }
  catch (fem::io_err const&) {
    goto statement_30;
  }
  goto statement_40;
  statement_30:
  write(6, "(a)"), "close err statement";
  statement_40:
  write(6, "(a)"), "Done.";
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
