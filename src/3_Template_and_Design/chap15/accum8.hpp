
#ifndef ACCUM8_HPP
#define ACCUM8_HPP

#include "accumtraits4.hpp"
#include "sumpolicy2.hpp"

template <typename T,
          template <typename, typename> class Policy = SumPolicy2,
          typename Traits = AccumlationTraits4<T> >
class Accum8 {
public:
  typedef typename Traits::AccT AccT;
  static AccT accum(T const* beg, T const* end) {
    AccT total = Traits::zero();
    while(beg != end) {
      Policy<AccT, T>::accumulate(total, *beg);
      ++beg;
    }
    return total;
  }
};

#endif // ACCUM8_HPP
