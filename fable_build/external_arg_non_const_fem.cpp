#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

typedef void (*exch_imp_function_pointer)(common&, arr_cref<int>, arr_ref<int>);

void
exch_imp(
  common& cmn,
  arr_cref<int> nc,
  arr_ref<int> nm)
{
  nc(dimension(2));
  nm(dimension(2));
  common_write write(cmn);
  write(6, star), nc;
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 2) {
    nm(i) = nc(i) + 19;
  }
}

void
sub2(
  common& cmn,
  arr_cref<int> nc,
  arr_ref<int> nm,
  exch_imp_function_pointer exch)
{
  nc(dimension(2));
  nm(dimension(2));
  exch(cmn, nc, nm);
}

void
sub(
  common& cmn,
  exch_imp_function_pointer exch)
{
  common_write write(cmn);
  int i = fem::int0;
  arr_1d<2, int> nc(fem::fill0);
  FEM_DO_SAFE(i, 1, 2) {
    nc(i) = 13 * i;
  }
  arr_1d<2, int> nm(fem::fill0);
  sub2(cmn, nc, nm, exch);
  write(6, star), nm;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  sub(cmn, exch_imp);
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
