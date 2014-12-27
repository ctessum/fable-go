#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_info
{
  int nums_memory[2];

  arr_ref<int> nums;

  common_info() :
    nums(*nums_memory, dimension(2), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_info
{
  fem::cmn_sve program_prog_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct program_prog_save
{
  int n1;
  int n2;

  program_prog_save() :
    n1(fem::int0),
    n2(fem::int0)
  {}
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  // COMMON info
  arr_ref<int> nums(cmn.nums, dimension(2));
  //
  int& n1 = nums(1); // SIMPLE EQUIVALENCE
  n1 = 12;
  int& n2 = nums(2); // SIMPLE EQUIVALENCE
  n2 = 34;
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
