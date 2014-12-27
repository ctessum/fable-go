#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub(
  common& cmn,
  arr_ref<int> nums)
{
  nums(dimension(star));
  common_read read(cmn);
  int i = fem::int0;
  {
    read_loop rloop(cmn, 5, "(2i3)");
    FEM_DO_SAFE(i, 1, 2) {
      rloop, nums(i);
    }
  }
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  arr_1d<2, int> nums(fem::fill0);
  sub(cmn, nums);
  write(6, "(2i5)"), nums(1) * 3, nums(2) * 4;
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
