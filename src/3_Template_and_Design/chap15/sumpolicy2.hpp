
#ifndef SUMPOLICY2_HPP
#define SUMPOLICY2_HPP

// 積算のオペレーションをクラステンプレートとして実装．
// 呼び出し側は Traits クラスを使ってこのクラスを実体化する．
template <typename T1, typename T2>
class SumPolicy2 {
public:
  static void accumulate(T1& total, T2 const & value) {
    total += value;
  }
};

#endif // SUMPOLICY2_HPP
