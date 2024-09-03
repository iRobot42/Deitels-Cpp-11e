// ex_06_12.cpp
// Intro to Data Science: Rolling Two Dice

#include <array>
#include <iostream>
#include <random>

int main() {

   std::random_device seed;
   std::default_random_engine generator{ seed() };
   std::uniform_int_distribution< size_t > range{ 1, 6 };

   constexpr size_t rolls{ 36'000'000 };
   constexpr size_t size{ 13 };

   std::cout << "Rolling two dice " << rolls << " times...\n\n";

   std::array< int, size > frequency{};
   for ( size_t roll{}; roll < rolls; ++roll )
      ++frequency.at( range( generator ) + range( generator ));

   std::cout << "Sum\tFreq.\n---------------\n";
   for ( size_t i{ 2 }; i < size; ++i )
      std::cout << i << '\t' << frequency.at( i ) << '\n';

   std::cout
      << "\nExpected ratio: " << 1.0 / rolls * 6'000'000 // 1/6
      << "\nActual ratio is " << 1.0 / rolls * frequency.at( 7 )
      << std::endl;

   return 0;
}