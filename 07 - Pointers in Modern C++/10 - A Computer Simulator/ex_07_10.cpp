// ex_07_10.cpp
// A Computer Simulator

#include <cmath>
#include <format>
#include <iostream>

#pragma warning( disable: 26440 26481 26485 26497 )

void load( int* const, const int );
void execute( int* const, const int, int&, int&, int&, int&, int& );
void dump( int* const, const int, int, int, int, int, int );
bool not_valid( const int );

int main() {

   constexpr int size{ 100 };

   int memory[ size ]{};

   int accumulator{};
   int instructionCounter{};
   int instructionRegister{};
   int operationCode{};
   int operand{};

   load( memory, size );
   execute( memory, size, accumulator,
      instructionCounter, instructionRegister,
      operationCode, operand );

   return 0;
}

void load( int* const mem, const int size ) {

   if ( !mem ) return;

   static constexpr int sentinel{ -99999 };

   std::cout <<
      "***           Welcome to Simpletron           ***\n"
      "***                                           ***\n"
      "*** Please enter your program one instruction ***\n"
      "*** (or data word) at a time. I will type the ***\n"
      "*** location number and a question mark (?).  ***\n"
      "*** You then type the word for that location. ***\n"
      "*** Type the sentinel -99999 to stop entering ***\n"
      "*** your program.                             ***\n\n";

   for ( int loc{}, word{}; loc < size; ++loc ) {

      do {
         std::cout << std::format( "{:02} ? ", loc );
         std::cin >> word;
         if ( word == sentinel ) break;
      } while ( not_valid( word ));

      if ( word == sentinel ) break;
      mem[ loc ] = word;
   }

   std::cout << "\n*** Program loading completed ***\n";
}

void execute( int* const mem, const int size,
   int& acc, int& cnt, int& reg, int& opc, int& opr ) {

   if ( !mem ) return;

   enum class OperationCodes{
      read = 10, write,
      load = 20, store,
      add = 30, subtract, divide, multiply,
      branch = 40, branchNeg, branchZero, halt
   };

   std::cout << "*** Program execution begins ***\n";

   while ( cnt < size ) {

      reg = abs( mem[ cnt ] );
      opc = reg / size;
      opr = reg % size;

      bool error{ false };

      switch ( int word{}; static_cast< OperationCodes >( opc )) {

         case OperationCodes::read:
            do {
               std::cout << "? ";
               std::cin >> word;
            } while ( not_valid( word ));
            mem[ opr ] = word;
            break;

         case OperationCodes::write:
            std::cout << ": " << mem[ opr ] << '\n';
            break;

         case OperationCodes::load:
            acc = mem[ opr ];
            break;

         case OperationCodes::store:
            mem[ opr ] = acc;
            break;

         case OperationCodes::add:
            word = acc + mem[ opr ];
            if ( not_valid( word )) {
               std::cout << "*** Accumulator overflow ***\n";
               error = true;
            } else acc = word;
            break;

         case OperationCodes::subtract:
            word = acc - mem[ opr ];
            if ( not_valid( word )) {
               std::cout << "*** Accumulator overflow ***\n";
               error = true;
            } else acc = word;
            break;

         case OperationCodes::divide:
            word = mem[ opr ];
            if ( !word ) {
               std::cout << "*** Attempt to divide by zero ***\n";
               error = true;
            } else acc /= word;
            break;

         case OperationCodes::multiply:
            word = acc * mem[ opr ];
            if ( not_valid( word )) {
               std::cout << "*** Accumulator overflow ***\n";
               error = true;
            } else acc = word;
            break;

         case OperationCodes::branch:
            cnt = opr - 1;
            break;

         case OperationCodes::branchNeg:
            if ( acc < 0 ) cnt = opr - 1;
            break;

         case OperationCodes::branchZero:
            if ( !acc ) cnt = opr - 1;
            break;

         case OperationCodes::halt:
            std::cout << "*** Simpletron execution terminated ***\n";
            dump( mem, size, acc, cnt, reg, opc, opr );
            return;

         default:
            std::cout << "*** Unknown operation code ***\n";
            error = true;
      }

      if ( error ) {
         std::cout << "*** Simpletron execution abnormally terminated ***\n";
         return dump( mem, size, acc, cnt, reg, opc, opr );
      }

      ++cnt;
   }
}

void dump( int* const mem, const int size,
   int acc, int cnt, int reg, int opc, int opr ) {

   if ( !mem ) return;

   std::cout << std::format( "\nREGISTERS:\n{:24} {:+05}\n"
      "{:24}    {:02}\n{:24} {:+05}\n{:24}    {:02}\n{:24}    {:02}\n",
      "accumulator", acc,
      "instructionCounter", cnt,
      "instructionRegister", reg,
      "operationCode", opc,
      "operand", opr );

   std::cout << "\nMEMORY:\n  ";
   for ( int i{}; i <= 9; ++i )
      std::cout << std::format( "{:7}", i );

   for ( int loc{}; loc < size; ++loc ) {

      if (!( loc % 10 ))
         std::cout << std::format( "\n{:2}", loc );

      std::cout << std::format( "  {:+05}", mem[ loc ] );
   }
   std::cout << std::endl;
}

bool not_valid( const int num ) {
   return num < -9999 || num > 9999;
}