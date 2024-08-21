// ex_04_17.cpp
// Modified Triangle-Printing Program

#include <iostream>
using std::cout;

int main() {

   for ( int i{ 0 }; i <= 9; ++i ) {

      for ( int j{ 0 }; j <= 9; ++j )
         cout << ( j <= i ? '*' : ' ' );
      cout << '\t';

      for ( int j{ 9 }; j >= 0; --j )
         cout << ( j >= i ? '*' : ' ' );
      cout << '\t';

      for ( int j{ 0 }; j <= 9; ++j )
         cout << ( j >= i ? '*' : ' ' );
      cout << '\t';

      for ( int j{ 9 }; j >= 0; --j )
         cout << ( j <= i ? '*' : ' ' );
      cout << '\n';
   }

   return 0;
}