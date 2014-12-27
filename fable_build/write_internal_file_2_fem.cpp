#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_buffer
{
  arr<fem::str<12> > ioline;

  common_buffer() :
    ioline(dimension(2), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_buffer
{
  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

void
exercise_internal_file_array(
  common& cmn)
{
  common_write write(cmn);
  int i = 1;
  arr_1d<1, fem::str<3> > bufs(fem::fill0);
  int j = fem::int0;
  {
    write_loop wloop(bufs(i), "(i1,i2)");
    FEM_DO_SAFE(j, 1, 2) {
      wloop, j;
    }
  }
  write(6, star), bufs;
}

void
exercise_internal_file_str_arr_ref(
  common& cmn)
{
  common_write write(cmn);
  // COMMON buffer
  str_arr_ref<1> ioline(cmn.ioline, dimension(2));
  //
  ioline(1) = "aBcDeFgHiJkL";
  ioline(2) = "MnOpQrStUvWx";
  write(ioline, "(i2,i1)"), 12, 4;
  write(6, star), ioline;
  write(ioline, star), -56;
  write(6, star), ioline;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  arr_1d<2, int> nums(fem::fill0);
  nums(1) = -2;
  nums(2) = 3;
  fem::str<8> buf = fem::char0;
  int i = fem::int0;
  {
    write_loop wloop(buf, "(2i3)");
    FEM_DO_SAFE(i, 1, 2) {
      wloop, nums(i);
    }
  }
  write(6, "('nums = (',a,')')"), buf;
  exercise_internal_file_array(cmn);
  exercise_internal_file_str_arr_ref(cmn);
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
