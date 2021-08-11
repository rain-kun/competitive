#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;
  if (str[6]%2 == 0)
  std::cout << 0;
  else std::cout << 1;
  return 0;
}
