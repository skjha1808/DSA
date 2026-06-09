#include<bits/stdc++.h>
using namespace std;

// Brute force approach
// Time Complexity: O(N^2) & Space Complexity: O(1)
string is2SumExist(vector<int>& nums, int target){

    int n = nums.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i] + nums[j] == target)
                return "YES";
        }
    }
    return "NO";
}

// Return indices
vector<int> twoSumIndices(vector<int>& nums, int target){

    int n = nums.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i] + nums[j] == target)
                return {i,j};
        }
    }
    return {-1,-1};
}


// using HashMap:
// Time Complexity: O(N) & Space Complexity: O(N)
vector<int> indicesOf2Sum(vector<int>& arr, int target){

    unordered_map<int, int> mp;   // value → index

    for(int i=0;i<arr.size();i++){

        int complement = target - arr[i];

        // “Have we already seen this required number?”
        if(mp.find(complement) != mp.end()){
            return {mp[complement], i};    // return "yes";
        }

        // Save current number in map for future use
        mp[arr[i]] = i;
    }
    return {-1,-1};    // return "NO";
}


// Using sorting + two pointer approach (Greedy approach)
// Time Complexity: O(N log N) & Space Complexity: O(1)
string isTwoSumExist(vector<int>& arr, int target){

    sort(arr.begin(), arr.end());

    int n = arr.size();
    int left = 0, right = n-1;

    while(left < right){
        int sum = arr[left] + arr[right];

        if(sum == target) {return "YES";}    // {return {left,right};}
        else if(sum > target) {right--;}
        else {left++;}
    }
    return "NO";    // return {-1,-1};
}


int main() {

    vector<int> arr = {2,6,5,8,11};
    int target = 14;

    cout << "is 2Sum exist? " << is2SumExist(arr,target) <<endl;

    vector<int> result = twoSumIndices(arr,target);
    if(result[0] != -1)
        cout <<"Indices: " << result[0] << " " << result[1] <<endl;
    else cout <<"No indices found! "<<endl;



    vector<int> array = {2,6,5,8,11};
    int target1 = 15;

    vector<int> ans = indicesOf2Sum(array,target1);
    if(ans[0] != -1)
        cout <<"Indices: " << ans[0] << " " << ans[1] <<endl;
    else cout <<"No indices found! "<<endl;


    cout << "is TwoSum exist? " << isTwoSumExist(array,target1) <<endl;

    
    return 0;
}