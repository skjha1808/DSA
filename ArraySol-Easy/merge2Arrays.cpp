#include<bits/stdc++.h>
using namespace std;

// T.C. = O(n + m) & S.P. = O(n + m)
void mergedArray(int arr1[],int n, int arr2[],int m, int arr3[]){

    int i=0, j=0, k = 0;    // index of arr1, arr2 & arr3 respectively

    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    // Copy Remaining Elements of arr1
    while(i < n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    // Copy Remaining Elements of arr2
    while(j < m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
    
}


// T.C. = O(n + m) & S.P. = O(1), here no extra space used
void mergeSortedArray(int arr1[],int p,int arr2[],int q){

    int i = p-1, j = q-1, r = p+q-1;

    while(i >= 0 && j >= 0){

        if(arr1[i] > arr2[j]){
            arr1[r--] = arr1[i--];
        }
        else {
            arr1[r--] = arr2[j--];
        }
    }

    // Copy Remaining Elements of arr2
    while(j >= 0){
        arr1[r] = arr2[j];
        r--;
        j--;
    }
}

int main(){

    int arr1[] = {1,3,5,7,9};
    int arr2[] = {2,4,6};
    int n = 5, m = 3;

    int arr3[8];

    mergedArray(arr1,n,arr2,m,arr3);
    for(int i=0;i<n + m;i++){
        cout << arr3[i] <<" ";
    } cout <<endl;

    

    int array1[] = {1,2,3,0,0,0};
    int array2[] = {2,5,6};
    int p = 3, q = 3;

    mergeSortedArray(array1,p,array2,q);
    for(int i=0;i<p+q;i++){
        cout << array1[i] <<" ";
    }

    return 0;
}