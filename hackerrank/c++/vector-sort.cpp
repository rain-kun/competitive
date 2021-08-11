#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}


#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

// int main() {
//     std::vector<int> v;
//     int n;
//     std::cin >> n;
//
//     std::copy_n(std::istream_iterator<int>(std::cin), n, std::back_insert_iterator<std::vector<int>>(v));
//     std::sort(v.begin(), v.end());
//     std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
//
//     return 0;
// }
