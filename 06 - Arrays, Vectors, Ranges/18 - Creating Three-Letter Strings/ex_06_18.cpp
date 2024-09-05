// ex_06_18.cpp
// Creating Three-Letter Strings from a Five-Letter Word

#include <iostream>
#include <string>

int main() {

   constexpr size_t length{ 5 };

   std::string word;
   do {
      std::cout << length << "-letter word: ";
      std::cin >> word;
   } while ( word.size() != length );

   for ( size_t i1{}; i1 < length; ++i1 )
      for ( size_t i2{}; i2 < length; ++i2 )
         for ( size_t i3{}; i3 < length; ++i3 )
            std::cout << word[ i1 ] << word[ i2 ] << word[ i3 ] << '\n';

   return 0;
}