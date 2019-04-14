
#ifndef ACCUMTRAITS2_HPP
#define ACCUMTRAITS2_HPP

template <typename T>
class AccumlationTraits2;

template<>
class AccumlationTraits2<char> {
  public:
    typedef int AccT;
};

template<>
class AccumlationTraits2<unsigned char> {
  public:
    typedef unsigned int AccT;
};

template<>
class AccumlationTraits2<short> {
  public:
    typedef int AccT;
};

template<>
class AccumlationTraits2<int> {
  public:
    typedef long AccT;
};

template<>
class AccumlationTraits2<unsigned int> {
  public:
    typedef unsigned long AccT;
};

template<>
class AccumlationTraits2<float> {
  public:
    typedef double AccT;
};

#endif // ACCUMTRAITS_HPP
