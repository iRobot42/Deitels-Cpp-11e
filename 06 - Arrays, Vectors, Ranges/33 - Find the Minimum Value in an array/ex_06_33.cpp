// ex_06_33.cpp
// Find the Minimum Value in an array

#include <array>
#include <iostream>

constexpr size_t size{ 5 };

int recursiveMinimum( const std::array< int, size >&, size_t, size_t );

int main() {

   const std::array< int, ::size > test{ 42, 0, 365, -1, 1024 };

   std::cout << "Smallest number is "
      << recursiveMinimum( test, 1, 3 ) << std::endl;

   return 0;
}

int recursiveMinimum( const std::array< int, ::size >& a,
   size_t s, size_t e ) {

   static int min{ a.at( s )};

   if ( a.at( s ) < min )
      min = a.at( s );

   return s == e ? min : recursiveMinimum( a, s + 1, e );
}