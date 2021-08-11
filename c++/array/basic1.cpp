#include <bits/stdc++.h>
#include <vector>
using namespace std;

// 1)Create an Array of size 10 of integers. Take input from the user for these 10 elements and print the entire array after that.
void question1(){
    int arr[10];
    cout<<"give elements"<<endl;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cin>>arr[i];
    }
    cout<<"print elements"<<endl;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout<<arr[i];
    }
}

// 2)Check whether n is present in an array of size m or not.
int question2(){
    vector<int> arr;int ele, si;
    cin>>ele>>si;
    for (int i=0; i<si;i++){
        arr.push_back(i);
    }
    for (int i=0; i<si;i++){
        if(ele == arr[i]){
            cout<<"TRUE"<<endl;
            return 0;
        }
    }
    cout<<"FALSE"<<endl;
    return 0;
}

// 3)Find the minimum and maximum element in an array.
void question3(){
    vector<int>arr;
    int min, max, si;
    cin>>si;
    for(int i=0; i<si; i++){
        int a;cin>>a;arr.push_back(a);
    }
    min = max = *arr.begin();
    for(auto i=arr.begin(); i != arr.end(); i++){
        if(*i <= min){
            min = *i;
        }
        if(*i >= max){
            max = *i;
        }
    }
    cout<<"min:"<<min<<"\n"<<"max:"<<max<<endl;
}

// 4)Write a program to reverse the array.
void question4(){
    vector<int>arr;
    int si;
    cin>>si;
    // int arr[si];
    // for(int i=0; i<si; i++){
    //     cin>>arr[i];
    // }
    // for(int i=0, j=si-1; i<si; i++, j--){
    //     int temp=arr[j];
    //     arr[j]=arr[i];
    //     arr[i] = temp;
    // }
    // for(int i=0; i!=si; i++){
    // cout<<arr[i]<<" ";
    // }
    // vector
    for(int i=0; i<si; i++){
        int a;cin>>a;arr.push_back(a);
    }
    reverse(arr.begin(), arr.end());
    for(auto i=arr.begin(); i!=arr.end(); i++){
    cout<<*i<<" ";
    }
}
// void questio5() is included inQ 8.
// void random(){
//     vector<int>arr;
//     int min, max, k, si;
//     cin>>k>>si;
//     for(int i=0; i<si; i++){
//         int a;cin>>a;arr.push_back(a);
//     }
//     min = k;
//     max = *arr.begin();
//     for(auto i=arr.begin(); i != arr.end(); i++){
//         if(*i%k==0){
//             if(*i <= min){
//                 min = *i;
//             }
//             if(*i >= max){
//                 max = *i;
//             }
//         }
//     }
//     cout<<"min:"<<min<<"\n"<<"max:"<<max<<endl;
// }

// 6)Find the Kth largest and Kth smallest number in an array.
void question6(){
    int k, si;
    cin>>k>>si;
    int arr[si]; // 3 5 7 12 19
    for (int i=0; i<si; i++){
        cin>>arr[i];
    }
	int n = sizeof(arr) / sizeof(arr[0]);

	set<int> s(arr, arr + n);
	set<int>::iterator itr
		= s.begin(); // s.begin() returns a pointer to first
					// element in the set
	advance(itr, k - 1); // itr points to kth element in set
	cout << *itr << "\n"; // 5-4-1
    set<int>::iterator itrr
		= s.begin(); // s.begin() returns a pointer to first
  	advance(itrr, n - k ); // itr points to kth element in set

	cout << *itrr << "\n";
}

// 8)Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algorithm.
void question8(){
    int si;
    cin>>si;
    int arr[si];
    int l = sizeof(arr)/sizeof(arr[0]);
    // arr.assign(si, 0);
    // cout<<arr.size();
    for(auto i=0; i < l; i++){
        cin>>arr[i];
    }
    // while(si--){
    for (int* i=arr; i<arr+l; i++){
        for (int* j=i; j<arr+l; j++){
            if(*i > *j){
                cout<<*i<<*j<<endl;
                int temp = *i;*i=*j;*j=temp;
                cout<<*i<<*j<<endl;
            }
        }

    }
    cout<<"ans"<<endl;
    for(auto i=0; i < l; i++){
        cout<<arr[i];
    }
    // while(*f!=arr){
    //     while(c!=arr.end()){
    //         if (*f == *c){
    //             c +=1;
    //         }
    //         if (*f > *c){
    //            int temp = *f;*f=*c;*c=temp;
    //             f +=1;
    //         }
    //         c +=1;
    //     }
    //     c = f;
    //     cout << f << c << endl;
    // }
    // cout<<"ans"<<endl;
    // for(auto i=arr.begin(); i != arr.end(); i++){
    //     cout<<*i;
    // }

}

// 9)Find the range of the array. Range means the difference between the maximum and minimum element in the array.
void question9(){
    vector<int>arr;
    int min, max, si;
    cin>>si;
    for(int i=0; i<si; i++){
        int a;cin>>a;arr.push_back(a);
    }
    min = max = *arr.begin();
    for(auto i=arr.begin(); i != arr.end(); i++){
        if(*i <= min){
            min = *i;
        }
        if(*i >= max){
            max = *i;
        }
    }
    cout<<"diff:"<< max-min <<endl;
}

// 10) Move all the negative elements to one side of the array.
void question10(){
     int si;
    cin>>si;
    int arr[si];
    int l = sizeof(arr)/sizeof(arr[0]);
    // arr.assign(si, 0);
    // cout<<arr.size();
    for(auto i=0; i < l; i++){
        cin>>arr[i];
    }
    // while(si--){
    for (int* i=arr; i<arr+l; i++){
        for (int* j=i; j<arr+l; j++){
            if(*i < 0){
                break;
            }
            if (*i > 0 && *j < 0){
                int temp = *i;*i=*j;*j=temp;
                break;
            }
        }

    }
    cout<<"ans"<<endl;
    for(auto i=0; i < l; i++){
        cout<<arr[i];
    }
}

int main(){
    // question1();
    // question2();
    // question3();
    // question4();
    // question6();
    // question8();
    // question9();
    question10();

    return 0;
}