#include<bits/stdc++.h>
using namespace std;

// function ambiguity (Multiple inheritance) -> due to Two parent classes have same function name
class A {
    public:
    void abc(){
        cout << "i am A " <<endl;
    }
};

class B {
    public:
    void abc(){
        cout << "i am B " <<endl;
    }
};

class C : public A, public B {
    public:
    void abc(){
        cout << "i am C" <<endl;
    }
};


// Diamond problem (Hybrid inheritance) -> due to multiple copies
// Resolve by using virtual keyword
class W{
    public:
    int x;
    void show(){
        cout << "i am W " <<endl;
    }
};

class X : virtual public W{};
class Y : public virtual W{};

class Z : public Y, public X{
    public:
    int z;
};


int main(){

    C obj;
    // obj.abc();   // ambiguous error due to same function name

    obj.A::abc();
    obj.B::abc();
    obj.C::abc();


    Z object;
    object.show();
    // object.X::x = 10;
    // object.x = 10;

    return 0;
}


// Diamond problem is an ambiguity that arises in c++ during hybrid inheritance where a class inherits
// from two classes that both derive from a single common base class
// To resolve this ambiguity when class A is inherited in both class B & class C, it is declared
// as virtual base class by placing a keyword virtual
// virtual can be written before or after the public
// Virtual ensures Only one shared copy of A & Removes duplication