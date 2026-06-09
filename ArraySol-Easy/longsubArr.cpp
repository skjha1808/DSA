#include<bits/stdc++.h>
using namespace std;

// Using Hashing (prefix Sum + hashMap)
// Time Complexity: O(N) & Space Complexity: O(N)

// this work for with sum k as well as with sum 0
int longestSubarrWithSumK(vector<int>& nums, int k) {

    unordered_map<int,int> mp;
    int sum = 0;
    int maxLen = 0;

    for(int i=0;i<nums.size();i++){
        sum += nums[i];

        // Case 1:
        // If prefix sum itself becomes k,it means subarray from index 0 → i has sum = k
        if(sum == k)
            maxLen = i+1;

        // Case 2:
        // Check if (sum - k) existed earlier, If yes, then a subarray with sum = k exists
        if(mp.find(sum - k) != mp.end()) { 
            int len = i - mp[sum - k]; 
            maxLen = max(maxLen, len); 
        }

        // Store prefix sum in map ONLY if it appears first time
        // because we want the earliest index for longest subarray
        if(mp.find(sum) == mp.end())
            mp[sum] = i;
    }

    return maxLen;
}

// this works only for with sum 0
int longestSubarrWithSum0(int arr[],int n) {

    unordered_map<int,int> mp;
    int maxLen = 0;
    int sum = 0;

    for(int i=0;i<n;i++){
        sum += arr[i];

        if(sum == 0)
            maxLen = i+1;

        // If the same prefix sum appeared before then elements between those indices have sum = 0
        if(mp.find(sum) != mp.end()) {
            int len = i - mp[sum];    // length of zero sum subarray
            maxLen = max(maxLen, len);   // update maximum length
        }

        // Store prefix sum only if it appears first time because we want earliest index to maximize length
        else {
            mp[sum] = i;
        }
    }

    return maxLen;
}


int main() {

    vector<int> arr = {1, -1, 5, -2, 3};
    int k = 3;
    cout <<"Length of maximum subarray: " << longestSubarrWithSumK(arr,k) <<endl;


    int array[] = {9, -3, 3, -1, 6, -5};
    int n = 6;
    // int k = 0;
    cout <<"Length of maximum subarray: " << longestSubarrWithSum0(array,n) <<endl;


    return 0;
}