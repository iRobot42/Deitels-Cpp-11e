// ex_05_37.cpp
// Pass-by-Value vs. Pass-by-Reference

#include <iostream>

#pragma warning( disable: 26440 26497 )

inline int tripleByValue( int number ) { return number * 3; }
inline void tripleByReference( int& number ) { number *= 3; }

int main() {

   int count{ 0 };
   int& countRef{ count };

   std::cout << "Number: ";
   std::cin >> count;

   std::cout << "Tripled by value: " << tripleByValue( count ) << '\n';

   tripleByReference( countRef );
   std::cout << "Tripled by reference: " << count << std::endl;

   return 0;
}