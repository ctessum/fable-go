#include "functions.hpp"

namespace tst_separate_files {

using namespace fem::major_types;

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

} // namespace tst_separate_files
