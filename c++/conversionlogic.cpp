#include <iostream>
#include <algorithm>
#define l long 
using namespace std;


void tohexadecimal(int n)
{
  int i(0), hxa[10];
  while (n > 0) {
     hxa[i] = n % 16;
     n = n / 16;
     i++;
  }
  for(int j = i - 1; j >= 0; j--)
   cout << hxa[j];
  cout<<endl;
}
int main() {
  tohexadecimal(l(100.123));
  return 0;
}
