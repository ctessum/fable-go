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
  FEM_DO_SAFE(i, -1, 1) {
    FEM_DO_SAFE(j, -1, 1) {
      write(6, star), i, j, fem::sign(i, j);
    }
  }
  write(6, star), fem::dsign(-1.e0, 1.e0);
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
