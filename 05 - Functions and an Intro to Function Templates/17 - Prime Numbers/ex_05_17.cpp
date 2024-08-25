// ex_05_17.cpp
// Prime Numbers

#include <cmath>
#include <iostream>

bool isPrime( int );

int main() {

   std::cout << "Prime numbers between 2 and 10'000:\n";

   for ( int n{ 2 }; n <= 10'000; ++n )
      if ( isPrime( n ))
         std::cout << n << ' ';

   std::cout << std::endl;

   return 0;
}

#pragma warning( disable: 26440 )

bool isPrime( int num ) {

   const int lim{ static_cast< int >( sqrt( num )) };

   for ( int i{ 2 }; i <= lim; ++i )
      if (!( num % i )) return false;

   return true;
}