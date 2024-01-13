/*
Trolls are attacking your comment section!
A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.
Your task is to write a function that takes a string and return a new string with all vowels removed.
For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".
Note: for this kata y isn't considered a vowel.

*/

// My Solution
# include <string>

std::string disemvowel(const std::string& str) {
  std::string ans="";
  std::string vowels="aAiIuUeEoO";
  for (size_t i = 0; i < str.length();++i){
    for (size_t j = 0; j < vowels.length();++j) {
      if (str[i] == vowels[j]) {
        break;
      }
      if (j == vowels.length() - 1) {
        ans += str[i];
      }
    }
  }
  return ans;
}

// Other Solutions
# include <string>
# include <regex>
std::string disemvowel(std::string str)
{
  std::regex vowels("[aeiouAEIOU]");
  return std::regex_replace(str, vowels, "");
}

# include <string>
std::string disemvowel(std::string str)
{
    for ( auto letter : "AEIOUaeiou" ) {
      str.erase(std::remove(str.begin(), str.end(), letter), str.end());
    }
    
    return str;
}