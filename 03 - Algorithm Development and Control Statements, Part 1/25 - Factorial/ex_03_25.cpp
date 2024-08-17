// ex_03_25.cpp
// Factorial

#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

int main() {

   { // a

      boost::multiprecision::cpp_int f{ 1 };
      int n;

      std::cout << "Nonnegative integer: ";
      std::cin >> n;

      std::cout << n << "! = ";

      while ( n > 1 ) f *= n--;

      std::cout << f << std::endl;
   }

   { // b

      int n{ 1 };
      int f{ 1 };
      int a;

      std::cout << "\nAccuracy of e: ";
      std::cin >> a;

      double e{ 1.0 };

      while ( n <= a ) e += 1.0 / ( f *= n++ );

      std::cout << "e = " << e << std::endl;
   }

   { // c

      int n{ 1 };
      int f{ 1 };
      int a;

      std::cout << "\nAccuracy of e^x: ";
      std::cin >> a;

      double ex{ 1.0 };
      double xn{ 1.0 };
      double x;

      std::cout << "Power (x): ";
      std::cin >> x;

      while ( n <= a ) ex += ( xn *= x ) / ( f *= n++ );

      std::cout << "e^" << x << " = " << ex << std::endl;
   }

   return 0;
}