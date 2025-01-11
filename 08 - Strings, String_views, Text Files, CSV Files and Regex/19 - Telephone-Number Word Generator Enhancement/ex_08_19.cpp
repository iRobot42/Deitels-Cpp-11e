// ex_08_19.cpp
// Telephone-Number Word Generator Enhancement

#include <cstdlib>
#include <format>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main() {

   const std::vector< std::string > mapping{ "", "",
      "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };

   std::vector< size_t > digits( 7 );

   std::cout << "Seven digits (avoid 0s and 1s): ";

   for ( size_t i{}; i < 7; ++i ) {
      std::cin >> digits.at( i );
      if ( digits.at( i ) < 2 || digits.at( i ) > 9 ) {
         std::cerr << "Invalid digit\n";
         return 1;
      }
   }

   const std::string fname{ "words.txt" },
      fpath{ "19 - Telephone-Number Word Generator Enhancement" };

   std::ofstream file{ std::format( "{}/{}", fpath, fname ), std::ios::out };

   if ( !file ) {
      std::cerr << "File could not be opened\n";
      std::exit( EXIT_FAILURE );
   }

   int count{};

   for ( const char l1 : mapping.at( digits.at( 0 )))
      for ( const char l2 : mapping.at( digits.at( 1 )))
         for ( const char l3 : mapping.at( digits.at( 2 )))
            for ( const char l4 : mapping.at( digits.at( 3 )))
               for ( const char l5 : mapping.at( digits.at( 4 )))
                  for ( const char l6 : mapping.at( digits.at( 5 )))
                     for ( const char l7 : mapping.at( digits.at( 6 )))
                        file << l1 << l2 << l3 << l4 << l5 << l6 << l7
                           << ( ++count % 10 ? ' ' : '\n' );

   std::cout << std::format( "Number of words: {}\n"
      "Browse through {} with a text editor\n", count, fname );

   return 0;
}