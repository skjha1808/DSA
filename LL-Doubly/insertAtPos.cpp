#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    // constructor
    node (int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// traversal
void print(node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout <<endl;
}

// length of DLL
int getLength(node* head){
    int len = 0;
    node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

// insert at any position
void insertAtPos(node* &head, node* &tail, int pos, int val){
    // Invalid position
    if(pos < 1){
        cout << "Invalid position\n";
        return;
    }

    // create new node
    node* newNode = new node(val);
    
    // Case 1: Empty list
    if(head == NULL){
        head = tail = newNode;
        return;
    }

    // Case 2: insert at head
    if(pos == 1){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    // traversal to pos-1
    node* temp = head;   // temporary pointer for traversal
    for(int i=1;i<pos-1 && temp->next != NULL; i++){
        temp = temp->next;
    }

    // case 3: insert at tail
    if(temp->next == NULL){
        temp->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return;
    }

    // case 4: insert in middle
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;

}

int main(){
    // construct new node
    node* n1 = new node(10);
    // define head & tail
    node* head = n1;
    node* tail = n1;
    // call
    print(head);

    insertAtPos(head,tail,1,5);
    print(head);

    insertAtPos(head,tail,1,2);
    print(head);

    insertAtPos(head,tail,3,8);
    print(head);

    insertAtPos(head,tail,5,15);
    print(head);

    // length
    cout << getLength(head);

    return 0;
}