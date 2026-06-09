#include<bits/stdc++.h>
using namespace std;


// Calculate nCr = n! / (r! * (n-r)!): 
int factorial(int n){

    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n,int r){

    int num=factorial(n);
    int denom=factorial(r) * factorial(n-r);

    return num/denom;
}


// check prime number:
// 1 -> prime
// 0 -> not prime
bool isPrime(int n){

    for(int i=2;i<n;i++){
        if(n%i==0){return 0;}
    }
    return 1;
}


// reverse of a number:
int revNumber(int n){
    int ans=0;
    while(n){
        int digit=n%10;
        // if(n>INT_MAX/10 || n<INT_MIN/10){
        //     return 0;
        // }
        ans = ans*10 + digit;
        n=n/10;
    }
    return ans;;
} 


// check Palindrome number:
bool isPalindrome(int x){
    // negative numbers are never palindrome
    if(x<0){return 0;}

    long long revNum=0;
    int dummy=x;

    while(x){
        int digit=x%10;
        revNum = (revNum*10) + digit;
        x=x/10;
    }
    if(dummy==revNum){return 1;}
    else return 0;

}


// check Armstrong number:
bool isArmstrong(int num){
    // negative numbers are never armstrong
    if(num<0){return 0;}

    int digits=to_string(num).length();
    int ans = 0;
    int temp = num;

    while(num>0){
        int digit = num % 10;
        ans = ans + pow(digit,digits);
        num = num/10;
    }
    return temp == ans;
}


int main(){
    
    // int result=nCr(8,4);

    // int result=isPrime(2);
    // cout <<result;
    if(isPrime(21)){
        cout <<"is a prime number"<<endl;
    } else cout << "Not a prime number" <<endl;

    int result=revNumber(-123);
    cout <<"Reverse number is: "<<result<<endl;

    if(isPalindrome(121)){
        cout <<"is a palindrome "<<endl;
    } else cout <<"Not a palindrome "<<endl;
    
    if(isArmstrong(153)){
        cout <<"is an armstrong no. "<<endl;
    } else cout <<"Not an armstrong no. "<<endl;

    return 0;
}


