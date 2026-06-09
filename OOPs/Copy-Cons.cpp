#include<bits/stdc++.h>
using namespace std;

class student{

    public:
    int *marks;

    // Shallow copy constructor
    student(int m){
        marks = new int(m);
    }

    // Deep copy Constructor
    student(const student &s3){
        marks = new int(*s3.marks);   // new memory
    }

    // Destructor


    void print(){
        cout << "Marks: " << *marks <<endl;
        cout << "Marks: " << *marks <<endl;
    }

};


int main(){

    student s1(90);
    cout << "Marks of s1: " << *s1.marks <<endl;
    student s2=s1;    // 
    cout << "Marks of s2: " << *s2.marks <<endl;

    *s2.marks = 100;
    cout << "Marks of s1: " << *s1.marks <<endl;
    cout << "Marks of s2: " << *s2.marks <<endl;

    student s3(50);
    cout << "Marks of s3: " << *s3.marks <<endl;
    student s4(s3);   // deep copy
    cout << "Marks of s4: " << *s4.marks <<endl;

    *s4.marks = 75;
    cout << "Marks of s3: " << *s3.marks <<endl;
    cout << "Marks of s4: " << *s4.marks <<endl;

    // copy Assignment operator
    s1 = s2;
    s1.print();
    s2.print();


    return 0;
}