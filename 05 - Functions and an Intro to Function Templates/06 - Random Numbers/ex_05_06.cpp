// ex_05_06.cpp
// Random Numbers

#include <iostream>
#include <random>

int main() {

   std::random_device seed;
   std::default_random_engine generator{ seed() };
   std::uniform_int_distribution range{ -3, 11 }; // f

   for ( int i{ 1 }, n{ 0 }; i <= 100; ++i )
      std::cout << ( n = range( generator )) << '\n';

   return 0;
}