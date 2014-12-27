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
  int n_fail = 0;
  cmn.io.open(10, "fable_tmp_33ecb352");
  write(10, "(i6)"), -123;
  cmn.io.close(10);
  fem::str<30> buf = "    fable_tmp_33ecb352";
  cmn.io.open(10, buf)
    .form("formatted");
  int num = fem::int0;
  read(10, "(i6)"), num;
  cmn.io.close(10);
  if (num !=  - 123) {
    write(6, "(a)"), "FAILURE int", num;
    n_fail++;
  }
  cmn.io.open(10, "fable_tmp_33ecb352");
  fem::str<6> str6 = fem::char0;
  read(10, "(a)"), str6;
  cmn.io.close(10);
  if (str6 != "  -123") {
    write(6, "(a)"), "FAILURE str", str6;
    n_fail++;
  }
  if (n_fail == 0) {
    write(6, "(a)"), "OK";
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
