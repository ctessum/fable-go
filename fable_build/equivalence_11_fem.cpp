#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
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
  fem::variant_core_and_bindings save_equivalences;
  int i;

  program_prog_save() :
    i(fem::int0)
  {}
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  FEM_CMN_SVE(program_prog);
  common_write write(cmn);
  save_equivalences sve_equivalences(sve.save_equivalences);
  // SAVE
  int& i = sve.i;
  //
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> ns2(dimension(2));
      mbr<int> ns3(dimension(3));
      mbr<int> ns5(dimension(5));
      mbr<int> ns4(dimension(4));
      sve_equivalences.allocate(),
        equivalence(ns2, ns3)
          .align<1>(arr_index(2))
           .with<2>(arr_index(1)),
        equivalence(ns5, ns4)
          .align<1>(arr_index(1))
           .with<2>(arr_index(4))
      ;
    }
  }
  arr_ref<int> ns2(sve_equivalences.bind<int>(), dimension(2));
  arr_ref<int> ns3(sve_equivalences.bind<int>(), dimension(3));
  arr_ref<int> ns5(sve_equivalences.bind<int>(), dimension(5));
  arr_ref<int> ns4(sve_equivalences.bind<int>(), dimension(4));
  FEM_DO_SAFE(i, 1, 2) {
    ns2(i) = 20 + i;
  }
  FEM_DO_SAFE(i, 1, 3) {
    ns3(i) = 30 + i;
  }
  FEM_DO_SAFE(i, 1, 4) {
    ns4(i) = 40 + i;
  }
  FEM_DO_SAFE(i, 1, 5) {
    ns5(i) = 50 + i;
  }
  write(6, star), ns2;
  write(6, star), ns3;
  write(6, star), ns4;
  write(6, star), ns5;
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
