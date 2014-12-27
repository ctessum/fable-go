#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_scr
{
  static const int isz = 2;

  arr<int> nums_cmn;

  common_scr() :
    nums_cmn(dimension(isz), fem::fill0)
  {}
};

const int common_scr::isz;

struct common :
  fem::common,
  common_scr
{
  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

void
sub(
  common& cmn,
  arr_cref<int> nums_arg)
{
  const int isz = 2;
  nums_arg(dimension(isz));
  common_write write(cmn);
  // COMMON scr
  arr_ref<int> nums_cmn(cmn.nums_cmn, dimension(isz));
  //
  write(6, star), nums_arg;
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 2) {
    nums_cmn(i) += i * 19;
  }
  write(6, star), nums_cmn;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  int i = fem::int0;
  arr_1d<2, int> nums(fem::fill0);
  FEM_DO_SAFE(i, 1, 2) {
    nums(i) = 17 * i;
  }
  sub(cmn, nums);
  sub(cmn, nums);
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
