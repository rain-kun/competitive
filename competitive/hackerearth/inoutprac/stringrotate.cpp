#include<bits/stdc++.h>

using namespace std;
// #define mod 1000000007
// #define ll long long
// #define rep(i,n) for (i = 0; i < n; ++i)
#define REPA(i,k,n) for (i = k; i <= n; ++i)
// #define REPR(i,k,n) for (i = k; i >= n; --i)

void crotate(string s, int n){
	// cout<<'e';
	int i,len=s.length();
	string ans;
	REPA(i,len-n,len-1){
		// cout<<i<<endl;
		ans += s[i];
	}
	REPA(i,0,len-(n+1)){
		// cout<<i<<endl;
		ans += s[i];
	}
	cout<<ans;//<<ans.length();
}

void acrotate(string s, int n){
	// cout<<'o';
	int i,len=s.length();
	string ans;
	REPA(i,n,len-1){
		// cout<<i<<endl;
		ans += s[i];
	}
	REPA(i,0,n-1){
		// cout<<i<<endl;
		ans += s[i];
	}
	cout<<ans;//<<ans.length();
}

int main() {
	std::ios_base::sync_with_stdio(false);
 	int n;
	string s;
	cin>>n>>s;
		// cout<<sizeof(t)<<" "<<t<<endl;
		if (n>0)crotate(s,n);
		if(n<0)acrotate(s,n*-1);
		if(n==0)cout<<s;
  return 0;
}
//ks!!teamsoftaroc
//teamsoftarocks!!
//-5
//cyberquest2k15isablockbuster..
//quest2k15isablockbuster..cyber
