#include<bits/stdc++.h>
using namespace std;

class myStack {

    int top;       // Points to top element
    int size;      // Maximum stack size
    int *arr;      // Dynamic array

    public:
    // Constructor
    myStack(int n) {
        size = n;
        // Create array
        arr = new int[size];
        // Initially stack is empty
        top = -1;
    }

    // Check stack empty
    bool isEmpty() {
        return top == -1;
    }

    // Check stack full
    bool isFull() {
        return top == size - 1;
    }

    // Insert element at top
    void push(int x) {
        // Overflow condition
        if (isFull()) {
            cout << "Stack Overflow" << endl;
            return;
        }
        // Move top and insert
        top++;
        arr[top] = x;
    }

    // Remove top element
    void pop() {
        // Underflow condition
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return;
        }
        // Remove top
        top--;
    }

    // Return top element
    int peek() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[top];
    }
};


int main() {
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