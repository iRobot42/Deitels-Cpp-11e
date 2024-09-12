// ex_06_29.cpp
// Palindromes

#include <iostream>
#include <string>

bool testPalindrome( std::string );

int main() {

   const std::string sentence{ "red roses run no risk, sir, on nurses order." };

   std::cout << sentence << '\n';

   if ( testPalindrome( sentence ))
      std::cout << "Palindrome!\n";

   return 0;
}

bool testPalindrome( std::string s ) {

   if ( s.size() < 2 ) return true;

   const size_t e{ s.size() - 1 };

   if ( s.at( 0 ) < 'a' || s.at( 0 ) > 'z' )
      return testPalindrome( s.substr( 1, e ));
   if ( s.at( e ) < 'a' || s.at( e ) > 'z' )
      return testPalindrome( s.substr( 0, e ));
   if ( s.at( 0 ) == s.at( e ))
      return testPalindrome( s.substr( 1, e - 1 ));

   return false;
}