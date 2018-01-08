#include <iostream>
#include <string>

int main()
{
  std::string digits[16] = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};
  int dec;
  std::cin >> dec;
  std::string hex;
  do
  {
    hex.insert (0, digits[dec % 16]);
    dec /= 16;
  }
  while (dec!=0);
  std::cout << hex << "\n";
}
