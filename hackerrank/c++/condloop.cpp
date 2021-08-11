#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    scanf("%d %d",&a,&b);

    for(int n = a; n <= b; n++)
    {
        if(n == 1) {
            printf("one");
        }
        else if(n == 2) {
            printf("two");
        }
        else if(n == 3) {
            printf("three");
        }
        else if(n == 4) {
            printf("four");
        }
        else if(n == 5) {
            printf("five");
        }
        else if(n == 6) {
            printf("six");
        }
        else if(n == 7) {
            printf("seven");
        }
        else if(n == 8) {
            printf("eight");
        }
        else if(n == 9) {
            printf("nine");
        }
        else if(n > 9)
        {
            if(n%2 == 0)
            {
                printf("even");
            }
            else if(n%2 != 0)
            {
                printf("odd");
            }
        }
        printf("\n");
    }
    return 0;
}

//
// int main()
// {
//     int a,b;
//     string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
//     cin>>a>>b;
//     for(int i=a;i<=b;i++)
//         cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl;
// }
