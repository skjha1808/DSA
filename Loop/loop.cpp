#include<iostream>
using namespace std;

int main(){

    // print 1 to 10:
    // int i;
    // for(i=1;i<=10;i++){
    //     cout << i <<endl;
    //     //i++;   // behaves like i=i+2
    // }

    // int i=10;   // initialization
    // while(i>0){   // condition
    //     cout << i <<' ';
    //     i--;   // updation
    // }

    // int i=1;   // initialization
    // do{
    //     cout << i <<endl;
    //     i++;   // updation
    // } while(i<=10);   // condition


    // print sum of first n natural numbers:
    // int i;
    // int sum=0;
    // for(i=1;i<=5;i++){
    //     sum = sum + i;
    // }
    // cout << "value of sum is: " << sum <<endl;
    
    // int i=1;
    // int sum=0;
    // while(i<=5){
    //     sum=sum+i;
    //     i=i+1;
    // }
    // cout << sum ;

    // int i=1;
    // int sum=0;
    // do{
    //     sum += i;
    //     i=i+1;
    // } while(i<6);
    // cout << sum;


    // print first n even & odd numbers:
    // int i;
    // for(i=2;i<11;i=i+2){
    //     cout << i <<" ";
    // }

    // int i=1;
    // while(i<10){
    //     cout << i <<' ';
    //     i=i+2;
    // }


    // print sum of first n even numbers & odd numbers:
    // int i;
    // int sum=0;
    // for(i=2;i<=10;i=i+2){
    //     sum=sum+i;
    // }
    // cout << "sum of even numbers: " << sum <<endl;

    // int i=1;
    // int sum=0;
    // while(i<10){
    //     sum += i;
    //     i = i+2;
    // }
    // cout << "sum of odd numbers: " << sum <<endl;


    // print fibonacci numbers:
    // int n=10;
    // int a=0,b=1;
    // cout <<a <<" "<<b<< " ";
    // for(int i=1;i<=n;i++){
    //     int fibo=a+b;
    //     cout <<fibo <<" ";

    //     a=b;
    //     b=fibo;
    // }


    // check prime or not:
    int i,n=21;
    bool isPrime=1;
    for(i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;   // to stop the loop
        }
    }
    if(isPrime && n>1){
        cout <<"prime"<<endl;
    } else{
        cout <<"not a prime"<<endl;
    } 

    // int n=21;
    // int i=2;
    // bool isPrime=true;
    // while(i<n){
    //     if(n%i==0){
    //         isPrime=false;
    //         break;
    //     } 
    //     i++;
    // }
    // if(isPrime){
    //     cout << "prime" <<endl;
    // } else cout <<"not a prime"<<endl;

    return 0;
}