#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
{
  fem::variant_core common_tab;
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
  fem::variant_bindings tab_bindings;
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  FEM_CMN_SVE(program_prog);
  common_write write(cmn);
  common_variant tab(cmn.common_tab, sve.tab_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> na;
      mbr<int> nums(dimension(17));
      mbr<int> nb(dimension(2));
      mbr<int> nc(dim1(0, 1));
      mbr<int> nd(dim1(-1, 2).dim2(3));
      tab.allocate(),
        equivalence(na, nums)
          .align<1>()
           .with<2>(),
        nb, nc, nd
      ;
    }
  }
  int& na = tab.bind<int>();
  arr_ref<int> nums(tab.bind<int>(), dimension(17));
  arr_cref<int> nb(tab.bind<int>(), dimension(2));
  arr_cref<int> nc(tab.bind<int>(), dim1(0, 1));
  arr_cref<int, 2> nd(tab.bind<int>(), dim1(-1, 2).dim2(3));
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 17) {
    nums(i) = 83 + i;
  }
  write(6, star), na, nb, nc, nd;
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
