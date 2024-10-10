// ex_08_06.cpp
// Reversing a Sentence

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {

   std::string str, word;
   std::vector< std::string > words;

   std::cout << "> ";
   std::getline( std::cin, str );

   std::istringstream ss{ str };

   while ( ss >> word )
      words.push_back( word );

   size_t i{ words.size() };

   while ( i-- )
      std::cout << words.at( i ) << ' ';
   std::cout << '\n';

   return 0;
}