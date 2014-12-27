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
  fem::variant_core_and_bindings save_equivalences;
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
  save_equivalences sve_equivalences(sve.save_equivalences);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> nc(dimension(2));
      mbr<int> nce(dimension(2));
      scr.allocate(),
        equivalence(nc, nce)
          .align<1>()
           .with<2>()
      ;
    }
    {
      mbr<int> ns(dimension(2));
      mbr<int> nse(dimension(2));
      sve_equivalences.allocate(),
        equivalence(ns, nse)
          .align<1>()
           .with<2>()
      ;
    }
  }
  local_equivalences loc_equivalences;
  {
    using fem::mbr; // member
    mbr<int> nl(dimension(2));
    mbr<int> nle(dimension(2));
    loc_equivalences.allocate(),
      equivalence(nl, nle)
        .align<1>()
         .with<2>()
    ;
  }
  arr_ref<int> nc(scr.bind<int>(), dimension(2));
  arr_ref<int> nce(scr.bind<int>(), dimension(2));
  arr_ref<int> ns(sve_equivalences.bind<int>(), dimension(2));
  arr_ref<int> nse(sve_equivalences.bind<int>(), dimension(2));
  arr_ref<int> nl(loc_equivalences.bind<int>(), dimension(2));
  arr_ref<int> nle(loc_equivalences.bind<int>(), dimension(2));
  nc(1) = 56;
  nc(2) = -56;
  ns(1) = 34;
  ns(2) = -34;
  nl(1) = 12;
  nl(2) = -12;
  write(6, star), nc, ns, nl;
  write(6, star), nse, nle, nce;
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
