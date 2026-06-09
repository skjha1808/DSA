#include<bits/stdc++.h>
using namespace std;

// find pivot by linear search
// T.C. = O(n)
// int main() {

//     int arr[] = {4,5,6,7,1,2,3};
//     int n = 7;
//     int pivot = arr[0];

//     for(int i=0;i<n;i++){
//         if(arr[i] < pivot){
//             pivot = arr[i];
//         }
//     }

//     cout <<"Pivot element is: " << pivot  <<endl;

//     return 0;
// }



// find pivot (min element in rotated/unrotated array) 
// T.C. = O(log n)
int findPivot(int arr[], int n) {
    int low = 0, high = n-1;

    while(low < high){
        int mid = low + (high - low)/2;

        // if(arr[mid] >= arr[0]){      // this works only for rotated array
        if(arr[mid] > arr[high]){        // This works for both rotated as well as unrotated array

        low = mid+1;      // pivot on right
        }
        else high = mid;     // pivot on left including mid
    }
    return low;     // pivot index
    // return high;   // both are same
}

// if duplicates are present in array:
int getPivot(int arr[], int n){
    int low = 0, high = n-1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[high]) {
            low = mid + 1;
        }
        else if (arr[mid] < arr[high]) {
            high = mid;
        }
        else {
            // arr[mid] == arr[high]
            high--;   // shrink safely
        }
    }
    return low;    // index of minimum
}

int main() {

    int array[] = {4,5,6,7,1,2,3};
    int array1[] = {3,4,4,4,5,6,1,2};

    int result = findPivot(array,7);
    cout <<"Pivot element is " << array[result] <<" at index "<< result <<endl;

    cout <<"Index of pivot element is: " << getPivot(array1,8) <<endl;;


    return 0;
}