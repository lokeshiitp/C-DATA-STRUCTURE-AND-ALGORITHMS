// construct BST using catalan number
#include<bits/stdc++.h>
#include<vector>
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
vector<node*> constructTrees(int start, int end){
    vector<node*> trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }

    for(int i=start; i<=end; i++){
        vector<node*> leftsubtree=constructTrees(start, i-1);
        vector<node*> rightsubtree=constructTrees(i+1, end);

        for(int j=0; j<leftsubtree.size(); j++){
            node* left=leftsubtree[j];
            for(int k=0; k<rightsubtree.size(); k++){
                node* right=rightsubtree[k];
                node* Node= new node(i);
                Node->left=left;
                Node->right=right;
                trees.push_back(Node);
            }
        }
    }
    return trees;
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


int main(){
    vector<node*> totaltree=constructTrees(1,3);
    for(int i=0; i<totaltree.size(); i++){
        cout<<(i+1)<<" : ";
        preorder(totaltree[i]);
        cout<<endl;
    }
    return 0;
}