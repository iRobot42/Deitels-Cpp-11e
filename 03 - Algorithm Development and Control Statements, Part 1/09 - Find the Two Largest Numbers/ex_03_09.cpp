// ex_03_09.cpp
// Find the Two Largest Numbers

#include <iostream>

int main() {

   int counter{ 1 };
   int largest1{ std::numeric_limits< int >::min() };
   int largest2{ largest1 };

   while ( counter <= 10 ) {

      int number;

      std::cout << "Number " << counter++ << ": ";
      std::cin >> number;

      if ( number > largest2 ) {

         largest1 = largest2;
         largest2 = number;

      } else if ( number > largest1 ) {

         largest1 = number;
      }
   }

   std::cout << "\nLargest numbers are "
      << largest1 << " and " << largest2 << std::endl;

   return 0;
}