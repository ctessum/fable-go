#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  const int n_data = 10;
  float d_max = fem::float0;
  int i = fem::int0;
  arr_1d<n_data, float> data(fem::fill0);
  arr_1d<1, float> d(fem::fill0);
  if (n_data <= 100) {
    write(6, star), "branch 1.";
  }
  else {
    d_max = 0;
    FEM_DO_SAFE(i, 1, n_data) {
      d(1) = data(i);
      if (d_max < d(1)) {
        d_max = d(1);
      }
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
