#include <bits/stdc++.h>

using namespace std;
// #define mod 1000000007
#define l long
#define rep(i,n) for (i = 0; i < n; ++i)
// #define REPA(i,k,n) for (i = k; i <= n; ++i)
// #define REPR(i,k,n) for (i = k; i >= n; --i)


int main() {
			std::ios_base::sync_with_stdio(false);
			int n,ans=0;
			cin>>n;
			string s1,s2;

			// l fm=0,fq=10,fn=0;
			while(n--) {
				int j;
				cin>>s1>>s2;
				while(s1 != s2){
					for(int i(0); i<int(s1.length());i++)
					{
						if(s1[i]!=s2[i]){
							j=i;
						}
					}
					for (int i(0);i <= j; i++) {
						if (i%2!=0) {
							int a=s1[i] = '0'? '1':'0';
							s1[i]= a;
						}

        	}
					ans++;
				}
					cout<<ans<<"\n";
					ans=0;
				}


				return 0;
}
