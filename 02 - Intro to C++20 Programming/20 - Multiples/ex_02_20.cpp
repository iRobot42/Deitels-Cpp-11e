// ex_02_20.cpp
// Multiples

#include <iostream>

int main() {

   int n1, n2;

   std::cout << "Two integer numbers: ";
   std::cin >> n1 >> n2;

   std::cout << n1 << " is ";
   if ( n1 % n2 != 0 ) std::cout << "not ";
   std::cout << "a multiple of " << n2 << std::endl;

   return 0;
}