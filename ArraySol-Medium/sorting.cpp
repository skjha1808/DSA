#include<bits/stdc++.h>
using namespace std;

// Counting sort (Two pass approach)
// Time Complexity: O(N) & Space Complexity: O(1)
void sortArray(int arr[], int n) {

    int count0 = 0, count1 = 0, count2 = 0;

    // counting
    for(int i=0;i<n;i++){
        if(arr[i] == 0) count0++;
        else if(arr[i] == 1) count1++;
        else count2++;
    }
    // printing/filled with 0,1,2 resp.
    for(int i=0;i<count0;i++) arr[i] = 0;

    for(int i=count0;i<count0+count1;i++) arr[i] = 1;

    for(int i=count0+count1;i<n;i++) arr[i] = 2;


    // Overwrite the array (another method of printing)
    // int i = 0;

    // while(count0--) arr[i++] = 0;
    // while(count1--) arr[i++] = 1;
    // while(count2--) arr[i++] = 2;

}

// Optimal Approach (Dutch National Flag Algorithm)
// Time Complexity: O(2N) & Space Complexity: O(1)
void sortedArray(vector<int>& arr) {

    int low = 0, mid = 0, high = arr.size()-1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1) mid++;
        else {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main() {

    int arr[] = {1,0,2,1,0,2};
    int n = 6;
    sortArray(arr,n);
    cout <<"After sorting: ";
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    } cout <<endl;


    vector<int> nums = {2,0,2,1,0,1,0,1};
    sortedArray(nums);
    cout <<"Sorted Array: ";
    for(int num : nums){
        cout << num <<" ";
    }

    return 0;
}