#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub1(
  int& num)
{
  num = 9;
}

void
sub2(
  arr_ref<int> nums,
  int const& nums_size)
{
  nums(dimension(star));
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, nums_size) {
    nums(i) = i * 10;
  }
}

void
sub3(
  arr_ref<int> nums,
  int const& nums_size)
{
  nums(dimension(star));
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, nums_size) {
    nums(i) = i * 20;
  }
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  int num = fem::int0;
  sub1(num);
  write(6, star), "num after sub1:", num;
  int n = 1;
  sub2(num, n);
  write(6, star), "num after sub2", num;
  arr_1d<2, int> nums(fem::fill0);
  sub1(nums);
  write(6, star), "nums after sub1:", nums(1), nums(2);
  n = 2;
  sub2(nums, n);
  write(6, star), "nums after sub2:", nums(1), nums(2);
  sub3(nums, n);
  write(6, star), "nums after sub3:", nums(1), nums(2);
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
