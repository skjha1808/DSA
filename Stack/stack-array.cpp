#include<bits/stdc++.h>
using namespace std;

class myStack {

    int top;       // Points to top element
    int size;      // Maximum stack size
    int *arr;      // Dynamic array

    public:
    // Constructor
    myStack(int n) {
        size = n;    // initialize size
        arr = new int[size];    // Create array
        top = -1;     // Initially stack is empty
    }

    // Check stack empty
    bool isEmpty() {
        return top == -1;
    }

    // Check stack full
    bool isFull() {
        return top == size - 1;
    }

    // push operation
    void push(int x) {
        // Overflow condition
        if (isFull()) {
            cout << "Stack Overflow" << endl;
            return;
        }
        // Move top and insert element
        top++;
        arr[top] = x;
    }

    // pop operation
    void pop() {
        // Underflow condition
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return;
        }
        // Remove top element
        top--;
    }

    // peek operation
    int peek() {
        // stack empty
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        // Return top element
        return arr[top];
    }
};


int main() {
    // Create stack of size 5
    myStack st(5);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    cout << st.peek() <<endl;

    st.pop();
    cout << st.peek() <<endl;

    st.pop();
    cout << st.peek() <<endl;

    st.pop();
    cout << st.peek() <<endl;

    st.pop();
    cout << st.peek() <<endl;

    // st.pop();
    // cout << st.peek() <<endl;

    if(st.isEmpty()){
        cout << "Stack is empty " <<endl;
    }
    else cout << "Stack is not empty " <<endl;


    return 0;
}