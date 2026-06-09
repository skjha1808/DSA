#include<iostream>
using namespace std;

int main(){
    
    // // Bitwise operators
    // int a=4;
    // int b=6;

    // cout <<"a&b: "<<(a&b) << endl;
    // cout <<"a|b: "<<(a|b) << endl;
    // cout <<"~a: "<<(~a) << endl;
    // cout <<"a^b: "<<(a^b) << endl;

    // // left shift(<<) & right shift(>>) operators:
    // cout <<(17>>1) <<endl;
    // cout <<(17>>2) <<endl;

    // cout <<(19<<1) <<endl;
    // cout <<(21<<2) <<endl;

    // // increment & decrement operastors:
    // int i=7;

    // cout <<(i++) <<endl;
    // // print 7, i=8
    // cout <<(++i) <<endl;
    // // 9, i=9
    // cout <<(i--) <<endl;
    // // 9, i=8
    // cout <<(--i) <<endl;
    // // 7, i=7

    // int a,b=1;
    // a=10;
    // if(++a){
    //     cout <<b<<endl;
    // } else cout <<(++b)<<endl;

    // int c=1,d=2;
    // //if(c-- > 0 || ++d > 2)
    // if(c-- > 0 && ++d <= 2) 
    // {
    //     cout << "yes" <<endl;
    // } else {
    //     cout <<"No"<<endl;
    // }
    // cout << c <<" " << d<<endl;

    // int num=3;
    // cout <<(25 * (++num)) <<endl;

    // int m=1;
    // int n=m++;
    // int o=++m;
    // cout <<n <<endl;
    // cout <<o <<endl;


    // break & continue:
    // for(int i=1;i<4;i++){
    //     cout <<"Hi"<<endl;
    //     cout <<"Hello"<<endl;
    //     continue;   // used to skip the loop
    //     cout <<"Atleast reply!"<<endl;
    // }

    // for(int i=1;i<5;i++){
    //     cout <<"Hey"<<endl;
    //     break;
    //     cout <<"How are you?"<<endl;
    // }

    int i,j;
    for(i=0;i<5;i=i+1){
        for(j=1;j<=i;j++){
            cout << i <<" "<< j <<endl;
            
        }
    }


    return 0;
}