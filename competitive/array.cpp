#include<iostream>
#include<math.h>
#include<algorithm>
#define rep(i,n) for (i = 0; i < n; ++i)
#define REPA(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)
using namespace std;


void reverse(int c, int a[]){
	// for(const auto &va :a) {
	// 	std::cout << va << std::endl;
	// }
	int i;
	// rep(i,4){
	// 	cout<<i;
	// }
	REPA(i,0,c-1){
		cout<<a[i];
	}
	cout<<'\n';
	REPR(i,c-1,0){
		cout<<a[i];
	}

}

int main()
{
	int arr_size;
	std::ios_base::sync_with_stdio(false);
	std::cin >> arr_size;
        int a[arr_size];
	for (int i = 0; i < arr_size; ++i) {
		std::cin >> a[i];
	}
	reverse(arr_size, a);
	return 0;
}
