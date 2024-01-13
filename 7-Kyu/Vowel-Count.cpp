/*
Return the number (count) of vowels in the given string.
We will consider a, e, i, o, u as vowels for this Kata (but not y).
The input string will only consist of lower case letters and/or spaces.
*/

// My Solution
#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  string vowels="aeiou";
  for (auto letter: inputStr)
    if (vowels.find(letter) != std::string::npos)
      ++num_vowels;
  return num_vowels;
}

// Other Solutions
#include <string>

using namespace std;

bool is_vowel(char c) {
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int getCount(const string& inputStr) {
  return count_if(inputStr.begin(), inputStr.end(), is_vowel);
}