// ex_03_05.cpp
// Sales-Commission Calculator

#include <iomanip>
#include <iostream>

int main() {

   std::cout << std::setprecision( 2 ) << std::fixed;

   while ( true ) {

      int sales;

      std::cout << "Enter sales in dollars (-1 to end): ";
      std::cin >> sales;

      if ( sales == -1 ) return 0;

      std::cout << "Salary is: $" << 200 + sales * 0.09 << "\n\n";
   }

   return 0;
}