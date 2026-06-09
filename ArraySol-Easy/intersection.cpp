#include<bits/stdc++.h>
using namespace std;

// T.C. = O((N*M)) & (S.C. = O(M))
int intersectionArray(int arr1[],int n, int arr2[],int m, int result[]) {

    int k = 0;   // intersection counter
    int vis[m] = {0};

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            // if Elements must be equal & arr2 element must not be used before
            if(arr1[i] == arr2[j] && vis[j] == 0){
                result[k++] = arr1[i];   // store element in result
                vis[j] = 1;   // marked as visited
                break;
            }

            // This works if arrays are sorted.
            // if(arr2[j] > arr1[i])
            //     break;
        }
    }

    return k;   // size of intersection
}

// Using two pointers
// T.C. = O((N+M)) & (S.C. = O(1))
vector<int> intersectionSortedArray(int arr1[],int arr2[],int n,int m) {

    vector<int> result;   // it stores common elements of both arrays.
    int i = 0, j = 0;

    while(i < n && j < m){
        if(arr1[i] < arr2[j])
            i++;
        else if(arr1[i] > arr2[j])
            j++;
        else {
            result.push_back(arr1[i]);   // add to intersection
            i++;
            j++;
        }
    }

    return result;
}


int main() {

    int array1[] = {1,2,2,3,4,5};
    int array2[] = {2,2,3,5,6};
    int n = 6, m = 5;

    int result[min(n,m)];   // result array (maximum possible intersection)
    
    int ans = intersectionArray(array1,n,array2,m,result);
    for(int i=0;i<ans;i++){
        cout << result[i] <<" ";
    } cout <<endl;


    vector<int> size = intersectionSortedArray(array1,array2,n,m);
    for(int x : size){
        cout << x <<" ";
    } cout <<endl;


    return 0;
}