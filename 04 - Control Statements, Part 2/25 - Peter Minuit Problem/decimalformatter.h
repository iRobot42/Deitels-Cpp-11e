// decimalformatter.h

#pragma once

#include <boost/multiprecision/cpp_dec_float.hpp>
#include <format>
#include <iomanip>
#include <sstream>
#include <string>

using decimal = boost::multiprecision::cpp_dec_float_50;

template<>
struct std::formatter< decimal > : std::formatter< string_view > {

   template< typename FormatContext >
   auto format( decimal d, FormatContext& ctx ) const {

      std::ostringstream out{};
      out << std::fixed << std::setprecision( 2 ) << d;

      return formatter< string_view >::format( out.str(), ctx );
   }
};