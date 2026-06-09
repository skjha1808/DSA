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

// function to print elements of LL
void print(node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout <<endl;
}

// Insert new node at a specific position
void insertAtPosition(node* &head, node* &tail, int pos, int val){

    // Invalid position
    if(pos < 1){
        cout << "Invalid position\n";
        return;
    }

    // create new node
    node* nodeToInsert = new node(val);
    
    // Case 1: Empty list
    if(head == NULL){
        head = tail = nodeToInsert;
        return;
    }

    // Case 2: insert at head
    if(pos == 1){
        nodeToInsert->next = head;
        head = nodeToInsert;
        return;
    }

    // case 3: insert in middle or at tail
    node* temp = head;    // temporary pointer
    // safe traversal to (pos-1)
    for(int i=1;i<pos-1 && temp->next != NULL; i++){
        temp = temp->next;   // move forward
    }

    // Position out of bounds
    // if(temp == NULL) {
    //     cout << "Position out of bounds\n";
    //     delete nodeToInsert;
    //     return;
    // }
    
    // insert node & adjust pointer
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

    // update tail if inserted at end
    if(nodeToInsert->next == NULL){
        tail = nodeToInsert;
    }
}


int main() {
    // create new node
    node* n1 = new node(10);
    node* n2 = new node(20);
    node* n3 = new node(30);

    n1->next = n2;
    n2->next = n3;

    // define head & tail
    node* head = n1;
    node* tail = n3;

    // call function
    print(head);  

    // insert at position
    insertAtPosition(head,tail,2,15);
    print(head);

    insertAtPosition(head,tail,1,5);
    print(head);

    insertAtPosition(head,tail,6,35);   // automatically handle
    print(head);

    insertAtPosition(head,tail,100,50);
    print(head);

    cout << "head: " << head->data <<endl;
    cout <<"tail: " << tail->data <<endl;


    return 0;
}