// ex_05_10.cpp
// Multiples

#pragma warning( disable: 26440 26497 )

#include <iostream>

bool isMultiple( int, int );

int main() {

   while ( true ) {

      int a{ 1 }, b{ 1 };

      std::cout << "Two integer numbers (-1 to end): ";
      std::cin >> a; if ( a == -1 ) break;
      std::cin >> b;

      std::cout << b << " is " << ( isMultiple( a, b ) ? "" : "not " )
         << "a multiple of " << a << "\n\n";
   }

   return 0;
}

bool isMultiple( int n1, int n2 ) { return n1 && !( n2 % n1 ); }