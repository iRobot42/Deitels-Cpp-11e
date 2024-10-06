// ex_08_05.cpp
// Pig Latin

#include <iostream>
#include <sstream>
#include <string>

int main() {

   std::string str, word, pig;
   const std::string vowels{ "aeiou" };

   std::cout << "> ";
   std::getline( std::cin, str );

   std::istringstream ss{ str };

   while ( ss >> word )
      if ( word.size() == 1 )
         pig += word + ' ';
      else if ( vowels.find( word.front() ) != vowels.npos )
         pig += word + "ay ";
      else pig += word.substr( 1 ) + word.front() + "ay ";

   pig.pop_back();

   std::cout << "Pig Latin: " << pig << '\n';

   return 0;
}