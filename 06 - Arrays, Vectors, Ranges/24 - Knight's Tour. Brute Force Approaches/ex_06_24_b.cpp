// ex_06_24_b.cpp
// Knight's Tour: Brute Force Approaches, part b)

#include <array>
#include <format>
#include <iostream>
#include <random>

int main() {

   std::random_device seed;
   std::default_random_engine generator{ seed() };
   std::uniform_int_distribution< size_t > range{ 0, 7 };

   constexpr size_t SIZE{ 8 };
   constexpr size_t TOURS{ 1000 };

   constexpr std::array horizontal{ 2, 1, -1, -2, -2, -1, 1, 2 };
   constexpr std::array vertical{ -1, -2, -2, -1, 1, 2, 2, 1 };

   std::array< int, 65 > tours{};


   for ( size_t tour{ 0 }; tour < TOURS; ++tour ) {

      std::array< std::array< int, SIZE >, SIZE > board{};

      size_t currentRow{ range( generator )};
      size_t currentCol{ range( generator )};

      int moveCounter{ 1 };

      board.at( currentRow ).at( currentCol ) = moveCounter;

      for ( int i{ 0 }; i < 1000; ++i ) {

         const size_t moveNumber{ range( generator )};
         const size_t testRow{ currentRow + vertical.at( moveNumber )};
         const size_t testCol{ currentCol + horizontal.at( moveNumber )};

         if ( testRow >= 0 && testRow < SIZE
            && testCol >= 0 && testCol < SIZE
            && !board.at( testRow ).at( testCol ))
            currentRow = testRow, currentCol = testCol,
            board.at( currentRow ).at( currentCol ) = ++moveCounter;
      }

      ++tours.at( moveCounter );
   }

   size_t max{ 0 };

   std::cout << "Length   Tours\n--------------\n";
   for ( size_t length{ 1 }; length < 65; length += 8 ) {

      int sum{};

      for ( size_t len{ length }; len < length + 8; ++len )
         if ( tours.at( len ))
            sum += tours.at( max = len );

      std::cout << std::format( "{:>2} - {:<2} {:6}\n",
         length, length + 7, sum );
   }

   std::cout << "\nBest result is " << max << std::endl;

   return 0;
}