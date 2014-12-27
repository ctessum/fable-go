#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_globals
{
  int ci;
  fem::str<8> cc;
  arr<int> cai;
  arr<fem::str<4> > cas;

  common_globals() :
    ci(fem::int0),
    cc(fem::char0),
    cai(dimension(2), fem::fill0),
    cas(dimension(2), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_globals
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
  int i;
  arr<int> sai;
  arr<fem::str<3> > sas;
  fem::str<5> sc;
  int si;

  program_prog_save() :
    i(fem::int0),
    sai(dimension(2), fem::fill0),
    sas(dimension(2), fem::fill0),
    sc(fem::char0),
    si(fem::int0)
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
  // COMMON globals
  int& ci = cmn.ci;
  fem::str<8>& cc = cmn.cc;
  arr_ref<int> cai(cmn.cai, dimension(2));
  str_arr_ref<1> cas(cmn.cas, dimension(2));
  //
  // SAVE
  int& i = sve.i;
  arr_ref<int> sai(sve.sai, dimension(2));
  str_arr_ref<1> sas(sve.sas, dimension(2));
  fem::str<5>& sc = sve.sc;
  int& si = sve.si;
  //
  si = 12;
  ci = 34;
  sc = "WeRtY";
  cc = "uIoPqWeR";
  FEM_DO_SAFE(i, 1, 2) {
    sai(i) = i + 37;
    cai(i) = i + 41;
  }
  sas(1) = "xYz";
  sas(2) = "EfG";
  cas(1) = "uvWx";
  cas(2) = "PqrS";
  write(6, star), si;
  write(6, star), sc;
  write(6, star), sai;
  write(6, star), sas;
  write(6, star), ci;
  write(6, star), cc;
  write(6, star), cai;
  write(6, star), cas;
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
