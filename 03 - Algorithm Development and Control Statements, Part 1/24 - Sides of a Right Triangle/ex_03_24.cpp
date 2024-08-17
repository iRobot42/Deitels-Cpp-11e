// ex_03_24.cpp
// Sides of a Right Triangle

#include <iostream>

int main() {

   int a, b, c;

   std::cout << "Three nonzero ingegers: ";
   std::cin >> a >> b >> c;

   const std::string s{ "Right triangle!\n" };

   if      ( a * a == b * b + c * c ) std::cout << s;
   else if ( b * b == a * a + c * c ) std::cout << s;
   else if ( c * c == a * a + b * b ) std::cout << s;

   return 0;
}