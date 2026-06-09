#include<bits/stdc++.h>
using namespace std;

// Using SET: A set automatically removes duplicates.
// (T.C. = O(N*log N)) & (S.C. = O(N))
int removeDuplicateElement(int arr[], int n) {

    set<int> s;

    for(int i = 0; i < n; i++)
        s.insert(arr[i]);

    int i = 0;
    for(auto x : s) {
        arr[i++] = x;
    }

    return s.size();
}


// using two pointer method (T.C. = O(N))
int removeDuplicate(int arr[], int n){

    int i = 0;    // pointer for unique elements

    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            // Move pointer for unique element forward
            i++;
            // Place the new unique element at the next position
            arr[i] = arr[j]; 

            // arr[i+1] = arr[j];
            // i++;
        }
    }
    // i is index of last unique element, count = i + 1
    return i+1;   // new size of array
}


int main() {

    int array[] = {1,1,2,2,2,3,3};
    int n = 7;

    // int k = removeDuplicateElement(array,n);
    // cout << "Array will be: ";
    // for(int i=0;i<k;i++){
    //     cout << array[i] <<" ";
    // } cout <<endl;


    int newSize = removeDuplicate(array,n);
    cout << "New array: ";
    for(int i=0;i<newSize;i++){
        cout << array[i] <<" ";
    }
    cout <<endl;


    return 0;
}