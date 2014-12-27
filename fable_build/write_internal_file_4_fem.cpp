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
  fem::str<24> buf = "abcdefghijklmnopqrstuvwx";
  write(6, "(3a)"), "[", buf, "]";
  write(buf, star), 123;
  write(6, "(3a)"), "[", buf, "]";
  write(buf, star), 1000000, 2000000;
  write(6, "(3a)"), "[", buf, "]";
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
