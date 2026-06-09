#include<bits/stdc++.h>
using namespace std;

// using linear search
// T.C. = O(M)
int nthRoot(int m, int n){

    for(int i=1;i<=m;i++){
        // Compute i^n
        long long power = pow(i,n);

        // If equal to m, return i
        if(power == m) return i;

        // If exceeds m, break
        if(power > m) break;
    }
    // If not found, return -1
    return -1;
}

// using Binary search
// T.C. = 0(N*log M)
int findNthRoot(int m,int n){

    int low = 1;
    int high = m;

    while(low <= high){
        int mid = low +(high-low)/2;
        
        // Store result of mid^n
        long long ans = 1;
        for(int i=0;i<n;i++){
            ans = ans * mid;
            if(ans > m) break;
        }

        // If mid^n equals m
        if(ans == m) return mid;

        // If mid^n is less than m
        if(ans < m) low = mid + 1;
        
        // If mid^n is more than m
        else high = mid - 1;
    }
    // Return -1 if not found
    return -1;
}

int main() {

    int m = 64;
    int n = 3;

    cout <<"Nth root: " <<nthRoot(m,n) <<endl;

    cout <<"Nth Root: " <<findNthRoot(m,n) <<endl;

    return 0;
}