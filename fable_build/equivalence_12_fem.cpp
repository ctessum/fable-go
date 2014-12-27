#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub1(
  common& cmn)
{
  common_write write(cmn);
  local_equivalences loc_equivalences;
  {
    using fem::mbr; // member
    mbr<int> nums(dimension(1));
    mbr<int> n1;
    loc_equivalences.allocate(),
      equivalence(nums, n1)
        .align<1>(arr_index(1))
         .with<2>()
    ;
  }
  arr_ref<int> nums(loc_equivalences.bind<int>(), dimension(1));
  int& n1 = loc_equivalences.bind<int>();
  nums(1) = 12;
  write(6, star), n1;
}

void
sub2(
  common& cmn)
{
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
  nums(1) = 34;
  nums(2) = 56;
  write(6, star), n1, n2;
}

void
sub3(
  common& cmn)
{
  common_write write(cmn);
  local_equivalences loc_equivalences;
  {
    using fem::mbr; // member
    mbr<int> nums(dimension(3));
    mbr<int> n1;
    mbr<int> n2;
    mbr<int> n3;
    loc_equivalences.allocate(),
      equivalence(nums, n1, n2, n3)
        .align<1>(arr_index(1))
         .with<2>()
        .align<1>(arr_index(2))
         .with<3>()
        .align<1>(arr_index(3))
         .with<4>()
    ;
  }
  arr_ref<int> nums(loc_equivalences.bind<int>(), dimension(3));
  int& n1 = loc_equivalences.bind<int>();
  int& n2 = loc_equivalences.bind<int>();
  int& n3 = loc_equivalences.bind<int>();
  nums(1) = 78;
  nums(2) = 90;
  nums(3) = 23;
  write(6, star), n1, n2, n3;
}

void
sub4(
  common& cmn)
{
  common_write write(cmn);
  local_equivalences loc_equivalences;
  {
    using fem::mbr; // member
    mbr<int> nums(dimension(4));
    mbr<int> n1;
    mbr<int> n2;
    mbr<int> n3;
    mbr<int> n4;
    loc_equivalences.allocate(),
      equivalence(nums, n1, n2, n3, n4)
        .align<1>(arr_index(1))
         .with<2>()
        .align<1>(arr_index(2))
         .with<3>()
        .align<1>(arr_index(3))
         .with<4>()
        .align<1>(arr_index(4))
         .with<5>()
    ;
  }
  arr_ref<int> nums(loc_equivalences.bind<int>(), dimension(4));
  int& n1 = loc_equivalences.bind<int>();
  int& n2 = loc_equivalences.bind<int>();
  int& n3 = loc_equivalences.bind<int>();
  int& n4 = loc_equivalences.bind<int>();
  nums(1) = 45;
  nums(2) = 67;
  nums(3) = 89;
  nums(4) = 43;
  write(6, star), n1, n2, n3, n4;
}

void
sub5(
  common& cmn)
{
  common_write write(cmn);
  local_equivalences loc_equivalences;
  {
    using fem::mbr; // member
    mbr<int> nums(dimension(5));
    mbr<int> n1;
    mbr<int> n2;
    mbr<int> n3;
    mbr<int> n4;
    mbr<int> n5;
    loc_equivalences.allocate(),
      equivalence(nums, n1, n2, n3, n4, n5)
        .align<1>(arr_index(1))
         .with<2>()
        .align<1>(arr_index(2))
         .with<3>()
        .align<1>(arr_index(3))
         .with<4>()
        .align<1>(arr_index(4))
         .with<5>()
        .align<1>(arr_index(5))
         .with<6>()
    ;
  }
  arr_ref<int> nums(loc_equivalences.bind<int>(), dimension(5));
  int& n1 = loc_equivalences.bind<int>();
  int& n2 = loc_equivalences.bind<int>();
  int& n3 = loc_equivalences.bind<int>();
  int& n4 = loc_equivalences.bind<int>();
  int& n5 = loc_equivalences.bind<int>();
  nums(1) = 65;
  nums(2) = 87;
  nums(3) = 89;
  nums(4) = 91;
  nums(5) = 93;
  write(6, star), n1, n2, n3, n4, n5;
}

void
sub6(
  common& cmn)
{
  common_write write(cmn);
  local_equivalences loc_equivalences;
  {
    using fem::mbr; // member
    mbr<int> nums(dimension(6));
    mbr<int> n1;
    mbr<int> n2;
    mbr<int> n3;
    mbr<int> n4;
    mbr<int> n5;
    mbr<int> n6;
    loc_equivalences.allocate(),
      equivalence(nums, n1, n2, n3, n4, n5, n6)
        .align<1>(arr_index(1))
         .with<2>()
        .align<1>(arr_index(2))
         .with<3>()
        .align<1>(arr_index(3))
         .with<4>()
        .align<1>(arr_index(4))
         .with<5>()
        .align<1>(arr_index(5))
         .with<6>()
        .align<1>(arr_index(6))
         .with<7>()
    ;
  }
  arr_ref<int> nums(loc_equivalences.bind<int>(), dimension(6));
  int& n1 = loc_equivalences.bind<int>();
  int& n2 = loc_equivalences.bind<int>();
  int& n3 = loc_equivalences.bind<int>();
  int& n4 = loc_equivalences.bind<int>();
  int& n5 = loc_equivalences.bind<int>();
  int& n6 = loc_equivalences.bind<int>();
  nums(1) = 94;
  nums(2) = 95;
  nums(3) = 96;
  nums(4) = 97;
  nums(5) = 27;
  nums(6) = 29;
  write(6, star), n1, n2, n3, n4, n5, n6;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  sub1(cmn);
  sub2(cmn);
  sub3(cmn);
  sub4(cmn);
  sub5(cmn);
  sub6(cmn);
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
