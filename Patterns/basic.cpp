#include<bits/stdc++.h>
using namespace std;

int main() {

    int n=5;
    int num=1;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout << "*" <<" ";
    //     }
    //     cout << endl;
    // }

    // right triangle
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << "*" <<" ";
    //     }
    //     cout << endl;
    // }

    // inverted right triangle
    // for(int i=4;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout << "*" <<" ";
    //     }
    //     cout << endl;
    // }

    // right aligned-triangle
    // for(int i=1;i<=n;i++){
    //     // print spaces
    //     for(int s=1;s<=n-i;s++){
    //         cout << "-";
    //     }
    //     // print "*"
    //     for(int j=1;j<=i;j++){
    //         cout <<"*";
    //     }
    //     cout << endl;
    // }

    // 
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << j <<" ";
    //     }
    //     cout << endl;
    // }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << num <<" ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // hollow square
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(j==1 || j==n || i==1 || i==n)
    //             cout << "*" <<" ";
    //         else cout <<"  ";
    //     }
    //     cout << endl;
    // }

    // cross pattern
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(j==i || i+j==n+1)
    //             cout << "*" <<" ";
    //         else cout <<" ";
    //     }
    //     cout <<endl;
    // }

    // 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=n/2){
                if(i==n/2-i || j==n/2)
                    cout <<"*" <<" ";
                else cout << " ";
            }
            else {
                if(j==i-n/2 || i==(n-1)-(i-n/2))
                    cout <<"*" <<" ";
                else cout <<" ";
            }
        }
        cout <<endl;
    }


    return 0;
}