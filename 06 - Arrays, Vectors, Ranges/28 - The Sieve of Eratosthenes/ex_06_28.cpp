// ex_06_28.cpp
// The Sieve of Eratosthenes

#include <array>
#include <iostream>

int main() {

   constexpr size_t size{ 1000 };
   std::array< bool, size > prime{};
   for ( bool& n : prime ) n = true;

   for ( size_t n{ 2 }; n < size; ++n )
      if ( prime.at( n ))
         for ( size_t i{ 2 }; i < n; ++i )
            if (!( n % i ))
               prime.at( n ) = false;

   std::cout << "Prime numbers:\n";
   for ( size_t n{ 2 }; n < size; ++n )
      if ( prime.at( n ))
         std::cout << n << ' ';
   std::cout << std::endl;

   return 0;
}