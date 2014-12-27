#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_cmn1
{
  int num1;
  int num2;

  common_cmn1() :
    num1(fem::int0),
    num2(fem::int0)
  {}
};

struct common_cmn2
{
  arr<int> num2;
  int num3;

  common_cmn2() :
    num2(dimension(2), fem::fill0),
    num3(fem::int0)
  {}
};

struct common :
  fem::common,
  common_cmn1,
  common_cmn2
{
  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

void
sub1init(
  common& cmn)
{
  // COMMON cmn1
  int& num2 = static_cast<common_cmn1&>(cmn).num2;
  //
  cmn.num1 = 12;
  num2 = 34;
}

void
sub2init(
  common& cmn)
{
  // COMMON cmn2
  arr_ref<int> num2(static_cast<common_cmn2&>(cmn).num2, dimension(2));
  //
  num2(1) = 56;
  num2(2) = 78;
  cmn.num3 = 90;
}

void
sub1show(
  common& cmn)
{
  common_write write(cmn);
  // COMMON cmn1
  int& num2 = static_cast<common_cmn1&>(cmn).num2;
  //
  write(6, star), cmn.num1, num2;
}

void
sub2show(
  common& cmn)
{
  common_write write(cmn);
  // COMMON cmn2
  arr_cref<int> num2(static_cast<common_cmn2&>(cmn).num2, dimension(2));
  int& num3 = cmn.num3;
  //
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 2) {
    write(6, star), i, num2, num3;
  }
  FEM_DO_SAFE(i, 3, 4) {
    write(6, star), i, num2, num3;
  }
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  sub1init(cmn);
  sub2init(cmn);
  sub1show(cmn);
  sub2show(cmn);
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
