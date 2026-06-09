#include<bits/stdc++.h>
using namespace std;

// Brute/Better approach:
// Time Complexity: O(N^2) & Space Complexity: O(1)
int maxSum(vector<int>& nums){
    int n = nums.size();
    // Initialize maximum sum with the smallest possible integer
    int maxi = INT_MIN;

    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += nums[j];
            maxi = max(maxi,sum);
        }
    }
    return maxi;
}


// Optimal sol. (Kadane's algorithm):
// Time Complexity: O(N) & Space Complexity: O(1)
int maximumSum(vector<int>& arr){
    int n = arr.size();
    if(n == 0) return 0;   // handle edge case

    int sum = 0, maxi = INT_MIN;

    for(int i =0;i<n;i++){
        sum += arr[i];

        if(sum > maxi)
            maxi = sum;    // update maxi
        
        // Reset sum to 0 if it becomes negative
        if(sum < 0)
            sum = 0;
    }
    // Return the maximum subarray sum found
    return maxi;
}

// print SubArray with maxSum:
// Time Complexity: O(N) & Space Complexity: O(1)
int maxSubarray(vector<int>& nums){
    int n = nums.size();
    int sum = 0, maxi = INT_MIN; 
    // starting index of current subarray
    int start = 0;
    // indices of the maximum sum subarray
    int ansStart = -1, ansEnd = -1;

    for(int i=0;i<n;i++){
        sum += nums[i];

        if(sum > maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if(sum < 0){
            sum = 0;
            // next index will be new start
            start = i+1;
        }
    }
    // Printing the subarray
    cout << "Subarray with maxSum: ";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << nums[i] << " ";
    }

    return maxi;
}


int main() {

    vector<int> arr = {-4,-2,-3,-1};
    cout <<"Maximum subArray sum: " << maxSum(arr) <<endl;

    vector<int> array = {-2,-3,4,-1,-2,1,5,-3};
    cout <<"Maximum Subarray Sum: " << maximumSum(array) <<endl;

    maxSubarray(array);


    return 0;
}