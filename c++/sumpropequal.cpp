#include<bits/stdc++.h>



int main() {
  int arr[] = {4,1,2,1};
  int count = 0;
  for(int i = 0; i < int(sizeof(arr)/sizeof(arr[0])); i++) {
    int pro= 1, sum = int();
    for(int j = 0; j <= i; j++) {
      pro *= arr[j];
      sum += arr[j];
      if(pro == sum){
        count++;
      }
    }

  }
  std::cout << count << '\n';
  printf("%d",count);
  return 0;
}
