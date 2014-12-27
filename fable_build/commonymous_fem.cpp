#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_commonymous
{
  arr<int> nums;

  common_commonymous() :
    nums(dimension(2), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_commonymous
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
  common& cmn)
{
  // COMMON commonymous
  arr_ref<int> nums(cmn.nums, dimension(2));
  //
  nums(1) = 1856;
  nums(2) = 7893;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  // COMMON commonymous
  arr_cref<int> nums(cmn.nums, dimension(2));
  //
  sub(cmn);
  write(6, star), nums;
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
