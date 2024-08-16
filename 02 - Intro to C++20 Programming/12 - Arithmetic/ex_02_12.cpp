// ex_02_12.cpp
// Arithmetic

#include <iostream>

int main() {

   int number1, number2;

   std::cout << "Enter two integer numbers: ";
   std::cin >> number1 >> number2;

   std::cout
      << "\nThe sum is " << number1 + number2
      << "\nThe product is " << number1 * number2
      << "\nThe difference is " << number1 - number2;

   if ( number2 != 0 )
      std::cout << "\nThe quotient is " << number1 / number2;

   std::cout << std::endl;

   return 0;
}