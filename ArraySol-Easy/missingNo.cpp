#include<bits/stdc++.h>
using namespace std;

// Using linear search
// T.C. = O((N^2)) & (S.C. = O(1))
int missingNumber(int arr[], int n){

    for(int i=1;i<=n;i++){   // check every number

        bool found = false;

        for(int j=0;j<n-1;j++){   // search in array
            if(arr[j] == i){
                found = true;
                break;
            }
        }

        if(found == false){
            return i;
        }
    }
}

// using sorting
// T.C. = O((N log N)) & (S.C. = O(1))
int findMissedNumber(int arr[], int n) {

    sort(arr, arr+n-1);

    for(int i=0;i<n-1;i++){
        if(arr[i] != i+1)
            return i+1;
    }

    return n;   // if last element is missing
}


// using hashing
// T.C. = O((N)) & (S.C. = O(N))
int missedNumber(int arr[], int n) {

    // Create Hash Array of size (n+1)
    int hash[n+1] = {0};

    for(int i=0;i<n-1;i++){   // Mark elements present in array
        hash[arr[i]] = 1;
    }

    for(int i=1;i<=n;i++){   // Find missing number
        if(hash[i] == 0)
            return i;
    }
}


// using sum formula -> n*(n+1)/2
// T.C. = O((N)) & (S.C. = O(1))
int findMissing(int arr[], int n) {

    // Calculate expected sum
    int totalSum = n*(n+1)/2;

    int sum = 0;   // Calculate array sum
    for(int i=0;i<n-1;i++){
        sum += arr[i];
    }

    return totalSum - sum;
}


// using XOR -> a ^ a = 0 & a ^ 0 = a
// T.C. = O((N)) & (S.C. = O(1))
int findMissingNumber(int arr[], int n) {

    int xor1 = 0;
    int xor2 = 0;

    // XOR all numbers from 1 to N
    for(int i=1;i<=n;i++){
        xor1 ^= i;
    }

    // XOR all array elements
    for(int i=0;i<n-1;i++){
        xor2 ^= arr[i];
    }

    return xor1 ^ xor2;
}


int main() {

    int array[] = {1,2,3,5};
    int n = 5;

    cout <<"Missing number: " << missingNumber(array,n) <<endl;

    cout <<"Missing number: " << findMissedNumber(array,n) <<endl;

    cout <<"Missing number: " << missedNumber(array,n) <<endl;

    cout <<"Missing number: " << findMissing(array,n) <<endl;

    cout <<"Missing number: " << findMissingNumber(array,n) <<endl;

    return 0;
}