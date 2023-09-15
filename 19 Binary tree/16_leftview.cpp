// Left view of a binary tree
#include<bits/stdc++.h>
#include<iostream>
#include<queue>
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

void Leftview(node* root){
    if(root==NULL){
        return;
    }

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        int n=q.size();

        for(int i=0; i<n; i++){
            node* temp=q.front();
            q.pop();

            if(i==0){
                cout<<temp->data<<" ";
            }
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
}


int main(){
    node* root1=new node(5);
    root1->left=new node(3);
    root1->right=new node(6);
    root1->left->left=new node(2);
    root1->left->right=new node(4);
    
    Leftview(root1);

    return 0;

}