#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#ifndef PRIME
#define PRIME 1000000007
#endif

using namespace std;


int main() {
  long long int x,y,fac1=1,fac2=1;
  cin>>x>>y;
  if(y>x){
    cout<<"yes";
  for (ll int i = x; i > 0; i--) {
    fac1 *= i;
  }
  for (ll int i = fac1; i <= y; i++) {
    fac2 *= i;
  }}
  else if(x>y)
  {
    cout<<"no";
  for (ll int i = y; i > 0; i--) {
    fac2 *= i;
  }
  for (ll int i = fac2; i <= x; i++) {
    fac1 *= i;
  }}
  std::string ans;
  ans = (fac1%PRIME + fac2%PRIME);
  cout<<ans<<endl;
  return 0;
}
