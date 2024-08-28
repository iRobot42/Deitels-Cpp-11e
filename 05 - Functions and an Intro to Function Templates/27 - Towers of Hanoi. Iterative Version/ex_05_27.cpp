// ex_05_27.cpp
// Towers of Hanoi: Iterative Version

#include <cmath>
#include <iostream>

void hanoi( int, int, int, int );

int main( void ) {

   int d;

   do {
      std::cout << "Number of disks: ";
      std::cin >> d;
   } while ( d < 1 );

   hanoi( d, 1, 3, 2 );

   return 0;
}

void hanoi( int disks, int from, int to, int temp ) {

   const int lim{ static_cast< int >( pow( 2, disks )) };
   for ( int move{ 1 }; move < lim; ++move ) {

      int m{ move }, d{ disks };
      while (!( m % 2 )) m /= 2, ++d;

      int src{ m / 2 % 3 }, dst{( src + 1 ) % 3 };
      if (!( d % 2 )) src = ( 3 - src ) % 3, dst = ( 3 - dst ) % 3;

      std::cout << ( src > 1 ? temp : src ? to : from ) << " -> "
                << ( dst > 1 ? temp : dst ? to : from ) << '\n';
   }
}