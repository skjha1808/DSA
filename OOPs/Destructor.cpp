#include<bits/stdc++.h>
using namespace std;

class student{

    public:
    int marks;   // non-static (belongs to each object)

    // static data member declaration (shared by all objects)
    static int count;

    // static member function
    static void displayCount(){
        cout << "Static function called " <<endl;
        cout << count <<endl;

        // cout << marks <<endl;
        // ERROR: static function cannot access non-static members directly
    }


    // default constructor
    student(){
        cout <<"Constructor called " <<endl;
    }

    // Destructor
    ~student(){
        cout << "Destructor called " <<endl;
    }

};

// Static data member must be defined outside class
int student::count = 10;

int main() {

    // Access static variable using class name
    cout << student::count <<endl;

    // Call static function without creating object
    student::displayCount();


    // static object
    student s1;
    // Constructor called automatically
    // Destructor will be called automatically at end of scope
 
    // dynamic object
    student *s2 = new student;
    // must delete manually
    delete s2;    // when destructor not called -> Memory leak
    // delete frees memory → then destructor is automatically called


    return 0;
}