#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_com
{
  int num;

  common_com() :
    num(fem::int0)
  {}
};

struct common :
  fem::common,
  common_com
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
};

void
sub1(
  common& cmn)
{
  FEM_CMN_SVE(sub1);
  common_write write(cmn);
  // COMMON com
  int& num = cmn.num;
  //
  if (is_called_first_time) {
    num = 5;
  }
  write(6, star), num;
  num++;
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
  // COMMON com
  int& num = cmn.num;
  //
  if (is_called_first_time) {
    num = 6;
  }
  write(6, star), num;
  num++;
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
