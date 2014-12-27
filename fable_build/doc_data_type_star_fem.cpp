#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
program_examples(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  //C
  cmn.io.open(1, "fable_tmp_d357d9d2")
    .form("unformatted");
  char b_var = fem::char0;
  fem::str<1> s_var = fem::char0;
  fem::str<2> s2_var = fem::char0;
  bool l_var = fem::bool0;
  fem::logical_star_1 l1_var = fem::zero<fem::logical_star_1>();
  int i_var = fem::int0;
  fem::integer_star_1 i1_var = fem::zero<fem::integer_star_1>();
  fem::integer_star_2 i2_var = fem::zero<fem::integer_star_2>();
  fem::integer_star_4 i4_var = fem::zero<fem::integer_star_4>();
  fem::integer_star_8 i8_var = fem::zero<fem::integer_star_8>();
  float r_var = fem::float0;
  fem::real_star_4 r4_var = fem::zero<fem::real_star_4>();
  fem::real_star_8 r8_var = fem::zero<fem::real_star_8>();
  double d_var = fem::double0;
  fem::real_star_16 r16_var = fem::zero<fem::real_star_16>();
  std::complex<float> c_var = fem::float0;
  std::complex<float> c8_var = fem::float0;
  std::complex<double> c16_var = fem::double0;
  std::complex<double> dc_var = fem::double0;
  std::complex<long double> c32_var = fem::long_double0;
  write(1, fem::unformatted), b_var, s_var, s2_var, l_var, l1_var,
    i_var, i1_var, i2_var, i4_var, i8_var, r_var, r4_var, r8_var,
    d_var, r16_var, c_var, c8_var, c16_var, dc_var, c32_var;
  cmn.io.close(1);
  //C
  write(6, "(a)"), "Done.";
  //C
}

} // namespace placeholder_please_replace

int
main(
  int argc,
  char const* argv[])
{
  return fem::main_with_catch(
    argc, argv,
    placeholder_please_replace::program_examples);
}
