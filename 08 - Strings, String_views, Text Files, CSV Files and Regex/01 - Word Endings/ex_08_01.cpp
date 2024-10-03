// ex_08_01.cpp
// Word Endings

#include <iostream>
#include <string>
#include <vector>

int main() {

   std::vector< std::string > words;
   std::string word;

   std::cout << "Enter several words (EOF to end):\n";
   while ( std::cin >> word )
      if ( word.ends_with( 'r' ) || word.ends_with( "ay" ))
         words.push_back( word );

   std::cout << "\nWords ending in 'r' or 'ay':\n";
   for ( const auto& w : words )
      std::cout << w << '\n';

   return 0;
}