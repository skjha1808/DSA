#include<bits/stdc++.h>
using namespace std;


void updateArray(int arr[],int size){

    cout <<"inside the function"<<endl;

    // updating the array's first element
    arr[0]=100;    // 

    // printing the array
    for(int i=0;i<size;i++){
        cout << arr[i] <<" ";
    }
    cout <<"\ngoing back to main function"<<endl;
}

int main(){

    int arr1[4]={1,3,5,7};

    updateArray(arr1,4);

    cout <<"\nprinting in main function"<<endl;
    
    for(int i=0;i<4;i++){
        cout << arr1[i] <<" ";
    }
    cout <<endl;

    return 0;
}