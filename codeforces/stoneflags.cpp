#include <iostream>

int main() {
  long long int n,m;
  int a;
  std::cin >> n>>m>>a;
  //m+=-a;
  long long int l=int(),b=0;
  if(a==1)
    std::cout << n*m;
  else{
  while(l<n || b<m)
  {
    if (l<n) {
      l+=a;
    }
    if(b<m){
      b+=a;
    }
  }
     std::cout << (l/a)*(b/a);
}
  return 0;
}
