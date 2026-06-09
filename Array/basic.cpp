#include<bits/stdc++.h>
using namespace std;

int main(){

    // declaration of array
    int arr[5];

    // accessing an array
    cout <<"value at 1st index: "<< arr[0] <<endl;   // it gives garbage value
    cout <<"value at 5th index: "<< arr[15] <<endl;

    // initialization of an array
    int array[5]={1,5,10,15,20};

    // accessing an element of array
    cout <<"value at 2nd index " <<array[2] <<endl;

    // initializing all locations with 0:
    int arr1[8]={0};
    int n=8;
    for(int i=0;i<n;i++){
        cout << arr1[i] <<" ";
    }
    cout <<endl;

    // initializing all locations with 1 is not possible by following:
    int arr2[10]={1};
    for(int i=0;i<10;i++){
        cout << arr2[i] <<" ";
    }
    cout <<endl;

    int arr3[12]={2,5};
    int num=12;
    for(int i=0;i<num;i++){
        cout << arr3[i] <<" ";
    }
    cout <<endl;

    // we can use many types of data-types such as:
    char ch[7]={'s','h','u','b','h','a','m'};
    cout << ch[3]<<endl;
    for(int i=0;i<7;i++){
        cout << ch[i] <<" ";
    }
    cout <<endl;

    // similarly
    float flo[5];
    double dol[7];
    bool bol[9];

    // sum of all elements of an array:
    int brr[5]={10,20,30,40,50};
    int sum=0;
    for(int i=0;i<5;i++){
        sum = sum + brr[i];
    }
    cout <<"Sum of all elements: "<< sum <<endl;

    cout <<"Everything is fine "<<endl;

    return 0;
}