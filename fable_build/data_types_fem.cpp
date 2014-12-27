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
  //C!fem logical*1 vlogical1
  //C!fem logical*2 vlogical2
  //C!fem logical*4 vlogical4
  //C!fem logical*8 vlogical8
  //C!fem real*16 vreal16
  //C!fem complex*32 vcomplex32
  //C
  char vbyte = 0xFF;
  write(6, star), vbyte ==  - 1;
  vbyte = 0x80;
  write(6, star), vbyte ==  - 128;
  vbyte = 0x7F;
  write(6, star), vbyte == 127;
  //C
  bool vlogical = false;
  write(6, star), vlogical;
  vlogical = true;
  write(6, star), vlogical;
  //C!fem vlogical1 = .false.
  //C!fem write(6, *) vlogical1
  //C!fem vlogical1 = .true.
  //C!fem write(6, *) vlogical1
  //C!fem vlogical2 = .false.
  //C!fem write(6, *) vlogical2
  //C!fem vlogical2 = .true.
  //C!fem write(6, *) vlogical2
  //C!fem vlogical4 = .false.
  //C!fem write(6, *) vlogical4
  //C!fem vlogical4 = .true.
  //C!fem write(6, *) vlogical4
  //C!fem vlogical8 = .false.
  //C!fem write(6, *) vlogical8
  //C!fem vlogical8 = .true.
  //C!fem write(6, *) vlogical8
  //C
  int vinteger = 0xFFFFFFFF;
  write(6, star), vinteger;
  vinteger = 0x80000000;
  write(6, star), vinteger;
  vinteger = 0x7FFFFFFF;
  write(6, star), vinteger;
  fem::integer_star_1 vinteger1 = 0xFF;
  write(6, star), vinteger1;
  vinteger1 = 0x80;
  write(6, star), vinteger1;
  vinteger1 = 0x7F;
  write(6, star), vinteger1;
  fem::integer_star_2 vinteger2 = 0xFFFF;
  write(6, star), vinteger2;
  vinteger2 = 0x8000;
  write(6, star), vinteger2;
  vinteger2 = 0x7FFF;
  write(6, star), vinteger2;
  fem::integer_star_4 vinteger4 = 0xFFFFFFFF;
  write(6, star), vinteger4;
  vinteger4 = 0x80000000;
  write(6, star), vinteger4;
  vinteger4 = 0x7FFFFFFF;
  write(6, star), vinteger4;
  fem::integer_star_8 vinteger8 = 0xFFFFFFFF;
  write(6, star), vinteger8;
  vinteger8 = 0x80000000;
  write(6, star), vinteger8;
  vinteger8 = 0x7FFFFFFF;
  write(6, star), vinteger8;
  //C
  float vreal = 1.17550e-38f;
  write(6, star), vreal;
  vreal = 3.40281e+38f;
  write(6, star), vreal;
  fem::real_star_4 vreal4 = 1.17550e-38f;
  write(6, star), vreal4;
  vreal4 = 3.40281e+38f;
  write(6, star), vreal4;
  fem::real_star_8 vreal8 = 2.22508e-308;
  write(6, star), vreal8;
  vreal8 = 1.79768e+308;
  write(6, star), vreal8;
  double vdp = 2.22508e-308;
  write(6, star), vdp;
  vdp = 1.79768e+308;
  write(6, star), vdp;
  //C!fem vreal16 = 1
  //C!fem do i=1,16
  //C!fem   vreal16 = vreal16 * 2.22508d-308
  //C!fem enddo
  //C!fem write(6, *) vreal16
  //C!fem vreal16 = 1
  //C!fem do i=1,16
  //C!fem   vreal16 = vreal16 * 1.79768d+308
  //C!fem enddo
  //C!fem write(6, *) vreal16
  //C
  std::complex<float> vcomplex = fem::cmplx(1.f, 2.e10f);
  write(6, star), vcomplex;
  std::complex<float> vcomplex8 = fem::cmplx(-3.e10f, -4.f);
  write(6, star), vcomplex8;
  std::complex<double> vcomplex16 = fem::dcmplx(5.e0, 6.e10);
  write(6, star), vcomplex16;
  std::complex<double> vdc = fem::dcmplx(-7.e10, -8.e0);
  write(6, star), vdc;
  //C!fem vcomplex32 = dcmplx(9.d0, 1.d10)
  //C!fem write(6, *) vcomplex32
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
    placeholder_please_replace::program_prog);
}
