#define FEM_TRANSLATION_UNIT_WITH_MAIN

#include "functions.hpp"

namespace tst_separate_files {

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

} // namespace tst_separate_files

int
main(
  int argc,
  char const* argv[])
{
  return fem::main_with_catch(
    argc, argv,
    tst_separate_files::program_prog);
}
