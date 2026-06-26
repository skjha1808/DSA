#include<bits/stdc++.h>
using namespace std;

int main() {
    // stack -> LIFO
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout <<"Size: " <<st.size() <<endl;
    cout <<"Top element: " <<st.top() <<endl;

    st.pop();
    
    cout <<"Top element: " <<st.top() <<endl;
    cout <<"Size: " <<st.size() <<endl;

    if(st.empty()){
        cout << "Stack is empty " <<endl;
    }
    else cout <<"Stack is not empty " <<endl;

    return 0;
}