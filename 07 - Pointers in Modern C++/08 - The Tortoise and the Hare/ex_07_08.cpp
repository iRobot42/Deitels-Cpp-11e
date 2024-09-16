// ex_07_08.cpp
// Simulation: The Tortoise and the Hare

#include <format>
#include <iostream>
#include <random>

int generate10( void );
void moveHare( int* const );
void moveTortoise( int* const );

int main() {

   constexpr int finish{ 70 };

   int tortoise{ 1 };
   int hare{ 1 };

   std::cout<< "BANG !!!!!\nAND THEY'RE OFF !!!!!\n";

   while ( tortoise < finish && hare < finish ) {

      moveTortoise( &tortoise );
      moveHare( &hare );

      if ( tortoise < hare )
         std::cout << std::format( "{:>{}}{:>{}}\n",
            "T", tortoise, "H", hare - tortoise );
      else if ( hare < tortoise )
         std::cout << std::format( "{:>{}}{:>{}}\n",
            "H", hare, "T", tortoise - hare );
      else std::cout << std::format( "{:>{}}\n", "OUCH!!!", hare + 6 );
   }

   if ( tortoise >= finish && hare < finish )
      std::cout << "TORTOISE WINS!!! YAY!!!\n";
   else if ( hare >= finish && tortoise < finish )
      std::cout << "Hare wins. Yuck.\n";
   else std::cout << "It's a tie.\n";

   return 0;
}

int generate10() {

   static std::random_device seed;
   static std::default_random_engine generator{ seed() };
   static std::uniform_int_distribution range{ 1, 10 };

   return range( generator );
}

void moveHare( int* const pos_ptr ) {

   if ( !pos_ptr ) return; // nullptr

   if ( const int i{ generate10() }; i <= 2 ) return; // sleep
   else if ( i <= 4 ) *pos_ptr += 9; // big hop
   else if ( i <= 5 ) *pos_ptr -= 12; // big slip
   else if ( i <= 8 ) *pos_ptr += 1; // small hop
   else *pos_ptr -= 2; // small slip

   if ( *pos_ptr < 1 ) *pos_ptr = 1;
}

void moveTortoise( int* const pos_ptr ) {

   if ( !pos_ptr ) return; // nullptr

   if ( const int i{ generate10() }; i <= 5 ) *pos_ptr += 3; // fast plod
   else if ( i <= 7 ) *pos_ptr -= 6; // slip
   else *pos_ptr += 1; // slow plod

   if ( *pos_ptr < 1 ) *pos_ptr = 1;
}