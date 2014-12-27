#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
{
  fem::cmn_sve exercise_nint_sve;
  fem::cmn_sve exercise_index_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

void
exercise_c_keywords(
  common& cmn)
{
  common_write write(cmn);
  int num = 84;
  float val = fem::ffloat(num);
  val += 0.99f;
  num = fem::fint(val);
  write(6, "(f4.1,1x,i2)"), val, num;
}

void
exercise_char_ichar(
  common& cmn)
{
  common_write write(cmn);
  fem::str<1> c = "R";
  int i = fem::ichar(c);
  write(6, "(i3)"), i;
  c = "X";
  write(6, "(a)"), c;
  c = fem::fchar(i);
  write(6, "(a)"), c;
}

struct exercise_nint_save
{
  arr<double> dv;
  arr<float> rv;

  exercise_nint_save() :
    dv(dimension(8), fem::fill0),
    rv(dimension(8), fem::fill0)
  {}
};

void
exercise_nint(
  common& cmn)
{
  FEM_CMN_SVE(exercise_nint);
  common_write write(cmn);
  // SAVE
  arr_ref<double> dv(sve.dv, dimension(8));
  arr_ref<float> rv(sve.rv, dimension(8));
  //
  if (is_called_first_time) {
    {
      static const float values[] = {
        0.49f, 0.51f, -0.49f, -0.51f, 3.49f, 3.51f, -2.49f, -2.51f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        rv;
    }
    {
      static const float values[] = {
        1.49f, 2.51f, -3.49f, -4.51f, 5.49f, 6.51f, -7.49f, -8.51f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        dv;
    }
  }
  int i = fem::int0;
  {
    write_loop wloop(cmn, 6, "(8i3)");
    FEM_DO_SAFE(i, 1, 8) {
      wloop, fem::nint(rv(i));
    }
  }
  {
    write_loop wloop(cmn, 6, "(8i3)");
    FEM_DO_SAFE(i, 1, 8) {
      wloop, fem::nint(dv(i));
    }
  }
}

void
exercise_double(
  common& cmn)
{
  common_write write(cmn);
  write(6, "(f6.2)"), fem::dacos(0.5e0);
  write(6, "(f6.2)"), fem::dasin(0.5e0);
  write(6, "(f6.2)"), fem::datan2(0.1e0, 0.2e0);
  write(6, "(f6.2)"), fem::dtan(0.5e0);
}

void
exercise_string(
  common& cmn)
{
  common_write write(cmn);
  fem::str<4> s4 = "Xy";
  write(6, "(i1)"), fem::lnblnk(s4);
}

struct exercise_index_save
{
  fem::str<10> digits;

  exercise_index_save() :
    digits(fem::char0)
  {}
};

void
exercise_index(
  common& cmn)
{
  FEM_CMN_SVE(exercise_index);
  common_write write(cmn);
  // SAVE
  fem::str<10>& digits = sve.digits;
  //
  if (is_called_first_time) {
    digits = "0123456789";
  }
  write(6, star), fem::index(digits, "x");
  write(6, star), fem::index(digits, "0");
  write(6, star), fem::index(digits, "5");
  write(6, star), fem::index(digits, "9");
  write(6, star), fem::index(digits, "24");
  write(6, star), fem::index(digits, "34");
}

void
exercise_min_max(
  common& cmn)
{
  common_write write(cmn);
  float a = 2;
  float b = 4;
  float c = 0;
  float d = 3;
  float e = 1;
  write(6, star), fem::amin1(a, b, c, d, e);
  write(6, star), fem::amax1(a, b, c, d, e);
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  exercise_c_keywords(cmn);
  exercise_char_ichar(cmn);
  exercise_nint(cmn);
  exercise_double(cmn);
  exercise_string(cmn);
  exercise_index(cmn);
  exercise_min_max(cmn);
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
