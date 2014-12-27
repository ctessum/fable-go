#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
{
  fem::variant_core common_scr;
  fem::cmn_sve sub1a_sve;
  fem::cmn_sve sub1b_sve;
  fem::cmn_sve sub2a_sve;
  fem::cmn_sve sub2b_sve;
  fem::cmn_sve sub3_sve;
  fem::cmn_sve sub4_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct sub1a_save
{
  fem::variant_bindings scr_bindings;
};

void
sub1a(
  common& cmn)
{
  FEM_CMN_SVE(sub1a);
  common_variant scr(cmn.common_scr, sve.scr_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> i;
      mbr<int> j(dimension(2));
      scr.allocate(), i, j;
    }
  }
  int& i = scr.bind<int>();
  arr_ref<int> j(scr.bind<int>(), dimension(2));
  i = 12;
  j(1) = 34;
  j(2) = 65;
}

struct sub1b_save
{
  fem::variant_bindings scr_bindings;
};

void
sub1b(
  common& cmn)
{
  FEM_CMN_SVE(sub1b);
  common_write write(cmn);
  common_variant scr(cmn.common_scr, sve.scr_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> i;
      mbr<int> j;
      mbr<int> k;
      scr.allocate(), i, j, k;
    }
  }
  int const& i = scr.bind<int>();
  int const& j = scr.bind<int>();
  int const& k = scr.bind<int>();
  write(6, "(i2,1x,i2,1x,i2)"), i, j, k;
}

struct sub2a_save
{
  fem::variant_bindings scr_bindings;
};

void
sub2a(
  common& cmn)
{
  FEM_CMN_SVE(sub2a);
  common_variant scr(cmn.common_scr, sve.scr_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> i;
      mbr<float> x;
      scr.allocate(), i, x;
    }
  }
  /* int const& i */ scr.bind<int>();
  float& x = scr.bind<float>();
  x = 56.78f;
}

struct sub2b_save
{
  fem::variant_bindings scr_bindings;
};

void
sub2b(
  common& cmn)
{
  FEM_CMN_SVE(sub2b);
  common_write write(cmn);
  common_variant scr(cmn.common_scr, sve.scr_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> i;
      mbr<float> x;
      scr.allocate(), i, x;
    }
  }
  int& i = scr.bind<int>();
  float const& x = scr.bind<float>();
  write(6, "(i2,1x,f5.2)"), i, x;
  i = 91;
}

struct sub3_save
{
  fem::variant_bindings scr_bindings;
};

void
sub3(
  common& cmn)
{
  FEM_CMN_SVE(sub3);
  common_variant scr(cmn.common_scr, sve.scr_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> i;
      mbr<int> j;
      scr.allocate(), i, j;
    }
  }
  /* int const& i */ scr.bind<int>();
  int& j = scr.bind<int>();
  j = 23;
}

struct sub4_save
{
  fem::variant_bindings scr_bindings;
};

void
sub4(
  common& cmn)
{
  FEM_CMN_SVE(sub4);
  common_variant scr(cmn.common_scr, sve.scr_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> i(dimension(2));
      mbr<int> j;
      scr.allocate(), i, j;
    }
  }
  /* arr_cref<int> i( */ scr.bind<int>() /* , dimension(2)) */ ;
  int& j = scr.bind<int>();
  j = 45;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  sub1a(cmn);
  sub1b(cmn);
  sub2a(cmn);
  sub2b(cmn);
  sub3(cmn);
  sub1b(cmn);
  sub4(cmn);
  sub1b(cmn);
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
