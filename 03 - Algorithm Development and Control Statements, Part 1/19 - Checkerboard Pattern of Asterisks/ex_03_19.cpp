// ex_03_19.cpp
// Checkerboard Pattern of Asterisks

#include <iostream>
using std::cout;

int main() {

   int row{ 0 };

   while ( ++row <= 8 ) {

      if ( row % 2 == 0 )
         cout << ' ';

      int col{ 0 };

      while ( ++col <= 8 )
         cout << "* ";

      cout << "\n";
   }

   return 0;
}