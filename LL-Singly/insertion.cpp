#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // constructor
    node(int val){
        data = val;
        next = NULL;
    }
};

// printing
void print(node* head){
    node* temp = head;

    // traversal
    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout <<endl;
}

// Insert new node at the beginning (head)
void insertAtHead(node* &head, node* &tail, int val) {
    // Step 1: create new node
    node* newNode = new node(val);

    // check if list is empty
    if(head == NULL){
        head = newNode;    // new node becomes head
        tail = newNode;    // new node becomes tail also
        return;     // stop further execution
    }

    // Step 2: new node points to current head
    newNode->next = head;

    // Step 3: move head to new node
    head = newNode;
}

// Insert new node at tail using tail pointer (O(1))
void insertAtTail(node* &head, node* &tail, int val){
    
    // Step 1: Create a new node
    node* newNode = new node(val);

    // check if list is empty
    if(head == NULL){
        head = tail = newNode;   // new node becomes head & tail both
        return;     // stop further execution
    }

    // Step 2: Link current tail to new node
    tail->next = newNode;

    // Step 3: Move tail to the new last node
    tail = newNode;
}


int main() {
    // create new node
    node* n1 = new node(10);

    // define head & tail
    node* head = n1;
    node* tail = n1;
    
    // call print function
    print(head);

    insertAtHead(head, tail, 8);
    print(head);

    insertAtHead(head, tail, 5);
    print(head);

    insertAtTail(head, tail, 15);
    print(head);

    insertAtTail(head, tail, 20);
    print(head);

    
    return 0;
}