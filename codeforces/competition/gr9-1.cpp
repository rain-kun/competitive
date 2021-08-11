#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define vec vector<int>
#define pb push_back()

using namespace std;

int sol(int arr[],int c){
    arr[c] *= -1;

  return 0;
}

int getright(int arr[],int c)
{
  int flip = 0;
  int mil = (c-1)/2;
  int pos = int(),neg = int();
  again:
  for (int i = mil; i > 0; i--) {
    if (arr[i-1] - arr[i] > 0) {
      pos++;
    }
    else if (arr[i-1] - arr[i] < 0) {
      neg++;
    }
  }
  for (int i = mil; i < c; i++) {
    if (arr[i] - arr[i+1] > 0) {
      pos++;
    }
    else if (arr[i] - arr[i+1] < 0) {
      neg++;
    }
    }
    neg--;
  if(pos == neg)
    return 1;
  else{
    if (flip >= c)
      flip = 1;
    flip++;
    sol(arr,flip);
    goto again;
  }
  return 0;
}


int main() {
  int n;cin>>n;
  int c;

  for (int i = 0; i < n; i++) {
    cin>>c;
    int arr[c];
    for(int i=0;i< c;i++){
      int val;
      cin>>val;
      arr[i] = val;
    }
    int ri = getright(arr,c);
    if (ri)
    for(int i=0;i < c;i++){
      cout<<arr[i]<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
