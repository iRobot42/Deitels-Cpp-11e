// ex_08_07.cpp
// Displaying Strings That Start with b

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
      if ( str.starts_with( "b" ))
         vec.push_back( str );

   std::cout << "Words beginning with b: ";
   for ( const auto& wrd : vec )
      std::cout << wrd << ' ';
   std::cout << std::endl;

   return 0;
}