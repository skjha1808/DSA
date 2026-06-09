#include<bits/stdc++.h>
using namespace std;

// inheritance is a fundamental mechanism of OOPs that allows a new class(derived class) to acquire the properties & behaviors of an existing class(base class)
//  Types of inheritance:
// 1. single inheritance
// 2. Multiple 
// 3. Multilevel
// 4. Hierarchical 
// 5. Hybrid

class human {

    private:   // accessible only inside parent class
    int age;

    protected:   // accessible inside parent class as well as child class
    int salary;

    public:    // accessible anywhere
    string name;
    int height;
    int weight;

    // getter & setter
    int getAge(){
        return age;
    }

    void setAge(int a){
        age = a;
    }

    int getSalary(){
        return salary;
    }

    void setSalary(int s){
        salary = s;
    }

};

// CHILD CLASSES:
// public - public -> public
class male : public human {
    public:
    string color;

};
// public - protected -> protected
class malee : protected human {
    public:
    string color;

    string getName(){
        return name;
    }

    void setName(string n){
        name = n;
    }
};
// public - private -> private
class maleee : private human {
    public:
    string color;

    string getName(){
        return name;
    }

    void setName(string n){
        name = n;
    }
};

// protected - public -> protected
class female : public human {
    public:
    string color;

    // accessible in child class
    int getSalary(){
        return salary;
    }

    void setSalary(int s){
        salary = s;
    }
};
// protected - protected -> protected
class femalee : protected human {
    public:
    string color;

    // accessible in child class
    int getSalary(){
        return salary;
    }

    void setSalary(int s){
        salary = s;
    }
};
// protected - private -> private
class femaleee : private human {
    public:
    string color;

    // accessible in child class
    int getSalary(){
        return salary;
    }

    void setSalary(int s){
        salary = s;
    }
};

// private - public -> inaccessible
class other : public human {
    public:
    string color;

    // inaccessible in child class also
    // int getAge(){
    //     return age;  
    // }

    // void setAge(int a){
    //     age = a; 
    // }
};
// private - protected -> inaccessible
class others : protected human {
    public:
    string color;

    // inaccessible in child class also
    // int getAge(){
    //     return age;
    // }

    // void setAge(int a){
    //     age = a;
    // }
};
// private - private -> inaccessible
class otherss : private human {
    public:
    string color;

    // inaccessible in child class also
    // int getAge(){
    //     return age;
    // }

    // void setAge(int a){
    //     age = a;
    // }
};


int main() {
    
    male m1;
    m1.name = "Shubham";    // accessible
    cout << m1.name <<endl;

    malee m2;
    // m2.name;    // inaccessible
    
    maleee m3;
    // m3.name;    // inaccessible
    

    female f1;
    // f1.salary;   // inaccessible  
    
    femalee f2;
    // f2.salary;   // inaccessible

    femaleee f3;
    // f3.salary;   // inaccessible


    other o1;
    // o1.age;    // inaccessible

    others o2;
    // o2.age;    // inaccessible

    otherss o3;
    // o3.age;    // inaccessible
    

    return 0;
}