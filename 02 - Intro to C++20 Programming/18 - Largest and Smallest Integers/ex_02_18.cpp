// ex_02_18.cpp
// Largest and Smallest Integers

#include <iostream>

int main() {

   int n1, n2, n3, n4, n5;

   std::cout << "Five integer numbers: ";
   std::cin >> n1 >> n2 >> n3 >> n4 >> n5;

   int min{ n1 }, max{ n1 };

   if ( n2 < min ) min = n2;
   if ( n3 < min ) min = n3;
   if ( n4 < min ) min = n4;
   if ( n5 < min ) min = n5;

   if ( n2 > max ) max = n2;
   if ( n3 > max ) max = n3;
   if ( n4 > max ) max = n4;
   if ( n5 > max ) max = n5;

   std::cout << "Smallest is " << min
      << "\nLargest is " << max << std::endl;

   return 0;
}