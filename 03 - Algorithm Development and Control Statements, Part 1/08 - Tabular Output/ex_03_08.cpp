// ex_03_08.cpp
// Tabular Output

#include <iostream>

int main() {

   std::cout << "N\t10*N\t100*N\t1000*N\n\n";

   int n{ 0 };

   while ( ++n <= 5 )
      std::cout << n << '\t' << 10 * n << '\t'
         << 100 * n << '\t' << 1000 * n << '\n';

   return 0;
}