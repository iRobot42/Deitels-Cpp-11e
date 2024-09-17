// ex_07_09.cpp
// Machine-Language Programming

#include <array>
#include <iostream>

int main() {

   constexpr size_t size{ 100 };
   std::array< int, size > memory{};

   enum class OperationCodes{
      read = 10, write, // input/output
      load = 20, store, // load/store
      add = 30, subtract, divide, multiply, // arithmetic
      branch = 40, branchNeg, branchZero, halt // transfer-of-control
   };

   std::cout << "Write your SML program. 11111 to end.\n\n";

   for ( auto& word : memory ) {

      do {
         std::cout << "> ";
         std::cin >> word;
         if ( word == 11111 ) break;
      } while ( word < -9999 || word > 9999 );

      if ( word == 11111 ) {
         word = 0;
         break;
      }
   }

   std::cout << '\n';

   int accumulator{};
   int location{};

   do {

      const OperationCodes operation{ memory.at( location ) / 100 };
      const int operand{ memory.at( location ) % 100 };

      switch ( int number{}; operation ) {

         case OperationCodes::read:
            do {
               std::cout << "Number: ";
               std::cin >> number;
            } while ( number < -9999 || number > 9999 );
            memory.at( operand ) = number;
            break;

         case OperationCodes::write:
            std::cout << "\nResult: " << memory.at( operand ) << '\n';
            break;

         case OperationCodes::load:
            accumulator = memory.at( operand );
            break;

         case OperationCodes::store:
            memory.at( operand ) = accumulator;
            break;

         case OperationCodes::add:
            number = accumulator + memory.at( operand );
            if ( number < -9999 || number > 9999 ) {
               std::cerr << "Out of range!\n";
               location = size;
            } else accumulator = number;
            break;

         case OperationCodes::subtract:
            number = accumulator - memory.at( operand );
            if ( number < -9999 || number > 9999 ) {
               std::cerr << "Out of range!\n";
               location = size;
            } else accumulator = number;
            break;

         case OperationCodes::divide:
            number = memory.at( operand );
            if ( !number ) {
               std::cerr << "Division by zero!\n";
               location = size;
            } else accumulator /= number;
            break;

         case OperationCodes::multiply:
            number = accumulator * memory.at( operand );
            if ( number < -9999 || number > 9999 ) {
               std::cerr << "Out of range!\n";
               location = size;
            } else accumulator = number;
            break;

         case OperationCodes::branch:
            location = operand - 1;
            break;

         case OperationCodes::branchNeg:
            if ( accumulator < 0 )
               location = operand - 1;
            break;

         case OperationCodes::branchZero:
            if ( !accumulator )
               location = operand - 1;
            break;

         case OperationCodes::halt:
            location = size;
            break;

         default:
            std::cerr << "Unknown operation!\n";
            location = size;
      }

   } while ( ++location < size );

   return 0;
}