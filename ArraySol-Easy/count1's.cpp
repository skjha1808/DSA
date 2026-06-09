#include<bits/stdc++.h>
using namespace std;

// Only for binary array (0 & 1)
// Time Complexity: O(n) & Space Complexity: O(1)
int maxCountOnes(vector<int>& nums) {

    int cnt = 0;
    int maxi = 0;

    for(int i=0;i<nums.size();i++){
        if(nums[i] == 1){
            cnt++;
            maxi = max(maxi, cnt);
        }
        else { cnt = 0;}
    }

    return maxi;
}

// Generalized version → works for any number
int maxCount(vector<int> & arr, int target) {

    int count = 0;
    int maxCount = 0;

    for(int x : arr){
        if(x == target){
            count++;
            maxCount = max(maxCount, count);
        }
        else { count = 0;}
    }

    return maxCount;
}


int main() {

    vector<int> nums = {0,1,1,0,1,1,1,0};
    cout <<"Max count of consecutive 1's: " <<maxCountOnes(nums) <<endl;

    vector<int> array = {1,4,4,2,4,4,4,4,5};
    int target = 4;
    cout <<"Max count of consecutive target: " <<maxCount(array,target) <<endl;


    return 0;
}