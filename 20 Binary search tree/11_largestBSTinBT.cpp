// find size of largest BST in BT
#include<iostream>
#include<climits>
#include<math.h>
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

struct Info{
    int size;
    int min;
    int max;
    int ans;
    bool isBST;
};

Info largetBSTinBT(node* root){
    if(root==NULL){
        return {0, INT_MIN, INT_MAX, 0, true};
    }
    if(root->left==NULL && root->right==NULL){
        return {1, root->data, root->data, 1, true};
    }
    Info leftInfo=largetBSTinBT(root->left);
    Info rightInfo=largetBSTinBT(root->right);

    Info curr;
    curr.size=(1+leftInfo.size+rightInfo.size);
    if(leftInfo.isBST && rightInfo.isBST && leftInfo.max<root->data && rightInfo.min>root->data){
        curr.min=min(leftInfo.min, min(rightInfo.min, root->data));
        curr.max=max(rightInfo.max, max(leftInfo.max, root->data));

        curr.ans=curr.size;
        curr.isBST=true;
        return curr;
    }
    curr.ans=max(leftInfo.ans, rightInfo.ans);
    curr.isBST=false;
    return curr;
}

int main(){
    node* root=new node(15);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(5);

    cout<<"Largest BST in BT : "<<largetBSTinBT(root).ans<<endl;

    return 0;
}