// ex_05_20.cpp
// Quality Points for Numeric Grades

#include <iostream>

int qualityPoints( int );

int main() {

   int average;

   do {
      std::cout << "Student's average: ";
      std::cin >> average;
   } while ( average < 0 || average > 100 );

   std::cout << "Quality point is "
      << qualityPoints( average ) << std::endl;

   return 0;
}

#pragma warning( disable: 26440 26497 )

int qualityPoints( int avg ) {
   return avg >= 90 ? 4
        : avg >= 80 ? 3
        : avg >= 70 ? 2
        : avg >= 60 ? 1 : 0;
}