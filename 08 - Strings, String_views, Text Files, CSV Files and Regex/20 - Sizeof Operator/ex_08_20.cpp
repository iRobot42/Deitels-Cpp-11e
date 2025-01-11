// ex_08_20.cpp
// sizeof Operator

#include <cstdlib>
#include <format>
#include <fstream>
#include <iosfwd>
#include <iostream>

int main() {

   std::ofstream file{ "20 - Sizeof Operator/datasize.txt" };

   if ( !file ) {
      std::cerr << "File could not be opened\n";
      std::exit( EXIT_FAILURE );
   }

   auto fout{ [ &file ]( auto type, auto size ){
      file << std::format( "{:24}{:2}\n", type, size ); }};

   fout( "char", sizeof( char ));
   fout( "unsigned char", sizeof( unsigned char ));
   fout( "short int", sizeof( short int ));
   fout( "unsigned short int", sizeof( unsigned short int ));
   fout( "int", sizeof( int ));
   fout( "unsigned int", sizeof( unsigned int ));
   fout( "long int", sizeof( long int ));
   fout( "unsigned long int", sizeof( unsigned long int ));
   fout( "long long int", sizeof( long long int ));
   fout( "unsigned long long int", sizeof( unsigned long long int ));
   fout( "float", sizeof( float ));
   fout( "double", sizeof( double ));
   fout( "long double", sizeof( long double ));

   file.close();

   return 0;
}