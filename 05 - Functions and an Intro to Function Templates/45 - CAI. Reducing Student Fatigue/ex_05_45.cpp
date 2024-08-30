// ex_05_45.cpp
// Computer-Assisted Instruction: Reducing Student Fatigue

#include <iostream>
#include <random>

#pragma warning( disable: 4273 28251 )

int rand( void );
void comment( bool );

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

         comment( answer == correct );
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

void comment( bool is_correct ) {

   static std::random_device seed;
   static std::default_random_engine generator{ seed() };
   static std::uniform_int_distribution range{ 1, 4 };

   if ( const int number{ range( generator )}; is_correct )
      switch( number ) {
         case 1: std::cout << "Very good!\n"; break;
         case 2: std::cout << "Excellent!\n"; break;
         case 3: std::cout << "Nice work!\n"; break;
         case 4: std::cout << "Keep up the good work!\n"; break;
      }
   else
      switch( number ) {
         case 1: std::cout << "No. Please try again.\n"; break;
         case 2: std::cout << "Wrong. Try once more.\n"; break;
         case 3: std::cout << "Don't give up!\n"; break;
         case 4: std::cout << "No. Keep trying.\n"; break;
      }
}