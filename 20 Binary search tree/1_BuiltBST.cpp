// Built a Binary search tree by a given arry
// Inorder of BST is always in incresing order
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* InsertatBST(node* root, int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left=InsertatBST(root->left, val);
    }else{
        root->right=InsertatBST(root->right, val);
    }
    return root;
}
void inorder(node* root){
    if(root==NULL){
        return;

    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    node* root=NULL;
    root=InsertatBST(root, 5);
    InsertatBST(root, 1);
    InsertatBST(root, 3);
    InsertatBST(root, 4);
    InsertatBST(root, 2);
    InsertatBST(root, 7);

    // print inorder
    inorder(root);
    cout<<endl;

    return 0;
}