// ex_06_06.cpp
// Salesperson Salary Ranges

#include <array>
#include <format>
#include <iostream>

int main() {

   std::cout << "Weekly gross sales (-1 to end):\n";

   std::array< int, 9 > counters{};
   double gross_sales;

   while ( true ) {

      std::cout << "> ";
      std::cin >> gross_sales;

      if ( gross_sales < 0 ) break;

      const double salary{ 200 + gross_sales * 0.09 };

      if ( salary >= 1000 ) ++counters.at( 8 );
      else ++counters.at( static_cast< size_t >( salary ) / 100 - 2 );
   }

   std::cout << "\nSalary range\tCounter\n-----------------------\n";
   for ( size_t counter{}; counter < counters.size() - 1; ++counter )
      std::cout << std::format( "${}00-{}99\t{}\n",
         counter + 2, counter + 2, counters.at( counter ));
   std::cout << "$1000 and over\t" << counters.at( 8 ) << std::endl;

   return 0;
}