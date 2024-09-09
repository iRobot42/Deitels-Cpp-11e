// ex_06_24_c.cpp
// Knight's Tour: Brute Force Approaches, part c)

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

   std::array< int, 65 > tours{};

   while ( true ) {

      std::array< std::array< int, size >, size > board{};

      size_t currentRow{ range( generator )};
      size_t currentCol{ range( generator )};

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

      ++tours.at( moveCounter );

      if ( moveCounter == 64 ) break;
   }

   int attempts{ 0 };

   std::cout << "Length    Tours\n---------------\n";
   for ( size_t length{ 1 }; length < 65; length += 8 ) {

      int sum{};

      for ( size_t len{ length }; len < length + 8; ++len )
         sum += tours.at( len );

      attempts += sum;

      std::cout << std::format( "{:>2} - {:<2} {:7}\n",
         length, length + 7, sum );
   }

   std::cout << "\nNumber of attempts: " << attempts << std::endl;

   return 0;
}