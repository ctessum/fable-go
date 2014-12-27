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
  fem::str<9> d = fem::char0;
  fem::date(d);
  write(6, "(a)"), d;
  fem::str<8> t = fem::char0;
  fem::time(t);
  write(6, "(a)"), t;
  fem::str<70> e = fem::char0;
  fem::getenv(" PATH ", e);
  write(6, "(a)"), e;
  float tm = fem::float0;
  fem::cpu_time(tm);
  write(6, "(f6.2)"), tm;
  fem::str<8> c = "echo YkD";
  int i = fem::system(c);
  write(6, star), i;
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
