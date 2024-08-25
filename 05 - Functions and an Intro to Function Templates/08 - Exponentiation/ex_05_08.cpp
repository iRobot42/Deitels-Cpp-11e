// ex_05_08.cpp
// Exponentiation

#pragma warning( disable: 26440 26497 26814 )

#include <iostream>

long long integerPower( int, unsigned );

int main() {

   const int b{ 3 };
   const unsigned e{ 4 };

   std::cout << "integerPower( " << b << ", " << e << " ) returns "
      << integerPower( b, e ) << std::endl;

   return 0;
}

long long integerPower( int base, unsigned exponent ) {

   long value{ 1 };

   while ( exponent-- ) value *= base;

   return value;
}