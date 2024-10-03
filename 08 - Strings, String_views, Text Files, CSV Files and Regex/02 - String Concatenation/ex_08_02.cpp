// ex_08_02.cpp
// String Concatenation

#include <iostream>
#include <string>

int main() {

   std::string first, last;

   std::cout << "First name: ";
   std::cin >> first;
   std::cout << "Last name: ";
   std::cin >> last;

   std::string full{ first + ' ' + last };
   std::cout << "a) " << full << '\n';

   ( full = first ).append( " " ).append( last );
   std::cout << "b) " << full << '\n';

   return 0;
}