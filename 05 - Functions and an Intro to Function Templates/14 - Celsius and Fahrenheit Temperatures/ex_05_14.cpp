// ex_05_14.cpp
// Celsius and Fahrenheit Temperatures

#include <format>
#include <iostream>

int celsius( int );
int fahrenheit( int );
void print_chart( int, int, bool = false );

int main() {

   std::cout << "Celsius to Fahrenheit:\n\n";
   print_chart( 0, 100, true );

   std::cout << "\nFahrenheit to Celsius:\n\n";
   print_chart( 32, 212 );

   std::cout << std::endl;

   return 0;
}

#pragma warning( disable: 26440 26497 )

int celsius( int f ) {
   return static_cast< int >(( f - 32.0 ) / 1.8 );
}

int fahrenheit( int c ) {
   return static_cast< int >( c * 1.8 + 32 );
}

void print_chart( int from, int to, bool is_celsius ) {
   for ( int degree{ from }; degree <= to; ++degree )
      std::cout << std::format( "{:6} - {}{}", degree,
         ( is_celsius ? fahrenheit : celsius )( degree ),
         degree % 5 ? '\t' : '\n');
}