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
  FEM_DO_SAFE(i, 1, 3) {
    FEM_DO_SAFE(j, 1, 2) {
      switch (fem::if_arithmetic(i - 2)) {
        case -1: goto statement_11;
        case  0: goto statement_12;
        default: goto statement_13;
      }
      statement_10:
      if (i == j) {
        goto statement_14;
      }
      write(6, star), "i != j";
      goto statement_14;
      statement_11:
      write(6, star), "label 11";
      goto statement_10;
      statement_12:
      write(6, star), "label 12";
      goto statement_10;
      statement_13:
      write(6, star), "label 13";
      goto statement_10;
      statement_14:;
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
