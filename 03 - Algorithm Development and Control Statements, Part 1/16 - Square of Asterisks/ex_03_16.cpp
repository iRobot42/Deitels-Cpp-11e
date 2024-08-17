// ex_03_16.cpp
// Square of Asterisks

#include <iostream>

int main() {

   int size{ 0 };

   while ( !size ) {

      std::cout << "Size (1 to 20): ";
      std::cin >> size;

      if ( size < 1 ) size = 0;
      else if ( size > 20 ) size = 0;
   }

   std::cout << '\n';

   int row{ 0 };

   while ( ++row <= size ) {

      int col{ 0 };

      while ( ++col <= size ) {

         if ( col == size ) std::cout << "*\n";
         else if ( col == 1 ) std::cout << '*';
         else if ( row == 1 ) std::cout << '*';
         else if ( row == size ) std::cout << '*';
         else std::cout << ' ';
      }
   }

   return 0;
}