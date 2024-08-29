// ex_05_35.cpp
// Craps Game Modification

#include <format>
#include <iostream>
#include <random>

bool run();
int rollDice();
void chatter();

int main() {

   int bankBalance{ 1000 };
   std::cout << "Current balance is $" << bankBalance << '\n';

   char playAgain{ 'y' };
   while ( playAgain == 'y' ) {

      std::cout << '\n';

      int wager;
      do {
         std::cout << "Your wager: ";
         std::cin >> wager;
      } while ( wager < 1 || wager > bankBalance );

      if ( run() ) {

         std::cout << "Player wins\n";
         bankBalance += wager;

      } else {

         std::cout << "Player loses\n";
         bankBalance -= wager;

         if ( !bankBalance ) {
            std::cout << "Sorry. You busted!\n";
            break;
         }
      }

      std::cout << "Balance is $" << bankBalance << "\nPlay again (y/n)? ";
      std::cin >> playAgain;
   }

   return 0;
}

bool run() {

   enum class Status{ play, won, lost };
   using enum Status;

   Status gameStatus{ play };
   const int myPoint{ rollDice() };

   switch ( myPoint ) {

      case 7: case 11:
         gameStatus = won; break;
      case 2: case 3: case 12:
         gameStatus = lost; break;
      default:
         gameStatus = play;
         std::cout << "Point is " << myPoint << '\n';
         chatter();
   }

   while ( gameStatus == play )
      if ( const int sumOfDice{ rollDice() }; sumOfDice == myPoint )
         gameStatus = won;
      else if ( sumOfDice == 7 )
         gameStatus = lost;

   return gameStatus == won;
}

int rollDice() {

   static std::random_device seed;
   static std::default_random_engine generator{ seed() };
   static std::uniform_int_distribution range{ 1, 6 };

   const int die1{ range( generator )};
   const int die2{ range( generator )};
   const int sum{ die1 + die2 };

   std::cout << std::format( "Player rolled {} + {} = {}\n", die1, die2, sum );

   return sum;
}

void chatter() {

   static std::random_device seed;
   static std::default_random_engine generator{ seed() };
   static std::uniform_int_distribution range{ 1, 3 };

   switch ( range( generator )) {

      case 1:
         std::cout << "Oh, you're going for broke, huh?\n";
         break;
      case 2:
         std::cout << "Aw cmon, take a chance!\n";
         break;
      case 3:
         std::cout << "You're up big. Now's the time to cash in your chips!\n";
         break;
   }
}