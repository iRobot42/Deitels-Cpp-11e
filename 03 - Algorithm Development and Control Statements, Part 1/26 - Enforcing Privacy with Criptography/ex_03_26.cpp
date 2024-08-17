// ex_03_26.cpp
// Enforcing Privacy with Criptography

#include <iostream>

int main() {

   int num;

   std::cout << "Four-digit integer: ";
   std::cin >> num; // no validation, correct data is assumed

   num = ( num / 10 + 7 ) % 10 * 1000 + ( num + 7 ) % 10 * 100
       + ( num / 1000 + 7 ) % 10 * 10 + ( num / 100 + 7 ) % 10;

   std::cout << "\nEncrypted: " << num << '\n';

   num = ( num / 10 + 3 ) % 10 * 1000 + ( num + 3 ) % 10 * 100
       + ( num / 1000 + 3 ) % 10 * 10 + ( num / 100 + 3 ) % 10;

   std::cout << "Decrypted: " << num << '\n';

   return 0;
}