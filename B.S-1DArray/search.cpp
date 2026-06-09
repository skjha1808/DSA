#include<bits/stdc++.h>
using namespace std;

// Method-1: first find pivot & then apply normal binary search
// pivot represents index of smallest element in the array
int findPivot(int arr[], int n){

    int low=0, high=n-1;
    while(low < high){
        int mid = low + (high-low)/2;

        if(arr[mid] > arr[high])
            low = mid +1;
        else high = mid;
    }
    return low;
}

int binarySearch(int arr[], int low, int high, int key){

    while(low <= high){
        int mid = low + (high-low)/2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            low = mid +1;
        else high = mid -1;
    }
    return -1;
}

int searchRotated(int arr[], int n, int key){

    int pivot = findPivot(arr,n);
    if (arr[pivot] <= key && key <= arr[n-1])      // This checks: Is the key inside the right sorted half?
        return binarySearch(arr, pivot, n-1,key);     // search in right half
    else
        return binarySearch(arr, 0, pivot-1, key);    // search in left half

}


// Method-2: One-Pass Binary Search (Sorted Half Check):
int searchRotate(int arr[], int n, int target){

    int low =0, high =n-1;
    while(low <= high){
        int mid = low + (high-low)/2;

        if (arr[mid] == target)
            return mid;

        if (arr[low] <= arr[mid]) {     // Left half sorted
            // Check if target lies in sorted half & Eliminate the other half
            if (target >= arr[low] && target < arr[mid])  
                high = mid - 1;
            else
                low = mid + 1;
        }
        // NOTE: At least one half must be sorted.
        else {        // Right half sorted
            // Check if target lies in sorted half & Eliminate the other half
            if (target > arr[mid] && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

// One-Pass Binary Search Solution in duplicates:
int searchRotatedDuplicates(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        // Case 1: duplicates block decision
        if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
            low++;
            high--;
        }

        // Case 2: left half sorted
        else if (arr[low] <= arr[mid]) {
            if (target >= arr[low] && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }

        // Case 3: right half sorted
        else {
            if (target > arr[mid] && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}


int main() {

    int array[] = {4,5,6,7,0,1,2};
    int n = 7;
    int key = 0;

    cout <<"Element found at index: " << searchRotate(array,n,key) <<endl;


    return 0;
}