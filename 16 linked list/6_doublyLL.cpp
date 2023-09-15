// Doubly Linked List
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void Insertathead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}

void Insertattail(node* &head, int val){

    if(head==NULL){
        Insertathead(head, val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

void deleteathead(node* &head){
    node* todelet=head;
    head=head->next;
    head->prev=NULL;

    delete todelet;
}

void deletion(node* &head, int pos){
    if(pos==1){
        deleteathead(head);
        return;
    }
    node* temp=head;

    int count=1;
    while(temp->next!=NULL && count!=pos){
        temp=temp->next;
        count++;

    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }

    delete temp;
}

int main(){
    node* head=NULL;
    Insertattail(head, 1);
    Insertattail(head, 2);
    Insertattail(head, 3);
    Insertattail(head, 4);
    display(head);
    Insertathead(head, 5);
    display(head);

    deletion(head, 2);
    display(head);
    deleteathead(head);
    display(head);

    return 0;
}