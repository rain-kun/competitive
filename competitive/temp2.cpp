#include <bits/stdc++.h>

// using namespace std::chrono;
using namespace std;
// #define MOD 500000
#define ll long long
// #define rep(i,n) for (i = 0; i < n; ++i)
#define REPA(i,k,n) for (i = k; i <= n; ++i)
// #define REPR(i,k,n) for (i = k; i >= n; --i)
#define SWF std::ios_base::sync_with_stdio(false)

// int all[MOD] = {0};
// int co = 0;

// ll checkprob(ll x,ll y, ll a, ll b){
// 	if(x > a or y > b){
// 		return 0;
// 	}
// 	if((x+y)%2 != 0){
// 		return checkprob(x,y+1,a,b);
// 	}
//
// 	return 1+checkprob(x,y+1,a,b);
// }


int main() {
		// auto start = high_resolution_clock::now();
		SWF;
    ll n,d,t,ans=int();
		cin>>t;
		while(t--){
			cin>>n>>d;
      int peps[n]={0};
      int i;
      REPA(i,1,n){
        cin>>peps[i];
      }
      for(int i(1); n > 0;i++){
        n -= d;
        ans=i;
      }
			cout<<ans<<endl;
			ans = 0;
    }
    return 0;
}
