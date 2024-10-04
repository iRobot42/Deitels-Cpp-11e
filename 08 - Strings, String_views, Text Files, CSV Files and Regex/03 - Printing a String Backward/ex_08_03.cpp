// ex_08_03.cpp
// Printing a string Backward

#include <cctype>
#include <format>
#include <iostream>
#include <string>

int main() {

   std::string str;

   std::cout << "> ";
   std::cin >> str;
   std::cout << "< ";

   size_t i{ str.size() };

   while ( i-- ) {
      const char c{ str.at( i )};
      std::cout << std::format( "{:c}",
         isupper( c ) ? tolower( c ) : toupper( c ));
   }

   std::cout << std::endl;

   return 0;
}