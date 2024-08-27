// ex_05_23.cpp
// Guess-the-Number Game Modification

#include <iostream>
#include <random>

int main() {

   static std::random_device seed;
   static std::default_random_engine generator{ seed() };

   std::cout << "I have a number between 1 and 1000.\n"
      << "Can you guess my number?\n"
      << "Please type your first guess.\n";

   char play{ 'y' };

   while ( play == 'y' ) {

      std::cout << '\n';

      const int number{ std::uniform_int_distribution{ 1, 1000 }( generator )};
      int count{ 0 };

      while ( true ) {

         int guess;
         std::cout << "Number: ";
         std::cin >> guess; // correct input is assumed

         ++count;

         if ( guess == number ) break;

         std::cout << "Too " << ( guess < number ? "low" : "high" )
            << ". Try again.\n";
      }

      std::cout << "\nExcellent! You guessed the number!\n"
         << ( count < 10 ? "You got lucky!"
            : count > 10 ? "You should be able to do better!"
            : "Either you know the secret or you got lucky!" )
         << "\nWould you like to play again (y or n)? ";
      std::cin >> play;
   }

   return 0;
}