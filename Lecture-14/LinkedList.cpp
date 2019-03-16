#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d){
		data=d;
		next=NULL;
	}
};

void InsertAtBeg(node* &head,node* &tail,int data){
	if(head==NULL){
		// Linked is empty
		node* n=new node(data);
		head=tail=n;
	}
	else{
		node* n=new node(data);
		n->next=head;
		head=n;
	}
}
void InsertAtEnd(node* &head,node* &tail,int data){
	if(head==NULL){
		head=tail=new node(data);
	}
	else{
		node* n=new node(data);
		tail->next=n;
		tail=n;
	}
}

int length(node* head){
	int count=0;
	while(head!=NULL){
		count++;
		head=head->next;
	}
	return count;
}

void InsertAtMid(node* &head,node* &tail,int data,int pos){
	if(pos==0){
		InsertAtBeg(head,tail,data);
		return;
	}
	else if(pos>=length(head)){
		InsertAtEnd(head,tail,data);
		return;
	}
	else{
		node* temp=head;
		int jump=1;
		while(jump<=pos-1){
			temp=temp->next;
			jump++;
		}
		node* n=new node(data);
		n->next=temp->next;
		temp->next=n;
	}
}


void Print(node* head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}

int main(){
	node* head=NULL;
	node* tail=NULL;

	InsertAtBeg(head,tail,0);
	InsertAtBeg(head,tail,1);
	InsertAtBeg(head,tail,2);
	InsertAtBeg(head,tail,3);
	InsertAtEnd(head,tail,4);
	InsertAtEnd(head,tail,5);
	Print(head);
	InsertAtMid(head,tail,6,3);
	InsertAtMid(head,tail,10,1);
	Print(head);
	// cout<<length(head)<<endl;




	return 0;
}