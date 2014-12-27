#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

fem::str<4>
dynfmt(
  int const& i)
{
  fem::str<4> return_value = fem::zero<fem::str<4> >();
  if (i == 1) {
    return_value = "(i1)";
  }
  else {
    return_value = "(i2)";
  }
  return return_value;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  write(6, star), 12, "Zpq";
  write(6, "(i2,a3)"), 34, "Jel";
  write(6, "(a3,i2)"), "OwM", 56;
  fem::str<7> fmt = "(a4,i1)";
  write(6, fmt), "TvDp", 7;
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 2) {
    write(6, dynfmt(i)), i + 8;
  }
  write(6, star);
  write(6, "('XuW')");
  {
    write_loop wloop(cmn, 6, "(i2,i3)");
    FEM_DO_SAFE(i, 3, 4) {
      wloop, i * 3;
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
