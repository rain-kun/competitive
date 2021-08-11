#include <bits/stdc++.h>

// using namespace std::chrono;
using namespace std;
#define MOD 500000
#define ll long long
// #define rep(i,n) for (i = 0; i < n; ++i)
// #define REPA(i,k,n) for (i = k; i <= n; ++i)
// #define REPR(i,k,n) for (i = k; i >= n; --i)
#define SWF std::ios_base::sync_with_stdio(false)
#define TIE cin.tie(NULL)

int all[MOD] = {0};
// int co = 0;

ll getbudget(ll n,ll k,int arr[]){
	if(n<=0){
		return 0;
	}
	else{
		ll ans=0;
	if(all[arr[n-1]]!=0){
		return all[n];
	}
	else{
		// co++;
		for(ll i(0);i<k;i++){
			if(arr[n-1]<=arr[i]){
				ans += arr[n-1];
			}
		}
		all[arr[n-1]] = ans;
	}
		return max(ans,getbudget(n-1,k,arr));
	}
}
int main() {
		// auto start = high_resolution_clock::now();
		SWF;
		TIE;
		ll n;
		cin>>n;
		int arr[n] = {0};
		for(int i(0); i<n; i++){
			cin>>arr[i];
			// cout<<arr[i];
		}
		ll ans = getbudget(n,n,arr);
		cout<<ans<<endl;
		// auto stop = high_resolution_clock::now();
		// auto duration = duration_cast<microseconds>(stop - start);
		// cout << "\nTime taken by function : "<< duration.count() << " microseconds";
		return 0;
}
