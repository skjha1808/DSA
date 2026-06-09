#include<iostream>
using namespace std;

int main(){

    // to check a number is prime or not:
    int num=21;
    int i=2;
    bool isPrime=true;

    while(i<num){
        if(num%i==0){
            isPrime=false;
            break;
        } 
        i=i+1;
    }
    if(isPrime){
        cout << "prime " << endl;
    } else cout << "not a prime"<<endl;

    // int num=21;
    // int i;
    // for(i=2;i<num;i++){
    //     if(num%i==0){
    //         cout << "not a prime "<< endl;
    //         break;
    //     } 
    // }
    // if(i==num){
    //     cout << "prime " << endl;
    // }


    // print first n prime numbers:
    // int n;
    // int i=2;
    // for(i=2;i<n;i++){
    //     if(n%2==0){
    //         continue;
    //     } else {
    //         cout << i <<endl;
    //     }
    // }

    // int n=11;
    // int i=2;
    // while(i<n){
    //     if(n%2!=0){
    //         cout << i << endl;
    //         break;
    //     }
    // }

    return 0;
}