#include<bits/stdc++.h>
using namespace std;

// int main(){

//     int arr[10]={1,32,3,24,5,-8,10,55,40,-10};
//     int key;
//     bool found=false;

//     cout <<"Enter number to be search: "<<endl;
//     cin >> key;
    
//     for(int i=0;i<10;i++){
//         if(arr[i]==key){
//             cout << "Key found at index "<< i <<endl;
//             found=true;
//             break;
//         }
//     }

//     if(found==false){
//         cout <<"Key not found "<<endl;
//     }
    
//     return 0;
// }


// linear search by the use of function
int linearSearch(int array[], int size, int key){

    for(int i=0;i<size;i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[10]={1,32,3,24,5,-8,10,55,40,-10};
    int key=-8;
    int n=10;

    int result = linearSearch(arr,n,key);

    if(result == -1){
        cout <<"Key not found! "<<endl;
    } else {
        cout <<"Key found at index: " << result << endl;
    }

    return 0;
}