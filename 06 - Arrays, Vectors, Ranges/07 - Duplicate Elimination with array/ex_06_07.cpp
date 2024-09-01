// ex_06_07.cpp
// Duplicate Elimination with array

#include <array>
#include <iostream>

int main() {

   constexpr size_t size{ 20 };
   std::array< int, size > a{};

   std::cout << "Enter " << size << " numbers [10-100]...\n\n";

   for ( size_t i{}; i < size; ++i ) {

      int number{};

      while ( number < 10 || number > 100 ) {
         std::cout << "Number " << i + 1 << ": ";
         std::cin >> number;
      }

      bool skip{};

      for ( size_t j{}; j < i; ++j )
         if ( number == a.at( j )) {
            skip = true;
            break;
         }

      if ( !skip ) a.at( i ) = number;
   }

   std::cout << "\nUnique values:\n";
   for ( const int element : a )
      if ( element ) std::cout << element << ' ';
   std::cout << std::endl;

   return 0;
}