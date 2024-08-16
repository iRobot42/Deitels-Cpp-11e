// ex_02_11.cpp
// Calculating the product of three integers // a

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

   // b
   int x{ 0 };
   int y{ 0 };
   int z{ 0 };
   int result{ 0 };

   cout << "Enter three integers: "; // c
   cin >> x >> y >> z; // d

   result = x * y * z; // e
   cout << "The product is " << result; // f

   return 0;
}