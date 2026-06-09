#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}

int main(){

    int array[]={9,3,17,25,13,6,0};
    int n=7;

    bubbleSort(array, n);

    for(int i=0;i<n;i++){
        cout << array[i] <<" ";
    }

    return 0;
}