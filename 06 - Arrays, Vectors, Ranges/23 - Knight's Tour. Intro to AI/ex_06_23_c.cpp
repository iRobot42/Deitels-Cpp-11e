// ex_06_23_c.cpp
// Knight's Tour: Intro to AI with Heuristic Programming, part c)

#include <array>
#include <format>
#include <iostream>

int main() {

   constexpr size_t size{ 8 };

   constexpr std::array horizontal{ 2, 1, -1, -2, -2, -1, 1, 2 };
   constexpr std::array vertical{ -1, -2, -2, -1, 1, 2, 2, 1 };

   std::array< std::array< int, size >, size > board{};
   std::array< std::array< int, size >, size > accessibility{
      2, 3, 4, 4, 4, 4, 3, 2,
      3, 4, 6, 6, 6, 6, 4, 3,
      4, 6, 8, 8, 8, 8, 6, 4,
      4, 6, 8, 8, 8, 8, 6, 4,
      4, 6, 8, 8, 8, 8, 6, 4,
      4, 6, 8, 8, 8, 8, 6, 4,
      3, 4, 6, 6, 6, 6, 4, 3,
      2, 3, 4, 4, 4, 4, 3, 2 };

   size_t currentRow{ 4 };
   size_t currentCol{ 2 };

   int moveCounter{ 0 };

   while ( true ) {

      board.at( currentRow ).at( currentCol ) = ++moveCounter;
      accessibility.at( currentRow ).at( currentCol ) = 0;

      size_t nextRow{};
      size_t nextCol{};

      int min{ 9 };

      for ( size_t moveNumber{ 0 }; moveNumber < size; ++moveNumber ) {

         const size_t testRow{ currentRow + vertical.at( moveNumber )};
         const size_t testCol{ currentCol + horizontal.at( moveNumber )};

         if ( testRow >= 0 && testRow < size
            && testCol >= 0 && testCol < size
            && !board.at( testRow ).at( testCol )
            && --accessibility.at( testRow ).at( testCol ) < min )
            min = accessibility.at( nextRow = testRow ).at( nextCol = testCol );
      }

      if ( min == 9 ) break; // no more moves

      currentRow = nextRow;
      currentCol = nextCol;
   }

   for ( const auto& row : board ) {
      for ( const auto& col : row )
         std::cout << std::format( "{:4}", col );
      std::cout << "\n\n";
   }

   std::cout << "Visited squares: " << moveCounter;
   if ( moveCounter == 64 ) std::cout << " - FULL TOUR!";
   std::cout << std::endl;

   return 0;
}