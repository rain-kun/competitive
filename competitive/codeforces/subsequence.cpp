#include <iostream>
#include <string>
#include <time.h>
int main(int argc, char const *argv[]) {
  clock_t tStart = clock();
  long long int a;
  std::cin >> a;

  if (a%2 == 0 && a > 0) {
    std::cout << "codeforce";
    for (long int i = 0; i < a/4; i++) {
      std::cout << "ss";
    }
  }
   "codeforce";
    for (long int i = 0; i < int(a/2); i++) {
      std::cout << "ss";
    }
    std::cout << "s";
  }
  printf("\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
  return 0;
}
