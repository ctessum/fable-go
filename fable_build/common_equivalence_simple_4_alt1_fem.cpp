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

struct common :
  fem::common,
  common_second
{
  fem::variant_core common_first;
  fem::cmn_sve program_prog_sve;

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

struct program_prog_save
{
  fem::variant_bindings first_bindings;
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  FEM_CMN_SVE(program_prog);
  common_write write(cmn);
  common_variant first(cmn.common_first, sve.first_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> n1;
      mbr<int> nums(dimension(3));
      mbr<int> n2(dimension(2));
      mbr<int> m2;
      first.allocate(),
        equivalence(n1, nums)
          .align<2>()
           .with<1>(),
        equivalence(n2, m2)
          .align<2>()
           .with<1>()
      ;
    }
  }
  int& n1 = first.bind<int>();
  arr_ref<int> nums(first.bind<int>(), dimension(3));
  arr_ref<int> n2(first.bind<int>(), dimension(2));
  int& m2 = first.bind<int>();
  n1 = 25;
  n2(1) = 93;
  n2(2) = 37;
  write(6, star), nums;
  sub(cmn);
  write(6, star), nums;
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
