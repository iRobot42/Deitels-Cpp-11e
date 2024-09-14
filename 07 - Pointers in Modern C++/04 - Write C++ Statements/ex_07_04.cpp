// ex_07_04.cpp
// Write C++ Statements

#include <iostream>

#pragma warning( disable: 26429 26446 26481 26482 26485 26494 26496 )

int main() {

   constexpr size_t size{ 5 };

   // a)
   int values[ size ]{ 2, 4, 6, 8, 10 };

   // b)
   int* vPtr;

   // c)
   for ( size_t subscript{}; subscript < size; ++subscript )
      std::cout << values[ subscript ] << ' ';
   std::cout << '\n';

   // d)
   vPtr = values;
   vPtr = &values[ 0 ];

   // e)
   for ( size_t offset{}; offset < size; ++offset )
      std::cout << *( vPtr + offset ) << ' ';
   std::cout << '\n';

   // f)
   for ( size_t offset{}; offset < size; ++offset )
      std::cout << *( values + offset ) << ' ';
   std::cout << '\n';

   // g)
   for ( size_t subscript{}; subscript < size; ++subscript )
      std::cout << vPtr[ subscript ] << ' ';
   std::cout << '\n';

   // h)
   std::cout << values[ 4 ] << '\n';
   std::cout << *( values + 4 ) << '\n';
   std::cout << vPtr[ 4 ] << '\n';
   std::cout << *( vPtr + 4 ) << '\n';

   // i) 0x100250C, 8
   // j) 0x1002500, 2

   return 0;
}