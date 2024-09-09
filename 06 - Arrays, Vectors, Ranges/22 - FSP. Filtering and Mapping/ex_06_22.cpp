// ex_06_22.cpp
// Functional-Style Programming: Filtering and Mapping with an array

#include <array>
#include <iostream>
#include <ranges>

int main() {

   auto print{ []( const auto& text, auto& values ){
      std::cout << text << ": ";
      for ( const auto& value : values )
         std::cout << value << ' ';
      std::cout << '\n'; }};

   constexpr std::array numbers{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };

   auto even{ std::views::filter( []( const auto& x ){ return !( x % 2 ); })};
   auto square{ std::views::transform( []( const auto& x ){ return x * x; })};

   auto a{ numbers | even };
   auto b{ numbers | square };
   auto c{ numbers | even | square }; // { a | square }

   print( "Numbers", numbers );
   print( "Even numbers", a );
   print( "Numbers squared", b );
   print( "Even numbers squared", c );

   return 0;
}