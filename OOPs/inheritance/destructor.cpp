#include<bits/stdc++.h>
using namespace std;

// Destructor in inheritance:
class Base{
    public:
    ~Base(){
        cout << "Base destructor " <<endl;
    }
};

class Derived : public Base{
    public:
    ~Derived(){
        cout << "Derived destructor " <<endl;
    }
};


// virtual destructor
class parent{
    public:
    virtual ~parent(){
        cout << "parent destructor " <<endl;
    }
};

class child : public parent{
    public:
    ~child(){
        cout << "child destructor " <<endl;
    }
};


int main(){
    Derived obj;

    // Base *ptr = new Derived();
    // delete ptr;    
    // error -> print only base destructor not derived destructor which leads to memory/resource leak

    // solution -> use virtual destructor
    parent *pt = new child();
    delete pt;

    return 0;
}