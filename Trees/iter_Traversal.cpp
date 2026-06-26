#include<bits/stdc++.h>
using namespace std;

// Definition of a Binary Tree Node
class TreeNode {
    public:
    int data;           // stores value of node
    TreeNode* left;     // pointer to left child
    TreeNode* right;    // pointer to right child

    // Constructor to initialize node
    TreeNode(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// PreOrder: Root -> Left -> Right
void preorder(TreeNode* root) {

    // empty tree
    if(root == nullptr) return;

    // stack used instead of recursion
    stack<TreeNode*> st;
    st.push(root);      // start with root node

    while(!st.empty()){
        // get current node
        TreeNode* temp = st.top();
        st.pop();             // remove it from stack
        cout << temp->data << " ";      // visit node

        // push right first because stack is LIFO
        if(temp->right)
            st.push(temp->right);

        // push left so it gets processed first
        if(temp->left)
            st.push(temp->left);
    }
}

// inOrder: Left -> Root -> Right
void inorder(TreeNode* root) {

    // empty tree
    if(root == nullptr) return;

    // stack stores nodes whose left subtree is still being explored
    stack<TreeNode*> st;

    // current node pointer
    TreeNode* temp = root;

    // continue while nodes remain either in stack or through temp pointer
    while(temp != nullptr || !st.empty()){

        // move as left as possible
        while(temp != nullptr){
            // save current node for later processing
            st.push(temp);

            temp = temp->left;     // move left
        }

        // left subtree finished, now process current node
        temp = st.top();
        st.pop();
        cout << temp->data << " ";   // visit node

        // now explore right subtree
        temp = temp->right;
    }
}

// PostOrder Traversal using two stack
// Order: Left -> Right -> Root
void postorder(TreeNode* root) {

    // empty tree
    if(root == nullptr) return;

    // first stack for traversal
    stack<TreeNode*> s1;
    s1.push(root);    // start with root

    // second stack stores reverse postorder
    stack<TreeNode*> s2;
        
    while(!s1.empty()) {

        // remove node from first stack
        TreeNode* temp = s1.top();
        s1.pop();

        // push into second stack
        s2.push(temp);

        // push left child first because stack is LIFO
        if(temp->left)
            s1.push(temp->left);

        // push right child so it gets processed first
        if(temp->right)
            s1.push(temp->right);
    }

    // second stack gives actual postorder
    while(!s2.empty()){
        // visit node
        cout << s2.top()->data << " ";

        s2.pop();    // remove printed node
    }
}


int main() {

    // create root node
    TreeNode* root = new TreeNode(10);

    // create left and right children
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);

    // create deeper nodes
    root->left->left = new TreeNode(40);
    root->right->right = new TreeNode(50);

    // Preorder Traversal
    cout << "Preorder: ";
    preorder(root);

    // Inorder Traversal
    cout << "\nInorder: ";
    inorder(root);

    // Postorder Traversal
    cout << "\nPostorder: ";
    postorder(root);

    
    return 0;
}