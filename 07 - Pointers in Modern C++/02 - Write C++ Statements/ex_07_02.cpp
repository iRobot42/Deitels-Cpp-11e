// ex_07_02.cpp

#include <iostream>

#pragma warning( disable: 26429 26494 )

int main() {

   double number1{ 7.3 };
   double number2;

   double* doublePtr{ nullptr }; // a

   doublePtr = &number1; // b
   std::cout << *doublePtr << '\n'; // c

   number2 = *doublePtr; // d
   std::cout << number2 << '\n'; // e

   std::cout << &number1 << '\n'; // f
   std::cout << doublePtr << '\n'; // g

   return 0;
}