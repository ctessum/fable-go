#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub1(
  common& cmn,
  str_arr_cref<> strs1)
{
  strs1(dimension(star));
  common_write write(cmn);
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 2) {
    write(6, "(a)"), strs1(i);
  }
}

void
sub2(
  str_arr_ref<> strs1)
{
  strs1(dimension(star));
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 2) {
    strs1(i) = "AbCd";
  }
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  arr_2d<2, 3, fem::str<4> > strs2(fem::fill0);
  strs2(1, 1) = "A012";
  strs2(1, 2) = "C678";
  strs2(1, 3) = "E234";
  strs2(2, 1) = "B345";
  strs2(2, 2) = "D901";
  strs2(2, 3) = "F567";
  int j = fem::int0;
  FEM_DO_SAFE(j, 1, 3) {
    sub1(cmn, strs2(1, j));
  }
  FEM_DO_SAFE(j, 1, 3) {
    sub2(strs2(1, j));
  }
  FEM_DO_SAFE(j, 1, 3) {
    sub1(cmn, strs2(1, j));
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
