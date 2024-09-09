// ex_06_23_b.cpp
// Knight's Tour: Intro to AI with Heuristic Programming, part b)

#include <array>
#include <format>
#include <iostream>

int main() {

   constexpr size_t size{ 8 };

   constexpr std::array horizontal{ 2, 1, -1, -2, -2, -1, 1, 2 };
   constexpr std::array vertical{ -1, -2, -2, -1, 1, 2, 2, 1 };

   std::array< std::array< int, size >, size > board{};

   size_t currentRow{ 0 };
   size_t currentCol{ 0 };
   size_t moveNumber{ 0 };

   int moveCounter{ 1 };

   board.at( currentRow ).at( currentCol ) = moveCounter;

   while ( moveNumber < size ) {

      const size_t testRow{ currentRow + vertical.at( moveNumber )};
      const size_t testCol{ currentCol + horizontal.at( moveNumber )};

      if ( testRow < 0 || testRow >= size
         || testCol < 0 || testCol >= size
         || board.at( testRow ).at( testCol ))
         ++moveNumber;
      else {
         currentRow = testRow;
         currentCol = testCol;
         board.at( currentRow ).at( currentCol ) = ++moveCounter;
         moveNumber = 0;
      }
   }

   for ( const auto& row : board ) {
      for ( const auto& col : row )
         std::cout << std::format( "{:4}", col );
      std::cout << "\n\n";
   }

   std::cout << "Visited squares: " << moveCounter << std::endl;

   return 0;
}