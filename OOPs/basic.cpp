#include<bits/stdc++.h>
using namespace std;

class student {   // class -> student

    // properties (data members -> name,roll_no,marks)
    public:    // access anywhere
    string name;  
    int roll_no;

    private:    // by default (Access only inside the class)
    string branch;
    int marks;
    
    public:   // private: (not accessible outside class)
    // behavior  (member functions -> display())
    void display(){
        cout << name << " " << roll_no << " " << branch << " " << marks;
    }


    // we can use setter & getter in any order 
    // getter (get value) & setter (set value)
    void setBranch(string s){
        branch = s;
    }

    string getBranch(){
        return branch;
    }

    int getMarks(){
        return marks;
    }

    void setMarks(int m){
        marks = m;
    }

};

int main() {

    // object creation 
    student s1, s2; 

    cout << "Size: " << sizeof(student) <<endl; 
    cout << "Size: " << sizeof(s1) <<endl; 
    cout << "Size: " << sizeof(s2) <<endl; 

    s1.name = "Shubham";
    s1.roll_no = 152;
    // s1.branch = "IT";    // inaccessible due to private class
    // s1.marks = 70;

    cout << "Name: " << s1.name <<endl;
    cout << "Roll_no: " << s1.roll_no <<endl;

    s1.setBranch("CSE");
    cout << "Branch: " << s1.getBranch() <<endl;
    s1.setMarks(90);
    cout << "Marks: " << s1.getMarks() <<endl;
    
    s1.display();
    cout <<endl;

    // static allocation
    student s3; 

    s3.name = "Deepak";
    s3.setMarks(99);
    cout << "Name: " << s3.name <<endl;
    cout << "Marks: " << s3.getMarks() <<endl;

    // dynamic allocation
    student *s4 = new student;  

    s4->name = "Muskan";   // accessing dynamic object
    s4->setMarks(100);
    cout << "Name: " << (*s4).name <<endl;
    cout << "Marks: " << (*s4).getMarks() <<endl;

    cout << "Name: " << s4->name <<endl;
    cout << "Marks: " << s4->getMarks() <<endl;



    return 0;
}