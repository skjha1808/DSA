#include<bits/stdc++.h>
using namespace std;

// Method-1: optimal(two pointers)
void moveZeros(int arr[], int n){

    int i = 0;
    for(int j=0;j<n;j++){
        if(arr[j] != 0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}

// Method-2: without swap
void moveZeroEnd(int arr[],int n){

    int i =0;
    // Move all non-zero elements to the front
    for(int j=0;j<n;j++){
        if(arr[j] != 0){
            arr[i] = arr[j];
            i++;
        }
    }

    // fill remaining positions with zeros
    while(i < n){
        arr[i] = 0;
        i++;
    }
}

int main() {

    int array[] = {1,0,3,0,5};
    int n=5;

    // moveZeros(array,n);
    moveZeroEnd(array,n);
    for(int i=0;i<n;i++){
        cout << array[i] <<" ";
    }

    return 0;
}