// ex_05_26.cpp
// Towers of Hanoi

#include <iostream>

void hanoi( int, int, int, int );

int main() {

   int d;

   do {
      std::cout << "Number of disks: ";
      std::cin >> d;
   } while ( d < 1 );

   hanoi( d, 1, 3, 2 );

   return 0;
}

void hanoi( int disks, int from, int to, int temp ) {

   if ( disks ) {

      hanoi( disks - 1, from, temp, to );
      std::cout << from << " -> " << to << '\n';
      hanoi( disks - 1, temp, to, from );
   }
}