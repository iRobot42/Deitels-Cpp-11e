// ex_02_16.cpp
// Diameter, Circumference and Area of a Circle

#include <iostream>

int main() {

   int radius;

   std::cout << "Integer radius of a circle: ";
   std::cin >> radius;

   std::cout << "Diameter is " << 2 * radius
      << "\nCircumference is " << 2 * 3.14159 * radius
      << "\nArea is " << 3.14159 * radius * radius << std::endl;

   return 0;
}