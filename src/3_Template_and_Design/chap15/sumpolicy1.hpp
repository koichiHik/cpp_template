
#ifndef SUMPOLICY1_HPP
#define SUMPOLICY1_HPP

class SumPolicy {

public:
  // 積算を定義するテンプレートメソッド．
  template<typename T1, typename T2>
  static void accumulate(T1& total, T2 const & value) {
    total += value;
  }
};

class MultiPolicy {

public:
  // 積算を定義するテンプレートメソッド．
  template<typename T1, typename T2>
  static void accumulate(T1& total, T2 const & value) {
    total *= value;
  }
};

#endif // SUMPOLICY1_HPP
