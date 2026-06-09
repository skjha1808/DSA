#include<iostream>
using namespace std;

int main() {

    // int a=10;
    // if(a>0){
    //     cout << "a is positive" << endl;
    // }

    // check even or odd numbers:
    // int n=10;
    // if(n%2==0){
    //     cout << "even " <<endl;
    // } else {
    //     cout << "odd " <<endl;
    // }

    // int age=18;
    // if(age>=18){
    //     cout << "you are eligible to vote" << endl;
    // } else {
    //     cout << "not eligible to vote" << endl;
    // }

    // int num=-5;
    // if(num>0){
    //     cout << "number is positive" <<endl;
    // } else if(num<0){
    //     cout << "number is negative" << endl;
    // } else cout << "number is zero" << endl;

    int u=2;
    int v=u+1;
    if((u=3)!=v){
        cout << u <<endl;
    } else cout << u+1 <<endl;

    
    char ch='x';
    if(ch>='a' && ch<='z'){
        cout << "lowercase" <<endl;
    } else if(ch>='A' && ch<'Z'){
        cout << "uppercase" << endl;
    } else if(ch>=0 && ch<=9) {
        cout << "numeric value" << endl;
    } else cout << "special character" << endl;

    return 0;
}