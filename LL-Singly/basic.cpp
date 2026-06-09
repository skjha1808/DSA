#include<bits/stdc++.h>
using namespace std;

// Node Class for Singly LL:
class node {
    public:
    int data;    // store value
    node* next;   // pointer to next node

    // Constructor: automatically called when object is created
    node(int val){
        data = val;    // initialize data
        next = NULL;   // initially no next node
    }
};

// Function to print all elements of the linked list:
void print(node* head) {

    node* temp = head;      // create a temporary pointer starting from head

    // Traverse the list until we reach NULL (end of list)
    while(temp != NULL) {
        cout << temp->data << " ";     // Access data using arrow operator & print current node's data
        temp = temp->next;      // move to next node
    }
    cout <<endl;
}

// find length of LL:
int getLength(node* head){
    int len = 0;
    node* temp = head;

    while(temp != NULL){
    len++;
    temp = temp->next;
    }
    return len;
}

// Search in LL:
bool search(node* head, int key){
    node* temp = head;

    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// int searchPosition(node* head, int key){
//     node* temp = head;
//     int pos = 1;

//     while(temp != NULL){
//         if(temp->data == key){
//             return pos;
//         }
//         temp = temp->next;
//         pos++;
//     }
//     return -1;
// }


int main() {
    // create new node
    node* n1 = new node(10);
    // cout << n1->data <<endl;
    // cout << n1->next <<endl;

    node* n2 = new node(20);
    node* n3 = new node(30);

    // Connect nodes (linking)
    n1->next = n2;
    n2->next = n3;

    // define head
    node* head = n1;
    
    // call print function
    print(head);

    cout << getLength(head) <<endl;

    if(search(head, 50)){
        cout << "Element found " <<endl;
    }
    else cout << "Element not found! " <<endl;

    
    return 0;
}