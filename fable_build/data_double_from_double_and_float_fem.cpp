#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_misc
{
  arr<double, 2> skip;

  common_misc() :
    skip(dimension(10, 2), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_misc
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
  // COMMON misc
  arr_ref<double, 2> skip(cmn.skip, dimension(10, 2));
  //
  int i = fem::int0;
  int j = fem::int0;
  if (is_called_first_time) {
    fem::data_values data((values, 0.f, 3.f, 8*datum(0.f), 1.e10,
      1.e10, 2.f, 7*datum(0.f)));
    FEM_DO_SAFE(j, 1, 2) {
      FEM_DO_SAFE(i, 1, 10) {
        data, skip(i, j);
      }
    }
  }
}

void
program_data(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  blockdata_unnamed(cmn);
  common_write write(cmn);
  // COMMON misc
  arr_cref<double, 2> skip(cmn.skip, dimension(10, 2));
  //
  fem::integer_star_4 i = fem::zero<fem::integer_star_4>();
  FEM_DO_SAFE(i, 1, 10) {
    write(6, star), skip(i, 1), skip(i, 2);
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
    placeholder_please_replace::program_data);
}
