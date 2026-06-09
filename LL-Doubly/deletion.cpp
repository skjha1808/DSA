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

void print(node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout <<endl;
}

int getLen(node* head){
    int len = 0;
    node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

// delete head 
void deleteHead(node* &head, node* &tail){
    // empty list
    if(head == NULL) return;

    // only one node
    if(head->next == NULL){
        delete head;
        head = tail = NULL;
        return;
    }

    node* temp = head;
    // move head ahead
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
}

// delete tail 
void deleteTail(node* &head, node* &tail){
    // empty list
    if(head == NULL) return;

    // only one node
    if(head->next == NULL){
        delete head;
        head = tail = NULL;
        return;
    }

    node* temp = tail;
    // move tail backward
    tail = tail->prev;
    tail->next = NULL;
    temp->prev = NULL;
    delete temp;
}


int main(){
    // create nodes
    node* n1 = new node(10);
    node* n2 = new node(20);
    node* n3 = new node(30);
    node* n4 = new node(40);

    // linking
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n2->prev = n1;
    n3->prev = n2;
    n4->prev = n3;
   
    // define
    node* head = n1;
    node* tail = n4;
    // call
    print(head);

    deleteHead(head,tail);
    print(head);

    deleteTail(head,tail);
    print(head);

    cout << "head: " << head->data <<endl;
    cout << "tail: " << tail->data <<endl;

    cout << "Length: " << getLen(head);

    return 0;
}