#include<iostream>
using namespace std;

// syntax of function:
// return-type function-name(parameters){
//     // function body
//     return value;
// } 

// Add two integers:
int add(int a,int b) {   // function declaration & definition start
    // function body
    int sum=a + b;    
    return sum;

}

// square of number:
int square(int num) {
    return num * num;
}

// power of any integers:
int power(int c,int d){

    int ans=1;
    for(int i=1;i<=d;i++){
        ans=ans*c;
    }
    return ans;
}

bool isEven(int num){

    // if(num%2==0){return 1;}
    // return 0;

    if(num&1){return 0;}
    return 1;
}

// Calculate factorial: 
int factorial(int n){

    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

// print counting:
void count(int n){

    for(int i=1;i<=n;i++){
        cout << i <<" ";
    }
    // return;
}


int main() {

    // function call:
    // int result=add(5,10); 

    // cout << square(10)<<endl;

    // int result=power(2,10);

    // int result=isEven(11);

    //int result=factorial(5);
    //cout <<result<<endl;

    count(10);

    
    return 0;
}