
#ifndef ACCUM2_HPP
#define ACCUM2_HPP

#include "accumtraits2.hpp"

template <typename T>
inline
typename AccumlationTraits2<T>::AccT accum2(T const* beg, T const* end) {
  typedef typename AccumlationTraits2<T>::AccT AccT;

  AccT total = AccT();
  while (beg != end) {
    total += *beg;
    beg++;
  }
  return total;
}

#endif // ACCUM2_HPP
