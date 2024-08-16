// ex_02_19.cpp
// Odd or Even

#include <iostream>

int main() {

   int number;

   std::cout << "Integer number: ";
   std::cin >> number;

   if ( number % 2 == 0 ) {

      std::cout << "It's even\n";
      return 0;
   }

   std::cout << "It's odd\n";
   return 0;
}