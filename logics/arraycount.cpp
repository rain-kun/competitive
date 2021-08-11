#include <bits/stdc++.h>

using namespace std;
// #define mod 1000000007
#define l long
#define rep(i,n) for (i = 0; i < n; ++i)
// #define REPA(i,k,n) for (i = k; i <= n; ++i)
// #define REPR(i,k,n) for (i = k; i >= n; --i)
#define SWF std::ios_base::sync_with_stdio(false)

int main() {
			SWF;
			int n;
			string s;
			cin>>n;
			while(n--){
				int lpd[26]={0};
				cin>>s;
				int len = int(floor(s.length()));
				// cout<<len<<" "<<typeid(len).name()<<" "<<len%2<<" "<<typeid(len%2).name()<<endl;
				for(int i=0,k=len/2;i<k;i++){
					lpd[s[i]-'a']++;
				}
				if(len%2==0){
				for(int i=len/2,k=len;i<k;i++){
					lpd[s[i]-'a']--;
				}
			}
			else{
				for(int i(ceil(len/2)+1),k(len);i<k;i++){
					lpd[s[i]-'a']--;
				}
			}
			int ans=0;
				for(int i(0),k(sizeof(lpd)/sizeof(lpd[0]));i<k;i++)
				{
					if(lpd[i]!=0)
						ans++;
			}
			if(ans!=0){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
				return 0;
}
