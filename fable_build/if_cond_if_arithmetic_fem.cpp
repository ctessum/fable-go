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
  int i = fem::int0;
  int j = fem::int0;
  FEM_DO_SAFE(i, 1, 2) {
    FEM_DO_SAFE(j, 1, 3) {
      if (i == 1) {
        switch (fem::if_arithmetic(j - 2)) {
          case -1: goto statement_10;
          case  0: goto statement_20;
          default: goto statement_30;
        }
      }
      write(6, star), i, j;
      goto statement_40;
      statement_10:
      write(6, star), "l10";
      goto statement_40;
      statement_20:
      write(6, star), "l20";
      goto statement_40;
      statement_30:
      write(6, star), "l30";
      statement_40:;
    }
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
