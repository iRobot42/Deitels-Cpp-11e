// ex_05_16.cpp
// Perfect Numbers

#include <iostream>

bool isPerfect( int );
void showDivisors( int );

int main() {

   std::cout << "Perfect numbers between 1 and 1000:\n";

   for ( int number{ 1 }; number <= 1000; ++number )
      if ( isPerfect( number ))
         showDivisors( number );

   return 0;
}

#pragma warning( disable: 26440 26497 )

bool isPerfect( int num ) {

   int sum{ 0 };

   for ( int i{ 1 }; i <= num / 2; ++i )
      if (!( num % i ))
         sum += i;

   return num == sum;
}

void showDivisors( int num ) {

   std::cout << num << " = 1";

   for ( int i{ 2 }; i <= num / 2; ++i )
      if (!( num % i ))
         std::cout << " + " << i;

   std::cout << '\n';
}