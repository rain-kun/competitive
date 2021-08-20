#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  ll n;cin>>n;
  if(n==1){
    cout<<1;
  }
  else if(n <= 3){
    cout<<"NO SOLUTION";
  }
  else{
    for(ll i=n-1; i>0; i-=2){
      cout<<i<<" ";
    }
    for(ll i=n; i>0; i-=2){
      cout<<i<<" ";
    }
  }
  return 0;
}

// https://cses.fi/problemset/task/1070
