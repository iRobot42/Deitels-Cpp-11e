// ex_03_23.cpp
// Sides of a Triangle

#include <iostream>

int main() {

   double a, b, c;

   std::cout << "Three nonzero values: ";
   std::cin >> a >> b >> c;

   if ( a < b + c )
      if ( b < a + c )
         if ( c < a + b )
            std::cout << "Triangle!\n";

   return 0;
}