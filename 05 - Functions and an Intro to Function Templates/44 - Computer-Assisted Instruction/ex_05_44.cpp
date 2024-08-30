// ex_05_44.cpp
// Computer-Assisted Instruction

#include <iostream>
#include <random>

#pragma warning( disable: 4273 28251 )

int rand( void );

int main() {

   std::cout << "Enter -1 to end.\n";

   int answer{ 0 };

   while ( answer != -1 ) {

      const int n1{ rand() };
      const int n2{ rand() };
      const int correct{ n1 * n2 };

      while ( answer != correct ) {

         std::cout << "\nHow much is " << n1 << " times " << n2 << "? ";
         std::cin >> answer;

         if ( answer == -1 ) break;

         if ( answer == correct ) std::cout << "Very good!\n";
         else std::cout << "No. Please try again.\n";
      }
   }

   return 0;
}

int rand( void ) {

   static std::random_device seed;
   static std::default_random_engine generator{ seed() };
   static std::uniform_int_distribution range{ 0, 9 };

   return range( generator );
}