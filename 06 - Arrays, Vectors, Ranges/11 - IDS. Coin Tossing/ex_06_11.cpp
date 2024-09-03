// ex_06_11.cpp
// Intro to Data Science: Coin Tossing

#include <array>
#include <format>
#include <iostream>
#include <random>

void flip( int );

int main() {

   flip( 200 );
   flip( 20'000 );
   flip( 200'000 );
   flip( 20'000'000 ); // extra

   return 0;
}

void flip( int flips ) {

   static std::random_device seed;
   static std::default_random_engine generator{ seed() };
   static std::uniform_int_distribution range{ 1, 2 };

   std::cout << std::format( "\n{} flips...\n", flips );

   std::array< int, 3 > frequency{};
   for ( int f{}; f < flips; ++f )
      ++frequency.at( range( generator ));

   const double ppf{ 100.0 / flips }; // % per one flip

   std::cout << std::format(
      "Heads frequency: {:<8} {:.2f}%\n"
      "Tails frequency: {:<8} {:.2f}%\n",
      frequency.at( 1 ), ppf * frequency.at( 1 ),
      frequency.at( 2 ), ppf * frequency.at( 2 ));
}