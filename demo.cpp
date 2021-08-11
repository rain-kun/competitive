#include <iostream>

using namespace std;


int main()
{
    int n, fin= int(), i = int(), pre_ans= int(), value = int(), ans = int();
    cin >> n;
    value = n;
   
    while(value!=0)
    {
        ans += value%10;
        value = value/10;
    }
    pre_ans = ans;
    fin = n;
    for(i=0 ; i<= n/2 ; ++i){
        value = i;
        ans = 0;
        while(value!=0)
        {
            ans += value%10;
            value = value/10;
        }
        if(pre_ans == ans){
            if(fin > i)
            fin = i;
        }
        if(pre_ans < ans){
            fin = i;
        }
    }   
    cout<<fin<<endl;
    return 0;
}

