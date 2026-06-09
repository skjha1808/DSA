#include<bits/stdc++.h>
using namespace std;

int countRotate(int arr[],int n){

    int low =0, high = n-1;

    while(low < high){
        int mid = low +(high-low)/2;

        if(arr[mid] > arr[high])
            low = mid +1;
        else high = mid;
    }
    return low;
}

int main() {

    int arr[] ={4,5,6,7,1,2,3};
    int n = 7;

    cout <<"Rotation count: " << countRotate(arr,n) <<endl;


    return 0;
}