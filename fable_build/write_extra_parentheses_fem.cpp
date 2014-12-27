#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

int
i1(
  int const& i)
{
  int return_value = fem::int0;
  return_value = 7 * i;
  return return_value;
}

int
i2(
  int const& i,
  int const& j)
{
  int return_value = fem::int0;
  return_value = i * 8 + j;
  return return_value;
}

int
i3(
  int const& i,
  int const& j,
  int const& k)
{
  int return_value = fem::int0;
  return_value = i * 9 + j * 29 + k;
  return return_value;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  int i = 3;
  int j = 4;
  int k = 5;
  int l = 6;
  int m = 7;
  write(6, "(1i5)"), -i * 3;
  write(6, "(1i5)"), -i * 3;
  write(6, "(2i5)"), -i * 3, -j * 4;
  write(6, "(3i5)"), -i * 3, -j * 4, -k * 7;
  write(6, "(3i5)"), -i * 3, -j * 4, -k * 7;
  write(6, "(3i5)"), -i * 3, -j * 4, -k * 7;
  write(6, "(4i5)"), -i * 3, -j * 4, -k * 7, -l * 8;
  write(6, "(4i5)"), -i * 3, -j * 4, -k * 7, -l * 8;
  write(6, "(4i5)"), -i * 3, -j * 4, -k * 7, -l * 8;
  write(6, "(5i5)"), -i * 3, -j * 4, -k * 7, -l * 8, -m * 9;
  write(6, "(4i5)"), i1(-i * 3), -j * 4, -k * 7, -l * 8;
  write(6, "(4i5)"), i1(-i * 3), -j * 4, -k * 7, -l * 8;
  write(6, "(4i5)"), i1(-i * 3), -j * 4, -k * 7, -l * 8;
  write(6, "(4i5)"), i1(-i * 3), -j * 4, -k * 7, -l * 8;
  write(6, "(4i5)"), i1(-i * 3), -j * 4, -k * 7, -l * 8;
  write(6, "(2i5)"), i1(-i * 3), i3(-j * 4, -k * 7, -l * 8);
  write(6, "(2i5)"), i1(-i * 3), i3(-j * 4, -k * 7, -l * 8);
  write(6, "(2i5)"), i1(-i * 3), i3(-j * 4, -k * 7, -l * 8);
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
