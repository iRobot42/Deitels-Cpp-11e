// ex_05_47.cpp
// Computer-Assisted Instruction: Difficulty Levels

#include <cmath>
#include <iostream>
#include <random>

int random( int );
void comment( bool );

int main() {

   int level{ 1 };
   while ( level ) {

      do {
         std::cout << "Difficulty (1-4), 0 to end: ";
         std::cin >> level;
      } while ( level < 0 || level > 4 );

      if ( !level ) break;

#pragma warning( disable: 26814 )

      const int attempts{ 10 };
      int correct{ 0 };

      for ( int attempt{ 1 }; attempt <= attempts; ++attempt ) {

         const int n1{ random( level )};
         const int n2{ random( level )};

         int answer{ 0 };
         std::cout << "How much is " << n1 << " times " << n2 << "? ";
         std::cin >> answer;

         const bool is_right{ answer == n1 * n2 };
         if ( is_right ) ++correct;
         comment( is_right );
      }

      std::cout << ( correct >= attempts * 0.75
         ? "Congratulations, you are ready to go to the next level!"
         : "Please ask your teacher for extra help." ) << "\n\n";
   }

   return 0;
}

int random( int difficulty ) {

   static std::random_device seed;
   static std::default_random_engine generator{ seed() };

   return std::uniform_int_distribution{ 0,
      static_cast< int >( pow( 10, difficulty )) - 1 }( generator );
}

void comment( bool is_correct ) {

   static std::random_device seed;
   static std::default_random_engine generator{ seed() };
   static std::uniform_int_distribution range{ 1, 4 };

   if ( is_correct ) switch ( range( generator )) {

      case 1: std::cout << "Very good!\n"; break;
      case 2: std::cout << "Excellent!\n"; break;
      case 3: std::cout << "Nice work!\n"; break;
      case 4: std::cout << "Keep up the good work!\n"; break;

   } else switch ( range( generator )) {

      case 1: std::cout << "No. Please try again.\n"; break;
      case 2: std::cout << "Wrong. Try once more.\n"; break;
      case 3: std::cout << "Don't give up!\n"; break;
      case 4: std::cout << "No. Keep trying.\n"; break;
   }
}