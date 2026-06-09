#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){

    // first element is already considered sorted, i.e. -> i=0;
    for(int i=1;i<n;i++){
        int temp = arr[i];   // element to be placed correctly
        int j = i-1;   // compare witn left side elements

        // shift elements greater than temp to right
        while(j >=0){
            if(arr[j] > temp){
                // shift arr[j]
                arr[j+1] = arr[j];
                j--;
            }
            else break;
        }
        arr[j+1] = temp;   // place temp at correct position
    }
}

int main(){

    int array[]={9,3,17,25,13,6,0};
    int n=7;

    insertionSort(array, n);

    for(int i=0;i<n;i++){
        cout << array[i] <<" ";
    }

    return 0;
}