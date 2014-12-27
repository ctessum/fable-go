#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
try_integers(
  common& cmn)
{
  common_read read(cmn);
  common_write write(cmn);
  cmn.io.open(1, fem::file_not_specified)
    .form("unformatted")
    .status("unknown");
  write(1, fem::unformatted), 12, 34;
  write(1, fem::unformatted), 56;
  write(1, fem::unformatted), 78, 90;
  cmn.io.close(1);
  cmn.io.open(1, fem::file_not_specified)
    .form("unformatted")
    .status("old");
  int num1 = fem::int0;
  int num2 = fem::int0;
  read(1, fem::unformatted), num1, num2;
  write(6, star), num1, num2;
  read(1, fem::unformatted), num1;
  write(6, star), num1;
  read(1, fem::unformatted), num1, num2;
  write(6, star), num1, num2;
  cmn.io.close(1);
  cmn.io.open(1, fem::file_not_specified)
    .form("unformatted")
    .status("old");
  read(1, fem::unformatted), num1;
  write(6, star), num1;
  read(1, fem::unformatted), num1;
  write(6, star), num1;
  read(1, fem::unformatted), num1;
  write(6, star), num1;
  cmn.io.close(1);
}

void
try_strings(
  common& cmn)
{
  common_read read(cmn);
  common_write write(cmn);
  cmn.io.open(1, fem::file_not_specified)
    .form("unformatted")
    .status("unknown");
  write(1, fem::unformatted), "Ab", "cDe";
  write(1, fem::unformatted), "f", "Ghi";
  write(1, fem::unformatted), "JkLmnop", "qrstuvw";
  cmn.io.close(1);
  cmn.io.open(1, fem::file_not_specified)
    .form("unformatted")
    .status("old");
  fem::str<2> str2 = fem::char0;
  fem::str<3> str3 = fem::char0;
  read(1, fem::unformatted), str2, str3;
  write(6, star), "[", str2, "], [", str3, "]";
  read(1, fem::unformatted), str2;
  write(6, star), "[", str2, "]";
  read(1, fem::unformatted), str2, str3;
  write(6, star), "[", str2, "], [", str3, "]";
  cmn.io.close(1);
  cmn.io.open(1, fem::file_not_specified)
    .form("unformatted")
    .status("old");
  read(1, fem::unformatted), str2;
  write(6, star), "[", str2, "]";
  read(1, fem::unformatted), str2;
  write(6, star), "[", str2, "]";
  read(1, fem::unformatted), str2;
  write(6, star), "[", str2, "]";
  cmn.io.close(1);
  fem::str<8> str8 = fem::char0;
  if (false) {
    cmn.io.open(1, fem::file_not_specified)
      .form("unformatted")
      .status("old");
    read(1, fem::unformatted), str8;
    //C         ifort: input statement requires too much data
    //C         gfortran: Short record on unformatted read
    write(6, star), "[", str8, "]";
    cmn.io.close(1);
  }
}

void
try_mixed_integers(
  common& cmn)
{
  common_read read(cmn);
  common_write write(cmn);
  cmn.io.open(1, fem::file_not_specified)
    .form("unformatted")
    .status("unknown");
  fem::integer_star_4 i4o = 4321;
  fem::integer_star_8 i8o = 1234;
  i8o = i8o * fem::pow(2, 16);
  i8o = i8o * fem::pow(2, 16);
  i8o += 5678;
  write(1, fem::unformatted), i4o, i4o + 1111;
  cmn.io.close(1);
  cmn.io.open(1, fem::file_not_specified)
    .form("unformatted")
    .status("old");
  fem::integer_star_4 i4a = fem::zero<fem::integer_star_4>();
  fem::integer_star_4 i4b = fem::zero<fem::integer_star_4>();
  read(1, fem::unformatted), i4a, i4b;
  write(6, star), i4a, i4b;
  cmn.io.close(1);
  cmn.io.open(1, fem::file_not_specified)
    .form("unformatted")
    .status("old");
  fem::integer_star_8 i8a = fem::zero<fem::integer_star_8>();
  read(1, fem::unformatted), i8a;
  write(6, star), i8a;
  cmn.io.close(1);
  cmn.io.open(1, fem::file_not_specified)
    .form("unformatted")
    .status("unknown");
  write(1, fem::unformatted), i8o;
  cmn.io.close(1);
  cmn.io.open(1, fem::file_not_specified)
    .form("unformatted")
    .status("old");
  read(1, fem::unformatted), i8a;
  write(6, star), i8a;
  cmn.io.close(1);
  cmn.io.open(1, fem::file_not_specified)
    .form("unformatted")
    .status("old");
  read(1, fem::unformatted), i4a, i4b;
  write(6, star), i4a, i4b;
  cmn.io.close(1);
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  try_integers(cmn);
  try_strings(cmn);
  try_mixed_integers(cmn);
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
