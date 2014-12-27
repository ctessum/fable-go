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
  cmn.io.open(1, "fable_tmp_77e68e5d")
    .status("unknown");
  write(1, "(1x,i4)"), 2;
  write(1, "(1x,a)"), "L1";
  write(1, "(1x,a)"), "L2";
  write(1, "(1x,a)"), "L3";
  cmn.io.close(1);
  cmn.io.open(1, "fable_tmp_77e68e5d")
    .status("old");
  int num = fem::int0;
  read(1, "(1x,i5)"), num;
  write(6, star), num;
  int i = fem::int0;
  fem::str<2> title = fem::char0;
  FEM_DO_SAFE(i, 1, num) {
    read(1, "(1x,a2)"), title;
    write(6, star), "[", title, "]";
  }
  cmn.io.rewind(1);
  float val = fem::float0;
  read(1, "(1x,f5.0)"), val;
  write(6, star), val;
  FEM_DO_SAFE(i, 1, num) {
    read(1, "(1x,a2)"), title;
    write(6, star), "[", title, "]";
  }
  cmn.io.rewind(1);
  num = 12;
  int missing = 34;
  read(1, "(1x,2i4)"), num, missing;
  write(6, star), num, missing;
  cmn.io.close(1);
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
