#include <bits/stdc++.h>
using namespace std;

class myQueue {

    int front;     // Points to first element
    int rear;      // Points to last element
    int size;      // Maximum size of queue
    int *arr;      // Dynamic array

    public:
    // Constructor
    myQueue(int n) {
        size = n;
        // Create array
        arr = new int[size];
        // Initially queue is empty
        front = -1;
        rear = -1;
    }

    // Check queue empty
    bool isEmpty() {
        return front == -1;
    }

    // Check queue full (Circular Queue)
    bool isFull() {
        return (rear + 1) % size == front;
    }

    // Insert element at rear
    void enqueue(int x) {
        // Overflow condition
        if (isFull()) {
            cout << "Queue Overflow" << endl;
            return;
        }
        // First insertion
        if (isEmpty()) {
            front = rear = 0;
        }
        // Move rear circularly
        else {

            rear = (rear + 1) % size;
        }
        // Insert element
        arr[rear] = x;
    }

    // Delete element from front
    void dequeue() {
        // Underflow condition
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return;
        }

        // Only one element exists
        if (front == rear) {
            front = rear = -1;
        }
        // Move front circularly
        else {
            front = (front + 1) % size;
        }
    }

    // Return front element
    int getFront() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return arr[front];
    }

    // Return rear element
    int getRear() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return arr[rear];
    }
};


int main() {
    myQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    cout <<"Front: " << q.getFront() <<endl;
    cout <<"Rear: " << q.getRear() <<endl;

    q.dequeue();
    cout <<"Front: " << q.getFront() <<endl;
    cout <<"Rear: " << q.getRear() <<endl;

    q.dequeue();
    cout <<"Front: " << q.getFront() <<endl;
    cout <<"Rear: " << q.getRear() <<endl;

    q.dequeue();
    cout <<"Front: " << q.getFront() <<endl;
    cout <<"Rear: " << q.getRear() <<endl;

    q.dequeue();
    cout <<"Front: " << q.getFront() <<endl;
    cout <<"Rear: " << q.getRear() <<endl;

    // q.dequeue();

    // cout <<"Front: " << q.getFront() <<endl;
    // cout <<"Rear: " << q.getRear() <<endl;

    if(q.isEmpty()){
        cout <<"Queue is empty " <<endl;
    }
    else cout <<"Queue is not empty " <<endl;

    return 0;
}