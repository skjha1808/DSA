#include<bits/stdc++.h>
using namespace std;

// Right Rotate the array by k places:
// (T.C. = O(N*K)) & (S.C. = O(1))
void rightRotate(int arr[], int n, int k){

    // Normalize k if greater than n
    k = k % n;

    for(int j=0;j<k;j++){

        int temp = arr[n-1];

        for(int i=n-1;i>0;i--){
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
    }

}

// (T.C. = O(N+K)) & (S.C. = O(K))
void rotateRight(int arr[], int n, int k){

    // Normalize k if greater than n
    k = k % n;

    int temp[k];

    // store last k elements
    for(int i=0;i<k;i++){
        temp[i] = arr[n-k+i];
    }

    // shift remaining elements to right
    for(int i=n-k-1;i>=0;i--){
        arr[i+k] = arr[i];
    }

    // copy temp to beginning
    for(int i=0;i<k;i++){
        arr[i] = temp[i];
    }

}

// (T.C. = O(2N)) & (S.C. = O(1))
void rotateRightByK(int arr[], int n, int k){

    // Normalize k if greater than n
    k = k % n;

    // Reverse whole array
    reverse(arr, arr + n);

    // reverse k elements
    reverse(arr, arr + k);

    // reverse remaining elements
    reverse(arr + k, arr + n);

}


int main() {

    int array[] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 2;

    // rightRotate(array, n, k);
    // for(int i=0;i<n;i++){
    //     cout << array[i] <<" ";
    // } cout <<endl;

    rotateRight(array, n, k);
    for(int i=0;i<n;i++){
        cout << array[i] <<" ";
    } cout <<endl;

    // rotateRightByK(array, n, k);
    // for(int i=0;i<n;i++){
    //     cout << array[i] <<" ";
    // } cout <<endl;


    return 0;
}