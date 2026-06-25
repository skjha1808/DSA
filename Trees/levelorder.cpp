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

// Level Order Traversal (BFS)
void levelOrder(TreeNode* root){

    // if tree is empty
    if(root==NULL) return;

    // queue stores nodes to visit
    queue<TreeNode*> q;
    // push root node first
    q.push(root);

    // continue until queue becomes empty
    while(!q.empty()){

        // get front node
        TreeNode* temp=q.front();
        // remove it from queue
        q.pop();
        // print current node
        cout<<temp->data<<" ";

        // add left child if exists
        if(temp->left)
            q.push(temp->left);

        // add right child if exists
        if(temp->right)
            q.push(temp->right);
    }
}


int main(){

    TreeNode* root = new TreeNode(10);

    root->left = new TreeNode(20);
    root->right = new TreeNode(30);

    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);

    // call level Order traversal
    cout<<"Levelorder: ";
    levelOrder(root);

    return 0;
}