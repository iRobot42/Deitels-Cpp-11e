// ex_08_11.cpp
// Simple Encryption

#include <iostream>
#include <string>

#pragma warning( disable: 26489 )

int main() {

   constexpr char rot{ 13 };
   std::string message;

   std::cout << "Message: ";
   std::getline( std::cin, message );

   for ( auto& c : message )
      if ( const char a{ isupper( c ) ? 'A' : 'a' }; isalpha( c ))
         c = ( c + rot - a ) % 26 + a;

   std::cout << "\nEncrypted: " << message << std::endl;

   for ( auto& c : message )
      if ( const char z{ isupper( c ) ? 'Z' : 'z' }; isalpha( c ))
         c = ( c - rot - z ) % 26 + z;

   std::cout << "Decrypted: " << message << std::endl;

   return 0;
}