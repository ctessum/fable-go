#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
{
  fem::variant_core common_scr;
  fem::cmn_sve sub1_sve;
  fem::cmn_sve sub2_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct sub1_save
{
  fem::variant_bindings scr_bindings;
};

void
sub1(
  common& cmn)
{
  FEM_CMN_SVE(sub1);
  common_write write(cmn);
  common_variant scr(cmn.common_scr, sve.scr_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> inside(dimension(2));
      mbr<int> data(dimension(4));
      scr.allocate(),
        equivalence(inside, data)
          .align<2>()
           .with<1>()
      ;
    }
  }
  arr_ref<int> inside(scr.bind<int>(), dimension(2));
  arr_ref<int> data(scr.bind<int>(), dimension(4));
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 4) {
    data(i) = 20 + i;
  }
  write(6, star), inside;
  write(6, star), data;
}

struct sub2_save
{
  fem::variant_bindings scr_bindings;
};

void
sub2(
  common& cmn)
{
  FEM_CMN_SVE(sub2);
  common_write write(cmn);
  common_variant scr(cmn.common_scr, sve.scr_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> inside(dimension(3));
      scr.allocate(), inside;
    }
  }
  arr_cref<int> inside(scr.bind<int>(), dimension(3));
  write(6, star), inside;
  write(6, star), inside(4);
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  sub1(cmn);
  sub2(cmn);
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
