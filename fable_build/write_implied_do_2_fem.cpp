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
  int i = 1;
  {
    write_loop wloop(cmn, 6, "(4i2)");
    wloop, i;
    FEM_DO_SAFE(i, 2, 3) {
      wloop, i;
    }
    wloop, i;
  }
  {
    write_loop wloop(cmn, 6, "(2i2)");
    FEM_DO_SAFE(i, 5, 6) {
      wloop, i;
    }
  }
  write(6, "(i2)"), i;
  int j = fem::int0;
  {
    write_loop wloop(cmn, 6, "(4i2)");
    FEM_DO_SAFE(i, 0, 1) {
      wloop, i;
    }
    FEM_DO_SAFE(j, 3, 4) {
      wloop, j;
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
