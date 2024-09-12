// ex_06_32.cpp
// Print a String Backward

#include <iostream>
#include <string>

void stringReverse( const std::string&, size_t );

int main() {

   std::string test{ "Hello, world!" };

   stringReverse( test, 0 );

   std::cout << std::endl;

   return 0;
}

void stringReverse( const std::string& s, size_t i ) {

   if ( i < s.size() - 1 )
      stringReverse( s, i + 1 );

   std::cout << s.at( i );
}