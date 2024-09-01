// ex_06_08.cpp
// Duplicate Elimination with vector

#include <vector>
#include <iostream>

int main() {

   constexpr size_t size{ 20 };
   std::vector< int > v;

   std::cout << "Enter " << size << " numbers [10-100]...\n\n";

   for ( size_t i{}; i < size; ++i ) {

      int number{};

      while ( number < 10 || number > 100 ) {
         std::cout << "Number " << i + 1 << ": ";
         std::cin >> number;
      }

      bool skip{};

      for ( const int num : v )
         if ( number == num ) {
            skip = true;
            break;
         }

      if ( !skip ) v.push_back( number );
   }

   std::cout << "\nUnique values:\n";
   for ( const int element : v )
      if ( element ) std::cout << element << ' ';
   std::cout << std::endl;

   return 0;
}