#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_cmn
{
  int num3;

  common_cmn() :
    num3(fem::int0)
  {}
};

struct common :
  fem::common,
  common_cmn
{
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
  int num1;
  int num2;

  sub1_save() :
    num1(fem::int0),
    num2(fem::int0)
  {}
};

//C Moving sub2 before sub1 changes the result:
//C   Result with sub1 code first:
//C          1           2         203
//C         11          22         233
//C        263
//C         21          42        1263
//C   Result with sub2 code first:
//C          1           2           3
//C         11          22          33
//C         63
//C         21          42        1063
//C
void
sub1(
  common& cmn)
{
  FEM_CMN_SVE(sub1);
  common_write write(cmn);
  // COMMON cmn
  int& num3 = cmn.num3;
  //
  // SAVE
  int& num1 = sve.num1;
  int& num2 = sve.num2;
  //
  if (is_called_first_time) {
    num1 = 1;
    num2 = 2;
    num3 = 3;
  }
  write(6, star), num1, num2, num3;
  num1 += 10;
  num2 += 20;
  num3 += 30;
}

struct sub2_save
{
};

void
sub2(
  common& cmn)
{
  FEM_CMN_SVE(sub2);
  common_write write(cmn);
  // COMMON cmn
  int& num3 = cmn.num3;
  //
  if (is_called_first_time) {
    num3 = 203;
  }
  write(6, star), num3;
  num3 += 1000;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  sub1(cmn);
  sub1(cmn);
  sub2(cmn);
  sub1(cmn);
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
