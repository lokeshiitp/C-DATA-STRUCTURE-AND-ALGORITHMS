#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;        // taking as a pointer

    node(int val){     //for inserting the values in the class node
        data=val;
        next=NULL;
    }
};
void insertathead(node* &head, int val){   // function for insert value at begining  
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertattail(node* &head, int val){     // function for insert the value in the node at last
    node* n=new node(val);                   // node* &head== taking by reference
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
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}

int length(node* head){
    int l=0;
    node* temp=head;

    while(temp->next!=NULL){
        l++;
        temp=temp->next;
    }

    return l;
}

node* kappend(node* &head, int k){
    node* newhead;
    node* newtail;
    node* tail=head;

    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newtail=tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }

        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;

    return newhead;
}

int main(){

    node* head=NULL;
    for(int i=1; i<7; i++){
        insertattail(head, i);
    }
    display(head);
    node* newhead=kappend(head, 3);
    display(newhead);
    return 0;
}