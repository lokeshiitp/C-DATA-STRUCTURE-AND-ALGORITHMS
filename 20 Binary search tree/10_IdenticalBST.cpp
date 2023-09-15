// check given two BST are identical or not
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

// isIdentical
bool IsIdentical(node* root1, node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool cond1=root1->data==root2->data;
        bool cond2=IsIdentical(root1->left, root2->left);
        bool cond3=IsIdentical(root1->right, root2->right);

        if(cond1 && cond2 && cond3){
            return true;
        }else{
            return false;
        }
    }
}

int main(){
    node* root1=new node(2);
    root1->left=new node(1);
    root1->right=new node(3);

    node* root2=new node(3);
    root2->left=new node(1);
    root2->right=new node(2);

    if(IsIdentical(root1, root2)){
        cout<<"BSTs are Identical"<<endl;
    }else{
        cout<<"BSTs are not Identical"<<endl;
    }

    return 0;
}