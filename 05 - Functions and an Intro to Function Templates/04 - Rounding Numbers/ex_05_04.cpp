// ex_05_04.cpp
// Rounding Numbers

#include <cmath>
#include <format>
#include <iostream>

double roundToInteger( double );
double roundToTenths( double );
double roundToHundredths( double );
double roundToThousandths( double );

int main() {

   for ( int i{ 1 }; i <= 3; ++i ) {

      double number;

      std::cout << "Number: ";
      std::cin >> number;

      std::cout << std::format( "{}{:<}{}{:<}{}{:<}{}{:<}{}{:<}\n\n",
         "\nOriginal value:     ", number,
         "\nNearest integer:    ", roundToInteger( number ),
         "\nNearest tenth:      ", roundToTenths( number ),
         "\nNearest hundredth:  ", roundToHundredths( number ),
         "\nNearest thousandth: ", roundToThousandths( number ));
   }

   return 0;
}

#pragma warning( disable: 26440 )

double roundToInteger( double x ) {
   return floor( x + 0.5 );
}

double roundToTenths( double x ) {
   return floor( x * 10 + 0.5 ) / 10;
}

double roundToHundredths( double x ) {
   return floor( x * 100 + 0.5 ) / 100;
}

double roundToThousandths( double x ) {
   return floor( x * 1000 + 0.5 ) / 1000;
}