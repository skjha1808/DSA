#include<bits/stdc++.h>
using namespace std;

// Brute force approach: T.C. = O(N)
int singleElement(int arr[],int n){

    if(n == 1) return arr[0];

    for(int i=0;i<n;i++){
        if(i == 0){
            if(arr[i] != arr[i+1])
                return arr[i];
        }
        else if(i == n-1){
            if(arr[i] != arr[i-1])
                return arr[i];
        }
        else {
            if(arr[i] != arr[i-1] && arr[i] != arr[i+1])
                return arr[i];
        }
    }
    return -1;
}

// Using XOR (a ^ a = 0  &  a ^ 0 = a)
// Time Complexity: O(n) & Space Complexity: O(1)
int findSingle(int arr[],int n){

    int ans =0;

    for(int i=0;i<n;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}


// Optimal solution: T.C. = O(log N)
int findSingleElement(int arr[], int n){

    // Edge case: only one element in the array
    if (n == 1) return arr[0];

    // Edge case: first element is the unique one
    if (arr[0] != arr[1]) return arr[0];

    // Edge case: last element is the unique one
    if (arr[n - 1] != arr[n - 2]) return arr[n - 1];

    // Initialize binary search bounds (exclude first and last index)
    int low = 1, high = n - 2;

    // perform binary search
    while(low <= high){
        int mid = low +(high-low)/2;

        // Check if middle element is the unique one
        if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1]) return arr[mid];

        // If mid is in the left half (pairing is valid)
        if((mid % 2 == 1 && arr[mid] == arr[mid-1]) || (mid % 2 == 0 && arr[mid] == arr[mid+1])) {
            low = mid +1;    // move to the right half
        }
        // If mid is in the right half (pairing broken earlier)
        else high = mid -1;
    }
    return -1;
}

int main() {

    int array[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int n = 11;

    cout <<"Single element is: " << singleElement(array,n) <<endl;
    cout <<"Single element is: " << findSingle(array,n) <<endl;
    cout <<"Single element is: " << findSingleElement(array,n) <<endl;

    return 0;
}