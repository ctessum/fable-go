#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
program_intrinsics_2(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  fem::integer_star_4 k = -1;
  fem::integer_star_4 l = 0;
  fem::integer_star_4 m = 1;
  fem::integer_star_4 s = -1;
  write(6, star), fem::isign(k, s), fem::isign(l, s), fem::isign(m, s);
  s = 0;
  write(6, star), fem::isign(k, s), fem::isign(l, s), fem::isign(m, s);
  s = 1;
  write(6, star), fem::isign(k, s), fem::isign(l, s), fem::isign(m, s);
  double xx = 7.2973525698e-3;
  fem::real_star_4 x = fem::sngl(xx);
  write(6, star), xx, x, fem::dble(x);
  write(6, star), fem::idnint(-1.37e0), fem::idnint(-1.73e0);
  write(6, star), fem::idnint(xx), fem::idnint(0.5e0), fem::idnint(1.5e0);
  write(6, star), fem::idnint(1.37e0), fem::idnint(1.73e0);
  arr_1d<6, fem::str<2> > ss(fem::fill0);
  ss(1) = "ab";
  ss(2) = "AB";
  ss(3) = "0x";
  ss(4) = ",!";
  ss(5) = " b";
  ss(5) = "# ";
  fem::integer_star_4 i = fem::zero<fem::integer_star_4>();
  fem::integer_star_4 j = fem::zero<fem::integer_star_4>();
  {
    write_loop wloop(cmn, 6, star);
    FEM_DO_SAFE(j, 1, 6) {
      FEM_DO_SAFE(i, 1, 6) {
        wloop, fem::llt(ss(i), ss(j));
      }
    }
  }
  {
    write_loop wloop(cmn, 6, star);
    FEM_DO_SAFE(j, 1, 6) {
      FEM_DO_SAFE(i, 1, 6) {
        wloop, fem::lle(ss(i), ss(j));
      }
    }
  }
  {
    write_loop wloop(cmn, 6, star);
    FEM_DO_SAFE(j, 1, 6) {
      FEM_DO_SAFE(i, 1, 6) {
        wloop, fem::lgt(ss(i), ss(j));
      }
    }
  }
  {
    write_loop wloop(cmn, 6, star);
    FEM_DO_SAFE(j, 1, 6) {
      FEM_DO_SAFE(i, 1, 6) {
        wloop, fem::lge(ss(i), ss(j));
      }
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
    placeholder_please_replace::program_intrinsics_2);
}
