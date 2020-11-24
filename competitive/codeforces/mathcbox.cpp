#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {

  int a= int();
  std::cin >> a;
  int arr[a]={0};
  int swap=int();
  for (int i = 0; i < a; i++) {
    std::cin >> arr[i];
    if (i==0) {
      swap = arr[i];
    }
    else if(arr[i]>swap) swap = arr[i];
  }

  return 0;
}
