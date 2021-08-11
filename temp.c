#include <stdio.h>
#include <math.h>
// #define mod 1000000007
#define ll long long
#define rep(i,n) for (i = 0; i < n; ++i)
// #define REPA(i,k,n) for (i = k; i <= n; ++i)
// #define REPR(i,k,n) for (i = k; i >= n; --i)


int main() {
        ll n,q;
        scanf("%lld %lld",&n,&q );
        ll s[n];
        ll i;
        rep(i,n)
        scanf("%lld",&s[i]);
        // cout<<sizeof(t)<<" "<<t<<endl;
        while(q--) {
                ll L,R,m;
                scanf("%lld%lld",&L,&R ); m=floor((L+R)/2);
                printf("%lld\n",s[m-1]);
        }
        return 0;
}
