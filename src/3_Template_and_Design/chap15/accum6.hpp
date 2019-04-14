
#ifndef ACCUM6_HPP
#define ACCUM6_HPP

#include "accumtraits4.hpp"
#include "sumpolicy1.hpp"

template <typename T,
          typename Policy = SumPolicy,
          typename Traits = AccumlationTraits4<T> >
class Accum6 {
public:
  typedef typename Traits::AccT AccT;
  static AccT accum(T const* beg, T const* end) {
    AccT total = Traits::zero();
    while (beg != end) {
      // Policyクラスの実装によって積算の挙動が変わる．
      Policy::accumulate(total, *beg);
      ++beg;
    }
    return total;
  }
};

#endif // ACCUM6_HPP
