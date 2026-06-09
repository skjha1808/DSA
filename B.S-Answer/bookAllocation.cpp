#include<bits/stdc++.h>
using namespace std;

// Function to check if allocation is possible such that no student gets more than 'mid' pages
bool isPossible(int arr[], int n, int m, int mid){

    int studentCount = 1;     // start with first student
    int pageSum = 0;

    for(int i = 0; i < n; i++) {

        if(arr[i] > mid)        // if a single book has more pages than mid
            return false;

        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if(studentCount > m)     // // If studentCount exceeded  
                return false;

            pageSum = arr[i]; 
        }
    }

    return true;
}

// Main function to allocate books:
int bookAllocate(int arr[], int n, int m){

    // If students are more than books → impossible
    if(m > n)
        return -1;

    int maxi =0;
    int sum =0;

    // Calculate total pages and largest book
    for(int i=0;i<n;i++){
        sum += arr[i];
        maxi = max(maxi, arr[i]);
    }

    int low = maxi;      // minimum possible answer
    int high = sum;      // maximum possible answer
    int ans = -1;

    while(low <= high){
        int mid = low +(high-low)/2;

        if(isPossible(arr, n, m, mid)){
            ans = mid;       // possible solution
            high = mid -1;   // try smaller
        }
        else low = mid +1;   // increase limit
    }

    return ans;
}


int main() {

    int arr[] = {10,20,30,40,50};
    int n = 5;
    int m = 3;

    cout << "Minimum maximum pages: "<< bookAllocate(arr, n, m) <<endl;    


    return 0;
}