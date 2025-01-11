// ex_08_17.cpp
// Class Average: Reading Student Records from a CSV File

#include <format>
#include <iostream>
#include <string>
#include <vector>

#pragma warning( push )
#pragma warning( disable: \
   4081 26433 26440 26446 26451 26455 26458 26472 26496 26814 26823 );
#include <rapidcsv.h>
#pragma warning( pop )

int main() {

   const rapidcsv::Document document{ "17 - Class Average - "
      "Reading Student Records from a CSV File/grades.csv" };

   const auto fname{ document.GetColumn< std::string >( "firstname" )};
   const auto lname{ document.GetColumn< std::string >( "lastname" )};
   const auto exam1{ document.GetColumn< int >( "exam1grade" )};
   const auto exam2{ document.GetColumn< int >( "exam2grade" )};
   const auto exam3{ document.GetColumn< int >( "exam3grade" )};

   std::cout << std::format( "{:20}  {:6}  {:6}  {:6}\n{:-<44}\n",
      "Student", "Exam 1", "Exam 2", "Exam 3", "" );

   for ( size_t i{}; i < fname.size(); ++i )
      std::cout << std::format( "{:20}  {:6}  {:6}  {:6}\n",
         lname.at( i ) + ", " + fname.at( i ),
         exam1.at( i ), exam2.at( i ), exam3.at( i ));

   return 0;
}