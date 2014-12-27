#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
{
  fem::variant_core common_scr;
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
  fem::variant_bindings scr_bindings;
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  FEM_CMN_SVE(program_prog);
  common_write write(cmn);
  common_variant scr(cmn.common_scr, sve.scr_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> nc(dimension(2));
      mbr<int> nl(dimension(3));
      scr.allocate(),
        equivalence(nc, nl)
          .align<1>(arr_index(2))
           .with<2>(arr_index(1))
      ;
    }
  }
  arr_ref<int> nc(scr.bind<int>(), dimension(2));
  arr_ref<int> nl(scr.bind<int>(), dimension(3));
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 2) {
    nc(i) = 20 + i;
  }
  FEM_DO_SAFE(i, 1, 3) {
    nl(i) = 30 + i;
  }
  write(6, star), nc;
  write(6, star), nl;
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
