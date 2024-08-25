// ex_05_07.cpp
// Random Numbers

#include <iostream>
#include <random>

int random_number( int, int, int = 1 );

int main() {

   std::cout << "A random number from the set:\n"
      << "a) " << random_number( 2, 10, 2 ) << '\n'
      << "b) " << random_number( 3, 11, 2 ) << '\n'
      << "c) " << random_number( 6, 22, 4 ) << '\n';

   return 0;
}

int random_number( int from, int to, int step ) {

   if ( !step ) return from;
   const int ncount{( to - from ) / step + 1 };
   if ( ncount < 2 ) return from;

   static std::random_device seed;
   static std::default_random_engine generator{ seed() };
   static std::uniform_int_distribution range{ 1, ncount };

   return from + range( generator ) % ncount * step;
}