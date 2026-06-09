#include<bits/stdc++.h>
using namespace std;


// (T.C. = O(N)) & (S.C. = O(N))
// Left rotate by 1 place
void rotateLeft(int arr[], int n) {

    // Create a temporary array to store the shifted elements
    int temp[n];

    // Shift the elements to the left by one position
    for(int i=1;i<n;i++){
        temp[i-1] = arr[i];
    }
    // The first element moves to the last position
    temp[n-1] = arr[0];

    // print the rotated array
    for(int i=0;i<n;i++){
        cout << temp[i] <<" ";    // Print each element of the rotated array
    } cout <<endl;
}

// (T.C. = O(N)) & (S.C. = O(1))
void leftRotate(int arr[], int n) {\

    // Store the first element in a temporary variable
    int temp = arr[0];

    // Shift elements to the left
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    // Place the first element at the end
    arr[n-1] = temp;

}


// Right rotate by 1 place
void rotateRight(int arr[], int n) {

    // Create a temporary array to store the shifted elements
    int temp[n];

    // Shift the elements to the right by one position
    for(int i=n-1;i>0;i--){
        temp[i] = arr[i-1];
    }
    // The last element moves to the first position
    temp[0] = arr[n-1];

    // print the rotated array
    for(int i=0;i<n;i++){
        cout << temp[i] <<" ";    // Print each element of the rotated array
    } cout <<endl;
}

void rightRotate(int arr[],int n) {

    // Store the last element in a temporary variable
    int temp = arr[n-1];

    // Shift elements to the right
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    // Place the last element at the start
    arr[0] = temp;
}


int main() {

    int array[] = {1,2,3,4,5,6};
    int n=6;

    // call the function
    // rotateLeft(array,n);

    // leftRotate(array,n); 
    // for(int i=0;i<n;i++){
    //     cout << array[i] <<" ";
    // }cout <<endl;


    // call the function
    rotateRight(array,n);

    rightRotate(array,n); 
    for(int i=0;i<n;i++){
        cout << array[i] <<" ";
    }cout <<endl;

    return 0;
}