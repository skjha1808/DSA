#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key)
        return i;
    }
    return -1;
}


int main() {

    int array[] = {1,20,15,3,9,7};
    int n=7;
    int key=32;

    int result = linearSearch(array,n,key);

    if(result != -1){
        cout <<"Key found at index: " << result <<endl;
    } else cout << "Key not found! "<<endl;;


    return 0;
}