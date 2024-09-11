// ex_06_25.cpp
// Eight Queens

#include <array>
#include <iostream>

int main() {

   constexpr size_t sz{ 8 };

   std::array< std::array< bool, sz >, sz > board{};
   std::array< std::array< bool, sz >, sz > eliminated{};

   int currentRow{ 0 };
   int currentCol{ 2 };

   while ( true ) {

      board.at( currentRow ).at( currentCol ) = true;

      for ( int row{}; row < sz; ++row )
         for ( int col{}; col < sz; ++col )
            if ( row == currentRow || col == currentCol )
               eliminated.at( row ).at( col ) = true;

      for ( int diag{ 1 }; diag < sz; ++diag ) {

         const int rp{ currentRow + diag }, rm{ currentRow - diag };
         const int cp{ currentCol + diag }, cm{ currentCol - diag };

         if ( rp < sz && cp < sz ) eliminated.at( rp ).at( cp ) = true;
         if ( rp < sz && cm >= 0 ) eliminated.at( rp ).at( cm ) = true;
         if ( rm >= 0 && cm >= 0 ) eliminated.at( rm ).at( cm ) = true;
         if ( rm >= 0 && cp < sz ) eliminated.at( rm ).at( cp ) = true;
      }

      int min{ 22 };

      for ( int row{}; row < sz; ++row )
         for ( int col{}; col < sz; ++col )
            if ( !eliminated.at( row ).at( col )) {

               int e{}; // elimination counter

               for ( int r{}; r < sz; ++r )
                  for ( int c{}; c < sz; ++c )
                     if ( r == row || c == col ) ++e;

               for ( int d{ 1 }; d < sz; ++d ) {

                  const int rp{ row + d }, rm{ row - d };
                  const int cp{ col + d }, cm{ col - d };

                  if ( rp < sz && cp < sz && !eliminated.at( rp ).at( cp )) ++e;
                  if ( rp < sz && cm >= 0 && !eliminated.at( rp ).at( cm )) ++e;
                  if ( rm >= 0 && cm >= 0 && !eliminated.at( rm ).at( cm )) ++e;
                  if ( rm >= 0 && cp < sz && !eliminated.at( rm ).at( cp )) ++e;
               }

               if ( e < min ) {
                  min = e,
                  currentRow = row;
                  currentCol = col;
               }
            }

      if ( min == 22 ) break;
   }

   for ( const auto& row : board ) {
      for ( const auto& col : row )
         std::cout << ' ' << ( col ? 'Q' : '.' );
      std::cout << '\n';
   }

   return 0;
}