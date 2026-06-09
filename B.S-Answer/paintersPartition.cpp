#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){

    int painterCount = 1;     // MUST start from 1
    int timeSum = 0;

    for(int i=0;i<n;i++){

        if(timeSum + arr[i] <= mid){
            timeSum += arr[i];
        }
        else {
            painterCount++;
            if(painterCount > k || arr[i] > mid){
                return false;
            }
            else timeSum = arr[i];
        }
    }
    return true;
}

int painterPartition(int arr[], int n, int k){

    int maxi = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        maxi = max(maxi, arr[i]);
    }

    int low = maxi;
    int high = sum;
    int ans = -1;

    while(low <= high){
        int mid = low +(high-low)/2;

        if(isPossible(arr, n,k,mid)){
            ans = mid;       // possible solution
            high = mid - 1;    // try smaller
        }
        else low = mid + 1;    // increase time
        
    }
    return ans;

}

int main() {

    int array[] = {10,20,30,40};
    int n = 4;
    int k = 2;

    cout <<"Minimum maximum time= " << painterPartition(array, n,k) <<endl;


    return 0;
}