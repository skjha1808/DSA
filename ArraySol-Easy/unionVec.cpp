#include<bits/stdc++.h>
using namespace std;

// using stl set:
// (T.C. = O((N+M)log(N+M)) & (S.C. = O(N+M))
// Function to find the union of two arrays using set
vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
    // Create a set to store unique elements
    set<int> st;

    // Insert elements from first array
    for (int i = 0; i < n; i++) {
        st.insert(arr1[i]);
    }

    // Insert elements from second array
    for (int i = 0; i < m; i++) {
        st.insert(arr2[i]);
    }

    // Convert set into vector
    vector<int> unionArr(st.begin(), st.end());
    return unionArr;
}


// using two pointers method:
// (T.C. = O((N+M)) & (S.C. = O(N+M))
// Function to find union of two sorted arrays using two pointers
vector<int> unionArray(int arr1[], int n, int arr2[], int m)
{
    // Vector to store union elements
    vector<int> result;
    // Initialize two pointers for both arrays
    int i = 0, j = 0;

    // Loop until either pointer reaches the end
    while(i < n && j < m)
    {
        if(arr1[i] <= arr2[j])
        {  // Add element if union empty or different from last added
            if(result.size() == 0 || result.back() != arr1[i])
                result.push_back(arr1[i]);
            i++;
        }
        else
        {  // Add element if union empty or different from last added
            if(result.size() == 0 || result.back() != arr2[j])
                result.push_back(arr2[j]);
            j++;
        }
    }

    // Append remaining elements from arr1
    while(i < n)
    {
        if(result.size() == 0 || result.back() != arr1[i])
            result.push_back(arr1[i]);
        i++;
    }

    // Append remaining elements from arr2
    while(j < m)
    {
        if(result.size() == 0 || result.back() != arr2[j])
            result.push_back(arr2[j]);
        j++;
    }

    // Return the final union vector
    return result;
}


int main()
{
    int arr1[] = {1,2,2,3,4};
    int arr2[] = {2,3,5,6};

    int n = 5, m = 4;

    vector<int> result = findUnion(arr1, arr2, n, m);
    // print union array
    for(int x : result){
        cout << x << " ";
    } cout <<endl;


    vector<int> ans = unionArray(arr1,n,arr2,m);
    for(int x : ans){
        cout << x << " ";
    } cout <<endl;


    return 0;
}