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

node* search(node* head,int key){
	while(head!=NULL){
		if(head->data==key){
			return head;
		}
		head=head->next;
	}
	return NULL;
}
node* recSearch(node* head,int key){
	if(head==NULL){
		return NULL;
	}
	if(head->data==key){
		return head;
	}
	return recSearch(head->next,key);
}

void DeleteAtBeg(node* &head,node* &tail){
	if(head==NULL){
		return;
	}
	else if(head->next==NULL){
		delete head;
		head=tail=NULL;
	}
	else{
		node* temp=head;
		head=head->next;
		delete temp;
	}

}

void DeleteAtEnd(node* &head,node* &tail){
	if(head==NULL){
		return;
	}
	else if(head->next==NULL){
		delete head;
		head=tail=NULL;
	}
	else{
		node* temp=head;
		while(temp->next!=tail){
			temp=temp->next;
		}
		delete tail;
		tail=temp;
		temp->next=NULL;
	}
}

void DeleteAtMid(node* &head,node* &tail,int pos){
	if(pos==0){
		DeleteAtBeg(head,tail);
	}
	else if(pos>=length(head)){
		return;
	}
	else{
		node* temp=head;
		int jump=1;
		while(jump<=pos-1){
			temp=temp->next;
			jump++;
		}
		node* n=temp->next;
		temp->next=n->next;
		delete n;
	}
}


void Print(node* head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}

node* mid(node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	node* slow=head;
	node* fast=head->next;
	// while(fast!=NULL&&fast->next!=NULL){
	// 	fast=fast->next->next;
	// 	slow=slow->next;
	// }
	while(fast!=NULL){
		fast=fast->next;
		if(fast!=NULL){
			fast=fast->next;
			slow=slow->next;
		}
	}
	return slow;
}

void ReverseLL(node* &head,node* &tail){
	if(head==NULL||head->next==NULL){
		return;
	}
	tail=head;
	node* prev=NULL;
	node* current=head;
	node* n;
	while(current!=NULL){
		n=current->next;
		current->next=prev;
		prev=current;
		current=n;
	}
	head=prev;
}

node* merge(node* h1,node* h2){
	if(h1==NULL){
		return h2;
	}
	if(h2==NULL){
		return h1;
	}

	node* p;
	if(h1->data<h2->data){
		p=h1;
		p->next=merge(h1->next,h2);
	}
	else{
		p=h2;
		p->next=merge(h1,h2->next);
	}
	return p;
}


int main(){
	node* head=NULL;
	node* head1=NULL;
	node* tail=NULL;
	node* tail1=NULL;

	InsertAtEnd(head,tail,1);
	InsertAtEnd(head,tail,3);
	InsertAtEnd(head,tail,5);
	InsertAtEnd(head1,tail1,2);
	InsertAtEnd(head1,tail1,4);
	InsertAtEnd(head1,tail1,6);
	InsertAtEnd(head1,tail1,7);
	InsertAtEnd(head1,tail1,8);
	Print(head);
	Print(head1);
	head=merge(head,head1);
	Print(head);

	// InsertAtBeg(head,tail,0);
	// InsertAtBeg(head,tail,1);
	// InsertAtBeg(head,tail,2);
	// InsertAtBeg(head,tail,3);
	// InsertAtEnd(head,tail,4);
	// InsertAtEnd(head,tail,5);
	// InsertAtEnd(head,tail,5);
	// Print(head);
	// ReverseLL(head,tail);
	// Print(head);
	// node* m=mid(head);
	// cout<<m->data<<endl;
	// DeleteAtBeg(head,tail);
	// DeleteAtEnd(head,tail);
	// DeleteAtMid(head,tail,3);
	// InsertAtMid(head,tail,6,3);
	// InsertAtMid(head,tail,10,1);
	// Print(head);
	// cout<<length(head)<<endl;

	// while(1){
	// 	int data;
	// 	cin>>data;
	// 	node* ans=search(head,data);
	// 	if(ans!=NULL){
	// 		cout<<ans->data<<endl;
	// 	}
	// 	else{
	// 		cout<<"Not Found"<<endl;
	// 	}		

	// 	ans=recSearch(head,data);
	// 	if(ans!=NULL){
	// 		cout<<ans->data<<endl;
	// 	}
	// 	else{
	// 		cout<<"Not Found"<<endl;
	// 	}
	// }


	return 0;
}