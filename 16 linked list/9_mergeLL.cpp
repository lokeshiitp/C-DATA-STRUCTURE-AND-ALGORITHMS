#include<iostream>
using namespace std;
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
node* merge(node* &head1, node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* dummynode=new node(-1);
    node* p3=dummynode;

    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }

    return dummynode->next;
}

node* mergeResursive(node* &head1, node* &head2){
    node* result;
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }

    if(head1->data<head2->data){
        result=head1;
        result->next=mergeResursive(head1->next, head2);
    }
    else{
        result=head2;
        result->next=mergeResursive(head1, head2->next);
    }

    return result;
}

int main(){
    node* head1=NULL;
    node* head2=NULL;
    int ar1[]={1,4,5,7};
    int ar2[]={2,3,6};
    for(int i=0; i<4; i++){
        insertattail(head1, ar1[i]);
    }
    for(int i=0; i<3; i++){
        insertattail(head2, ar2[i]);
    }
    display(head1);
    display(head2);
    //node* newhead=merge(head1, head2);
    node* newhead=mergeResursive(head1, head2);
    display(newhead);

    return 0;
}