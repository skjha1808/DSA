#include<iostream>
using namespace std;

int main() {

    // Arithmetic operators:
    int m=10;
    int n=4;

    int sum=m+n;
    cout << sum << endl;

    int sub=m-n;
    cout << sub << endl;

    int mul=m*n;
    cout << mul << endl;

    int div=m/n;
    cout << div << endl;

    int mod=m%n;
    cout << mod << endl;

    float u=10;
    float v=4;
    float div1=u/v;
    cout << div1 << endl;
    // try once with double


    // Relational operators:
    int a=2;
    int b=3;
    // cout << (a>b) << endl;
    bool first=(a>b);
    cout << first << endl;

    bool sec=(a<b);
    cout << sec << endl;

    bool third=(a>=b);
    cout << third << endl;

    bool forth=(a<=b);
    cout << forth << endl;

    bool fifth=(a=b);
    cout << fifth << endl;

    bool sixth=(a!=b);
    cout << sixth << endl;


    // Assignment operators:
    int p=0;
    // int p=10;
    cout << !p << endl;
    
    int q=15;
    //q += 10;
    // q -= 10;
    // q = 5;
    q /= 3;
    cout << q << endl;

    
    // Logical operators:
    int r=10;
    int s=15;
    int t=20;

    bool one=(r<s && s<t);   // both conditions must be true
    cout << one << endl;

    bool two=(r>s || s<t);   // atleast one condition be true
    cout << two << endl;

    return 0;
}