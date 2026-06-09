#include<bits/stdc++.h>
using namespace std;

// Brute force approach:
// Time Complexity: O(N^2) & Space Complexity: O(1)
int majorityEle(vector<int>& arr) {
    int n = arr.size();

    for(int i=0;i<n;i++){
        int count = 0;
        // Count frequency of arr[i]
        for(int j=0;j<n;j++){
            if(arr[j] == arr[i])
                count++;
        }

        if(count > n/2)
            return arr[i];
    }
    return -1;   // No majority element
}

// Using HashMap:
// Time Complexity: O(N) & Space Complexity: O(N)
int majorityElement(vector<int>& nums){
    int n = nums.size();

    unordered_map<int,int> mp;    // key(element) -> value(count)

    // Count occurrences of each element
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }

    // Iterate through the map to find the majority element
    for(auto it : mp){
        if(it.second > n/2){    // second denote to count
            return it.first;    // first denote to element
        }
    }

    return -1;
}

// Boyer–Moore Voting Algorithm (Optimal Solution)
// Time Complexity: O(N^2) & Space Complexity: O(1)
int findMajorityElement(int arr[], int n) {
    
    int candidate = 0;
    int count = 0;
    // step 1: find candidate
    for(int i=0;i<n;i++){
        if(count == 0)
            candidate = arr[i];    // pick a new element

        if(arr[i] == candidate) 
            count++;    // support
        else count--;   // cancellation
    }
    // step 2: verify candidate
    int freq = 0;    // count actual occurence of candidate
    for(int i=0;i<n;i++){
        if(arr[i] == candidate) freq++;
    }

    if(freq > n/2) return candidate;
    else return -1;
}


int main() {

    vector<int> arr = {1,2,3,4,5};
    cout <<"Majority Element: " << majorityEle(arr) <<endl;
    cout <<"Majority Element: " << majorityElement(arr) <<endl;


    int array[] = {2,2,1,1,1,2,2};
    int n = 7;
    cout <<"Majority Element: " << findMajorityElement(array,n) <<endl;

    
    return 0;
}