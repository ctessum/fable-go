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
    mbr<int> nums(dimension(2));
    mbr<int> n1;
    mbr<int> n2;
    loc_equivalences.allocate(),
      equivalence(nums, n1, n2)
        .align<1>(arr_index(1))
         .with<2>()
        .align<1>(arr_index(2))
         .with<3>()
    ;
  }
  arr_ref<int> nums(loc_equivalences.bind<int>(), dimension(2));
  int& n1 = loc_equivalences.bind<int>();
  int& n2 = loc_equivalences.bind<int>();
  n1 = 12;
  n2 = 34;
  write(6, star), nums;
  nums(1) = 56;
  nums(2) = 78;
  write(6, star), n1;
  write(6, star), n2;
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
