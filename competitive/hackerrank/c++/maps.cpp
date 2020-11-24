#include <cmath>
#include <map>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

#define mp make_pair
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int rep;
    cin>>rep;
    string str;
    map<string, int> m;
    for(int i(0),val(0),type(0); i<rep; i++){

        cin>>type;
        if (type == 1){
            cin>>str>>val;
            //map<string,int>::iterator i = m.find(str);
            //if(i != m.end())
            m[str] += val;
            //else
            //m.insert(mp(str,val));
        }

        else if(type == 2){
            cin>>str;
            m.erase(str);
        }

        else if(type ==3){
            cin>>str;
            //map<string,int>::iterator i = m.find(str);
            if(m[str]/*i == m.end()*/){
                cout<<m[str]<<"\n";
            }
            else
                cout<<0<<"\n";
        }
    }
    return 0;
}
