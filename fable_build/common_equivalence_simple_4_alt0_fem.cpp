#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_second
{
  int n2;

  common_second() :
    n2(fem::int0)
  {}
};

struct common_first
{
  int n1;
  int n2_memory[2];

  arr_ref<int> n2;

  common_first() :
    n1(fem::int0),
    n2(*n2_memory, dimension(2), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_second,
  common_first
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
  common_write write(cmn);
  // COMMON second
  int& n2 = static_cast<common_second&>(cmn).n2;
  //
  n2 = 54;
  write(6, star), n2;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  // COMMON first
  arr_ref<int> n2(static_cast<common_first&>(cmn).n2, dimension(2));
  //
  cmn.n1 = 25;
  n2(1) = 93;
  n2(2) = 37;
  arr_ref<int> nums(cmn.n1, dimension(3)); // SIMPLE EQUIVALENCE
  write(6, star), nums;
  sub(cmn);
  write(6, star), nums;
  int& m2 = n2; // SIMPLE EQUIVALENCE
  write(6, star), m2;
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
