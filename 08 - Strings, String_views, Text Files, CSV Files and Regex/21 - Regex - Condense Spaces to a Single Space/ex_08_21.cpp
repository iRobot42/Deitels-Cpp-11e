// ex_08_21.cpp
// Regular Expressions: Condense Spaces to a Single Space

#include <format>
#include <iostream>
#include <regex>
#include <string>

int main() {

   const std::string test{ "    Hello   World !  " };

   std::cout << std::format( "Original: \"{}\"\nCondensed: \"{}\"\n",
      test, std::regex_replace( test, std::regex( "[ ]+" ), " " ));

   return 0;
}