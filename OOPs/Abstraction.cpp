#include<bits/stdc++.h>
using namespace std;

// using Access Modifiers (Basic Abstraction)
class student {

    private:
    int marks;    // hidden
    
    public:
    int getMarks(){
        return marks;
    }

    void setMarks(int m){
        marks = m;
    }
};

// using Abstract Classes (Pure Abstraction)
class Shape {   // abstract class
public:
    virtual void draw() = 0;   // pure virtual function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};


int main() {

    student s1;
    // s1.marks;    // inaccessible

    s1.setMarks(90);
    cout << s1.getMarks() <<endl;


    // Shape s;   // not allowed

    Circle c;
    c.draw();   // allowed
 

    return 0;
}