#include <bits/stdc++.h>

using namespace std;
// #define mod 1000000007
#define l long
#define rep(i,n) for (i = 0; i < n; ++i)
// #define REPA(i,k,n) for (i = k; i <= n; ++i)
// #define REPR(i,k,n) for (i = k; i >= n; --i)


int main() {
								std::ios_base::sync_with_stdio(false);
								l n,m,k;
								cin>>n>>m>>k;
								l fm=0,fq=10,fn=0;
								while(n--) {
																for (int i(0); i<k; i++)
																{
																								int temp;
																								cin>>temp;
																								fm+=temp;
																}
																cin>>fq;

																if(fm>=m && fq < 10) {
																								fn++;
																}
								}
								cout<<fn;
								return 0;
}
