// ex_03_18.cpp
// Printing the Decimal Equivalent of a Binary Number

#include <iostream>

int main() {

   int bin{ 0 };
   int dec{ 0 };
   int val{ 1 };

   std::cout << "Binary number: ";
   std::cin >> bin;

   while ( bin ) {

      dec += bin % 10 * val;
      val *= 2;
      bin /= 10;
   }

   std::cout << "Decimal equivalent is " << dec << std::endl;

   return 0;
}