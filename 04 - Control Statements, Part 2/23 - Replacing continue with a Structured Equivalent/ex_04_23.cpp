// ex_04_23.cpp
// Replacing continue with a Structured Equivalent

#include <iostream>

int main() {

   for ( int count{ 1 }; count <= 10; ++count )
      if ( count != 5 ) std::cout << count << ' ';

   std::cout << "\nUsed inequality to skip printing 5\n";

   return 0;
}