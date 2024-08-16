// ex_02_21.cpp
// Checkerboard Pattern

#include <iostream>

int main() {

   std::string s1{ "* * * * * * * *\n" };
   std::string s2{ " " + s1 };

   // Eight statements
   std::cout << s1; std::cout << s2;
   std::cout << s1; std::cout << s2;
   std::cout << s1; std::cout << s2;
   std::cout << s1; std::cout << s2 << "\n";

   // One statement
   std::cout << s1 << s2 << s1 << s2 << s1 << s2 << s1 << s2;

   return 0;
}