#include<iostream>
using namespace std;

int main(){

    int a=3;   // this is accessible anywhere in this scope
    cout <<a<<endl;

    if(true){
        //int a=5;
        cout <<a<<endl;
        int b=7;
        cout <<b<<endl;
    }

    //int a=4;   // we can't redeclare 'a' in this scope
    cout <<a<<endl;
    // cout <<b<<endl;   // here, b is undefined 
    int b=9;
    //cout <<b<<endl;

    for(int i=0;i<8;i++){
        cout <<a<<" ";
    }
     

    return 0;
}