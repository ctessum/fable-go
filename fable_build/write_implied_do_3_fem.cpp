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
  {
    write_loop wloop(cmn, 6, "(4i3)");
    FEM_DO_SAFE(j, 3, 4) {
      FEM_DO_SAFE(i, 1, 2) {
        wloop, i * 10 + j;
      }
    }
  }
  int k = fem::int0;
  {
    write_loop wloop(cmn, 6, "(4i4)");
    FEM_DO_SAFE(k, 5, 6) {
      FEM_DO_SAFE(j, 3, 4) {
        FEM_DO_SAFE(i, 1, 2) {
          wloop, i * 100 + j * 10 + k;
        }
      }
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
