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
    mbr<int> num;
    mbr<float> val;
    loc_equivalences.allocate(),
      equivalence(num, val)
        .align<1>()
         .with<2>()
    ;
  }
  int& num = loc_equivalences.bind<int>();
  float& val = loc_equivalences.bind<float>();
  val = 1.2f;
  write(6, "(f3.1)"), val;
  num = 0;
  if (val == 1.2f) {
    FEM_STOP("equivalence failure");
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
    placeholder_please_replace::program_prog);
}
