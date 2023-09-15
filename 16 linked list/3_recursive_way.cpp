// recursive way of reverse of a linked list
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertattail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

node* ReverseRecursive(node* &head){
    if(head==NULL || head->next==NULL){    // base condition
        return head;
    }
    node* newhead=ReverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}

int main(){
    node* head=NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    display(head);
    node* diffhead=ReverseRecursive(head);
    display(diffhead); 

    return 0;
}