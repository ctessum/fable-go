#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_all
{
  int n1_memory[2];
  int n2_memory[2 * 3];

  arr_ref<int> n1;
  arr_ref<int, 2> n2;

  common_all() :
    n1(*n1_memory, dimension(2), fem::fill0),
    n2(*n2_memory, dimension(2, 3), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_all
{
  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  // COMMON all
  arr_ref<int> n1(cmn.n1, dimension(2));
  arr_cref<int, 2> n2(cmn.n2, dimension(2, 3));
  //
  int i = fem::int0;
  arr_ref<int> m1(n1, dimension(8)); // SIMPLE EQUIVALENCE
  FEM_DO_SAFE(i, 1, 8) {
    m1(i) = i + 19;
  }
  write(6, star), n1;
  write(6, star), n2;
  write(6, star), m1;
  arr_ref<int> m1a(n1(1), dimension(2)); // SIMPLE EQUIVALENCE
  write(6, star), m1a;
  arr_ref<int> m1b(n1, dimension(2)); // SIMPLE EQUIVALENCE
  write(6, star), m1b;
  arr_ref<int> m1c(n1(1), dimension(2)); // SIMPLE EQUIVALENCE
  write(6, star), m1c;
  arr_cref<int> m2(n2, dimension(6)); // SIMPLE EQUIVALENCE
  write(6, star), m2;
  arr_cref<int> m2a(n2(1, 1), dimension(6)); // SIMPLE EQUIVALENCE
  write(6, star), m2a;
  arr_cref<int> m2b(n2, dimension(6)); // SIMPLE EQUIVALENCE
  write(6, star), m2b;
  arr_cref<int> m2c(n2(1, 1), dimension(6)); // SIMPLE EQUIVALENCE
  write(6, star), m2c;
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
