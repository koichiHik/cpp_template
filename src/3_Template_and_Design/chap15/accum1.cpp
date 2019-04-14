
// Standard Library
#include <iostream>

// Original 
#include "accum1.hpp"
#include "accum2.hpp"
#include "accum3.hpp"
#include "accum4.hpp"
#include "accum5.hpp"
#include "accum6.hpp"
#include "accum8.hpp"
#include "sumpolicy2.hpp"

int main() {
  std::cout << __FILE__ << " Started!" << std::endl;

  unsigned char num[] = {100, 22, 140, 40, 50};

  // Traits クラスを用いない accum1 の利用．
  std::cout << "The total value is " << accum1(&num[0], &num[5]) << std::endl;

  // Traits クラスを用いた accum2 の利用．
  std::cout << "The total value is " << accum2(&num[0], &num[5]) << std::endl;

  // Traits クラスを用いた accum3 の利用．
  std::cout << "The total value is " 
  << accum3(&num[0], &num[5]) << std::endl;

  // Traits クラスを用いた accum4 の利用．
  std::cout << "The total value is " 
  << accum4(&num[0], &num[5]) << std::endl;

  // Traits クラスを用いた accum5 の利用．
  std::cout << "The total value is " 
  << Accum5<unsigned char>::accum5(&num[0], &num[5]) << std::endl;

  // Traits クラス，Policy クラスを併用した Accum6 の利用．
  // Policy と Traits はテンプレートパラメータで指定できるようになっている．
  std::cout << "The total value is " 
  << Accum6<unsigned char, SumPolicy>::accum(&num[0], &num[5]) 
  << std::endl;

  // Accum8 をテンプレートクラスとして accum を実装．
  // この変更によって，SumPolicy2 クラスがテンプレートとなっている．
  std::cout << "The total value is "
  << Accum8<unsigned char, SumPolicy2>::accum(&num[0], &num[5]) 
  << std::endl;

  return 0;
}
