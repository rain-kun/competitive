#include <iostream>
#include <string>
#define ll long long
#define llu long long unsigned

using namespace std;

int main(){
  string n; char lastc;
  llu rep=0, prep=0;
  cin>>n;
  lastc = n[0];
  rep=1;
  for(llu i=1; i<=n.size(); i++){
    if(n[i]==lastc){
      rep++;
    }
    else{
      if(rep>=prep){
        prep = rep;
      }
      rep=1;
      lastc=n[i];
    }
  }
  cout<<prep;
  return 0;
}

// https://cses.fi/problemset/task/1069
