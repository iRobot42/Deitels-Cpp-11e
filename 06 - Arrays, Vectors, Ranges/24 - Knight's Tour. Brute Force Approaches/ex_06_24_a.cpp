// ex_06_24_a.cpp
// Knight's Tour: Brute Force Approaches, part a)

#include <array>
#include <format>
#include <iostream>
#include <random>

int main() {

   std::random_device seed;
   std::default_random_engine generator{ seed() };
   std::uniform_int_distribution< size_t > range{ 0, 7 };

   constexpr size_t size{ 8 };

   constexpr std::array horizontal{ 2, 1, -1, -2, -2, -1, 1, 2 };
   constexpr std::array vertical{ -1, -2, -2, -1, 1, 2, 2, 1 };

   std::array< std::array< int, size >, size > board{};

   size_t currentRow{ 0 };
   size_t currentCol{ 0 };

   int moveCounter{ 1 };

   board.at( currentRow ).at( currentCol ) = moveCounter;

   for ( int i{ 0 }; i < 1000; ++i ) {

      const size_t moveNumber{ range( generator )};
      const size_t testRow{ currentRow + vertical.at( moveNumber )};
      const size_t testCol{ currentCol + horizontal.at( moveNumber )};

      if ( testRow >= 0 && testRow < size
         && testCol >= 0 && testCol < size
         && !board.at( testRow ).at( testCol ))
         currentRow = testRow, currentCol = testCol,
         board.at( currentRow ).at( currentCol ) = ++moveCounter;
   }

   for ( const auto& row : board ) {
      for ( const auto& col : row )
         std::cout << std::format( "{:4}", col );
      std::cout << "\n\n";
   }

   std::cout << "Visited squares: " << moveCounter << std::endl;

   return 0;
}