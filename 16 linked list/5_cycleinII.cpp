// flode's algorithems
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
void display(node* &head){
    node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}

void makecycle(node* &head, int pos){
    node* temp=head;
    node* starptr;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            starptr=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=starptr;
}

bool detectcycle(node* &head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}

void RemoveCycle(node* &head){
    node* slow=head;
    node* fast=head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }

    slow->next=NULL;
    
}

int  main(){
    node* head=NULL;
    for(int i=1; i<12; i++){
        insertattail(head, i);
    }
    display(head);
    makecycle(head, 4);      //when we display cycle then its make cycle continiously
   // display(head);
   cout<<detectcycle(head)<<endl;
   RemoveCycle(head);
   cout<<detectcycle(head)<<endl;
   display(head);
    return 0;
}