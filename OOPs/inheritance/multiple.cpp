#include<bits/stdc++.h>
using namespace std;

class father {

    public:
    void fatherSkills() {
        cout << "Father: Good at driving and repairing things." << endl;
    }
};

class mother {

    public:
    void motherSkills() {
        cout << "Mother: Good at cooking and teaching." << endl;
    }
};

// Multiple inheritance
class child : public father, public mother {
    public:
    void childSkills() {
        cout << "Child: Good at playing and learning." << endl;
    }
};


int main() {

    child c;
    c.fatherSkills();
    c.motherSkills();
    c.childSkills();

    return 0;
}