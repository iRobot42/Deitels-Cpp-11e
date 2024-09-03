// ex_06_14.cpp
// Intro to Data Science Challenge: Analyzing the Dice Game Craps

#include <algorithm>
#include <array>
#include <format>
#include <iostream>
#include <numeric>
#include <random>
#include <vector>

int roll_dice( void );

int main() {

   enum class Status{ play, won, lost };
   using enum Status;

   constexpr int games{ 1000 };
   constexpr int limit{ 12 };

   std::array< int, limit + 1 > wins{};
   std::array< int, limit + 1 > losses{};
   std::vector< int > rolls;

   std::cout << "Playing " << games << " games of Craps...\n\n";

   for ( int game{}; game < games; ++game ) {

      int point{ roll_dice() };
      int roll{ 1 };
      Status status;

      switch ( point ) {
         case 7: case 11: status = won; break;
         case 2: case 3: case 12: status = lost; break;
         default: status = play;
      }

      while ( status == play ) {

         ++roll;

         if ( const int dice{ roll_dice() }; dice == point )
            status = won;
         else if ( dice == 7 )
            status = lost;
      }

      rolls.push_back( roll );
      if ( roll > limit ) roll = 0;

      if ( status == won ) ++wins.at( roll );
      else ++losses.at( roll );
   }

   int mode{ 1 };
   for ( int roll{}, max{}; roll <= limit; ++roll ) {
      const int sum{ wins.at( roll ) + losses.at( roll ) };
      if ( sum > max ) max = sum, mode = roll;
   }

   std::cout << "Roll\tWon\tLost\n---------------------\n";
   for ( int roll{ 1 }; roll <= limit; ++roll )
      std::cout << std::format( "{}\t{}\t{}\n",
         roll, wins.at( roll ), losses.at( roll ));

   sort( begin( rolls ), end( rolls ));

   std::cout
      << std::format( "\nWinning chances: {:.1f}%",
         100.0 / games * std::accumulate( begin( wins ), end( wins ), 0 ))
      << std::format( "\nGame length mean: {:.1f}",
         std::accumulate( begin( rolls ), end( rolls ), 0.0 ) / games )
      << std::format( "\nGame length median: {}", rolls.at( games / 2 ))
      << std::format( "\nGame length mode: {}", mode ) << std::endl;

   return 0;
}

int roll_dice() {

   static std::random_device seed;
   static std::default_random_engine generator{ seed() };
   static std::uniform_int_distribution range{ 1, 6 };

   return range( generator ) + range( generator );
}