#include<bits/stdc++.h>
using namespace std;

// find largest,second largest & Smallest,second smallest elements in an array
int main() {

    int arr[] = {10,3,6,9,49,1,33,74};
    int n = 8;

    int max = arr[0];
    int sMax = INT_MIN;

    int min = arr[0];
    int sMin = INT_MAX; 
    
    for(int i=1;i<n;i++) {

        // largest & second largest
        if(arr[i] > max){
            sMax = max;
            max = arr[i];
        }
        else {
            if(arr[i] < max && arr[i] > sMax){
                sMax = arr[i];
            }
        }

        // smallest & second smallest
        if(arr[i] < min){
            sMin = min;
            min = arr[i];
        }
        else {
            if(arr[i] > min && arr[i] < sMin){
                sMin = arr[i];
            }
        }
    }

    cout <<"Largest element is: " << max <<endl;
    cout <<"Second Largest element is: " << sMax <<endl;

    cout <<"Smallest element is: " << min <<endl;
    cout <<"Second Smallest element is: " << sMin <<endl;


    return 0;
}