// ex_05_40.cpp
// Function Template maximum

#include <iostream>

#pragma warning( disable: 26440 )

template< typename T >
T maximum( T a, T b ) { return a > b ? a : b; }

int main() {

   std::cout
      << maximum( 1, -1 ) << '\n'
      << maximum( '!', '@' ) << '\n'
      << maximum( 4.2, 4.02 ) << '\n';

   return 0;
}