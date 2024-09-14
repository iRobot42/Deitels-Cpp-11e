// ex_07_01.cpp

#include <format>
#include <iostream>

#pragma warning( disable: 26429 26446 26481 26482 26485 26494 )

int main() {

   constexpr size_t size{ 10 };

   // a)
   double numbers[ size ]{ 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };

   // b)
   double* nPtr;

   // c)
   for ( size_t subscript{}; subscript < size; ++subscript )
      std::cout << std::format( "{:.1f} ", numbers[ subscript ] );
   std::cout << '\n';

   // d)
   nPtr = numbers;
   nPtr = &numbers[ 0 ];

   // e)
   for ( size_t offset{}; offset < size; ++offset )
      std::cout << std::format( "{:.1f} ", *( nPtr + offset ));
   std::cout << '\n';

   // f)
   for ( size_t offset{}; offset < size; ++offset )
      std::cout << std::format( "{:.1f} ", *( numbers + offset ));
   std::cout << '\n';

   // g)
   for ( size_t subscript{}; subscript < size; ++subscript )
      std::cout << std::format( "{:.1f} ", nPtr[ subscript ] );
   std::cout << '\n';

   // h)
   std::cout << numbers[ 3 ] << '\n';
   std::cout << *( numbers + 3 ) << '\n';
   std::cout << nPtr[ 3 ] << '\n';
   std::cout << *( nPtr + 3 ) << '\n';

   // i) 0x1002540, 8.8
   // j) 0x1002508, 1.1

   return 0;
}