// ex_04_21.cpp
// Removing break and continue

#include <iostream>

int main() {

   int count{ 0 };
   bool flag{ true };

   for ( count = 1; flag && count <= 10; ++count )
      if ( count == 5 ) flag = 0, --count;
      else std:: cout << count << ' ';

   std::cout << "\nBroke out of loop at count = " << count << '\n';

   return 0;
}