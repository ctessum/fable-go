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
  common_read read(cmn);
  common_write write(cmn);
  fem::str<9> buf = "1234";
  double val = fem::double0;
  read(buf, "(bn,f3.0)"), val;
  write(6, star), val;
  read(buf, "(bn,f3.1)"), val;
  write(6, star), val;
  read(buf, "(bn,f3.2)"), val;
  write(6, star), val;
  buf = ".234";
  read(buf, "(bn,f3.2)"), val;
  write(6, star), val;
  buf = "1.34";
  read(buf, "(bn,f3.2)"), val;
  write(6, star), val;
  buf = "12.4";
  read(buf, "(bn,f3.2)"), val;
  write(6, star), val;
  buf = "1 34";
  read(buf, "(bn,f3.0)"), val;
  write(6, star), val;
  read(buf, "(bz,f3.0)"), val;
  write(6, star), val;
  buf = "1234";
  read(buf, "(1p,bn,f3.0)"), val;
  write(6, star), val;
  read(buf, "(2p,bn,f3.0)"), val;
  write(6, star), val;
  read(buf, "(-1p,bn,f3.0)"), val;
  write(6, star), val;
  read(buf, "(-2p,bn,f3.0)"), val;
  write(6, star), val;
  buf = "1e34";
  read(buf, "(1p,bn,f3.0)"), val;
  write(6, star), val;
  buf = "3 5 e 1 2";
  read(buf, "(bn,f9.0)"), val;
  write(6, star), val;
  read(buf, "(bz,f9.0)"), val;
  write(6, star), val;
  read(buf, "(bn,f9.1)"), val;
  write(6, star), val;
  read(buf, "(bz,f9.1)"), val;
  write(6, star), val;
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
