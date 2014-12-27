#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_tab
{
  int na;
  int nb_memory[2];
  int nc_memory[1-0+1];
  int nd_memory[(2-(-1)+1) * 3];

  arr_ref<int> nb;
  arr_ref<int> nc;
  arr_ref<int, 2> nd;

  common_tab() :
    na(fem::int0),
    nb(*nb_memory, dimension(2), fem::fill0),
    nc(*nc_memory, dim1(0, 1), fem::fill0),
    nd(*nd_memory, dim1(-1, 2).dim2(3), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_tab
{
  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  // COMMON tab
  arr_cref<int> nb(cmn.nb, dimension(2));
  arr_cref<int> nc(cmn.nc, dim1(0, 1));
  arr_cref<int, 2> nd(cmn.nd, dim1(-1, 2).dim2(3));
  //
  int i = fem::int0;
  arr_ref<int> nums(cmn.na, dimension(17)); // SIMPLE EQUIVALENCE
  FEM_DO_SAFE(i, 1, 17) {
    nums(i) = 83 + i;
  }
  write(6, star), cmn.na, nb, nc, nd;
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
