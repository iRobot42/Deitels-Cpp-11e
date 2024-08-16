// ex_02_22.cpp
// Integer Equivalent of a Character

#include <iostream>

int main() {

   char c;

   std::cout << "Character: ";
   std::cin >> c;

   std::cout << "Integer equivalent is "
      << static_cast< int >( c ) << std::endl;

   return 0;
}