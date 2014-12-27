#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub1(
  common& cmn,
  int& n,
  str_arr_ref<> buf)
{
  buf(dimension(star));
  n = cmn.iargc();
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, n) {
    cmn.getarg(i, buf(i));
  }
}

void
sub2(
  common& cmn,
  int& n,
  str_arr_ref<> buf)
{
  buf(dimension(star));
  n = cmn.iargc();
  int j = 1;
  int i = fem::int0;
  FEM_DOSTEP(i, n, 1, -1) {
    cmn.getarg(i, buf(j));
    j++;
  }
}

void
sub3(
  common& cmn,
  int& n,
  str_arr_ref<> buf)
{
  buf(dimension(star));
  n = cmn.iargc();
  int i = fem::int0;
  FEM_DO_SAFE(i, 2, n) {
    cmn.getarg(i, buf(i - 1));
  }
  if (cmn.iargc() != 0) {
    cmn.getarg(1, buf(n));
  }
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  int n = fem::int0;
  arr_1d<10, fem::str<4> > buf(fem::fill0);
  sub1(cmn, n, buf);
  int i = fem::int0;
  {
    write_loop wloop(cmn, 6, "(a)");
    wloop, "A";
    FEM_DO_SAFE(i, 1, n) {
      wloop, buf(i);
    }
  }
  sub2(cmn, n, buf);
  {
    write_loop wloop(cmn, 6, "(a)");
    wloop, "B";
    FEM_DO_SAFE(i, 1, n) {
      wloop, buf(i);
    }
  }
  sub3(cmn, n, buf);
  {
    write_loop wloop(cmn, 6, "(a)");
    wloop, "C";
    FEM_DO_SAFE(i, 1, n) {
      wloop, buf(i);
    }
  }
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
