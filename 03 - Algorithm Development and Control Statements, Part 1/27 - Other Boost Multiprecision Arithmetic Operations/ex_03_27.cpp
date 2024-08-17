// ex_03_27.cpp
// Other Boost Multiprecision Arithmetic Operations

#pragma warning( push ) // Store the current state for every warning,
// and don't issue the specified warning messages:
#pragma warning( disable: 6336 \
   26429 26432 26434 26439 26440 26446 26451 26472 26475 26481 26482 \
   26485 26488 26490 26492 26493 26494 26496 26497 26812 26814 26823 )

#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using boost::multiprecision::pow;
using boost::multiprecision::sqrt;

#include <iostream>
using std::cout;
using std::endl;

int main() {

   const cpp_int value1{ "100000000000000000000000000000" };
   const cpp_int value2{ 9223372036854775807LL };

   const int value3{ 3 };

#pragma warning( pop ) // Restore the state of every warning

   cout << "INITIAL VALUES"
      << "\ncpp_int value1: " << value1
      << "\ncpp_int value2: " << value2
      << "\n    int value3: " << value3;

   cout << "\n\nUSE CPP_INT OBJECTS WITH THE +, -, *, / AND % OPERATORS"
      << "\nvalue1 + value2: " << value1 + value2
      << "\nvalue1 - value2: " << value1 - value2
      << "\nvalue1 * value2: " << value1 * value2
      << "\nvalue1 / value2: " << value1 / value2
      << "\nvalue1 % value2: " << value1 % value2;

   cout << "\n\nMULTIPLY A CPP_INT OBJECT BY INT VALUES"
      << "\nvalue1 * value3: " << value1 * value3
      << "\n    value1 * 17: " << value1 * 17;

   const cpp_int value4{ "1000000000000000000000000000000000000" };

   cout << "\n\nUSING BOOST MULTIPRECISION LIBRARY FUNCTIONS POW AND SQRT"
      << "\nvalue1 squared: " << pow( value1, 2 )
      << "\nsquare root of value4: " << sqrt( value4 )
      << endl;

   return 0;
}