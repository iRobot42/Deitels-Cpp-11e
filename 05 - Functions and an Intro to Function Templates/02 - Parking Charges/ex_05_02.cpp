// ex_05_02.cpp
// Parking Charges

#include <cmath>
#include <format>
#include <iostream>

double calculateCharges( double );

int main() {

   double hours{ 0 };
   double total_hours{ 0 };
   double total_charges{ 0 };

   std::cout << "Parking hours (three cars): ";

   for ( int car{ 1 }; car <= 3; ++car ) {

      std::cin >> hours;

      const double charge{ calculateCharges( hours )};

      total_hours += hours;
      total_charges += charge;

      if ( car == 1 ) std::cout << "\nCar\tHours\tCharge\n";

      std::cout << std::format( "{:<5} {:7.1f} {:8.2f}\n",
         car, hours, charge );
   }

   std::cout << std::format( "TOTAL {:7.1f} {:8.2f}\n",
      total_hours, total_charges );

   return 0;
}

#pragma warning( disable: 26440 )

double calculateCharges( double h ) {

   double charge{ 20 };

   if ( h > 3 ) {
      charge += ceil( h - 3 ) * 5;
      if ( charge > 50 ) charge = 50;
   }

   return charge;
}