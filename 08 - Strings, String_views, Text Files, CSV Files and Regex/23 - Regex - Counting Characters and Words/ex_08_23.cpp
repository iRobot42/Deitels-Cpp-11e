// ex_08_23.cpp
// Regular Expressions: Counting Characters and Words

#include <format>
#include <iostream>
#include <regex>
#include <string>

int main() {

   constexpr auto rcount{ []( std::string txt, const std::regex& reg ){
      std::smatch tmp;
      int cnt{};
      while ( std::regex_search( txt, tmp, reg ))
         ++cnt, txt = tmp.suffix();
      return cnt;
   }};

   const std::string str{ "He11o!\nMy_name is: #R080T\t..." };

   std::cout << std::format(
      "String: \"{}\"\n"
      "Digits: {}\n"
      "Non-digits: {}\n"
      "Whitespaces: {}\n"
      "Alphanumerics: {}\n",
      str,
      rcount( str, std::regex( "\\d" )),
      rcount( str, std::regex( "\\D" )),
      rcount( str, std::regex( "\\s" )),
      rcount( str, std::regex( "\\w" )));

   return 0;
}