#include<bits/stdc++.h>
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
void insert_at_head(node* &head,int val){
    node* n= new node(val);
    n->next=head;
    head=n;

}
void insert_at_end(node* &head,int val){
    node* n=new node(val);
     
     if(head==NULL){
         head=n;
         return;
     }
    node*temp =head;
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
    }
    cout<<endl;
}
bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main(){
     
     node* head = NULL;
     insert_at_end(head,1);     
     insert_at_end(head,5);     

     display(head);
     insert_at_head(head,8);
     display(head);
     cout<<search(head,5)<<endl;
     return 0;
}