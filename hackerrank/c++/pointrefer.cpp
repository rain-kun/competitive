#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size = int();
    scanf("%d",&size);
    int values[size];
    for(int i=0; i<= size; i++)
    {
        scanf("%d",&values[i]);
    }
    for(int i=size-1; i>= 0; i--)
    {
        printf("%d ",values[i]);
    }
    return 0;
}
