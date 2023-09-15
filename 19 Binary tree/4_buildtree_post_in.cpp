//build tree by help of postorder and inorder
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
int search(int inorder[], int start, int end, int val){
    for(int i=start; i<=end; i++){
        if(inorder[i]==val){
            return i;
        }
    }
    return -1;
}
//function for built tree
node* builtTree(int postorder[], int inorder[], int start, int end){
    static int inx=4;
    if(start>end){
        return NULL;
    }
    int val=postorder[inx];
    inx--;
    node* curr=new node(val);
    if(start==end){
        return curr;
    }

    int pos=search(inorder, start, end, val);
    curr->right=builtTree(postorder,inorder,pos+1,end);
    curr->left=builtTree(postorder,inorder,start,pos-1);

    return curr;
}

void inorderprint(node* root){
    if(root==NULL){
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}

int main(){
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    //built tree
    node* root=builtTree(postorder,inorder,0,4);
    inorderprint(root);
    cout<<"\n";

    return 0;
}