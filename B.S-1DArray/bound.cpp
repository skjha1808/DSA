#include<bits/stdc++.h>
using namespace std;

// T.C. = 0(n)
int bound(int arr[], int n, int key){

    for(int i=0;i<n;i++){
        if(arr[i] > key)
        return i;
    }
    return n;
}

// T.C. = 0(log n)
// The lower bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than or equal to a given key
int lowerBound(int arr[], int n, int key){

    int low =0, high = n-1;
    int ans = n;    // Default to n (not found)

    while(low <= high){
        int mid = low +(high-low)/2;

        if(arr[mid] >= key){
            ans = mid;    // Store possible answer
            high = mid - 1;    // Try to find smaller index on left side
        }
        else low = mid + 1;    // Move right if current element is less than key
    }
    return ans;    // Return the index of the lower bound
}

// The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than the given key
int upperBound(int arr[], int n, int key){

    int low =0, high = n-1;
    int ans = n;    // Default to n (not found)

    while(low <= high){
        int mid = low +(high-low)/2;

        if(arr[mid] > key){
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
        
    }
    return ans;
}

int main() {

    int arr[] = {3,5,8,15,19};
    int n = 5;
    int key = 8;
    
    cout <<"lower bound is the index: " << bound(arr,n,key) <<endl;
    cout <<"lower bound is the index: " << lowerBound(arr,n,key) <<endl;
    cout <<"upper bound is the index: " << upperBound(arr,n,key) <<endl;



    return 0;
}