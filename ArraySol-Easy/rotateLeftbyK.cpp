#include<bits/stdc++.h>
using namespace std;

// Left rotate the array by k places:
// Brute force approach (Rotate the array one position at a time and repeat it k times)
// (T.C. = O(N*K)) & (S.C. = O(1))
void leftRotate(int arr[], int n, int k) {

    // Normalize k if greater than n
    k = k % n;

    for(int j=0;j<k;j++){

        int temp = arr[0];

        for(int i=1;i<n;i++){
            arr[i-1] = arr[i];
        }
        arr[n-1] = temp;
    }
}

// Better approach (Store first k elements in a temporary array)
// (T.C. = O(N+K)) & (S.C. = O(K))
void rotateLeft(int arr[],int n,int k) {

    // Normalize k if greater than n
    k = k % n;

    int temp[k];

    // store first k elements
    for(int i=0;i<k;i++){
        temp[i] = arr[i];
    }

    // shift remaining elements left
    for(int i=k;i<n;i++){
        arr[i-k] = arr[i];
    }

    // copy temp to last
    for(int i=n-k;i<n;i++){
        arr[i] = temp[i-(n-k)];
    }
}

// Optimal solution 
// (T.C. = O(2N)) & (S.C. = O(1))
void rotateLeftByK(int arr[], int n, int k) {

    // Normalize k if greater than n
    k = k % n;

    // Step 1: Reverse first k elements
    reverse(arr, arr + k);

    // Step 2: Reverse remining elements
    reverse(arr + k, arr + n);

    // Step 3: Reverse whole array
    reverse(arr, arr + n);
}


int main() {

    int array[] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 3;

    // leftRotate(array,n,k);
    // for(int i=0;i<n;i++){
    //     cout << array[i] <<" ";
    // } cout <<endl;

    // rotateLeft(array,n,k);
    // for(int i=0;i<n;i++){
    //     cout << array[i] <<" ";
    // } cout <<endl;

    rotateLeftByK(array,n,k);
    for(int i=0;i<n;i++){
        cout << array[i] <<" ";
    } cout <<endl;


    return 0;
}