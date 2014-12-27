#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

//C
//C1
//Cc2
void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  int i = fem::int0;
  arr_1d<2, int> nums(fem::fill0);
  //C3
  //C c4
  //C5
  //Cc6
  //C7
  //C c8
  FEM_DO_SAFE(i, 1, 2) {
    //C9
    //Cc10
    //C
    //C12
    //C
    //C c13
    //Cc14
    //C
    //C c15
    nums(i) = i + 47;
    //C16
    //Cc17
  }
  //C
  //C c18
  try {
    write(6, star), nums;
  }
  catch (fem::io_err const&) {
    goto statement_10;
  }
  //C19
  //Cc20
  goto statement_20;
  //C21
  //C c22
  statement_10:
  FEM_STOP("write error");
  //C23
  //Cc24
  statement_20:;
  //C25
}
//C  c26
//C27
//C

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
