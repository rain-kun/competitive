#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<algorithm>
#define l long int

int getsubarray(int ans,int b[], int size){
l check;
for (int i = 0; i < 89+7; i++) {
if

}
return 0;
}

int main(int argc, char const *argv[]) {
  int a,size,v;

  scanf("%d\n",&a);

  for (int i = 0; i < a; i++) {

    scanf("%d%d\n",&size,&v);

    int starray[size];

    for (int i = 0; i < sizeof(starray); i++) {
      std::cin>>starray[i];
    }

    getsubarray(v,starray, size);
  }
  return 0;
}
