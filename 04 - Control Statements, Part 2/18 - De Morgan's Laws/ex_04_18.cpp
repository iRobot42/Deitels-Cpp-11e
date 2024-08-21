// ex_04_18.cpp
// De Morgan's Laws

#include <iostream>
using std::cout;

int main() {

   bool condition1{ true }, condition2{ false };
   bool expression{ true }, de_morgans{ false };

   int x{ 1 }, y{ 2 };
   int a{ 3 }, b{ 4 }, g{ 5 };
   int i{ 6 }, j{ 7 };

   x = y = a = b = g = i = j = 42; // extra test

   // a

   condition1 = x < 5, condition2 = y >= 7;
   expression = !condition1 && !condition2;
   de_morgans = !( condition1 || condition2 );
   cout << ( expression == de_morgans ) << ' ';

   // b

   condition1 = a == b, condition2 = g != 5;
   expression = !condition1 || !condition2;
   de_morgans = !( condition1 && condition2 );
   cout << ( expression == de_morgans ) << ' ';

   // c

   condition1 = x <= 8, condition2 = y > 4;
   expression = !( condition1 && condition2 );
   de_morgans = !condition1 || !condition2;
   cout << ( expression == de_morgans ) << ' ';

   // d

   condition1 = i > 4, condition2 = j <= 6;
   expression = !( condition1 || condition2 );
   de_morgans = !condition1 && !condition2;
   cout << ( expression == de_morgans ) << '\n';

   return 0;
}