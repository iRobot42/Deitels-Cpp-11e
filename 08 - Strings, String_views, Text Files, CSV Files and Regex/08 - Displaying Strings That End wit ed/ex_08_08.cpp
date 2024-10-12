// ex_08_08.cpp
// Displaying Strings That End with ed

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {

   std::string str;
   std::vector< std::string > vec;

   std::cout << "> ";
   std::getline( std::cin, str );
   std::istringstream ss{ str };

   while ( ss >> str )
      if ( str.ends_with( "ed" ))
         vec.push_back( str );

   std::cout << "Words ending with ed: ";
   for ( const auto& wrd : vec )
      std::cout << wrd << ' ';
   std::cout << std::endl;

   return 0;
}