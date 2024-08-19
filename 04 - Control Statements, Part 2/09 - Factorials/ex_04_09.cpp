// ex_04_09.cpp
// Factorials

#include <format>
#include <iostream>

int main() {

   // On my system, long is limited to 4 bytes, which is not enough
   // to calculate the factorial for numbers greater than 12.

   long factorial{ 1 };

   std::cout << std::format( "{:>3} {:>11}\n---------------\n", "n", "n!" );

   for ( int n{ 1 }; n <= 20; ++n )
      std::cout << std::format( "{:3} {:11}\n", n, factorial *= n );

   return 0;
}