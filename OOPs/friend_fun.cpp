#include<bits/stdc++.h>
using namespace std;

// void funC(){
//     static int count = 0 ;
//     count++;
//     cout << count << " ";
// }


// int main() {

//     for(int i=0;i<5;i++){
//         funC();
//     }

//     return 0;
// }

// In c++ a friend function is a non-member function that is granted a special permission
// to access the private & protected members of a class 

// static -> it is a keyword in c++ ....
// static elements are allocated storage only once in a program lifetime in static storage area
// & they have a scope till the program lifetime

// static variable -> it is initialized only once. it can be defined inside or outside the function
// the default value of static variable is 0

// static function -> in c++ it is a member function that belong to a class rather than 
// an instance of a class. they can be called on the class itself without creating an object.

class math{
    public:
    static int max(int a, int b){
        if(a > b)
            return a;
        else return b;
    }
};

int main(){
    int a=7, b=5;
    int ans = math::max(a,b);
    cout << ans <<endl;

    return 0;
}