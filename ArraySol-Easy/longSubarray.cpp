#include<bits/stdc++.h>
using namespace std;

// Brute force approach: (works for all numbers - positive,negative & zero)
int longestSubarray(int arr[],int n, int k){

    int maxLen = 0;

    // Time Complexity: O(n^3) & Space Complexity: O(1)
    for(int i=0;i<n;i++){   // starting index
        for(int j=i;j<n;j++){   // ending index
            // add all the elements of subarray = nums[startIndex...endIndex]
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum += arr[k];
            }
            // store the maximum length
            if(sum == k)
                maxLen = max(maxLen, j-i+1);
        }
    }

    
    // Time Complexity: O(n^2) & Space Complexity: O(1)
    for(int i=0;i<n;i++){   // starting index
        int cSum = 0;   // initialize sum to 0

        for(int j=i;j<n;j++){   // ending index
            cSum += arr[j];    // add element to sum

            // store the maximum length
            if(cSum == k)
                maxLen = max(maxLen, j-i+1);
        }
    }

    return maxLen;
}


// Optimal solution: using two pointer/sliding window (work only for numbers >= 0)
// Time Complexity: O(2N) & Space Complexity: O(1)
int longestSubArrayWithSumK(vector<int>& nums, int k) {

    int left = 0;   // Pointers to mark the start and end of window
    int maxLen = 0;      // To store the maximum length of the subarray
    int sum = 0;     // To store the sum of elements in the window

    // Expand window by increasing right
    for(int right=0;right<nums.size();right++){

        sum += nums[right];   // Keep track of current sum.

        // If the sum exceeds K, shrink the window by removing elements from the left.
        while(sum > k && left <= right){
            sum -= nums[left];
            left++;
        }
        // check if subarray sum equals k
        if(sum == k)
            maxLen = max(maxLen, right-left+1);   // update max. length
    }

    return maxLen;
}


int main() {

    int array[] = {1,2,-3,1,1,-2,1,2,0,5};
    int n = 10;
    int k = 5;
    cout <<"The length of Longest subarray is: " << longestSubarray(array,n,k) <<endl;


    vector<int> arr = {4,2,1,1,1};
    int k1 = 3;
    cout <<"The length of longest subarray: " << longestSubArrayWithSumK(arr,k1) <<endl;


    return 0;
}