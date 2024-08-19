// ex_04_13.cpp
// Calculating sales

#include <iomanip>
#include <iostream>

int main() {

   double total{ 0.0 };

   int product{ -1 };

   while ( product ) {

      std::cout << "Product number (1-5) [0 - exit]: ";
      std::cin >> product;

      if ( product < 1 || product > 5 ) continue;

      int quantity;

      do {
         std::cout << "Quantity sold: ";
         std::cin >> quantity;
      } while ( quantity < 0 );

      switch ( product ) {
         case 1: total += quantity * 2.98; break;
         case 2: total += quantity * 4.50; break;
         case 3: total += quantity * 9.98; break;
         case 4: total += quantity * 4.49; break;
         case 5: total += quantity * 6.87; break;
      }

      std::cout << '\n';
   }

   std::cout << std::fixed << std::setprecision( 2 )
      << "\nTotal retail value is $" << total << std::endl;

   return 0;
}