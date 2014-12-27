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
  int j = fem::int0;
  int i = fem::int0;
  FEM_DO_SAFE(j, 1, 2) {
    FEM_DO_SAFE(i, 1, 2) {
      if (j == 1) {
        switch (i) {
          case 1: goto statement_10;
          case 2: goto statement_20;
          default: break;
        }
      }
      else {
        switch (i) {
          case 1: goto statement_10;
          case 2: goto statement_20;
          default: break;
        }
      }
      statement_10:
      write(6, star), "statement 10", j;
      goto statement_30;
      statement_20:
      write(6, star), "statement 20", j;
      statement_30:;
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
