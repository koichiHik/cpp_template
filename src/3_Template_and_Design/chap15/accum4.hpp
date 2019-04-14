
#ifndef ACCUM4_HPP
#define ACCUM4_HPP

#include "accumtraits4.hpp"

template <typename T>
inline
typename AccumlationTraits4<T>::AccT accum4(T const* beg, T const* end) {
  typedef typename AccumlationTraits4<T>::AccT AccT;

  /* traits クラスで定義された zero を使用する． */
  AccT total = AccumlationTraits4<T>::zero();

  while (beg != end) {
    total += *beg;
    beg++;
  }
  return total;
}

#endif // ACCUM4_HPP
