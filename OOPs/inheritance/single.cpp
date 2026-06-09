#include<bits/stdc++.h>
using namespace std;

class animal {

    public:
    int age;
    int weight;

    void speak(){
        cout << "speakihg " <<endl;
    }
};

// single inheritance
class dog : public animal {
    public:
    void bark(){
        cout << "barking " <<endl;
    }
};


int main() {

    dog d1;
    d1.speak();
    cout << d1.age <<endl;
    cout << d1.weight <<endl;

    d1.bark();

    return 0;
}