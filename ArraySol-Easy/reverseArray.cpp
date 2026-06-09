#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n, int m){

    // int low = 0, high = n-1;     // reverse whole array
    int low = m + 1, high = n-1;    // reverse to a specific position

    while(low < high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}


int main(){

    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    int m = 3;

    reverseArray(arr,n,m);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}