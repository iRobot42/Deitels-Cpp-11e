// ex_05_15.cpp
// Find the Minimum

#include <iostream>

double min3( double, double, double );

int main() {

   double a, b, c;

   std::cout << "Three double numbers: ";
   std::cin >> a >> b >> c;

   std::cout << "Smallest is " << min3( a, b, c ) << '\n';

   return 0;
}

#pragma warning( disable: 26440 26497 )

double min3( double d1, double d2, double d3 ) {

   if ( d2 < d1 ) d1 = d2;

   return d3 < d1 ? d3 : d1;
}