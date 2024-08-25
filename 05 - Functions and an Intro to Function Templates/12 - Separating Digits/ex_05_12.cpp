// ex_05_12.cpp
// Separating Digits

#include <iostream>

void separate( int );

int main() {

   int number;

   do {
      std::cout << "Number (1 - 32767): ";
      std::cin >> number;
   } while ( number < 1 || number > 32767 );

   separate( number );

   return 0;
}

void separate( int n ) {

   int d{ 1 };

   while ( n >= d ) d *= 10;

   while ( d /= 10 )
      std::cout << n / d % 10 << "  ";

   std::cout << std::endl;
}