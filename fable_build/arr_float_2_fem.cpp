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
  arr_2d<2, 3, float> data(fem::fill0);
  FEM_DO_SAFE(i, 1, 2) {
    FEM_DO_SAFE(j, 1, 3) {
      data(i, j) = i + 10 * j;
    }
  }
  FEM_DO_SAFE(j, 1, 3) {
    FEM_DO_SAFE(i, 1, 2) {
      write(6, star), data(i, j);
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
