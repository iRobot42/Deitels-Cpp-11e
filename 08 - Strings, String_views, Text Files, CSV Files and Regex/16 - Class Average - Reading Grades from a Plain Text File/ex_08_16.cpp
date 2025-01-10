// ex_08_16.cpp
// Class Average: Reading Grades from a Plain Text File

#include <cstdlib>
#include <format>
#include <fstream>
#include <iostream>

int main() {

   if ( std::ifstream file{
      "16 - Class Average - Reading Grades from a Plain Text File/grades.txt",
      std::ios::in } ) {

      int grade{};
      int total{};
      int count{};

      std::cout << "Grades: ";
      while ( file >> grade ) {

         std::cout << grade << ' ';
         total += grade;
         ++count;
      }

      std::cout << std::format( "\nTotal: {}\nCount: {}\nAverage: {:.2f}\n",
         total, count, static_cast< double >( total ) / count );

   } else {

      std::cerr << "File could not be opened\n";
      std::exit( EXIT_FAILURE );
   }

   return 0;
}