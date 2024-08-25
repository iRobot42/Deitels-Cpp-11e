// ex_05_13.cpp
// Calculating Number of Seconds

#include <cmath>
#include <iostream>

int seconds_since_12( int, int, int );

int main() {

   int hh, mm, ss;

   std::cout << "Time (hh mm ss): ";
   std::cin >> hh >> mm >> ss;

   const int time{ seconds_since_12( hh, mm, ss )};
   std::cout << "The number of seconds since 12h: " << time << '\n';

   std::cout << "Time (hh mm ss): ";
   std::cin >> hh >> mm >> ss;

   std::cout << "The difference is "
      << abs( time - seconds_since_12( hh, mm, ss ))
      << " second(s)" << std::endl;

   return 0;
}

#pragma warning( disable: 26440 26497 )

int seconds_since_12( int h, int m, int s ) {

   if ( h >= 12 ) h -= 12;

   return h * 3600 + m * 60 + s;
}