// ex_08_09.cpp
// Converting Integers to Characters

#include <format>
#include <iostream>

int main() {

   std::cout << "Printable ASCII:\n";
   for ( int code{ 32 }; code < 127; ++code )
      std::cout << std::format( "{:3}: {:c}{}",
         code, code, ( code + 1 ) % 8 ? "    " : "\n" );
   std::cout << std::endl;

   return 0;
}