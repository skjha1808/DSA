#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    queue<int> q;

    // insert element
    void push(int x){
        q.push(x);
        for(int i=1;i<q.size();i++){
            q.push(q.front());
            q.pop();
        }
    }

    // delete element
    int pop(){
        int val = q.front();
        q.pop();
        return val;
    }

    // return top element
    int top(){
        return q.front();
    }

    // size
    int size(){
        return q.size();
    }

    // check stack empty
    bool empty(){
        return q.empty();
    }

};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "Top element: " << st.top() <<endl;
    cout <<"Size: " <<st.size() <<endl;

    st.pop();
    st.pop();

    cout << "Top element: " << st.top() <<endl;
    cout <<"Size: " <<st.size() <<endl;

    if(st.empty())
        cout <<"Stack is empty" <<endl;
    else cout <<"Stack is not empty" <<endl;

    
    return 0;
}