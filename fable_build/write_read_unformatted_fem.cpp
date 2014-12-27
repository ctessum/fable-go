#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
exercise_write(
  common& cmn)
{
  common_write write(cmn);
  cmn.io.open(1, "fable_tmp_06c35b63")
    .form("unformatted")
    .status("unknown");
  fem::str<1> c = "x";
  write(1, fem::unformatted), c;
  fem::str<2> s = "Ab";
  write(1, fem::unformatted), s;
  bool l = true;
  write(1, fem::unformatted), l;
  int i = 3;
  write(1, fem::unformatted), i;
  fem::integer_star_2 i2 = 32;
  write(1, fem::unformatted), i2;
  float r = 4.1f;
  write(1, fem::unformatted), r;
  double d = 5.2e0;
  write(1, fem::unformatted), d;
  std::complex<float> rc = fem::cmplx(6.3f, -7.4f);
  write(1, fem::unformatted), rc;
  std::complex<double> dc = fem::dcmplx(-8.5e0, 9.6e0);
  write(1, fem::unformatted), dc;
  cmn.io.close(1);
}

void
exercise_read(
  common& cmn)
{
  common_read read(cmn);
  common_write write(cmn);
  cmn.io.open(1, "fable_tmp_06c35b63")
    .form("unformatted")
    .status("old");
  fem::str<1> c = fem::char0;
  read(1, fem::unformatted), c;
  write(6, star), c;
  fem::str<2> s = fem::char0;
  read(1, fem::unformatted), s;
  write(6, star), s;
  bool l = fem::bool0;
  read(1, fem::unformatted), l;
  write(6, star), l;
  int i = fem::int0;
  read(1, fem::unformatted), i;
  write(6, star), i;
  fem::integer_star_2 i2 = fem::zero<fem::integer_star_2>();
  read(1, fem::unformatted), i2;
  write(6, star), i2;
  float r = fem::float0;
  read(1, fem::unformatted), r;
  write(6, star), r;
  double d = fem::double0;
  read(1, fem::unformatted), d;
  write(6, star), d;
  std::complex<float> rc = fem::float0;
  read(1, fem::unformatted), rc;
  write(6, star), rc;
  std::complex<double> dc = fem::double0;
  read(1, fem::unformatted), dc;
  write(6, star), dc;
  cmn.io.close(1);
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  exercise_write(cmn);
  exercise_read(cmn);
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
