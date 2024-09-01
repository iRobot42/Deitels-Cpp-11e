// ex_05_48.cpp
// Computer-Assisted Instruction: Varying the Types of Problems

#include <cmath>
#include <iostream>
#include <random>

int operation( int, int, int );
int random( int );
void comment( bool );

#pragma warning( disable: 26426 )

std::random_device seed;
std::default_random_engine generator{ ::seed() };

int main() {

   int level{ 1 };
   while ( level ) {

      do {
         std::cout << "Difficulty (1-4), 0 to end: ";
         std::cin >> level;
      } while ( level < 0 || level > 4 );

      if ( !level ) break;

      std::cout << "Types of arithmetic problem:\n"
         << "1 - addition\n"
         << "2 - subtraction\n"
         << "3 - multiplication\n"
         << "4 - integer division\n"
         << "5 - random mixture\n";

      int type;
      do {
         std::cout << "Type: ";
         std::cin >> type;
      } while ( type < 1 || type > 5 );

      int correct{ 0 };

      for ( int attempt{ 1 }; attempt <= 10; ++attempt ) {

         const int n1{ random( level )};
         const int n2{ random( level )};
         const int result{ operation( type, n1, n2 )};

         int answer;
         std::cin >> answer;

         if ( answer == result ) ++correct;
         comment( answer == result );
      }

      std::cout << ( correct >= 7.5
         ? "Congratulations, you are ready to go to the next level!"
         : "Please ask your teacher for extra help." ) << "\n\n";
   }

   return 0;
}

int operation( int op, int a, int b ) {

   static std::uniform_int_distribution operation_range{ 1, 4 };

   if ( op == 5 ) op = operation_range( ::generator );

   switch ( op ) {
      case 1: std::cout << a << " + " << b << " = "; return a + b;
      case 2: std::cout << a << " - " << b << " = "; return a - b;
      case 3: std::cout << a << " * " << b << " = "; return a * b;
      case 4: std::cout << a << " / " << b << " = "; return a / b;
      default: return 0;
   }
}

int random( int difficulty ) {

   std::uniform_int_distribution difficulty_range{
      0, static_cast< int >( pow( 10, difficulty )) - 1 };

   int number{ 0 };
   while ( !number ) number = difficulty_range( ::generator );

   return number;
}

void comment( bool is_correct ) {

   static std::uniform_int_distribution comments_range{ 1, 4 };

   if ( is_correct ) switch ( comments_range( ::generator )) {

      case 1: std::cout << "Very good!\n"; break;
      case 2: std::cout << "Excellent!\n"; break;
      case 3: std::cout << "Nice work!\n"; break;
      case 4: std::cout << "Keep up the good work!\n"; break;

   } else switch ( comments_range( generator )) {

      case 1: std::cout << "No. Please try again.\n"; break;
      case 2: std::cout << "Wrong. Try once more.\n"; break;
      case 3: std::cout << "Don't give up!\n"; break;
      case 4: std::cout << "No. Keep trying.\n"; break;
   }
}