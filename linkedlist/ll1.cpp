#include<bits/stdc++.h> 
using namespace std;
class Node{
public:	int data; 
	Node *next;
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
};
int main(){
Node *temp=new Node(10);
cout<<temp->data;
cout<<temp->next;
}