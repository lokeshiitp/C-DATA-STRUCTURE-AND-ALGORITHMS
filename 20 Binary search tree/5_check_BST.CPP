//check for BST
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
// check for BST 
bool isBST(node* root, node* min, node* max){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data<=min->data){
        return false;
    }
    if(max!=NULL && root->data>=max->data){
        return false;
    }
    bool leftvalid= isBST(root->left, min, root);
    bool rightvalid= isBST(root->right, root, max);
    return leftvalid and rightvalid;
}

int main(){
    node* root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);    // Invalid BST

    // 2nd tree
    node* root2=new node(5);
    root2->left=new node(2);
    root2->right=new node(8);   // Valid BST

    if(isBST(root2, NULL, NULL)){
        cout<<"Valid BST"<<endl;
    }else{
        cout<<"Invalid BST"<<endl;
    }

    return 0;
}
