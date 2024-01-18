/*
Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order.
Essentially, rearrange the digits to create the highest possible number.
Examples:
    Input: 42145 Output: 54421
    Input: 145263 Output: 654321
    Input: 123456789 Output: 987654321
*/

// My Solution
#include <cinttypes>
#include <string>

uint64_t descendingOrder(uint64_t a)
{
  std::string number = std::to_string(a);
  std::sort(number.rbegin(), number.rend());
  return std::stoull(number);
}

// Other Solutions
#include <cinttypes>

uint64_t descendingOrder(uint64_t a)
{ 
  std::vector<int> c ;
  
  for(uint64_t b = a ; b > 0 ; b /=10) 
    c.push_back(b % 10);
  
  for(int i=0 ; i < c.size() ; i++)
    for(int j=i; j < c.size() ; j++) 
      if(c[i] < c[j]) 
        std::swap(c[i],c[j]);
  
  a=0;
  
  for(int i=0; i < c.size() ;i++)
    a = a*10 + c[i];
  
  return a;
}