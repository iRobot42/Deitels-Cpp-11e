// ex_04_25_boost.cpp
// Peter Minuit Problem

#pragma warning( push )
#pragma warning( disable: 26429 26432 26440 26446 26451 26458 26472 26475 \
   26481 26482 26485 26486 26489 26493 26494 26496 26812 26814 26823 )
#include <boost/multiprecision/cpp_dec_float.hpp>
#include "decimalformatter.h"
#pragma warning( pop )

#include <format>
#include <iostream>

using DF50 = boost::multiprecision::cpp_dec_float_50;
using namespace std;

int main() {

   const DF50 principal{ 24.00 };
   int year{ 2023 };

   cout << format( "Deposit principal: ${}\n"
      "Rate and interest until {}:\n{:>3} {:>25}\n{:-<29}\n",
      principal, year, "%", "amount, $", "" );

   for ( DF50 rate{ 5 }, amount; rate <= 10; ++rate )
      cout << format( "{:3} {:>25}\n", static_cast< int >( rate ),
         amount = principal * pow( 1 + rate / 100, year - 1625 ));

   return 0;
}