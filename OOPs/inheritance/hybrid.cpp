#include<bits/stdc++.h>
using namespace std;

class parent {

    public:
    void father_Mother() {
        cout << "Parent: Provides care and guidance." << endl;
    }
};

// Hierarchical inheritance
class son : virtual public parent {
    public:
    void sonTraits() {
        cout << "Son: Loves playing cricket." << endl;
    }
};

class daughter : virtual public parent {
    public:
    void daughterTraits() {
        cout << "Daughter: Loves painting and music." << endl;
    }
};

// Multiple inheritance
class grandChild : public son, public daughter {
    public:
    void grandChildTraits() {
        cout << "GrandChild: Loves coding and gaming." << endl;
    }
};


int main() {

    grandChild gc;
    gc.sonTraits();
    gc.daughterTraits();
    gc.grandChildTraits();

    // if we try to call father_Mother() directly without virtual keyword, it gives ambiguous error
    gc.father_Mother();    

    // also to resolve this, use scope resolution operator without virtual keyword in derived class
    // gc.son::father_Mother();
    // gc.daughter::father_Mother();

    return 0;
}

// Diamond problem is an ambiguity that arises in c++ during hybrid inheritance where a class inherits
// from two classes that both derive from a single common base class
// To resolve this ambiguity when class A is inherited in both class B & class C, it is declared
// as virtual base class by placing a keyword virtual
// virtual can be written before or after the public
// Virtual ensures Only one shared copy of A & Removes duplication