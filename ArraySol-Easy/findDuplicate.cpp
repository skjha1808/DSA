#include<bits/stdc++.h>
using namespace std;

// Method-1: using two loops (T.C. = O(N*N))
void duplicateFound(int arr[], int n) {
    
    cout<< "Duplicates: ";

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                cout << arr[i] <<" ";
                break;
            }
        }
    }
}


// Method-2: using sorting (T.C. = O(N*log N))
void findDuplicate(int arr[], int n){

    sort(arr, arr+n);
    bool found = false;    // flag variable

    // sorting in descending order
    // sort(arr, arr + n, greater<int>());

    for(int i=1;i<n;i++){
        if(arr[i] == arr[i-1]){
        cout << arr[i] << " ";
        found = true;

        // skip duplicates (in case of multiple duplicates)
        while(i < n-1 && arr[i] == arr[i+1])
            i++;
        }
    }
    cout <<endl;

    if(found == false){
        cout <<"No duplicates found! " <<endl;
    }
}


// Method-3: using Hash Map (T.C. = O(N))
void findDuplicates(int arr[], int n) {

    unordered_map<int, int> freq;
    bool found = false;   // flag variable

    // Count frequency
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;      // Very important line
        // This does two things:
        // Step 1:
        // If arr[i] does NOT exist in map →
        // it automatically creates it with value 0.
        // Step 2:
        // It increases its frequency by 1.

        if(freq[arr[i]] == 2) {      // print duplicates only once
            cout << arr[i] << " ";
            found = true;
        }
    }

    if(!found)
        cout << "No duplicates found! " << endl;
}


int main() {

    int array[] = {1,2,5,3,2,2,4,1,1,1};
    int n = 9;

    findDuplicate(array,n);

    int array1[] = {1,2,3,4,5,6,7,8,9};
    findDuplicates(array1,9);

    int array2[] = {1,2,3,4,5,6,3,1,2};
    duplicateFound(array2,9);


    return 0;
}