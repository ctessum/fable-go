#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub(
  common& cmn,
  int const& iarg)
{
  common_write write(cmn);
  switch (fem::if_arithmetic(iarg - 2)) {
    case -1: goto statement_10;
    case  0: goto statement_20;
    default: goto statement_30;
  }
  statement_10:
  write(6, star), "smaller than two";
  return;
  statement_20:
  write(6, star), "equal to two";
  return;
  statement_30:
  write(6, star), "larger than two";
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 3) {
    sub(cmn, i);
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
