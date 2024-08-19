// ex_04_08.cpp
// Calculating the Product of Odd Integers

#include <iostream>

int main() {

   int product{ 1 };

   for ( int i{ 1 }; i <= 15; i += 2 )
      product *= i;

   std::cout << product << std::endl;

   return 0;
}