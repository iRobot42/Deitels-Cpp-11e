// ex_03_10.cpp
// Validating User Input

#include <iostream>

int main() {

   int passes{ 0 };
   int counter{ 0 };

   while ( ++counter <= 10 ) {

      int result;

      std::cout << "Enter result (1 = pass, 2 = fail): ";
      std::cin >> result;

      if ( result == 1 ) ++passes;
      else if ( result != 2 ) --counter;
   }

   std::cout << "Passed: " << passes << '\n';
   std::cout << "Failed: " << 10 - passes << '\n';

   if ( passes > 8 ) std::cout << "Bonus to instructor!\n";

   return 0;
}