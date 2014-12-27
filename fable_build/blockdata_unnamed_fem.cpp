#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_com
{
  int i;

  common_com() :
    i(fem::int0)
  {}
};

struct common :
  fem::common,
  common_com
{
  fem::cmn_sve blockdata_unnamed_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct blockdata_unnamed_save
{
};

void
blockdata_unnamed(
  common& cmn)
{
  FEM_CMN_SVE(blockdata_unnamed);
  if (is_called_first_time) {
    cmn.i = 3;
  }
}

void
program_unnamed(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  blockdata_unnamed(cmn);
  common_write write(cmn);
  write(6, star), cmn.i;
}

} // namespace placeholder_please_replace

int
main(
  int argc,
  char const* argv[])
{
  return fem::main_with_catch(
    argc, argv,
    placeholder_please_replace::program_unnamed);
}
