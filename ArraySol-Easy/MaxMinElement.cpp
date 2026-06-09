#include<bits/stdc++.h>
using namespace std;

// T.C. = O(N * log N)
void maxElement(int arr[], int n){

    sort(arr, arr+n);
}

void minElement(int arr[], int n){

    sort(arr, arr+n);
}

// T.C. = O(N)
int largestElement(int arr[],int n){

    int max = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int smallestElement(int arr[],int n){

    int min = arr[0];
    
    for(int i=1;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main() {

    int array[] = {1,9,2,6,10,7};
    int n=6;

    maxElement(array,n);
    cout << "Max element is: " << array[n-1] <<endl;

    minElement(array,n);
    cout << "Min element is: " << array[0] <<endl;


    cout << "Largest element is: " << largestElement(array,n) <<endl;
    cout << "Smallest element is: " << smallestElement(array,n) <<endl;


    return 0;
}