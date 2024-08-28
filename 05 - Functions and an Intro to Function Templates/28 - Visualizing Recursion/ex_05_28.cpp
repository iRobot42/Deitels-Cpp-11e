// ex_05_28.cpp
// Visualizing Recursion

#pragma warning( disable: 26429 26432 26439 26440 26446 26472 26474 26475 \
   26481 26482 26485 26488 26490 26493 26496 26497 26812 26814 26823 )

#include <boost/multiprecision/cpp_int.hpp>
#include <format>
#include <iostream>

using boost::multiprecision::cpp_int;

cpp_int factorial( int number );

int main() {

   cpp_int f;

   for ( int counter{ 0 }; counter <= 10; ++counter ) {
      f = factorial( counter );
      std::cout << std::format( "{:3}! = ", counter ) << f << "\n\n";
   }

   f = factorial( 20 ); std::cout << " 20! = " << f << "\n\n";
   f = factorial( 30 ); std::cout << " 30! = " << f << "\n\n";
   f = factorial( 40 ); std::cout << " 40! = " << f << std::endl;

   return 0;
}

cpp_int factorial( int number ) {

   std::cout << std::format( "{:3}: ", number );

   if ( number < 2 ) {
      std::cout << "base case!\n";
      return 1;
   }

   std::cout << std::format( "recursive call ({})\n", number - 1 );
   return number * factorial( number - 1 );
}