#include<bits/stdc++.h>
using namespace std;

// Method-1: using Set
// (T.C. = O((N+M)log(N+M)) & (S.C. = O(N+M))
int unionSortedArray(int arr1[],int arr2[],int n,int m,int result[]) {

    // Create a set to store unique elements
    set<int> st;

    // insert elements of arr1
    for(int i=0;i<n;i++){
        st.insert(arr1[i]);
    }

    // insert elements of arr2
    for(int i=0;i<m;i++){
        st.insert(arr2[i]);
    }

    int k = 0;

    // copy set elements into result array
    for(auto x : st){
        result[k++] = x;
    }

    return k;    // size of union array
}


// Method-2: using Two pointers methods
// (T.C. = O(N+M)) & (S.C. = O(N+M))
int unionArray(int arr1[],int n,int arr2[],int m,int result[]) {

    int i = 0, j = 0;    // traverse arr1 & arr2 respectively
    int k = 0;    // store union in result

    // Loop until either pointer reaches the end
    while(i < n && j < m) {

        if(arr1[i] < arr2[j]){
            // Add element if union empty or different from last added
            if(k == 0 || result[k-1] != arr1[i]){
                result[k++] = arr1[i];
                i++;
            }
        }
        else if(arr1[i] > arr2[j]){
            if(k == 0 || result[k-1] != arr2[j]){
                result[k++] = arr2[j];
                j++;
            }
        }
        else {
            // Elements are equal, add once if not duplicate
            if(k == 0 || result[k-1] != arr1[i]){
                result[k++] = arr1[i];
                i++;
                j++;
            }
        }
    }

    // Append remaining elements from arr1
    while(i < n){
        if(k == 0 || result[k-1] != arr1[i]){
            result[k++] = arr1[i];
            i++;
        }
    }

    // Append remaining elements from arr2
    while(j < m){
        if(k == 0 || result[k-1] != arr2[j]){
            result[k++] = arr2[j];
            j++;
        }
    }

    return k;    // size of union array
}


int main() {

    int array1[] = {1,2,3,4,5};
    int n = 5;
    int array2[] = {2,3,4,5,6};
    int m = 5;

    int result[n+m];

    // using set
    int sizee = unionSortedArray(array1,array2,n,m,result);
    for(int i=0;i<sizee;i++){
        cout << result[i] <<" ";
    } cout <<endl;

    // using two pointers
    int size = unionArray(array1,n,array2,m,result);
    for(int i=0;i<size;i++){
        cout << result[i] <<" ";
    } cout <<endl;


    return 0;
}