#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int rep;
    cin>>rep;
    int val,type;
    set<int> st;
    for(int i=0; i<rep; i++){

        cin>>type>>val;
        if (type == 1){
            st.insert(val);
        }

        else if(type == 2){
            st.erase(val);
        }

        else if(type ==3){
            set<int>::iterator i = st.find(val);
            if(i == st.end()){
                cout<<"No"<<"\n";
            }
            else
                cout<<"Yes"<<"\n";
        }
    }
    return 0;
}
