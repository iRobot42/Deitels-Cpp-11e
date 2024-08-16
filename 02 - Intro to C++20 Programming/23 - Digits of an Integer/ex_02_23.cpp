// ex_02_23.cpp
// Digits of an Integer

#include <iostream>

int main() {

   int number;

   std::cout << "Five-digit integer: ";
   std::cin >> number;

   std::cout << number / 10000 << "   "
      << number / 1000 % 10 << "   "
      << number / 100 % 10 << "   "
      << number / 10 % 10 << "   "
      << number % 10 << std::endl;

   return 0;
}