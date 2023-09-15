// find horizontal distance in binary tree
#include<iostream>
#include<vector>
#include<map>
using namespace std;

#define v vector<int>
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

void getVerticalorder(node* root, int hdis, map<int, v> &m){
    if(root==NULL){
        return;
    }
    m[hdis].push_back(root->data);
    getVerticalorder(root->left, hdis-1, m);
    getVerticalorder(root->right, hdis+1, m);
}
int main(){
    node* root=new node(10);
    root->left=new node(7);
    root->right=new node(4);
    root->left->left=new node(3);
    root->left->right=new node(11);
    root->right->left=new node(14);
    root->right->right=new node(6);

    map<int, vector<int>> m;
    int hdis=0;
    getVerticalorder(root, hdis, m);

    map<int, v> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        for(int i=0; i<(it->second).size(); i++){
            cout<<(it->second)[i]<<" ";
        }cout<<endl;
    }
    return 0;
}