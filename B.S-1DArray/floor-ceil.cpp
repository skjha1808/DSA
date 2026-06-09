#include<bits/stdc++.h>
using namespace std;

// The floor of x is the largest element in the array which is smaller than or equal to x(key)
int findFloor(int arr[],int n,int key){

    int low =0, high = n-1;
    int ans = -1;

    while(low <= high){
        int mid = low +(high-low)/2;

        if(arr[mid] <= key){
            ans = arr[mid];    // Potential floor
            low = mid + 1;     // search right side
        }
        else high = mid - 1;
    }
    return ans;
}

// The ceiling of x is the smallest element in the array greater than or equal to x
int findCeiling(int arr[],int n,int key){

    int low =0, high = n-1;
    int ans = -1;

    while(low <= high){
        int mid = low +(high-low)/2;

        if(arr[mid] >= key){
            ans = arr[mid];    // Potential ceil
            high = mid - 1;    // search left side
        }
        else low = mid + 1;
    }
    return ans;
}

int main() {

    int arr[] = {3, 4, 4, 7, 8, 10};
    int n =6, key = 8;

    cout <<"floor element is: " << findFloor(arr,n,key) <<endl;
    cout <<"ceiling element is: " << findCeiling(arr,n,key) <<endl;


    return 0;
}