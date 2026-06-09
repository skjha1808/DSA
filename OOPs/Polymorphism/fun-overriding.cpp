#include<bits/stdc++.h>
using namespace std;

class animal {
    public:
    virtual void speak() {
        cout << "Speaking " <<endl;
    }
};

// function Overriding -> it is possible through inheritance only
class dog : public animal {
    public:
    void speak()  {   // same function name as well as parameter
        cout << "Barking " <<endl;
    }
};

class cat : public animal{
    public:
    void speak() {
        cout << "Meow " <<endl;
    }
};


int main() {
    animal *a;   // Declare base class pointer

    // Create objects of derived classes
    dog d;
    cat c;

    a = &d;    // Point to dog object
    a->speak();   // Call function using pointer

    a = &c;
    a->speak();

    return 0;
}