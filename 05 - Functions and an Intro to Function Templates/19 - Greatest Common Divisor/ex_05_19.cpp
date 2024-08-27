// ex_05_19.cpp
// Greatest Common Divisor

#include <iostream>

int gcd( int, int );

int main() {

   int int1, int2;

   do {
      std::cout << "Two nonzero integer numbers: ";
      std::cin >> int1 >> int2;
   } while ( !int1 || !int2 );

   std::cout << "GCD is " << gcd( int1, int2 ) << std::endl;

   return 0;
}

#pragma warning( disable: 26440 26497 )

int gcd( int num1, int num2 ) {

   if ( num1 < 0 ) num1 *= -1;
   if ( num2 < 0 ) num2 *= -1;

   while ( num1 != num2 ) // Euclidean algorithm
      num1 > num2 ? num1 -= num2 : num2 -= num1;

   return num1;
}