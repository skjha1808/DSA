#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){

    int studentCount=1;
    int pageSum=0;

    for(int i=0;i<n;i++){

        // if(pageSum > mid)
        //     return false;

        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || pageSum > mid )
                return false;

            else pageSum = arr[i];
        }
    }
    return true;
}

int allocateBook(int arr[], int n, int m){

    int low =0;
    // int maxi=0;
    int sum=0;

    for(int i=0;i<n;i++){
        sum += arr[i];
        // maxi = max(maxi,arr[i]);
    }

    // int low = maxi;
    int high = sum;
    int ans = -1;

    while(low <= high){
        int mid = low +(high-low)/2;

        if(m>n) return -1;

        if(isPossible(arr,n,m,mid)){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}


int main() {

    int array[] = {12,34,67,90};
    int n=4;
    int m=2;

    cout <<"Mimimum max. pages: " << allocateBook(array,n,m) <<endl;


    return 0;
}