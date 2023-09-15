// check given binary tree is balanced or not
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int Height(node* root){
    if(root==NULL){
        return 0;
    }
    return max(Height(root->left), Height(root->right))+1;
}

bool isBalanced(node* root){
    if(root==NULL){
        return true;
    }
    if(isBalanced(root->left)==false){
        return false;
    }
    if(isBalanced(root->right)==false){
        return false;
    }
    int lh=Height(root->left);
    int rh=Height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }else{
        return false;
    }
}

int main(){
    node* root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);
    root1->left->left=new node(4);
    root1->left->right=new node(5);
    root1->right->left=new node(6);
    root1->right->right=new node(7);

    node* root2=new node(1);
    root2->left=new node(2);
    root2->left->left=new node(3);
    if(isBalanced(root2)){
        cout<<"Balanced Tree"<<endl;
    }else{
        cout<<"Unbalanced Tree"<<endl;
    }


    return 0;
}