#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
{
  fem::variant_core common_all;
  fem::cmn_sve program_prog_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct program_prog_save
{
  fem::variant_bindings all_bindings;
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  FEM_CMN_SVE(program_prog);
  common_write write(cmn);
  common_variant all(cmn.common_all, sve.all_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> n1(dimension(2));
      mbr<int> m1(dimension(8));
      mbr<int> m1a(dimension(2));
      mbr<int> m1b(dimension(2));
      mbr<int> m1c(dimension(2));
      mbr<int> n2(dimension(2, 3));
      mbr<int> m2(dimension(6));
      mbr<int> m2a(dimension(6));
      mbr<int> m2b(dimension(6));
      mbr<int> m2c(dimension(6));
      all.allocate(),
        equivalence(n1, m1, m1a, m1b, m1c)
          .align<2>()
           .with<1>()
          .align<3>()
           .with<1>(arr_index(1))
          .align<4>(arr_index(1))
           .with<1>()
          .align<5>(arr_index(1))
           .with<1>(arr_index(1)),
        equivalence(n2, m2, m2a, m2b, m2c)
          .align<2>()
           .with<1>()
          .align<3>()
           .with<1>(arr_index(1, 1))
          .align<4>(arr_index(1))
           .with<1>()
          .align<5>(arr_index(1))
           .with<1>(arr_index(1, 1))
      ;
    }
  }
  arr_ref<int> n1(all.bind<int>(), dimension(2));
  arr_ref<int> m1(all.bind<int>(), dimension(8));
  arr_ref<int> m1a(all.bind<int>(), dimension(2));
  arr_ref<int> m1b(all.bind<int>(), dimension(2));
  arr_ref<int> m1c(all.bind<int>(), dimension(2));
  arr_cref<int, 2> n2(all.bind<int>(), dimension(2, 3));
  arr_cref<int> m2(all.bind<int>(), dimension(6));
  arr_cref<int> m2a(all.bind<int>(), dimension(6));
  arr_cref<int> m2b(all.bind<int>(), dimension(6));
  arr_cref<int> m2c(all.bind<int>(), dimension(6));
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 8) {
    m1(i) = i + 19;
  }
  write(6, star), n1;
  write(6, star), n2;
  write(6, star), m1;
  write(6, star), m1a;
  write(6, star), m1b;
  write(6, star), m1c;
  write(6, star), m2;
  write(6, star), m2a;
  write(6, star), m2b;
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
