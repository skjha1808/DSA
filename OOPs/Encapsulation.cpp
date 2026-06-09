#include<bits/stdc++.h>
using namespace std;

class student{

    public:   // partial Encapsulstion
    string name;

    // Encapsulation -> wrapping data & functions together in a single unit (class) & restrict direct access to the data
    // full Encapsulation -> all data members are private
    private:
    int id;
    int roll_no;
    int marks;


    // access is only through public method
    public:
    // getter -> used to read/access data
    int getId(){
        return id;
    }

    // setter -> used to modify/update data
    void setId(int i){
        id = i;
    }

    int getMarks(){
        return marks;
    }

    void setMarks(int m){
        if(m >= 0 && m <= 100)    // with validation
            marks = m;
        else cout << "invalid marks! ";
    }

    
};

int main() {

    student s1;
    s1.setId(-100);   // invalid value but allowed
    cout << s1.getId() <<endl;

    s1.setMarks(-90);
    cout << s1.getMarks() <<endl;

    student s2;
    s2.setMarks(90);
    cout << s2.getMarks() <<endl;

    s1.name = "Shubham";
    cout << s1.name <<endl;
 

    return 0;
}