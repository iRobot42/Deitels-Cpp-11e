// ex_06_10.cpp
// Random Sentences

#include <format>
#include <iostream>
#include <random>
#include <string>
#include <vector>

std::string word( const std::vector< std::string >& );

int main() {

   const std::vector< std::string > article{ "the", "a" },
      noun{ "robot", "human", "zombie", "dog", "cat", "squirrel", "chicken" },
      verb{ "flies", "swims", "goes", "runs", "crawls", "jumps", "follows" },
      preposition{ "to", "from", "over", "before", "after", "off", "behind" };

   for ( int i{}; i < 20; ++i ) {

      std::string sentence{ std::format( "{} {} {} {} {} {}.",
         word( article ), word( noun ), word( verb ), word( preposition ),
         word( article ), word( noun )) };

      sentence.at( 0 ) = sentence.at( 0 ) == 'a' ? 'A' : 'T';
      std::cout << sentence << '\n';
   }

   return 0;
}

std::string word( const std::vector< std::string >& words ) {

   static std::random_device seed;
   static std::default_random_engine generator{ seed() };

   return words.at( std::uniform_int_distribution< size_t >{
      0, words.size() - 1 }( generator ));
}