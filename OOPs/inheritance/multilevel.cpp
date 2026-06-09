#include<bits/stdc++.h>
using namespace std;

class animal {

    public:
    int age;
    int weight;

    void speak(){
        cout << "Speakihg " <<endl;
    }
};

class dog : public animal {
    public:
    void bark(){
        cout << "Barking " <<endl;
    }
};

// multi-level inheritance
class germanSephard : public dog {
    public:
    string color;
};


int main() {

    germanSephard g;
    g.speak();
    cout << g.age <<endl;

    g.bark();
    
    g.color = "black";
    cout << g.color <<endl;

    return 0;
}