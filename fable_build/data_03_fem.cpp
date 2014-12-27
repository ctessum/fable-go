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
};

void
sub(
  common& cmn)
{
  FEM_CMN_SVE(sub);
  common_write write(cmn);
  // COMMON com
  int& num = cmn.num;
  //
  if (is_called_first_time) {
    num = 7;
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
  sub(cmn);
  sub(cmn);
  sub(cmn);
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
