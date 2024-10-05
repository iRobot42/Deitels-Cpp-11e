// ex_08_04.cpp
// Recognizing Palindromes

#include <cctype>
#include <iostream>
#include <string>

bool is_palindrome( const std::string& );

int main() {

   std::string str;

   std::cout << "> ";
   std::getline( std::cin, str );

   if ( is_palindrome( str ))
      std::cout << "Palindrome!\n";

   return 0;
}

bool is_palindrome( const std::string& text ) {

   size_t l{}, r{ text.size() - 1 };

   while ( l < r ) {

      const char L( toupper( text.at( l )));
      const char R( toupper( text.at( r )));

      if ( !isalpha( L )) ++l;
      else if ( !isalpha( R )) --r;
      else if ( L != R ) return false;
      else ++l, --r;
   }

   return true;
}