// ex_06_30.cpp
// Eight Queens

#include <array>
#include <iostream>

constexpr size_t size{ 8 };

bool queen( std::array< std::array< bool, size >, size >&, int );

int main() {

   std::array< std::array< bool, ::size >, ::size > board{};

   queen( board, 0 );

   for ( const auto& row : board ) {
      for ( const auto& col : row )
         std::cout << ' ' << ( col ? 'Q' : '.' );
      std::cout << '\n';
   }

   return 0;
}

bool queen( std::array< std::array< bool, ::size >, ::size >& a, int col ) {

   if ( col == ::size ) return true;

   for ( int row{}; row < ::size; ++row ) {

      bool safe{ true };

      for ( int shift{ 1 }; shift <= col && safe; ++shift ) {

         const int rm{ row - shift };
         const int rp{ row + shift };
         const int cm{ col - shift };

         if ( rm >= 0 && a.at( rm ).at( cm ) || a.at( row ).at( cm )
            || rp < ::size && a.at( rp ).at( cm ))
            safe = false;
      }

      if ( safe ) {

         a.at( row ).at( col ) = true;
         if ( queen( a, col + 1 ))
            return true;
         a.at( row ).at( col ) = false;
      }
   }

   return false;
}