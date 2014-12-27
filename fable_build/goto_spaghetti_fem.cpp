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
  write(6, star), "start";
  goto statement_20;
  statement_10:
  i = 3;
  write(6, star), "stmt 10";
  goto statement_30;
  statement_20:
  write(6, star), "stmt 20";
  i = 2;
  statement_30:
  write(6, star), "stmt 30", i;
  if (i == 2) {
    goto statement_10;
  }
  FEM_DO_SAFE(j, 1, 2) {
    if (j == 2) {
      goto statement_40;
    }
    write(6, star), "loop j is", j;
    statement_40:;
  }
  write(6, star), "end";
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
