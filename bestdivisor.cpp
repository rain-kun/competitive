#include<iostream>
#include<math.h>


using namespace std;



int main()
{
    int n, i = int(), pre_ans= 0, value = 0, ans = 0;
    std::cin >> n;
    value = n;
   
    while(value!=0)
    {
	ans += value%10;
	value = value/10;
    }
    if (ans>pre_ans) {
    	
    }
    pre_ans = ans;
    for(i=0 ; i<= n/2 ; ++i){
	value = i;
	ans = 0;
	while(value!=0)
	{
	    ans += value%10;
	    value = value/10;
	}
	if(pre_ans < ans){
	    pre_ans = ans;
	}
	if (true) {
		
	} else {
		
	}
    }   
    cout<<pre_ans<<endl;
    return 0;
}

