// ex_03_03.cpp
// Gas Mileage

#include <iomanip>
#include <iostream>

int main() {

   int mil_tot{ 0 };
   int gal_tot{ 0 };

   std::cout << std::setprecision( 6 ) << std::fixed;

   while ( true ) {

      int mil, gal;

      std::cout << "Enter miles driven (-1 to quit): ";
      std::cin >> mil;

      if ( mil == -1 ) return 0;

      std::cout << "Enter gallons used: ";
      std::cin >> gal;

      mil_tot += mil;
      gal_tot += gal;

      std::cout << "MPG this trip: " << 1.0 * mil / gal << '\n';
      std::cout << "Total MPG: " << 1.0 * mil_tot / gal_tot << "\n\n";
   }

   return 0;
}