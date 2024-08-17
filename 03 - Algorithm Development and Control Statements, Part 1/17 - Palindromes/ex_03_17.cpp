// ex_03_17.cpp
// Palindromes

#include <iostream>

int main() {

   int number{ 0 };

   while ( !number ) {

      std::cout << "Five-digit number: ";
      std::cin >> number;

      if ( number < 10000 ) number = 0;
      else if ( number > 99999 ) number = 0;
   }

   if ( number / 10000 == number % 10 )
      if ( number / 1000 % 10 == number / 10 % 10 )
         std::cout << "Palindrome!\n";

   return 0;
}