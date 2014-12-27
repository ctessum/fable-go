#include "functions.hpp"

namespace tst_separate_files {

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

} // namespace tst_separate_files
