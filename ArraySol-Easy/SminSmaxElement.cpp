#include<bits/stdc++.h>
using namespace std;

// T.C. = O(N * log N)
void sMax(int arr[],int n){

    sort(arr, arr+n);
}

void sMin(int arr[],int n){

    sort(arr, arr+n);
}

// T.C. = O(N)
int sMaxElement(int arr[], int n){

    int max =arr[0];
    int smax = INT_MIN;    
    // INT_MIN = -2147483648 (INT_MIN → smallest possible integer)

    for(int i=1;i<n;i++){
        if(arr[i] > max){
            smax = max;
            max = arr[i];
        }
        else {
            // Element lies Between max and smax
            if(arr[i] < max && arr[i] > smax ){
                smax = arr[i];
            }
        }
    }
    
    return smax;
}

int sMinElement(int arr[], int n){

    int min =arr[0];
    int smin = INT_MAX;
    // INT_MAX = 2147483647 (INT_MAX → largest possible integer)

    for(int i=1;i<n;i++){
        if(arr[i] < min){
            smin = min;
            min = arr[i];
        }
        else {
            // Element lies Between min and smin
            if(arr[i] > min && arr[i] < smin){
                smin = arr[i];
            }
        }
    }

    return smin;
}


int main(){

    int array[] = {1,9,2,6,10,7};
    int n=6;

    sMax(array,n);
    cout << "Second Max element is: " << array[n-2] <<endl;

    sMin(array,n);
    cout << "Second Min element is: " << array[1] <<endl;

    cout << "Second Largest element is: " << sMaxElement(array,n) <<endl;
    cout << "Second Smallest element is: " << sMinElement(array,n) <<endl;


    return 0;
}