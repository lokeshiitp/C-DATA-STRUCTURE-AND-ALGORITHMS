// ALL nodes at k- distance from target node
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
// case 1 subtree nodes
void printsubtreenodes(node* root, int k){
    if(root==0 || k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    
    printsubtreenodes(root->left, k-1);
    printsubtreenodes(root->right, k-1);
    
}
// case 2
int printnodesAtK(node* root, node* target, int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        printsubtreenodes(root, k);
        return 0;
    }
    int dl=printnodesAtK(root->left, target, k);
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<" ";
        }
        else{
            printsubtreenodes(root->right, k-dl-2);
        }
        return 1+dl;
    }
    int dr=printnodesAtK(root->right, target, k);
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->data<<" ";
        }
        else{
            printsubtreenodes(root->left, k-dr-2);
        }
        return 1+dr;
    }

    return -1;
}


int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);

    printnodesAtK(root, root->left, 1);

    return 0;
}