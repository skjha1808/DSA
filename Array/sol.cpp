#include<bits/stdc++.h>
using namespace std;

// find unique element using XOR (works only when others appear twice)
int findUnique(int array[],int size){
    int ans=0;
    // xor array elements
    for(int i=0;i<size;i++){
        ans = ans^array[i];    
    }
    return ans;
}


// find duplicates in array using XOR (xor works only when 1 element is duplicated)
int findDuplicate(int array[],int size){
    int ans=0;
    // xor array elements
    for(int i=0;i<size;i++){
        ans = ans^array[i]; 
    }
    // xor number 1 to size-1
    for(int i=1;i<size;i++){
        ans = ans^i;    
    }
    return ans;
}

// intersection of two arrays:
void intersection(int arr1[],int n1,int arr2[],int n2){

    int i=0,j=0;   // two pointers
    // sort both arrays
    sort(arr1, arr1+n1);
    sort(arr2, arr2+n2);
    
    // cout <<"Intersection of two arrays are: ";

    while(i<n1 && j<n2){
        if(arr1[i] == arr2[j]){
            cout << arr1[i] <<" ";
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else {
            j++;
        }
    }
}

// union of two arrays:


int main(){

    int arr[5]={1,3,5,3,1};
    int arr1[6]={1,2,3,4,5,1};

    int array1[]={4,2,6,1,8,10,12};
    int array2[]={1,2,3,4,5};
    int n1=7,n2=5;

    // function call:
    cout <<"unique element is: " << findUnique(arr,5) <<endl;

    cout <<"duplicate element is: " << findDuplicate(arr1,6) <<endl;

    cout <<"Intersection of two arrays are: ";
    intersection(array1,n1, array2,n2);


    return 0;
}