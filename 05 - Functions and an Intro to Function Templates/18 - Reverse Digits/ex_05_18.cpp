// ex_05_18.cpp
// Reverse Digits

#include <iostream>

int reverse( int );

int main() {

   int number;

   std::cout << "Number: ";
   std::cin >> number;

   std::cout << "Reversed is " << reverse( number ) << std::endl;

   return 0;
}

#pragma warning( disable: 26440 26497 )

int reverse( int num ) {

   int rev{ 0 };

   do rev = rev * 10 + num % 10;
   while ( num /= 10 );

   return rev;
}