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
  arr_1d<2, int> nums(fem::fill0);
  nums(1) = 13;
  nums(2) = -24;
  int i = fem::int0;
  {
    write_loop wloop(cmn, 6, "(2i4)");
    FEM_DO_SAFE(i, 1, 2) {
      wloop, nums(i);
    }
  }
  int j = fem::int0;
  {
    write_loop wloop(cmn, 6, "(3i4)");
    FEM_DO_SAFE(i, 1, 2) {
      wloop, nums(i);
      FEM_DO_SAFE(j, 1, 2) {
        wloop, nums(j);
      }
    }
  }
  {
    write_loop wloop(cmn, 6, "(5i4)");
    FEM_DO_SAFE(i, 1, 2) {
      wloop, nums(i);
      FEM_DO_SAFE(j, 1, 2) {
        wloop, nums(j);
      }
      FEM_DO_SAFE(j, 1, 2) {
        wloop, nums(j);
      }
    }
  }
  int k = fem::int0;
  {
    write_loop wloop(cmn, 6, "(7i4)");
    FEM_DO_SAFE(i, 1, 2) {
      wloop, nums(i);
      FEM_DO_SAFE(j, 1, 2) {
        wloop, nums(j);
        FEM_DO_SAFE(k, 1, 2) {
          wloop, nums(k);
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
