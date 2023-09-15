//Linked list
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

bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void deleteathead(node* &head){
    node* todelet=head;
    head=head->next;

    delete todelet;
}// function for deleting head

void deletion(node* head, int val){
    if(head==NULL){   // if our list is empty
        return;
    }
    if(head->next==NULL){   // if our list contain only one element
        deleteathead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelet=temp->next;
    temp->next=temp->next->next;

    delete todelet;
}// function for deleting except head



int main(){
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    //display(head);
   // insertathead(head,4);
   // display(head);
   // cout<<search(head,4)<<endl;
    //deletion(head,2);
   // display(head);
    deleteathead(head);
    display(head); 

    return 0;
}