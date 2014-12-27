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
  int ix = fem::int0;
  int ix_sum = fem::int0;
  FEM_DO_SAFE(ix, 1, 3) {
    if (ix == 1) {
      write(6, star), "ix is one.";
    }
    else {
      ix_sum += ix;
    }
    write(6, star), ix_sum;
  }
  int ix_sum_sq = fem::int0;
  FEM_DO_SAFE(ix, 2, 3) {
    ix_sum_sq += ix * ix;
  }
  write(6, star), ix_sum_sq;
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
