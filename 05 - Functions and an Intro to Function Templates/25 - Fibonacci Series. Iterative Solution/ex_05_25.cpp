// ex_05_25.cpp
// Fibonacci Series: Iterative Solution

#include <format>
#include <iostream>

long fibonacci( long );

int main() {

   for ( int counter{ 0 }; counter <= 10; ++counter )
      std::cout << std::format( "fibonacci( {} ) = {}\n",
         counter, fibonacci( counter ));

   std::cout << '\n'
      << std::format( "fibonacci( 20 ) = {}\n", fibonacci( 20 ))
      << std::format( "fibonacci( 30 ) = {}\n", fibonacci( 30 ))
      << std::format( "fibonacci( 35 ) = {}\n", fibonacci( 35 ));

   return 0;
}

#pragma warning( disable: 26440 26497 )

long fibonacci( long number ) {

   long fib{ 0 };
   long next{ 1 };

   for ( long n{ 1 }; n <= number; ++n ) {

      const long sum{ fib + next };

      fib = next;
      next = sum;
   }

   return fib;
}