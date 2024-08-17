// ex_03_21.cpp
// Calculating a Circle's Diameter, Circumference and Area

#include <iostream>

int main() {

   double r;

   std::cout << "Radius of a circle: ";
   std::cin >> r;

   std::cout << "\nDiameter is " << 2 * r
      << "\nCircumference is " << 2 * 3.14159 * r
      << "\nArea is " << 3.14159 * r * r << std::endl;

   return 0;
}