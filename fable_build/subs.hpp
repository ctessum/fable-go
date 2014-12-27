#ifndef SUBS_HPP
#define SUBS_HPP

#include <fem.hpp> // Fortran EMulation library of fable module

namespace subs {

using namespace fem::major_types;

void
sub1(
  int& num);

void
sub2(
  arr_ref<int> nums,
  int const& nums_size);

} // namespace subs

#endif // GUARD
