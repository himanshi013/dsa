#include<bits/stdc++.h>
using namespace std;
class Node{
public:	int data;
	Node *next=NULL;
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
};
void insertathead(Node* &head,int data){
	Node *temp=new Node(data);

	temp->next=head;
	head=temp;
}
void insertatend(Node * &head,int data){
    Node *temp=new Node(data);
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=NULL;
}
 void insertatmiddle(Node *head,int position,int data){
    Node *temp=head;
    int cnt=1;
    while(cnt<(position-1)){
        temp=temp->next;
        cnt++;
    }
    Node *insert=new Node(data);
    insert->next=temp->next;
    temp->next=insert;
 }
void deleteathead(Node * &head){
    Node *curr=head;
    head=head->next;
    delete curr;

}
void deleteatmid(Node * &head,int position){
    Node *temp=head;
      Node *prev=NULL;
    int cnt=1;
    while(cnt<=position){
        prev=temp;
        temp=temp->next;
        cnt++;
    }
    prev->next=temp->next;
    delete temp;

}
void deleteatend(Node *head){
    Node *prev=NULL;
    Node *temp=head;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;

    }
    prev->next=NULL;
    delete temp;
}
void display(Node *&head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	Node *head=NULL;
	insertathead(head,10);
		insertathead(head,30);
			insertathead(head,40);
            	display(head);
	insertatend(head,20);
    insertatmiddle(head,3,60);
	display(head);
    deleteathead(head);
    display(head);
    deleteatmid(head,2);
    display (head);
    deleteatend(head);
    display (head);
}
