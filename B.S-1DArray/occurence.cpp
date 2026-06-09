#include<bits/stdc++.h>
using namespace std;

// first occurence:
int firstOccurence(int arr[],int n,int key){

    int low = 0, high = n-1;
    // store occurence
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == key){
            ans = mid;
            high = mid - 1;    // move left
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else high = mid - 1; 
    }
    return ans;
}

// last occurence:
int lastOccurence(int arr[],int n,int key){

    int low=0,high=n-1;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == key){
            ans = mid;
            low = mid + 1;   // move right
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else high = mid - 1; 
    }
    return ans;
}

// Occurence count:
int countOccurence(int arr[],int n,int key){

    int first = firstOccurence(arr,n,key);

    // if key not found
    if(first == -1){
        return 0;
    }

    int last = lastOccurence(arr,n,key);

    return last - first + 1;
}


int main() {

    int array[] = {1,2,3,3,3,3,3,4,5};
    int n = 9;
    int key = 3;

    cout <<"First Occurence is at index: "<< firstOccurence(array,n,key) <<endl;
    cout <<"Last Occurence is at index: "<< lastOccurence(array,n,key) <<endl;
    cout <<"Total Occurence of key(3): "<< countOccurence(array,n,key) <<endl;


    return 0;
}