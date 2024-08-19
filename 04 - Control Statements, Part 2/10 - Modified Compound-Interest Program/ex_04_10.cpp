// ex_04_10.cpp
// Modified Compound-Interest Program

#pragma warning( push )
#pragma warning( disable: 6336 26429 26432 26440 26446 26451 26458 26472 \
   26475 26481 26482 26485 26486 26489 26493 26494 26496 26812 26814 26823 )
#include <boost/multiprecision/cpp_dec_float.hpp>
#include "decimalformatter.h"
#pragma warning( pop )

#include <format>
#include <iostream>

using namespace std;
using DF50 = boost::multiprecision::cpp_dec_float_50;

int main() {

   const DF50 principal{ 1000 };

   cout << "Year";
   for ( int p{ 5 }; p <= 10; ++p ) cout << format( " {:>7}%", p );
   cout << format( "\n{:-<58}\n", "" );

   for ( int year{ 1 }; year <= 10; ++year ) {

      cout << format( "{:4}", year );

      for ( DF50 rate{ 1.05 }, amount; rate <= 1.10; rate += 0.01 )
         cout << format( " {:>8}", amount = principal * pow( rate, year ));

      cout << '\n';
   }

   return 0;
}