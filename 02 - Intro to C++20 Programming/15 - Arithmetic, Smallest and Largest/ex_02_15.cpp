// ex_02_15.cpp
// Arithmetic, Smallest and Largest

#include <iostream>

int main() {

   int number1, number2, number3;

   std::cout << "Input three different integers: ";
   std::cin >> number1 >> number2 >> number3;

   int min{ number1 }, max{ number1 };

   if ( number2 < min ) min = number2;
   if ( number3 < min ) min = number3;

   if ( number2 > max ) max = number2;
   if ( number3 > max ) max = number3;

   std::cout << "Sum is " << number1 + number2 + number3
      << "\nAverage is " << ( number1 + number2 + number3 ) / 3
      << "\nProduct is " << number1 * number2 * number3
      << "\nSmallest is " << min
      << "\nLargest is " << max << std::endl;

   return 0;
}