
#ifndef ACCUM1_HPP
#define ACCUM1_HPP


/* 与えられたIteratorをめぐって合計を計算する関数． */
template <typename T>
inline
T accum1(T const* beg, T const* end)
{
  T total = T();
  while (beg != end) {
    total += *beg;
    ++beg;
  }
  return total;
}

#endif // ACCUM1_HPP
