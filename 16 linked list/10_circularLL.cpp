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
void Insertathead(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void Insertattail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        Insertathead(head, val);
        return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void display(node* head){
    node* temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    cout<<endl;
    
}
void DeleteatHead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node* todelet=head;
    temp->next=head->next;
    head=head->next;

    delete todelet;
}
void deletion(node* &head, int pos){
    if(pos==1){
        DeleteatHead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}

int main(){
    node* head=NULL;
    int ar[]={2,3,5,6,1,7};
    for(int i=0; i<6; i++){
        Insertattail(head, ar[i]);
    }
    display(head);
    deletion(head, 3);
    display(head);
    DeleteatHead(head);
    display(head);

    return 0;
}