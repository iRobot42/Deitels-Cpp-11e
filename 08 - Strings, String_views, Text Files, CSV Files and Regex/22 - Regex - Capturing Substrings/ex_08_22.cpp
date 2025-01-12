// ex_08_22.cpp
// Regular Expressions: Capturing Substrings

#include <iosfwd>
#include <iostream>
#include <regex>
#include <sstream>
#include <string>

int main() {

   std::string str;

   std::cout << "> ";
   std::getline( std::cin, str );
   std::istringstream ss{ str };

   const std::regex reg{ "[b]\\w*" };
   // R"([b]\w*)"
   // "[b][_[:alnum:]]*"
   // "[b][A-Za-z0-9_]*"

   std::cout << "Words beginning with b: ";
   while ( ss >> str )
      if ( std::regex_match( str, reg ))
         std::cout << str << ' ';
   std::cout << std::endl;

   return 0;
}