// ex_05_39.cpp
// Function Template minimum

#include <iostream>

#pragma warning( disable: 26440 )

template< typename T >
T minimum( T a, T b ) { return a < b ? a : b; }

int main() {

   std::cout
      << minimum( 123, -42 ) << '\n'
      << minimum( '!', 'a' ) << '\n'
      << minimum( 1.0, 0.9 ) << '\n';

   return 0;
}