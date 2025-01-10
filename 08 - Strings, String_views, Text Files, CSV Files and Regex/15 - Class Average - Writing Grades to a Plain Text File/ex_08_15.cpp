// ex_08_15.cpp
// Class Average: Writing Grades to a Plain Text File

#include <cstdlib>
#include <fstream>
#include <iostream>

int main() {

   if ( std::ofstream file{
      "15 - Class Average - Writing Grades to a Plain Text File/grades.txt",
      std::ios::out } ) {

      std::cout << "Enter grades (-1 to quit):\n";

      while ( true ) {

         int grade;
         std::cout << "> ";
         std::cin >> grade;
         if ( grade == -1 ) break;

         file << grade << ' ';
      }

   } else {

      std::cerr << "File could not be opened\n";
      std::exit( EXIT_FAILURE );
   }

   return 0;
}