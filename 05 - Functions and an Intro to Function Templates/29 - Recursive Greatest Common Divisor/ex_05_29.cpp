// ex_05_29.cpp
// Recursive Greatest Common Divisor

#include <iostream>

int gcd( int, int );

int main() {

   int a, b;

   std::cout << "Two numbers: ";
   std::cin >> a >> b;

   std::cout << "GCD is " << gcd( a, b ) << std::endl;

   return 0;
}

int gcd( int x, int y ) {

   if ( x < 0 ) x *= -1;
   if ( y < 0 ) y *= -1;

   if ( x < y ) {
      const int t{ x };
      x = y;
      y = t;
   }

   return y ? gcd( y, x % y ) : x;
}