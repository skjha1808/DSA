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

// print nodes of LL
void print(node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout <<endl;
}

// Delete node at given position
void deleteNode(node* &head, node* &tail, int pos){
    
    // invalid position
    if(pos < 1){
        cout <<"Invalid position\n ";
        return;
    }

    // Empty list
    if(head == NULL){
        cout << "List is empty\n ";
        return;
    }

    // Case 1: delete head node
    if(pos == 1){
        node* temp = head;   // store current head
        head = head->next;   // move head forward

        delete temp;    // free memory
        return;
    }

    // Case 2: delete middle node or tail node
    node* temp = head;   // temporary pointer
    // traverse to (pos-1)
    for(int i=1;i<pos-1 && temp->next != NULL; i++){
        temp = temp->next;   // move forward
    }

    // if position out of range
    // if(prev->next == NULL){
    //     cout << "Position out of range\n";
    //     return;
    // }

    // node to delete
    node* curr = temp->next;
    // Bypass the node
    temp->next = curr->next;
    
    // update tail while deleting last node
    if(curr->next == NULL){
        tail = temp;
    }

    // free memory
    delete curr;
}


int main(){
    // Create list: 10 → 20 → 30 → 40 -> 50
    node* n1 = new node(10);
    node* n2 = new node(20);
    node* n3 = new node(30);
    node* n4 = new node(40);
    node* n5 = new node(50);

    // linking
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    // define head & tail
    node* head = n1;
    node* tail = n5;

    print(head);   // call function

    // deletion head
    deleteNode(head,tail,1);
    print(head);

    // Delete middle
    deleteNode(head, tail, 2);
    print(head);

    // Delete last
    deleteNode(head, tail, 3);
    print(head);

    cout << "head: " << head->data <<endl;
    cout << "tail: " << tail->data <<endl;

    return 0;
}