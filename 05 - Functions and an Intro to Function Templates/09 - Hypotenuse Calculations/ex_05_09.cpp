// ex_05_09.cpp
// Hypotenuse Calculations

#pragma warning( disable: 26440 )

#include <cmath>
#include <iostream>

double hypotenuse( double, double );

int main() {

   std::cout << "Hypotenuse of:\n"
      << "1) " << hypotenuse( 3.0, 4.0 ) << '\n'
      << "2) " << hypotenuse( 5.0, 12.0 ) << '\n'
      << "3) " << hypotenuse( 8.0, 15.0 ) << '\n';

   return 0;
}

double hypotenuse( double a, double b ) {
   return hypot( a, b ); // sqrt( a * a + b * b );
}