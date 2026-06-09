#include<bits/stdc++.h>
using namespace std;

// Rotate array by K places without using STL:
// (T.C. = O(N)) & (S.C. = O(1))
void reverseArray(int arr[], int low, int high){

    while(low < high) {

        // swapping of elements
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

void rotateLeft(int arr[], int n, int k) {

    k = k % n;    // normalization of k, when k > n

    // reverse first k elements
    reverseArray(arr,0,k-1);
    // reverse remaining elements
    reverseArray(arr,k,n-1);
    // reverse whole array
    reverseArray(arr,0,n-1);

}

void rotateRight(int arr[], int n, int k) {

    k = k % n;
    
    // reverse whole array
    reverseArray(arr,0,n-1);
    // reverse k elements
    reverseArray(arr,0,k-1);
    // reverse remaining elements
    reverseArray(arr,k,n-1);

}

int main() {

    int array[] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 10;

    // rotateLeft(array,n,k);
    // for(int i=0;i<n;i++){
    //     cout << array[i] <<" ";
    // } cout <<endl;

    rotateRight(array,n,k);
    for(int i=0;i<n;i++){
        cout << array[i] <<" ";
    } cout <<endl;

    return 0;
}