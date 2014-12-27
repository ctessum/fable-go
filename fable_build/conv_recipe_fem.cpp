#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_abc
{
  float a;
  float b;
  float c;

  common_abc() :
    a(fem::float0),
    b(fem::float0),
    c(fem::float0)
  {}
};

struct common :
  fem::common,
  common_abc
{
  fem::cmn_sve show_resolution_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct show_resolution_save
{
  float ass;
  float bss;
  float css;
  bool first;

  show_resolution_save() :
    ass(fem::float0),
    bss(fem::float0),
    css(fem::float0),
    first(fem::bool0)
  {}
};

//C cctbx_project/compcomm/newsletter09/conv_recipe.py, svn rev. 9983
//C
void
show_resolution(
  common& cmn,
  int const& h,
  int const& k,
  int const& l)
{
  FEM_CMN_SVE(show_resolution);
  common_write write(cmn);
  // COMMON abc
  float& a = cmn.a;
  float& b = cmn.b;
  float& c = cmn.c;
  //
  // SAVE
  float& ass = sve.ass;
  float& bss = sve.bss;
  float& css = sve.css;
  bool& first = sve.first;
  //
  if (is_called_first_time) {
    first = true;
  }
  if (first) {
    first = false;
    if (a <= 0 || b <= 0 || c <= 0) {
      write(0, "(1x,a)"), "invalid unit cell constants.";
      FEM_STOP(0);
    }
    ass = 1 / (a * a);
    bss = 1 / (b * b);
    css = 1 / (c * c);
  }
  float dss = h * h * ass + k * k * bss + l * l * css;
  if (dss == 0) {
    write(6, "(3(1x,i3),1x,a)"), h, k, l, "    infinity";
  }
  else {
    write(6, "(3(1x,i3),1x,f12.6)"), h, k, l, fem::sqrt(1 / dss);
  }
}

void
program_conv_recipe(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  cmn.a = 11.0f;
  cmn.b = 12.0f;
  cmn.c = 13.0f;
  show_resolution(cmn, 0, 0, 0);
  show_resolution(cmn, 1, 2, 3);
}

} // namespace placeholder_please_replace

int
main(
  int argc,
  char const* argv[])
{
  return fem::main_with_catch(
    argc, argv,
    placeholder_please_replace::program_conv_recipe);
}
