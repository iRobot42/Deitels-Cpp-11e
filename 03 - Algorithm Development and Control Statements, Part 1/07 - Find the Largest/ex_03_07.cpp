// ex_03_07.cpp
// Find the Largest

#include <iostream>

int main() {

   int counter{ 1 };
   int largest{ std::numeric_limits< int >::min() };

   while ( counter <= 10 ) {

      int number;

      std::cout << "Number " << counter++ << ": ";
      std::cin >> number;

      if ( number > largest ) largest = number;
   }

   std::cout << "\nLargest number is " << largest << std::endl;

   return 0;
}