#include<bits/stdc++.h>
using namespace std;

class Queue {
    public:
    stack<int> s1,s2;

    // insert element - T.C. = O(N)  
    void push(int x){
        // s1 -> s2
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        // x -> s1;
        s1.push(x);
        // s2 -> s1
        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    // delete element - T.C. = O(1)
    int pop(){
        int val = s1.top();
        s1.pop();
        return val;
    }

    // top/peek element - T.C. = O(1)
    int top(){
        return s1.top();
    }

    // size - T.C. = O(1)
    int size(){
        return s1.size();
    }

    // check empty - T.C. = O(1)
    bool empty(){
        return s1.empty();
    }
};

int main(){
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Front element: " << q.top() <<endl;
    cout <<"Size: " << q.size() <<endl;

    q.pop();
    q.pop();
    
    cout << "Front element: " << q.top() <<endl;
    cout <<"Size: " << q.size() <<endl;

    if(q.empty())
        cout <<"Queue is empty" <<endl;
    else cout <<"Queue is not empty" <<endl;

    return 0;
}