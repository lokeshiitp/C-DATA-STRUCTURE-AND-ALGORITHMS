// diameter of a binary tree
#include<bits/stdc++.h>
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

int calHeight(node* root){
    if(root==NULL){
        return 0;
    }
    return max(calHeight(root->left), calHeight(root->right))+1;
}

int calDia(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=calHeight(root->left);
    int rheight=calHeight(root->right);
    int currdia=lheight+rheight+1;
    int ldia=calDia(root->left);
    int rdia=calDia(root->right);

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

    cout<<calDia(root)<<endl;
    return 0;

}