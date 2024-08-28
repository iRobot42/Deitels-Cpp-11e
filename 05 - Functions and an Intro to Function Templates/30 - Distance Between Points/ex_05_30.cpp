// ex_05_30.cpp
// Distance Between Points

#include <cmath>
#include <iostream>

double distance( double, double, double, double );

int main() {

   double ax, ay, bx, by;

   std::cout << "1st point: ";
   std::cin >> ax >> ay;
   std::cout << "2nd point: ";
   std::cin >> bx >> by;

   std::cout << "Distance is " << distance( ax, ay, bx, by ) << std::endl;

   return 0;
}

#pragma warning( disable: 26440 )

double distance( double x1, double y1, double x2, double y2 ) {
   return hypot( x1 - x2, y1 - y2 );
}