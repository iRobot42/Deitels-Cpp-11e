// ex_04_12.cpp
// Bar-Chart Printing Program

#include <iostream>

int main() {

   std::cout << "Five numbers between 1 and 30: ";

   for ( int n{ 1 }; n <= 5; ++n ) {

      int num;
      std::cin >> num;

      if ( num < 1 || num > 30 )
         std::cout << "Number " << num << " is out of range!";
      else for ( int i{ 0 }; i < num; ++i ) std::cout << '*';

      std::cout << '\n';
   }

   return 0;
}