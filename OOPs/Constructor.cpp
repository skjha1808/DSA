#include<bits/stdc++.h>
using namespace std;

class student { 

    public:    // access anywhere
    string name;  
    int roll_no;

    int *marks;

    private: 
    string branch;
    int id;
    
    public:
    void display(){
        cout << name << " " << roll_no << " " << marks << " " << branch <<id;
    }


    // A Constructor automatically called when an object is created
    // Name MUST be same as the class name & no return type (not even void)
    // Default Constructor (No Parameter)
    student() {    
        cout << "Constructor Called" <<endl;
    }

    // Parameterized Constructor -> take argument(s)
    student(int roll) {
        roll_no = roll;
    }

    student(string name, int roll_no){
        // when class variable name = parameter name, then use:
        this->name = name;
        this->roll_no = roll_no;
    }

    // Copy Constructor -> used to copy one object into another
    student(student &s4){
        cout << "Copy Constructor Called" <<endl;
        this->name = s4.name;
        this->roll_no = s4.roll_no;
    }


    void print(){
        cout << "[ Name: " << this->name <<endl;
        cout << "Roll no: " << this->roll_no << "]" <<endl;
    }

    
};

int main() {

    // object creation 
    student s1;    // constructor automatically called

    student s2(150);
    cout << "Roll no of s2: " << s2.roll_no <<endl;

    student s3("Somesh", 100);
    cout << "Name of s3: " << s3.name <<endl;
    cout << "Roll no of s3: " << s3.roll_no <<endl;

    student s4("Ramesh",50);
    s4.print();
    // copy constructor
    student s5(s4);
    // student s5 = s4;
    s5.print();

    
    return 0;
}