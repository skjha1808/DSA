#include<bits/stdc++.h>
using namespace std;

// Constructor in inheritance:
class base{
    public:
    base(){
        cout << "Base Constructor " <<endl;
    }
};

class derived : public base{
    public:
    derived(){
        cout << "Derived Constructor " <<endl;
    }
};


// Parameterised Constructor
class parent{
    public:
    parent(int x){
        cout << "Parent: " << x <<endl;
    }
};

class child : public parent{
    public:
    // child(){
    //     // gives error because Parent has no default constructor
    // }

    // Solution: use initializer list
    child() : parent(10){
        cout << "Derived constructor " <<endl;
    }
};


int main(){
    derived d;

    child c;

    return 0;
}


// In inheritance, constructors are called automatically when an object of derived class is created.
// RULE: Base class constructor executes first, then derived class constructor
// because Derived class depends on base class & Base must be initialized before child uses it.
// Constructors are called top → down (Base → Derived)
// Destructor runs in reverse order (Derived → Base)