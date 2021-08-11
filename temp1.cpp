#include <bits/stdc++.h>

// using namespace std::chrono;
using namespace std;
// #define MOD 500000
#define ll long long
// #define rep(i,n) for (i = 0; i < n; ++i)
// #define REPA(i,k,n) for (i = k; i <= n; ++i)
// #define REPR(i,k,n) for (i = k; i >= n; --i)
#define SWF std::ios_base::sync_with_stdio(false)

// int all[MOD] = {0};
// int co = 0;

ll checkprob(ll x,ll y, ll a, ll b){
	if(x > a or y > b){
		return 0;
	}
	if((x+y)%2 != 0){
		return checkprob(x,y+1,a,b);
	}

	return 1+checkprob(x,y+1,a,b);
}


int main() {
		// auto start = high_resolution_clock::now();
		SWF;
    ll a,b,t,ans=int();
		cin>>t;
		while(t--){
			cin>>a>>b;
			for(int i(1); i <= a; i++){
				ans += checkprob(i,1,a,b);
			}
			cout<<ans<<endl;
			ans = 0;
    }
    return 0;
}
