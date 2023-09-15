// Zig zag traversal of binary search tree
#include<bits/stdc++.h>
#include<stack>
#include<iostream>
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

void zigzagtraversal(node* root){
    if(root==NULL){
        return;
    }

    stack<node*> currlevel;
    stack<node*> nextlevel;

    bool lefttoright=true;
    currlevel.push(root);

    while(!currlevel.empty()){
        node* temp=currlevel.top();
        currlevel.pop();

        if(temp){
            cout<<temp->data<<" ";
        
            if(lefttoright){
                if(temp->left){
                    nextlevel.push(temp->left);
                }
                if(temp->right){
                    nextlevel.push(temp->right);
                }
            }
            else{
                if(temp->right){
                    nextlevel.push(temp->right);
                }
                if(temp->left){
                    nextlevel.push(temp->left);
                }
            }
        }
        if(currlevel.empty()){
            lefttoright =! lefttoright;
            swap(currlevel, nextlevel);
        }
    }

}

int main(){
    node* root=new node(12);
    root->left=new node(9);
    root->right=new node(15);
    root->left->left=new node(5);
    root->left->right=new node(10);

    zigzagtraversal(root);
    cout<<endl;

    return 0;
}