#include <bits/stdc++.h>
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

// Queue class
class Queue {
    public:
    Node* front;   // Points to first element
    Node* rear;    // Points to last element
    int sizee;     // Tracks queue size

    // Constructor
    Queue() {
        front = NULL;
        rear = NULL;
        sizee = 0;
    }

    // Insert at rear
    void enqueue(int x) {
        // Create new node
        Node* temp = new Node(x);

        // Queue empty
        if (rear == NULL) {
            front = rear = temp;
        }
        // Connect at rear
        else {
            rear->next = temp;
            rear = temp;
        }
        // Increase size
        sizee++;
    }

    // Remove from front
    void dequeue() {
        // Underflow condition
        if (front == NULL) {
            cout << "Queue Empty" << endl;
            return;
        }

        // Store current front
        Node* temp = front;

        // Move front
        front = front->next;

        // Delete old node
        delete temp;
        
        // If queue becomes empty
        if (front == NULL) {
            rear = NULL;
        }
        // Decrease size
        sizee--;
    }

    // Return front element
    int getFront() {
        if (front == NULL) return -1;

        return front->data;
    }

    // Return rear element
    int getRear() {
        if (rear == NULL) return -1;

        return rear->data;
    }

    // Return queue size
    int size() {
        return sizee;
    }

    // Check queue empty
    bool isEmpty() {
        return front == NULL;
    }

};


int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout <<"Front: " <<q.getFront() <<endl;
    cout <<"Rear: " <<q.getRear() <<endl;
    cout <<"Size: " <<q.size() <<endl;

    q.dequeue();

    cout <<"Front: " <<q.getFront() <<endl;
    cout <<"Rear: " <<q.getRear() <<endl;
    cout <<"Size: " <<q.size() <<endl;

    if(q.isEmpty()){
        cout <<"Queue is empty " <<endl;
    }
    else cout <<"Queue is not empty " <<endl;

    return 0;
}