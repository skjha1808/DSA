#include<bits/stdc++.h>
using namespace std;

// Function to perform Binary Search on sorted array
int binarySearch(int arr[],int n,int key){

    int low = 0, high = n-1;

    // Keep searching until low crosses high
    while(low <= high){
        // int mid = (low + high)/2;    // find the middle index
        int mid = low + (high - low)/2;   // use for safe case

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            low = mid+1;   // search in right half
        }
        else high = mid - 1;    // search in left half
    }
    return -1;    // target not found
}


int main() {

    int even[6] = {2,4,6,8,10,20};
    int odd[5] = {1,3,5,7,9};

    int result = binarySearch(even,6,10);
    cout <<"Key found at index: "<< result <<endl;
    
    int result1 = binarySearch(odd,5,0);
    cout <<"Key found at index: "<< result1 <<endl;



    return 0;
}