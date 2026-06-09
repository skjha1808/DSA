#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minIndex])
            minIndex=j;
        }
        swap(arr[minIndex], arr[i]);
        // int temp=minIndex;
        // minIndex=arr[i];
        // arr[i]=temp;
    }
}

int main(){

    int array[]={9,3,17,25,13,6,0};
    int n=7;

    selectionSort(array, n);

    for(int i=0;i<n;i++){
        cout << array[i] <<" ";
    }

    return 0;
}