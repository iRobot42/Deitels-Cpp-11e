// ex_02_14.cpp
// Comparing Integers

#include <iostream>

int main() {

   int number1, number2;

   std::cout << "Enter two integer numbers: ";
   std::cin >> number1 >> number2;

   if ( number1 == number2 ) {

      std::cout << "These numbers are equal.\n";
      return 0;
   }

   if ( number2 > number1 )
      number1 = number2;

   std::cout << number1 << " is larger.\n";

   return 0;
}