#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
{
  fem::cmn_sve sub1_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

typedef int (*fun_function_pointer)(common&, int const&);

int
fun(
  common& cmn,
  int const& num)
{
  int return_value = fem::int0;
  common_write write(cmn);
  write(6, star), num;
  return_value = 10 + num;
  return return_value;
}

struct sub1_save
{
  int i;

  sub1_save() :
    i(fem::int0)
  {}
};

void
sub1(
  common& cmn,
  fun_function_pointer func)
{
  FEM_CMN_SVE(sub1);
  common_write write(cmn);
  // SAVE
  int& i = sve.i;
  //
  i = func(cmn, i);
  write(6, star), i;
}

void
sub2(
  common& cmn,
  fun_function_pointer func)
{
  common_write write(cmn);
  int i = func(cmn, 3);
  write(6, star), i;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  int i = fun(cmn, 1);
  write(6, star), i;
  sub1(cmn, fun);
  sub1(cmn, fun);
  sub2(cmn, fun);
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
