#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

void bubbleSort(int arr[], int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1])
            swap(arr[j+1], arr[j]);
        }
    }
}

void insertionSort(int arr[], int n){

    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j >= 0){
            if(arr[j] > key){
                arr[j+1] = arr[j];
                j--;
            }
            else break;
        }
        arr[j+1] = key;
    }
}

int main() {

    int array[] = {10,3,21,6,17,9};
    int array1[] = {10,1,7,6,14,9};
    int array2[] = {10,1,7,4,8,2};
    int n = 6;

    // function call:
    selectionSort(array, n);

    bubbleSort(array1, n);

    insertionSort(array2, n);

    for(int i=0;i<n;i++){
        cout << array2[i] <<" ";
    }

    return 0;
}