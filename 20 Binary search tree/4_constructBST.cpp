// CONSTRUCT BST
#include<iostream>
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

node* constructBST(int preorder[], int* preorderIDX, int key, int min, int max, int n){
    if(*preorderIDX >= n){
        return NULL;
    }
    node* root=NULL;
    if(key>min && key<max){
        root=new node(key);
        *preorderIDX=*preorderIDX+1;

        if(*preorderIDX < n){
            root->left=constructBST(preorder, preorderIDX, preorder[*preorderIDX], min, key, n);
        }
        if(*preorderIDX < n){
            root->right=constructBST(preorder, preorderIDX, preorder[*preorderIDX], key, max, n);
        }
    }
    return root;
}
void printPreorder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main(){
    int preorder[]={10, 2, 1, 13, 11};
    int n=5;
    int preorderIDX=0;

    node* root=constructBST(preorder, &preorderIDX, preorder[0], INT_MIN, INT_MAX, n);

    printPreorder(root);

    return 0;
}