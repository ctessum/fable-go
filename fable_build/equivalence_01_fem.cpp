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
  local_equivalences loc_equivalences;
  {
    using fem::mbr; // member
    mbr<int> num1;
    mbr<int> num2;
    loc_equivalences.allocate(),
      equivalence(num1, num2)
        .align<1>()
         .with<2>()
    ;
  }
  int& num1 = loc_equivalences.bind<int>();
  int& num2 = loc_equivalences.bind<int>();
  num1 = 12;
  write(6, star), num2;
  num2 = 34;
  write(6, star), num1;
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
