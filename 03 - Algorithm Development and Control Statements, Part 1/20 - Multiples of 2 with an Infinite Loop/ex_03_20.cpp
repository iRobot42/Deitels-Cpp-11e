// ex_03_20.cpp
// Multiples of 2 with an Infinite Loop

#include <iostream>

int main() {

   int n{ 1 };

   while ( true )
      std::cout << ( n *= 2 ) << '\n';

   return 0;
}