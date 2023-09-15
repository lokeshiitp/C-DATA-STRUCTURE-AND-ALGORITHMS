// another method for calculating diameter of a binary tree
// time complexity =O(n)
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

int calDia(node* root, int* height){
    if(root==NULL){
        *height=0;
        return 0;
    }
    int lh=0, rh=0;
    int ldia=calDia(root->left, &lh);
    int rdia=calDia(root->right, &rh);
    int currdia=lh+rh+1;
    *height=max(lh,rh)+1;

    return max(currdia, max(ldia, rdia));

}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
     
    int height=0;
    cout<<calDia(root, &height)<<endl;

    return 0;
}