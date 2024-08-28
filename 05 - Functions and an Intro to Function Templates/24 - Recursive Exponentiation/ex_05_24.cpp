// ex_05_24.cpp
// Recursive Exponentiation

#include <iostream>

long power( int, int );

int main() {

   int b, e;

   do {
      std::cout << "Base and exponent: ";
      std::cin >> b >> e;
   } while ( e < 1 );

   std::cout << "Function power returns " << power( b, e ) << '\n';

   return 0;
}

long power( int base, int exponent ) {
   return exponent > 1 ? base * power( base, --exponent ) : base;
}