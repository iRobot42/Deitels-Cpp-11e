// ex_05_32.cpp
// Program Modification

#include <iostream>

int mystery( int, int );

int main() {

   int x{ 0 };
   int y{ 0 };

   std::cout << "Enter two integers: ";
   std::cin >> x >> y;

   std::cout << "The result is " << mystery( x, y ) << std::endl;

   return 0;
}

int mystery( int a, int b ) {

   if ( b < 0 ) {
      b *= -1;
      a *= -1;
   }

   return 1 == b ? a : a + mystery( a, b - 1 );
}