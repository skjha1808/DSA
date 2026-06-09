#include<bits/stdc++.h>
using namespace std;

bool isSorted(int array[],int size){

    for(int i=0;i<size-1;i++){
        if(array[i] > array[i+1]){
            return false;
        }
    }
    return true;
}

int main(){

    int arr[5]={10,20,30,4,50};
    int n=5;

    // int sorted=true;
    // for(int i=0;i<n-1;i++){
    //     if(arr[i] > arr[i+1]){
    //         sorted=false;
    //         break;
    //     }
    // }

    // if(sorted==true){
    //     cout <<"Array is sorted "<<endl;
    // } else cout <<"Array is not sorted "<<endl;


    // call the function
    if(isSorted(arr,5)){
        cout <<"array is sorted "<<endl;
    } else {
        cout <<"array is not sorted "<<endl;
    }

    return 0;
}