
#ifndef ACCUM5_HPP
#define ACCUM5_HPP

#include "accumtraits4.hpp"

template <typename T,
          typename AT = AccumlationTraits4<T> >
class Accum5 {
public:
static typename AT::AccT accum5(T const *beg, T const *end) {
  typename AT::AccT total = AT::zero();
  while(beg != end) {
    total += *beg;
    beg++;
  }
  return total;
}

};

#endif // ACCUM5_HPP
