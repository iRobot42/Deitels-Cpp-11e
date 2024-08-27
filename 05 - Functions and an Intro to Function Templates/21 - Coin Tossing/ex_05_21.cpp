// ex_05_21.cpp
// Coin Tossing

#include <iostream>
#include <random>

bool flip( void );

int main() {

   int heads{ 0 };
   int tails{ 0 };

   for ( int i{ 1 }; i <= 100; ++i )
      flip() ? ++heads : ++tails;

   std::cout << "Heads: " << heads
           << "\nTails: " << tails << '\n';

   return 0;
}

bool flip( void ) {

   static std::random_device seed;
   static std::default_random_engine generator{ seed() };

   return std::uniform_int_distribution{ 0, 1 }( generator );
}