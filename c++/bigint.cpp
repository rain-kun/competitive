#include <iostream>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
  clock_t tStart = clock();
	//code
  long long int a = 1;
	int n;
	cin>>n;
	for(int i = 0; i<n; i++){
	    int c;
	    cin>>c;
	    while(c>0){
	        a *=c;
	        c--;
	    }
	    cout<<a<<endl;
	    a = 1;
	}
  printf("\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}
