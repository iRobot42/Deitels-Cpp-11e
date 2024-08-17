// ex_03_13.cpp
// Dangling-else Problem

#include <iostream>

int main() {

   int x, y;

   std::cout << "x and y: ";
   std::cin >> x >> y;

   if ( x > 5 ) {
      if ( y > 5 )
         std::cout << "x and y are > 5\n";
   } else std::cout << "x is <= 5\n";

   return 0;
}