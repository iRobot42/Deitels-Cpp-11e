// ex_04_20.cpp
// Modified Diamond-Printing Program

#include <iostream>

int main() {

   int rows;

   do {
      std::cout << "Number of rows (1-19, odd): ";
      std::cin >> rows;
   } while ( rows < 1 || rows > 19 || !( rows % 2 ));

   int spaces{ rows / 2 }, asterisks{ 1 };

   for ( int row{ 1 }; row <= rows; ++row ) {

      for ( int i{ 1 }; i <= spaces; ++i )
         std::cout << ' ';

      for ( int i{ 1 }; i <= asterisks; ++i )
         std::cout << '*';

      if ( row <= rows / 2 )
         --spaces, asterisks += 2;
      else
         ++spaces, asterisks -= 2;

      std::cout << '\n';
   }

   return 0;
}