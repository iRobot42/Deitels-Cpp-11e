// ex_06_20.cpp
// Functional-Style Programming: Cubing Integers

#include <format>
#include <iostream>
#include <ranges>

int main() {

   constexpr auto print{ []( const auto& text, auto& values ) {
      std::cout << std::format( "{}: ", text );
      for ( const auto& value : values )
         std::cout << std::format( "{} ", value );
      std::cout << std::endl; }};

   constexpr auto numbers{ std::views::iota( 1, 6 )};
   constexpr auto cubes{ numbers
      | std::views::transform( []( const auto& x ){ return x * x * x; })};

   print( "Numbers", numbers );
   print( "Cubes", cubes );

   return 0;
}