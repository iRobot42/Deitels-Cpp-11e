// ex_05_36.cpp
// Circle Area

#include <iostream>

inline double circleArea( double );

int main() {

   double r;

   do {
      std::cout << "Circle radius: ";
      std::cin >> r;
   } while ( r <= 0 );

   std::cout << "Area is " << circleArea( r ) << std::endl;

   return 0;
}

#pragma warning( disable: 26440 26497 )

double circleArea( double radius ) {
   return 3.14159 * radius * radius;
}