#include<bits/stdc++.h>
using namespace std;

// Brute force approach
// Time Complexity: O(N^3) & Space Complexity: O(1)
vector<int> threeSumIndices(int arr[], int n) {

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i] + arr[j] + arr[k] == 0)
                    return {i,j,k};
            }
        }
    }
    return {-1,-1,-1};
}


int main() {

    int arr[] = {1,2,-1,0,1,7};
    int n = 6;

    vector<int> result = threeSumIndices(arr,n);
    if(result[0] != -1)
        cout <<"Indices: " << result[0] << " " << result[1] << " " << result[2] <<endl;
    else cout <<"Indices not found! " <<endl;

    return 0;
}