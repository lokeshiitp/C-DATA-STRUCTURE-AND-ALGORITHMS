// Search in BST
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

node* SearchInBST(node* root, int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    //data>key
    if(root->data>key){
        return SearchInBST(root->left, key);
    }
    //data<key
    return SearchInBST(root->right, key);
}

int main(){
    node* root=new node(4);
    root->left=new node(2);
    root->right=new node(5);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right->right=new node(6);

    if(SearchInBST(root, 5)==NULL){
        cout<<"key doesnot exist";
    }else{
        cout<<"key exist";
    }

    return 0;
}