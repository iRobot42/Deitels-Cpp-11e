// ex_07_05.cpp
// Write C++ Statements

#include <iostream>

#pragma warning( disable: 26429 26494 )

int main() {

   long value1{ 200000 };
   long value2;

   long* longPtr; // a

   longPtr = &value1; // b
   std::cout << *longPtr << '\n'; // c

   value2 = *longPtr; // d
   std::cout << value2 << '\n'; // e

   std::cout << &value1 << '\n'; // f
   std::cout << longPtr << '\n'; // g

   return 0;
}