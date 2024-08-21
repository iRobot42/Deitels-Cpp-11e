// ex_04_15.cpp
// Calculating the Value of Pi

#include <iomanip>
#include <iostream>

int main() {

   int accuracy;

   std::cout << "Accuracy set at: ";
   std::cin >> accuracy;

   std::cout << "\nterm\tpi\n";
   std::cout << std::fixed << std::setprecision( 8 );

   double pi{ 0.0 };

   for ( int term{ 1 }, found{ 0 }; term <= accuracy; ++term ) {

      pi += ( term % 2 ? 4.0 : -4.0 ) / ( 2.0 * term - 1 );
      std::cout << term << '\t' << pi << '\n';

      // the values depend on the output precision
      if ( !found && pi >= 3.14159 && pi < 3.141599995 ) {

         std::cout << "\n3.14159 found! ";
         system( "pause" ); // NB: Windows only
         found = 1;
      }
   }

   return 0;
}