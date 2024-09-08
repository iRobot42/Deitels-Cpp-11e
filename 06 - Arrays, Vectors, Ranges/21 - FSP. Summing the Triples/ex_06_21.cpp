// ex_06_21.cpp
// Functional-Style Programming:
// Summing the Triples of the Even Integers from 2 through 10

#include <iostream>
#include <numeric>
#include <ranges>

int main() {

   auto values{ std::views::iota( 2, 11 )
      | std::views::filter( []( const auto& x ){ return !( x % 2 ); })
      | std::views::transform( []( const auto& x ){ return x * 3; })};

   std::cout << "The total of the triples of the even numbers (2-10) is "
      << std::accumulate( std::begin( values ), std::end( values ), 0 )
      << std::endl;

   return 0;
}