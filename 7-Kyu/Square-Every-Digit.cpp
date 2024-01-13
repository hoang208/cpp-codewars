/*
Welcome. In this kata, you are asked to square every digit of a number and concatenate them.
For example, if we run 9119 through the function, 811181 will come out, because 92 is 81 and 12 is 1. (81-1-1-81)
Example #2: An input of 765 will/should return 493625 because 72 is 49, 62 is 36, and 52 is 25. (49-36-25)
Note: The function accepts an integer and returns an integer.
*/

// My Solution
#include <string>
using namespace std;
int square_digits(int num) {
  int ans = 0;
  int pow = 1;
  while(num){
    unsigned digit = num % 10;
    unsigned square = digit * digit;
    ans += square * pow;
    if (square<10) {
      pow *=10;
    } else {
      pow *=100;
    }
    num/=10;
  }
  return ans;
}

// Other Solutions
int square_digits(int n) {
  int a = 1;
  int m = 0;
  while (n > 0) {
    int d = n % 10;
    m += a * d * d;
    a *= d <= 3 ? 10 : 100;
    n /= 10;
  }
  return m;
}

#include <string>
int square_digits(int num) {
  
  std::string s = std::to_string(num);
  std::string ans;
  for(char c: s){
    int i = c - '0';
    ans += std::to_string(i * i);    
  }
  return std::stoi(ans);
}