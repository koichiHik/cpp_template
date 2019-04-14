
#ifndef ACCUMTRAITS4_HPP
#define ACCUMTRAITS4_HPP

template <typename T>
class AccumlationTraits4;

template<>
class AccumlationTraits4<char> {
  public:
    typedef int AccT;

    // 初期値を値としてでなく，式として定義．
    static inline AccT zero() {
      return 0;
    }
};

template<>
class AccumlationTraits4<unsigned char> {
  public:
    typedef unsigned int AccT;

    // 初期値を値としてでなく，式として定義．
    static inline AccT zero() {
      return 0;
    }
};

template<>
class AccumlationTraits4<short> {
  public:
    typedef int AccT;

    // 初期値を値としてでなく，式として定義．
    static inline AccT zero() {
      return 0;
    }
};

template<>
class AccumlationTraits4<int> {
  public:
    typedef long AccT;

    // 初期値を値としてでなく，式として定義．
    static inline AccT zero() {
      return 0;
    }
};

template<>
class AccumlationTraits4<unsigned int> {
  public:
    typedef unsigned long AccT;

    // 初期値を値としてでなく，式として定義．
    static inline AccT zero() {
      return 0;
    }
};

template<>
class AccumlationTraits4<float> {
  public:
    typedef double AccT;

    // 初期値を値としてでなく，式として定義．
    // 式として定義したので，double も対応可能．
    static inline AccT zero() {
      return 0;
    }
};

#endif // ACCUMTRAITS4_HPP
