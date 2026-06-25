#include<bits/stdc++.h>
using namespace std;

class   TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    // constructor
    TreeNode(int val){
        data=val;
        left=right=NULL;
    }
};

// Preorder Traversal (DFS)
// Order => Root → Left → Right
void preorder(TreeNode* root){

    // stop if node doesn't exist
    if(root==NULL) return;

    // visit current node first
    cout<<root->data<<" ";

    // traverse left subtree
    preorder(root->left);

    // traverse right subtree
    preorder(root->right);
}

// Inorder Traversal (DFS)
// Order => Left → Root → Right
void inorder(TreeNode* root){

    // stop if node doesn't exist
    if(root==NULL) return;

    // visit left subtree first
    inorder(root->left);

    // print current node
    cout<<root->data<<" ";

    // visit right subtree
    inorder(root->right);
}

// Postorder Traversal (DFS)
// Order => Left → Right → Root
void postorder(TreeNode* root){

    // stop if node doesn't exist
    if(root==NULL) return;

    // traverse left subtree
    postorder(root->left);

    // traverse right subtree
    postorder(root->right);

    // print current node at last
    cout<<root->data<<" ";
}


int main() {

    TreeNode* root = new TreeNode(10);

    root->left = new TreeNode(20);
    root->right = new TreeNode(30);

    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);

    // call each traversal
    cout<<"Preorder: ";
    preorder(root);

    cout<<"\ninorder: ";
    inorder(root);
    
    cout<<"\nPostorder: ";
    postorder(root);

    return 0;
}