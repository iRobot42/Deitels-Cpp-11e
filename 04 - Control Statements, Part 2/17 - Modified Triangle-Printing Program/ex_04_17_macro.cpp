// ex_04_17_macro.cpp
// Modified Triangle-Printing Program

#include <iostream>
using std::cout;

int main() {

#define FOR1 for ( int j{ 0 }; j <= 9; ++j )
#define FOR2 for ( int j{ 9 }; j >= 0; --j )
#define OUT1 cout << ( j <= i ? '*' : ' ' );
#define OUT2 cout << ( j >= i ? '*' : ' ' );

   for ( int i{ 0 }; i <= 9; ++i ) {

      FOR1 OUT1 cout << '\t';
      FOR2 OUT2 cout << '\t';
      FOR1 OUT2 cout << '\t';
      FOR2 OUT1 cout << '\n';
   }

   return 0;
}