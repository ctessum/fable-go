#ifndef TST_SEPARATE_FILES_FUNCTIONS_HPP
#define TST_SEPARATE_FILES_FUNCTIONS_HPP

#include "cmn.hpp"

namespace tst_separate_files {

void
sub1(
  int& num);

void
sub2(
  arr_ref<int> nums,
  int const& nums_size);

void
sub3(
  arr_ref<int> nums,
  int const& nums_size);

} // namespace tst_separate_files

#endif // GUARD
