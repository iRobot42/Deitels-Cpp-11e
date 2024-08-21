// ex_04_25.cpp
// Peter Minuit Problem

#include <cmath> // std::pow
#include <format>
#include <iostream>

int main() {

   int year{ 2023 };
   double principal{ 24.00 };

   std::cout << std::format( "Deposit principal: ${:.2f}\n"
      "Rate and interest until {}:\n{:>3} {:>25}\n{:-<29}\n",
      principal, year, "%", "amount, $", "" );

   for ( int rate{ 5 }; rate <= 10; ++rate )
      std::cout << std::format( "{:3} {:25.2f}\n",
         rate, principal * pow( 1 + rate / 100.0, year - 1625 ));

   return 0;
}