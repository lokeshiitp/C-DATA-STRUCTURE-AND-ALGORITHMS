// another method for balanced or unbalanced tree
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

bool isBalanced(node* root, int* height){
    if(root==NULL){
        return true;
    }
    int lh=0, rh=0;
    if(isBalanced(root->left, &lh)==false){
        return false;
    }
    if(isBalanced(root->right, &rh)==false){
        return false;
    }
    *height=max(lh, rh)+1;
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
    int height=0;
    if(isBalanced(root1, &height)){
        cout<<"Balanced Tree"<<endl;
    }else{
        cout<<"Unbalanced Tree"<<endl;
    }

    return 0;
}