#include<bits/stdc++.h>
using namespace std;

// Using sqrt() function:
int findSqrt(int n){

   return sqrt(n);
}

// using linear search (T.C. = O(N))
int floorSqrt(int n){

    int ans = 0;

    for(int i=1;i<=n;i++){
        if((long long) i*i <= n) {
            ans = i;
        }
        else 
        // Break when i*i > n
        {break;}
    }
    return ans;
}

// T.C. = O(log N)
// using binary search (integer part only):
int sqrtInt(int n){

    // Handle small numbers directly
    if (n < 2) return n;

    // Initialize binary search range
    int low = 1, high = n;
    int ans = 0;

    while(low <= high){
        long long  mid = low + (high-low)/2;
        // long long square = mid*mid;

        if(mid*mid == n)
            return mid;     // perfect square
        else if(mid*mid < n){
            ans = mid;     // store possible ans
            low = mid + 1;    // move right
        }
        else high = mid - 1;    // move left
    }
    return ans;    // floor value
}

// SQRT with decimal precision:
// Precision is the number of digits after the decimal point that we want in the result.
double morePrecision(int n, int precision, int tempSol){

    double factor = 1;
    double ans = tempSol;

    for(int i=0;i<precision;i++){
        factor = factor/10;
        for(double j=ans;j*j < n;j=j+factor){
            ans = j;
        }
    }
    return ans;
}


int main() {

    int n = 37;

    cout << "sqrt: " << findSqrt(n) <<endl;

    cout <<"Floor SQRT: " << floorSqrt(n) <<endl;

    cout <<"Int SQRT: " << sqrtInt(n) <<endl;

    int tempSol = sqrtInt(n);
    cout <<"Sqrt in precision: " << morePrecision(n,3,tempSol) <<endl;

    
    return 0;
}