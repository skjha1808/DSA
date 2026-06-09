#include<bits/stdc++.h>
#include <iostream>
using namespace std;

// Node class
class Node {
    public:
    int data;      // Stores value
    Node* next;    // Stores address of next node

    // Constructor
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Stack class
class Stack {
    public:
    Node* Top;     // Points to top node
    int sizee;     // Tracks stack size

    // Constructor
    Stack() {
        Top = NULL;    // Initially empty stack
        sizee = 0;
    }

    // Insert element at top
    void push(int x) {
        // Create new node
        Node* temp = new Node(x);

        // Connect new node to old top
        temp->next = Top;

        // Move top to new node
        Top = temp;

        // Increase size
        sizee++;
    }

    // Remove top element
    void pop() {
        // Underflow condition
        if (Top == NULL) {
            cout << "Stack Empty" << endl;
            return;
        }
        // Store current top
        Node* temp = Top;

        // Move top forward
        Top = Top->next;

        // Delete old top
        delete temp;

        // Decrease size
        sizee--;
    }

    // Return top element
    int top() {
        if (Top == NULL) return -1;

        return Top->data;
    }

    // Return stack size
    int size() {
        return sizee;
    }

    // Check stack empty
    bool isEmpty() {
        return Top == NULL;
    }

};


int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top Element: " << st.top() << endl;
    cout << "Size: " << st.size() << endl;

    st.pop();

    cout << "Top Element after pop: " << st.top() << endl;
    cout << "Size: " << st.size() << endl;

    if(st.isEmpty()){
        cout <<"Stack is empty " <<endl;
    }
    else cout <<"Stack is not empty " <<endl;

    return 0;
}