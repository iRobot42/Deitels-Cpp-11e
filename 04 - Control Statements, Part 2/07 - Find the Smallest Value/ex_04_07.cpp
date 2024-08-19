// ex_04_07.cpp
// Find the Smallest Value

#include <iostream>

int main() {

   int number;

   std::cout << "Number of values: ";
   std::cin >> number;

   if ( number < 1 ) return 0;

   std::cout << '\n';

   int smallest{ std::numeric_limits< int >::max() };

   while ( number-- ) {

      int value;

      std::cout << "Value: ";
      std::cin >> value;

      if ( value < smallest ) smallest = value;
   }

   std::cout << "\nSmallest is " << smallest << std::endl;

   return 0;
}