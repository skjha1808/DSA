#include<bits/stdc++.h>
using namespace std;

class Queue {
    public:
    stack<int> s1,s2;

    // insert element - T.C. = O(1)
    void push(int x){
        s1.push(x);
    }

    // delete element - T.C. = O(1) amortized
    int pop(){
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        
        int val = s2.top();
        s2.pop();
        return val;
    }

    // front element - T.C. = O(1) amortized
    int top(){
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    // size - T.C. = O(1)
    int size(){
        return s1.size() + s2.size();
    }

    // check empty - T.C. = O(1)
    bool empty(){
        return s1.empty() && s2.empty();
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