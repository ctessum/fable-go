#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
{
  fem::cmn_sve program_unnamed_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct program_unnamed_save
{
  static const int num = 2;

  arr<float> vals;

  program_unnamed_save() :
    vals(dimension(num), fem::fill0)
  {}
};

const int program_unnamed_save::num;

void
program_unnamed(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  FEM_CMN_SVE(program_unnamed);
  common_write write(cmn);
  // SAVE
  const int num = 2;
  arr_ref<float> vals(sve.vals, dimension(num));
  //
  if (is_called_first_time) {
    fem::data((values, num*datum(1.2f))), vals;
  }
  int i = fem::int0;
  {
    write_loop wloop(cmn, 6, star);
    FEM_DO_SAFE(i, 1, num) {
      wloop, vals(i);
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
    placeholder_please_replace::program_unnamed);
}
