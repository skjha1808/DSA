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

// Delete a specific node
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

    node* temp = head;   // store current head to temp
    int count = 1;

    // move temp to desired position
    while(count < pos && temp != NULL){
        temp = temp->next;
        count++;
    }

    // invalid position
    if(temp == NULL){
        cout << "Invalid Position\n";
        return;
    }

    // if deleting head
    if(temp->prev != NULL){
        temp->prev->next = temp->next;
    }
    else{
        head = temp->next;
    }

    // if deleting tail
    if(temp->next != NULL){
        temp->next->prev = temp->prev;
    }
    else {
        tail = temp->prev;
    }

    // disconnect node
    temp->next = NULL;
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

    deleteNode(head,tail,1);
    print(head);

   deleteNode(head,tail,2);
    print(head);

    deleteNode(head,tail,2);
    print(head);

    cout << "head: " << head->data <<endl;
    cout << "tail: " << tail->data <<endl;

    cout << "Length: " << getLen(head);

    return 0;
}