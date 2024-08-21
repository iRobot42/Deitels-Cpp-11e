// ex_04_19.cpp
// Diamond-Printing Program

#include <iostream>

int main() {

   int spaces{ 4 }, asterisks{ 1 };

   for ( int row{ 1 }; row <= 9; ++row ) {

      for ( int i{ 1 }; i <= spaces; ++i )
         std::cout << ' ';

      for ( int i{ 1 }; i <= asterisks; ++i )
         std::cout << '*';

      if ( row <= 4 )
         --spaces, asterisks += 2;
      else
         ++spaces, asterisks -= 2;

      std::cout << '\n';
   }

   return 0;
}