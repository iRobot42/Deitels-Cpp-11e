// ex_08_18.cpp
// Class Average: Creating a Grade Report from a CSV File

#include <format>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

#pragma warning( push )
#pragma warning( disable: \
   4081 26433 26440 26446 26451 26455 26458 26472 26496 26814 26823 );
#include <rapidcsv.h>
#pragma warning( pop )

int main() {

   const rapidcsv::Document document{ "18 - Class Average - "
      "Creating a Grade Report from a CSV File/grades.csv" };

   const auto fname{ document.GetColumn< std::string >( "firstname" )};
   const auto lname{ document.GetColumn< std::string >( "lastname" )};
   const auto exam1{ document.GetColumn< int >( "exam1grade" )};
   const auto exam2{ document.GetColumn< int >( "exam2grade" )};
   const auto exam3{ document.GetColumn< int >( "exam3grade" )};

   std::cout << std::format( "{:20}  {:6}  {:6}  {:6}  {:7}\n{:-<53}\n",
      "Student", "Exam 1", "Exam 2", "Exam 3", "Average", "" );

   for ( size_t i{}; i < fname.size(); ++i )
      std::cout << std::format( "{:20}  {:6}  {:6}  {:6}  {:7.2f}\n",
         lname.at( i ) + ", " + fname.at( i ),
         exam1.at( i ), exam2.at( i ), exam3.at( i ),
         ( static_cast< double >( exam1.at( i ))
            + exam2.at( i ) + exam3.at( i )) / 3 );

   std::cout << std::format( "{:-<53}\n{:20}  {:6.2f}  {:6.2f}  {:6.2f}\n",
      "", "Class average:",
      std::accumulate( begin( exam1 ), end( exam1 ), 0.0 ) / exam1.size(),
      std::accumulate( begin( exam2 ), end( exam2 ), 0.0 ) / exam2.size(),
      std::accumulate( begin( exam3 ), end( exam3 ), 0.0 ) / exam3.size() );

   return 0;
}