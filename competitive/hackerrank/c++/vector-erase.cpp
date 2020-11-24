#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0; i<n;i++)
    {
        cin>>v[i];
    }
    int k;
    cin>>k;
    v.erase(v.begin()+(k-1));
    int y,z;
    cin>>y>>z;
    v.erase(v.begin()+(y-1),v.begin()+(z-1));
    cout<<v.size()<<endl;
    int size = v.size();
    for(int i = 0; i <size; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
