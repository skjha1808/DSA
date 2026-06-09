#include<bits/stdc++.h>
using namespace std;

class parent {

    public:
    void father_Mother() {
        cout << "Parent: Provides care and guidance." << endl;
    }
};

// Hierarchical inheritance
class son : public parent {
    public:
    void sonTraits() {
        cout << "Son: Loves playing cricket." << endl;
    }
};

class daughter : public parent {
    public:
    void daughterTraits() {
        cout << "Daughter: Loves painting and music." << endl;
    }
};


int main() {

    son s;
    s.father_Mother();
    s.sonTraits();

    daughter d;
    s.father_Mother();
    d.daughterTraits();


    return 0;
}