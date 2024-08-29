// ex_05_33.cpp
// Math Library Functions

#include <cmath>
#include <iostream>

int main() {

   std::cout << "Function   Arguments   Result\n"
             << "------------------------------"
      << "\nceil       9.2         " << ceil( 9.2 )
      << "\nceil       -9.8        " << ceil( -9.8 )
      << "\nceil       .0001       " << ceil( .0001 )
      << "\ncos        0.0         " << cos( 0.0 )
      << "\ncos        3.14159     " << cos( 3.14159 )
      << "\nexp        1.0         " << exp( 1.0 )
      << "\nexp        2.0         " << exp( 2.0 )
      << "\nexp        0           " << exp( 0 )
      << "\nfabs       5.1         " << fabs( 5.1 )
      << "\nfabs       0.0         " << fabs( 0.0 )
      << "\nfabs       -8.76       " << fabs( -8.76 )
      << "\nfabs       -42.01      " << fabs( -42.01 )
      << "\nfloor      9.2         " << floor( 9.2 )
      << "\nfloor      -9.8        " << floor( -9.8 )
      << "\nfloor      0.5         " << floor( 0.5 )
      << "\nfmod       2.6, 1.2    " << fmod( 2.6, 1.2 )
      << "\nfmod       2, 5        " << fmod( 2, 5 )
      << "\nlog        2.718282    " << log( 2.718282 )
      << "\nlog        7.389056    " << log( 7.389056 )
      << "\nlog        0           " << log( 0 )
      << "\nlog10      10.0        " << log10( 10.0 )
      << "\nlog10      100.0       " << log10( 100.0 )
      << "\nlog10      -1          " << log10( -1 )
      << "\npow        2, 7        " << pow( 2, 7 )
      << "\npow        9, .5       " << pow( 9, .5 )
      << "\npow        -1, 3       " << pow( -1, 3 )
      << "\nsin        0.0         " << sin( 0.0 )
      << "\nsin        1           " << sin( 1 )
      << "\nsqrt       9.0         " << sqrt( 9.0 )
      << "\nsqrt       42          " << sqrt( 42 )
      << "\ntan        0.0         " << tan( 0.0 )
      << "\ntan        atan( 42 )  " << tan( atan( 42 ))
      << std::endl;

   return 0;
}