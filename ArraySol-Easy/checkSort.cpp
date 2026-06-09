#include<bits/stdc++.h>
using namespace std;

// check for ascending order:
bool isSorted(int arr[], int n){

    // for(int i=1;i<n;i++){
    //     if(arr[i] < arr[i-1])
    //     return false;
    // }

    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1])
        return false;
    }

    return true;
}

// check for descending order:
bool isArrSorted(int arr[], int n){

    // for(int i=1;i<n;i++){
    //     if(arr[i] > arr[i-1])
    //     return false;
    // }

    for(int i=0;i<n-1;i++){
        if(arr[i] < arr[i+1])
        return false;
    }

    return true;
}

int main() {
    
    int array1[] = {1,2,3,4,5,6,7,8};
    int array2[] = {8,7,6,5,4,3,2,1};

    int array[] = {10,3,6,9,49,1,33,74};
    int n = 8;

    cout <<"Is array sorted? " << isSorted(array,n) <<endl;
    cout <<"Is array sorted? " << isArrSorted(array,n) <<endl;

    return 0;
}