#include<bits/stdc++.h>

using namespace std;

#define rep(i,n) for (i = 0; i < n; ++i)
#define REPA(i,k,n) for (i = k; i <= n; ++i)
// #define REPR(i,k,n) for (i = k; i >= n; --i)


int main() {
	std::ios_base::sync_with_stdio(false);
  int temp;string str1,str2;
  cin>>temp;
  int i;
  rep(i,temp){
    int len;string main,main2;
    cin>>str1>>str2;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1.length()>=str2.length()){
      len = str1.length();
      main=str1;main2=str2;
    }
    else{
        len = str2.length();
        main=str2;main2=str1;
      }
    // cout<<main<<" "<<main2;
    unsigned value=0,value1=0,get=0;
    while(value1 < main2.length() && value < main.length()){
      // cout<<value<<" "<<value1<<" "<<get<<endl;
      if(main[value]==main2[value1]){
        ++value;++value1;++get;
      }else if(main[value] < main2[value1]){
        ++value;
      }else if(main[value] > main2[value1]){
        ++value1;
      }else{
        ++value;
      }
    }
    // cout<<main.length()<<" "<<main2.length()<<endl;
    cout<<(main.length() +main2.length())-get*2<<endl;
  }
  return 0;
}
