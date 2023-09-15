//build tree by help of preorder and inorder
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

int search(int inorder[], int start, int end, int curr){
    for(int i=start; i<=end; i++){
        if(inorder[i]==curr){
            return i;
        }

    }
    return -1;
}
//function for built tree
node* builtTree(int preorder[], int inorder[], int start, int end){
    static int inx=0;
    if(start>end){
        return NULL;
    }
    int curr=preorder[inx];
    inx++;
    struct node* n=new node(curr);
    if(start==end){
        return n;
    }
    int pos = search(inorder, start, end, curr);
    n->left= builtTree(preorder, inorder, start, (pos-1));
    n->right= builtTree(preorder, inorder, (pos+1), end);
    
    return n;
}
// function for print 
void inorderPrint(node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
int main(){
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

    node* root=builtTree(preorder, inorder, 0, 4);
    inorderPrint(root);

    return 0;
}