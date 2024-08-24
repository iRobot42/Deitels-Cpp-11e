// ex_05_03.cpp
// Rounding Numbers

#include <cmath>
#include <iostream>

int main() {

   std::cout << "Five numbers: ";

   for ( int i{ 1 }; i <= 5; ++i ) {

      double x;
      std::cin >> x;

      std::cout << "\nNearest integer for " << x
         << " is " << floor( x + 0.5 );
   }

   std::cout << std::endl;

   return 0;
}