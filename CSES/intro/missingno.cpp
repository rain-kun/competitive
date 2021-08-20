#include <iostream>
#define ll long long int

using namespace std;

int main(){
  ll n, shouldbe=0, itis=0;
  cin>>n;
  for(ll i=n; i>1; i--){
    ll temp;
    shouldbe +=i;
    cin>>temp;
    itis+=temp;
  }
  shouldbe +=1;
  cout<<shouldbe - itis;
  return 0;
}

// https://cses.fi/problemset/task/1083
