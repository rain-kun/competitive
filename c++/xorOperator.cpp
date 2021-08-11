#include<bits/stdc++.h>

using namespace std;

#define rep(i,n) for (i = 0; i < n; ++i)
// #define REPA(i,k,n) for (i = k; i <= n; ++i)
// #define REPR(i,k,n) for (i = k; i >= n; --i)


int main() {
	std::ios_base::sync_with_stdio(false);
 	string l;
	cin>>l;
	unsigned i;
	rep(i,l.length())
	{
		l[i] = l[i]^32;
	}
	cout<<l;

  return 0;
}
