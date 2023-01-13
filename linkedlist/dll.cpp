#include<bits/stdc++.h>
using namespace std;
class Node{
   public: int data;
    Node *prev=NULL;
    Node *next=NULL;
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;

    }
};
void insertatbeg(Node * &head,int data){
    if(head==NULL){
         Node *temp=new Node(data);
        head=temp;
    }
    else{
     Node *temp=new Node(data);
  head->next=temp;
  temp->prev=head;
head=temp;
    }

}
void insertatend(Node *head,int data){
Node *temp=new Node(data);
Node *curr=head;
while(curr->next!=NULL){
    curr=curr->next;
}
curr->next=temp;
temp->prev=curr;
temp->next=NULL;
}
void insertatmid(Node *head,int pos,int data){
    Node *temp=new Node(data);
    Node *curr=head;
   int cnt=1;
   while(cnt<pos-1){
       curr=curr->next;
       cnt++;
   }
  temp->next=curr->next;
  curr->next->prev=temp;
  curr->next=temp;
  temp->prev=curr;
}
void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    cout<<endl;
}
int main(){
  //  Node *n1=new Node(16);

    Node *head=NULL;
    display(head);
    insertatbeg(head,6);
    display(head);
    insertatend(head,10);
    insertatend(head,15);
    display(head);
    insertatmid(head,3,8);
    display(head);
   

}