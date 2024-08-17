// ex_03_15.cpp
// Another Dangling-else Problem

#include <iostream>
using std::cout;

int main() {

   int x{}, y{};

   // a
   x = 5;
   y = 8;

   if ( y == 8 )
   if ( x == 5 )
   cout << "@@@@@\n";
   else
   cout << "#####\n";
   cout << "$$$$$\n";
   cout << "&&&&&\n";

   // b
   cout << '\n';

   if ( y == 8 )
   if ( x == 5 )
   cout << "@@@@@\n";
   else {
   cout << "#####\n";
   cout << "$$$$$\n";
   cout << "&&&&&\n"; }

   // c
   cout << '\n';

   if ( y == 8 )
   if ( x == 5 )
   cout << "@@@@@\n";
   else {
   cout << "#####\n";
   cout << "$$$$$\n"; }
   cout << "&&&&&\n";

   // d
   cout << '\n';
   y = 7;

   if ( y == 8 ) {
   if ( x == 5 )
   cout << "@@@@@\n"; }
   else {
   cout << "#####\n";
   cout << "$$$$$\n";
   cout << "&&&&&\n"; }

   return 0;
}