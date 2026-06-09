#include<bits/stdc++.h>
using namespace std;


// T.C. = 0(log n)
int peakIndex(int arr[],int n) {

    int low = 0, high = n - 1;

    while(low < high) {
        int mid = low + (high - low)/2;
        if(arr[mid] < arr[mid+1]){
            low = mid + 1;
        }
        else high = mid;    
        // If we do:
        // high = mid - 1;
        // We might skip the peak.
    }
    // Notes:
    // here 'else' automatically handles >=  i.e.(arr[mid] >= arr[mid+1])
    // It safely covers equality case
    // It avoids missing plateau peaks
    // Keeps logic simple and clean

    return low;    
    // return high;   // (both are same)
}


int main() {

    int array[9] = {1,2,3,4,5,4,3,2,1};
    int array1[5] = {1,4,2,6,3};     // there are 2 peaks

    int result = peakIndex(array,9);
    cout << "Peak element is " << array[result] << " at index "<< result <<endl;

    int result1 = peakIndex(array1,5);
    cout << "Peak element is " << array1[result1] << " at index "<< result1 <<endl;


    return 0;
}