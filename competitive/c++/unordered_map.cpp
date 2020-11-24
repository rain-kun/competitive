#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<algorithm>

using namespace std;

int duplicate(int str[], int size){
  std::unordered_map<int,int> umap;
  for (int i = 0; i != size; i++) {
    umap[str[i]]++;
  }
  unordered_map<int,int>:: iterator i;
  for (i =umap.begin(); i != umap.end(); i++) {
    if (i->second > 1) {
        cout<<i->first<<endl;
    }

  }
  return 0;
}


int main() {
  int size;
  std::cin >> size;
  int str[size]={0};
  for (int i = 0; i < int(sizeof(str)/sizeof(str[0])); i++) {
    std::cin >> str[i];
  }

  int ans = duplicate(str, size);

  return 0;
}
