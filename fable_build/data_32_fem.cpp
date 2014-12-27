#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
{
  fem::cmn_sve sub_sve;
  fem::cmn_sve sub2_sve;
  fem::cmn_sve sub3_sve;
  fem::cmn_sve program_prog_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct sub_save
{
  arr<int> nums;

  sub_save() :
    nums(dimension(2), fem::fill0)
  {}
};

void
sub(
  common& cmn)
{
  FEM_CMN_SVE(sub);
  common_write write(cmn);
  // SAVE
  arr_ref<int> nums(sve.nums, dimension(2));
  //
  if (is_called_first_time) {
    static const int values[] = {
      -24, +35
    };
    fem::data_of_type<int>(FEM_VALUES_AND_SIZE),
      nums;
  }
  write(6, "(2i4)"), nums;
}

struct sub2_save
{
  arr<fem::integer_star_2> nums;

  sub2_save() :
    nums(dimension(3), fem::fill0)
  {}
};

void
sub2(
  common& cmn)
{
  FEM_CMN_SVE(sub2);
  common_write write(cmn);
  // SAVE
  arr_ref<fem::integer_star_2> nums(sve.nums, dimension(3));
  //
  if (is_called_first_time) {
    fem::data((values, -56, 2*datum(78))), nums;
  }
  int i = fem::int0;
  {
    write_loop wloop(cmn, 6, "(3i4)");
    FEM_DO_SAFE(i, 1, 3) {
      wloop, nums(i) * 2;
    }
  }
}

struct sub3_save
{
  std::complex<double> dc;
  std::complex<float> sc;

  sub3_save() :
    dc(fem::double0),
    sc(fem::float0)
  {}
};

void
sub3(
  common& cmn)
{
  FEM_CMN_SVE(sub3);
  common_write write(cmn);
  // SAVE
  std::complex<double>& dc = sve.dc;
  std::complex<float>& sc = sve.sc;
  //
  if (is_called_first_time) {
    sc = fem::cmplx(1.2f, -3.4f);
    dc = fem::cmplx(-5.6e0, +7.8e0);
  }
  write(6, star), sc;
  write(6, star), dc;
}

struct program_prog_save
{
  int num;
  int numj;
  arr<int> nums;
  arr<int> numsi;
  arr<int> numsj;
  fem::str<2> str;
  arr<fem::str<3> > strs;
  arr<fem::str<4> > strsi;
  arr<fem::str<5> > strsj;

  program_prog_save() :
    num(fem::int0),
    numj(fem::int0),
    nums(dimension(2), fem::fill0),
    numsi(dimension(2), fem::fill0),
    numsj(dimension(2), fem::fill0),
    str(fem::char0),
    strs(dimension(2), fem::fill0),
    strsi(dimension(2), fem::fill0),
    strsj(dimension(2), fem::fill0)
  {}
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  FEM_CMN_SVE(program_prog);
  common_write write(cmn);
  // SAVE
  int& num = sve.num;
  int& numj = sve.numj;
  arr_ref<int> nums(sve.nums, dimension(2));
  arr_ref<int> numsi(sve.numsi, dimension(2));
  arr_ref<int> numsj(sve.numsj, dimension(2));
  fem::str<2>& str = sve.str;
  str_arr_ref<1> strs(sve.strs, dimension(2));
  str_arr_ref<1> strsi(sve.strsi, dimension(2));
  str_arr_ref<1> strsj(sve.strsj, dimension(2));
  //
  int i = fem::int0;
  if (is_called_first_time) {
    num = -34;
    str = "YuIo";
    {
      static const int values[] = {
        +12, -34
      };
      fem::data_of_type<int>(FEM_VALUES_AND_SIZE),
        nums;
    }
    {
      static const int values[] = {
        -56, +78
      };
      fem::data_of_type<int> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 1, 2) {
        data, numsi(i);
      }
    }
    {
      static const char* values[] = {
        "Cde", "FgH"
      };
      fem::data_of_type_str(FEM_VALUES_AND_SIZE),
        strs;
    }
    {
      static const char* values[] = {
        "IjkL", "MNOp"
      };
      fem::data_of_type_str data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 1, 2) {
        data, strsi(i);
      }
    }
    numj = 91;
    numsj(1) = 23;
    strsj(1) = "Hjklo";
    numsj(2) = 45;
    strsj(2) = "ASdfg";
  }
  write(6, "(i3)"), num;
  write(6, "(a)"), str;
  write(6, "(2i4)"), nums;
  write(6, "(2i4)"), numsi;
  write(6, "(2a)"), strs;
  write(6, "(2a)"), strsi;
  write(6, "(i2)"), numj;
  write(6, "(2i3)"), numsj;
  write(6, "(2a)"), strsj;
  sub(cmn);
  sub2(cmn);
  sub3(cmn);
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
