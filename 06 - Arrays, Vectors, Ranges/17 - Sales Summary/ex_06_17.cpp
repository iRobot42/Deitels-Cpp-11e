// ex_06_17.cpp
// Sales Summary

#include <array>
#include <iostream>

int main() {

   constexpr size_t S{ 4 }; // salespeople
   constexpr size_t P{ 5 }; // products

   std::array< std::array< int, S + 1 >, P + 1 > sales{};

   std::cout << "Enter slip's data (Person Product Value) [0 to end].\n";

   while ( true ) {

      int product{}; // product number
      int person{}; // salesperson number
      int value{}; // total monetary value

      std::cout << "> ";
      std::cin >> person;
      if ( !person ) break;
      std::cin >> product >> value;

      if ( person < 1 || person > S )
         std::cout << "Incorrect salesperson number\n";
      else if ( product < 1 || product > P )
         std::cout << "Incorrect product number\n";
      else if ( value < 0 )
         std::cout << "Incorrect value\n";
      else sales.at( product ).at( person ) += value;
   }

   std::cout << "\nSalesperson:";
   for ( size_t s{ 1 }; s <= S; ++s )
      std::cout << '\t' << s;
   std::cout << "\tTOTAL\n";

   for ( int i{}; i < 53; ++i ) std::cout << '-';

   for ( size_t p{ 1 }; p <= P; ++p ) {

      std::cout << "\nProduct " << p;
      for ( size_t s{ 1 }; s <= S; ++s ) {
         std::cout << '\t' << sales.at( p ).at( s );
         sales.at( p ).at( 0 ) += sales.at( p ).at( s );
         sales.at( 0 ).at( s ) += sales.at( p ).at( s );
         sales.at( 0 ).at( 0 ) += sales.at( p ).at( s );
      }
      std::cout << '\t' << sales.at( p ).at( 0 );
   }

   std::cout << '\n';
   for ( int i{}; i < 53; ++i ) std::cout << '-';

   std::cout << "\nTOTAL:\t";
   for ( size_t s{ 1 }; s <= S; ++s )
      std::cout << '\t' << sales.at( 0 ).at( s );
   std::cout << '\t' << sales.at( 0 ).at( 0 ) << std::endl;

   return 0;
}