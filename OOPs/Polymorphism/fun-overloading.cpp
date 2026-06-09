#include<bits/stdc++.h>
using namespace std;

// function overloading with different numbers of arguments
class sum {
    public:
    // function with two parameters
    int add(int a, int b){
        return a+b;
    }
    // function with three parameters
    int add(int a, int b, int c){
        return a+b+c;
    }
};

// function overloading with different types of argumants
class subtract {
    public:
    // function with two int parameters
    int sub(int a, int b){
        return a-b;
    }
    // function with two double parameters
    double sub(double a, double b){
        return a-b;
    }
};

// function overloading with default arguments
class Add {
    public:
    int add(int a, int b, int c=10, int d=20){
        return a+b+c+d;
    }
};


int main() {

    sum s1;
    cout << s1.add(10,20) <<endl;
    cout << s1.add(10,20,30) <<endl;

    subtract s2;
    cout << s2.sub(20,10) <<endl;
    cout << s2.sub(20.5,10.1) <<endl;

    Add a;
    cout << a.add(5,15) <<endl;
    cout << a.add(5,15,25) <<endl;
    cout << a.add(5,15,25,35) <<endl;

    return 0;
}