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
  const float val = fem::pow(1.2f, 3.4f);
  write(6, "(f5.3)"), val;
  float x = 1.2f + fem::pow(3.4f, 5.6f) / 7.8f;
  write(6, "(f5.1)"), x;
  x = fem::pow((1.2f + 3.4f), 5.6f) / 7.8f;
  write(6, "(f5.1)"), x;
  x = fem::pow((1.2f + 3.4f), (5.6f / 7.8f));
  write(6, "(f5.3)"), x;
  x = -fem::pow2(1.3f);
  write(6, "(f5.2)"), x;
  x = fem::pow2((-1.3f));
  write(6, "(f4.2)"), x;
  x = ((-1.4f));
  write(6, "(f5.2)"), x;
  x = fem::pow3((-1.5f));
  write(6, "(f5.2)"), x;
  x = fem::pow4((-1.6f));
  write(6, "(f4.2)"), x;
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
