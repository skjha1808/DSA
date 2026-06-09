#include<bits/stdc++.h>
using namespace std;

// Node Class for Doubly LL:
class node{
    public:
    int data;    // store value
    node* prev;   // pointer to previous node
    node* next;   // pointer to next node

    // constructor
    node(int val){
        data = val;   // initialize data
        prev = NULL;   // initially no previous node
        next = NULL;   // initially no next node
    }
};

// Traversing the DLL
void print(node* head){
    // create a temporary pointer starting from head
    node* temp = head;

    while(temp != NULL){
        cout << temp->data <<" ";   // print current node's data
        temp = temp->next;     // move to next node
    }
    cout <<endl;
}

// Find length of DLL
int getLength(node* head){
    int len = 0;
    node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

// Insert new node at Head
void insertAtHead(node* &head, int val){
    node* newNode = new node(val);
    // empty list
    if(head == NULL){
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// Insert new node at tail
void insertAtTail(node* &tail, int val){
    node* newNode = new node(val);
    // empty list
    if(tail == NULL){
        tail = newNode;
        return;
    }
    
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}



int main() {
    // create node
    node* n1 = new node(10);
    // define head & tail
    node* head = n1;
    node* tail = n1;
    // call 
    print(head);

    insertAtHead(head,5);
    print(head);

    insertAtHead(head,2);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtTail(tail,20);
    print(head);

    cout << getLength(head) <<endl;
    
    return 0;
}