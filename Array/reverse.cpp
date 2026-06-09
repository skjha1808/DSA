#include<bits/stdc++.h>
using namespace std;

// reverse an array using function:
void reverseArray(int arr[],int size){

    for(int i=0;i<size/2;i++){
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
}


// reverse an array using two pointer methods:
void reverseArray1(int arr[],int size){

    int start=0;
    int end=size-1;

    while(start < end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }

}


// swap alternate elements:
void swapAlternate(int arr[],int size){

    for(int i=0;i<size-1;i=i+2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}

// reverse using swap function
void reverseArray2(int arr[], int n){
    int s = 0, e = n-1;
    while(s < e){
        swap(arr[s++], arr[e--]);
    }
}

int main(){

    int arr[6]={1,2,3,4,5,6};
    int n=6;

    // reverse an array using loop(swap):
    // for(int i=0;i<n/2;i++){
    //     // swapping
    //     int temp=arr[i];
    //     arr[i]=arr[n-i-1];
    //     arr[n-i-1]=temp;
    // }

    // call function
    // reverseArray(arr,6);
    reverseArray1(arr,6);
    
    // printing reverse array
    cout <<"reversed array: ";
    for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }

    reverseArray2(arr,6);
    cout <<"\nReverse Array: ";
    for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }

    // swapAlternate(arr,6);
    // cout <<"\nAfter alternate swap: ";
    // for(int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    // }

    return 0;
}
