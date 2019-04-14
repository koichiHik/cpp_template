
#ifndef ACCUMTRAITS3_HPP
#define ACCUMTRAITS3_HPP

template <typename T>
class AccumlationTraits3;

template<>
class AccumlationTraits3<char> {
  public:
    typedef int AccT;
    static AccT const zero = 0;
};

template<>
class AccumlationTraits3<unsigned char> {
  public:
    typedef unsigned int AccT;
    static AccT const zero = 0;
};

template<>
class AccumlationTraits3<short> {
  public:
    typedef int AccT;
    static AccT const zero = 0;
};

template<>
class AccumlationTraits3<int> {
  public:
    typedef long AccT;
    static AccT const zero = 0;
};

template<>
class AccumlationTraits3<unsigned int> {
  public:
    typedef unsigned long AccT;
    static AccT const zero = 0;
};

/**
template<>
class AccumlationTraits3<float> {
  public:
    typedef double AccT;
    static AccT const zero = 0;
};
**/

#endif // ACCUMTRAITS3_HPP
