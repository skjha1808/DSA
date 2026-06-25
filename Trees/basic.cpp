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

int main() {
    
    // create root node
    TreeNode* root = new TreeNode(1);

    // create children
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);

    // next level
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    root->right->left=new TreeNode(6);
    root->right->right=new TreeNode(7);

    // printing
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    cout<<root->left->right->data<<endl;
    cout<<root->right->left->data<<endl;

    return 0;
}