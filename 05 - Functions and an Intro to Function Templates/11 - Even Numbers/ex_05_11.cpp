// ex_05_11.cpp
// Even Numbers

#include <iostream>

bool isEven( int );

int main() {

   while ( true ) {

      int n;

      std::cout << "Number (-1 to end): ";
      std::cin >> n;
      if ( n == -1 ) break;

      std::cout << ( isEven( n ) ? "Even" : "Odd" ) << "\n\n";
   }

   return 0;
}

#pragma warning( disable: 26440 26497 )

bool isEven( int number ) { return !( number % 2 ); }