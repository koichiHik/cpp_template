
#ifndef ACCUM3_HPP
#define ACCUM3_HPP

#include "accumtraits3.hpp"

template <typename T>
inline
typename AccumlationTraits3<T>::AccT accum3(T const* beg, T const* end) {
  typedef typename AccumlationTraits3<T>::AccT AccT;

  /* traits クラスで定義された zero を使用する． */
  AccT total = AccumlationTraits3<T>::zero;

  while (beg != end) {
    total += *beg;
    beg++;
  }
  return total;
}

#endif // ACCUM3_HPP
