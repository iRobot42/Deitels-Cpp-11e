// ex_07_07.cpp
// Cubing the Elements of a span

#include <array>
#include <iostream>
#include <span>
#include <vector>

#pragma warning( disable: 26440 26497 26821 )

void cubeElements( std::span< int > );
void displaySpan( std::span< const int > );

int main() {

   int values1[]{ 1, 2, 3, 4, 5 };
   std::array values2{ 6, 7, 8, 9, 10 };
   std::vector values3{ 11, 12, 13, 14, 15 };

   std::cout << "Before cubing:\n";
   std::cout << "values1: "; displaySpan( values1 );
   std::cout << "values2: "; displaySpan( values2 );
   std::cout << "values3: "; displaySpan( values3 );

   std::cout << "\nCubing the elements...\n";
   cubeElements( values1 );
   cubeElements( values2 );
   cubeElements( values3 );

   std::cout << "\nAfter cubing:\n";
   std::cout << "values1: "; displaySpan( values1 );
   std::cout << "values2: "; displaySpan( values2 );
   std::cout << "values3: "; displaySpan( values3 );

   return 0;
}

void cubeElements( std::span< int > items ) {
   for ( int& item : items )
      item = item * item * item;
}

void displaySpan( std::span< const int > items ) {
   for ( const int item : items )
      std::cout << item << ' ';
   std::cout << '\n';
}