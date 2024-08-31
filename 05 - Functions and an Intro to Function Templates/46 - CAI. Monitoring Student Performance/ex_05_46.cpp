// ex_05_46.cpp
// Computer-Assisted Instruction: Monitoring Student Performance

#include <iostream>
#include <random>

#pragma warning( disable: 4273 26814 28251 )

int rand( void );
void comment( bool );

int main() {

   char again( 'y' );
   while ( again == 'y' ) {

      const int attempts{ 10 };
      int correct{ 0 };

      for ( int attempt{ 1 }; attempt <= attempts; ++attempt ) {

         const int n1{ rand() };
         const int n2{ rand() };

         int answer{ 0 };
         std::cout << "How much is " << n1 << " times " << n2 << "? ";
         std::cin >> answer;

         const bool is_right{ answer == n1 * n2 };
         if ( is_right ) ++correct;
         comment( is_right );
      }

      std::cout << '\n' << ( correct >= attempts * 0.75
         ? "Congratulations, you are ready to go to the next level!\n"
         : "Please ask your teacher for extra help.\n" )
         << "Continue (y/n)? ";
      std::cin >> again;
      std::cout << '\n';
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