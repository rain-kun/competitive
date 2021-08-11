#include<bits/stdc++.h>

using namespace std;

#define rep(i,n) for (i = 0; i < n; ++i)
// #define REPA(i,k,n) for (i = k; i <= n; ++i)
// #define REPR(i,k,n) for (i = k; i >= n; --i)


int main() {
	std::ios_base::sync_with_stdio(false);
  int temp;
  cin>>temp;
  char num[temp];
  int i=0,follow1=0,follow2=0,follow3=0;
  cin>>num;
  // rep(i,temp){
  //   cout<<num[i]<<endl;
  // }
  rep(i,temp){
    // if(num[i]=='H' && i>0){
    //   follow3++;
    // }
    if(num[i]=='.'){
      ++follow1;
      num[i]='B';
    }
    if(num[i]=='H' && num[i+1]=='H'){
      follow2++;
    }
  }

  if (!follow2){
    cout<<"YES"<<"\n";
    // replace(num.begin(), num.end(),'.', 'B'); //n
    cout<<num;
  }
  else{
    cout<<"NO";
  }
  // cout<<follow1<<' '<<follow2<<' '<<follow3;
  return 0;
}

//n2
