#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){

    int cowCount = 1;
    int lastPos = arr[0];

    for(int i=1;i<n;i++){

        if(arr[i] - lastPos >= mid){
            cowCount++;
            lastPos = arr[i];
        }
        if(cowCount == k)
            return true;
    }
    return false;
}

int aggressiveCow(int arr[], int n, int k){

    sort(arr, arr + n);
    
    int low = 0;
    int high = arr[n-1] - arr[0];
    int ans = -1;

    while(low <= high){
        int mid = low +(high - low)/2;

        if(isPossible(arr,n,k,mid)){
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}


int main() {

    int array[] = {4,2,1,3,6};
    int n = 5;
    int k = 2;

    cout <<"Maximum minimum distance: " << aggressiveCow(array,n,k) <<endl;

    return 0;
}