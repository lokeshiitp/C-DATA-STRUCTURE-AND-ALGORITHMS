// Max sum path from one node to another in binary tree
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
int MaxPathSumUtil(node* root, int &ans){
    if(root==NULL){
        return 0;
    }
    int left=MaxPathSumUtil(root->left, ans);
    int right=MaxPathSumUtil(root->right, ans);

    int nodemax=max(max(root->data, root->data+left+right),                             
                    max(root->data+left, root->data+right));
        ans=max(ans, nodemax);

    int Singlepathsum=max(root->data, max(root->data+left, root->data+right));
    return Singlepathsum;
}

int MaxSumPath(node* root){
    int ans=INT_MIN;
    MaxPathSumUtil(root, ans);
    return ans;
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->right->right=new node(5);

    cout<<MaxSumPath(root);

    return 0;
}