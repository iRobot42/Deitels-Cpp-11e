// ex_06_31.cpp
// Print a vector

#include <iostream>
#include <vector>

void printVector( const std::vector< int >&, size_t, size_t );

int main() {

   const std::vector test{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

   printVector( test, 2, 8 );

   return 0;
}

void printVector( const std::vector< int >& v, size_t s, size_t e ) {

   if ( s < 0 || s >= v.size() || e < 0 || e >= v.size() || s > e )
      return;

   std::cout << v.at( s ) << ( s == e ? '\n' : ' ' );

   if ( s < e ) printVector( v, s + 1, e );
}