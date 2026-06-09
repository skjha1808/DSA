#include<bits/stdc++.h>
using namespace std;

// using linear search:
// Time Complexity: O(n^2) & Space Complexity: O(1)
int elementAppearOnce(vector<int>& nums) {

    int n = nums.size();

    for(int i=0;i<n;i++){    // for picking element

        int count = 0;

        for(int j=0;j<n;j++){   // for count occurence
            if(nums[i] == nums[j]){
                count++;
            }
        }

        if(count == 1){
            return nums[i];
        }
    }
}


// using HashMap
// Time Complexity: O(n) & Space Complexity: O(n)
int elementAppearedOnce(int arr[], int n){

    unordered_map<int,int> mp;    // key → value => number → frequency

    // count frequency
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;     
        // mp[arr[i]] = mp[arr[i]] + 1;
    }

    // find element with frequency 1
    for(auto it : mp){
        if(it.second == 1)    // it.second → value (frequency)
            return it.first;   // it.first  → key (array element)
    }
}


// using sorting
// Time Complexity: O(n log n) & Space Complexity: O(1)
int appearedOnce(int arr[], int n) {

    sort(arr, arr+n);

    for(int i=0;i<n-1;i=i+2){
        if(arr[i] != arr[i+1]){
            return arr[i];
        }
    }

    return arr[n-1];   // if last element appear once
}

// using XOR 
// Time Complexity: O(n) & Space Complexity: O(1)
int appearOnce(vector<int>& nums) {

    int xorr = 0;

    for(int i=0;i<nums.size();i++){
        xorr = xorr ^ nums[i];
    }

    return xorr;
}


int main() {

    int arr[] = {1,2,1,3,4,4,3};
    int n = 7;

    cout <<"Number that appear once: " << appearedOnce(arr,n) <<endl;

    vector<int> array = {1,1,2,2,3,4,4};
    cout <<"Number that appear once: " << appearOnce(array) <<endl;

    return 0;
}