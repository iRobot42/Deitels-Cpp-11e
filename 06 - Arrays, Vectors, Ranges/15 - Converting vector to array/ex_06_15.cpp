// ex_06_15.cpp
// Converting vector to array

#include <array>
#include <iostream>
#include <stdexcept>

template< size_t size >
void output_array( const std::array< int, size >& items ) {
   for ( const int item : items )
      std::cout << item << ' ';
   std::cout << '\n';
}

template< size_t size >
void input_array( std::array< int, size >& items ) {
   for ( int& item : items )
      std::cin >> item;
}

int main() {

   std::array< int, 7 > integers1{};
   std::array< int, 10 > integers2{};

   std::cout << "Size of array integers1 is " << integers1.size();
   std::cout << "\nintegers1 after initialization: ";
   output_array< integers1.size() >( integers1 );

   std::cout << "\nSize of array integers2 is " << integers2.size();
   std::cout << "\nintegers2 after initialization: ";
   output_array< integers2.size() >( integers2 );

   std::cout << "\nEnter 17 integers:\n";
   input_array< integers1.size() >( integers1 );
   input_array< integers2.size() >( integers2 );

   std::cout << "\nAfter input, the arrays contain:\n";
   std::cout << "integers1: ";
   output_array< integers1.size() >( integers1 );
   std::cout << "integers2: ";
   output_array< integers2.size() >( integers2 );

   // inequality evaluation is eliminated: vectors only

   std::array integers3{ integers1 };

   std::cout << "\nSize of array integers3 is " << integers3.size();
   std::cout << "\nintegers3 after initialization: ";
   output_array< integers3.size() >( integers3 );

   // assigning and equality evaluations are eliminated: vectors only

   std::cout << "\nintegers1.at( 5 ) is " << integers1.at( 5 );

   std::cout << "\n\nAssigning 1000 to integers1.at( 5 )\n";
   integers1.at( 5 ) = 1000;
   std::cout << "integers1: ";
   output_array< integers1.size() >( integers1 );

   try {
      std::cout << "\nAttempt to display integers1.at( 15 )\n";
      std::cout << integers1.at( 15 ) << '\n';
   } catch ( const std::out_of_range& ex ) {
      std::cerr << "An exception occured: " << ex.what() << '\n';
   }

   // push_back() test is eliminated: vectors only

   return 0;
}