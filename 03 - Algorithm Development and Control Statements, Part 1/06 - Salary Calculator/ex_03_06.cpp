// ex_03_06.cpp
// Salary Calculator

#include <iomanip>
#include <iostream>

int main() {

   std::cout << std::setprecision( 2 ) << std::fixed;

   while ( true ) {

      double hours{}, rate{};

      std::cout << "Enter hours worked (-1 to end): ";
      std::cin >> hours;

      if ( hours < 0 ) return 0;
      if ( hours > 40 ) hours = 40 + ( hours - 40 ) * 1.5;

      std::cout << "Enter hourly rate of the employee: ";
      std::cin >> rate;

      std::cout << "Salary is $" << hours * rate << "\n\n";
   }

   return 0;
}