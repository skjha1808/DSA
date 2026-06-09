#include<bits/stdc++.h>
using namespace std;

void printArray(int array[], int size){

    cout <<"printing the array: "<<endl;
    for(int i=0;i<size;i++){
        cout << array[i]<<" ";
    }
    cout <<" printing done "<<endl;
}

// find maximun & minimum value of an array
int getMax(int array[],int size){

    int maxi=INT_MIN;
    for(int i=0;i<size;i++){

        // predefined function for maximum
        maxi = max(maxi,array[i]);

        // if(array[i] > maxi){
        //     maxi = array[i];
        // }
    }
    return maxi;
}

int getMin(int array[],int size){

    int mini=INT_MAX;
    for(int i=0;i<size;i++){

        // predefined function for minimum
        mini = min(mini,array[i]);

        // if(array[i] < mini){
        //     mini = array[i];
        // }
    }
    return mini;
}

int main(){

    // int arr[5]={1,5,10,15,20};
    // printArray(arr,5);   // call the function named printArray

    // int arr1[8]={0};
    // printArray(arr1,8);

    // int arr2[10]={2,5};
    // printArray(arr2,10);

    int arr3[10]={10,-19,5,50,25,75,60,100,0,-10};

    cout <<"Maximum value is: "<< getMax(arr3,10) <<endl;
    cout <<"Minimum value is: "<< getMin(arr3,10) <<endl;


    return 0;
}