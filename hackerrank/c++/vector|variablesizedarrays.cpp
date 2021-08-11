#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int a,b;
  cin>>a>>b;
  vector<vector<int>> v(a);
  for (int i = 0; i <= a; i++) {
    int k = int();
    cin>>k;
    v[i].resize(k);
    for (int y = 0; y <k; y++) {
    cin>>v[i][y] ;
    }

  }
  for (int i = 0; i < b; i++) {
    int a1,b1;
    cin>>a1>>b1;
    printf("%d",v[a1][b1] );
  }
  return 0;
}
