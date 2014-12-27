#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
{
  fem::cmn_sve sub_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct sub_save
{
  fem::variant_core_and_bindings save_equivalences;
  int i;

  sub_save() :
    i(fem::int0)
  {}
};

void
sub(
  common& cmn,
  int const& num)
{
  FEM_CMN_SVE(sub);
  common_write write(cmn);
  save_equivalences sve_equivalences(sve.save_equivalences);
  // SAVE
  int& i = sve.i;
  //
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> outside(dimension(3));
      mbr<int> inside(dimension(2));
      sve_equivalences.allocate(),
        equivalence(outside, inside)
          .align<1>(arr_index(1))
           .with<2>(arr_index(2))
      ;
    }
  }
  arr_ref<int> outside(sve_equivalences.bind<int>(), dimension(3));
  arr_ref<int> inside(sve_equivalences.bind<int>(), dimension(2));
  write(6, star), inside;
  write(6, star), outside;
  FEM_DO_SAFE(i, 1, 3) {
    outside(i) = num + i;
  }
  write(6, star), inside;
  write(6, star), outside;
  write(6, star);
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  sub(cmn, 20);
  sub(cmn, 30);
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
