// ex_04_11.cpp
// Triangle-Printing Program

#include <iostream>
using std::cout;

int main() {

   for ( int i{ 1 }; i <= 10; ++i ) {
      for ( int j{ 1 }; j <= i; ++j )
         cout << '*';
      cout << '\n';
   }
   cout << '\n';

   for ( int i{ 1 }; i <= 10; ++i ) {
      for ( int j{ 10 }; j >= i; --j )
         cout << '*';
      cout << '\n';
   }
   cout << '\n';

   for ( int i{ 1 }; i <= 10; ++i ) {
      for ( int j{ 1 }; j <= 10; ++j )
         if ( j < i ) cout << ' ';
         else cout << '*';
      cout << '\n';
   }
   cout << '\n';

   for ( int i{ 1 }; i <= 10; ++i ) {
      for ( int j{ 10 }; j >= 1; --j )
         if ( j > i ) cout << ' ';
         else cout << '*';
      cout << '\n';
   }

   return 0;
}