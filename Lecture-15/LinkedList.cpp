#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
	node(int d):data(d),next(NULL){}
};

void InsertAtEnd(node* &head,int data){
	if(head==NULL){
		head=new node(data);
	}
	else{
		node* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		node* n=new node(data);
		temp->next=n;
	}
}

void Print(node* head){
	while(head){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
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

node* mid(node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	node* fast=head->next;
	node* slow=head;
	while(fast && fast->next){
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
}

node* MergeSort(node* head){
	if(head==NULL||head->next==NULL){
		return head;
	}
	// Divide
	node* m=mid(head);
	node* a=head;
	node* b=m->next;
	m->next=NULL;
	// Sort
	a=MergeSort(a);
	b=MergeSort(b);
	// Merge
	node* NayaHead=merge(a,b);
	return NayaHead;
}

int length(node* head){
	int count=0;
	while(head){
		count++;
		head=head->next;
	}
	return count;
}

void BubbleSort(node* &head){

	node* current=head;
	node* prev=NULL;
	node* n;
	int l=length(head);
	for(int i=0;i<=l-2;i++){
		current=head;
		prev=NULL;
		while(current && current->next){
			if(current->data>current->next->data){
				// swapping will take place
				if(prev==NULL){
					n=current->next;
					current->next=n->next;
					n->next=current;
					head=prev=n;
				}
				else{
					n=current->next;
					current->next=n->next;
					prev->next=n;
					n->next=current;
					prev=n;
				}
			}
			else{
				// swapping will not take place
				n=current->next;
				prev=current;
				current=n;
			}
		}

	}
}

bool isCyclic(node* head){
	node* slow=head;
	node* fast=head;

	while(fast!=NULL){
		fast=fast->next;
		if(fast){
			fast=fast->next;
			slow=slow->next;
		}
		if(fast==slow){
			return true;
		}
	}
	return false;
}

void CreateCycle(node* head){
	node* temp=head;

	while(temp->next!=NULL){
		temp=temp->next;
	}

	temp->next=head->next->next;
}

void BreakCycle(node* head){
	node* fast=head;
	node* slow=head;

	while(fast){
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
			break;
		}
	}

	node* prev=head;
	while(prev->next!=fast){
		prev=prev->next;
	}

	slow=head;
	while(slow!=fast){
		prev=fast;
		fast=fast->next;
		slow=slow->next;
	}
	prev->next=NULL;
}


int main(){
	node* head=NULL;

	int data;
	cin>>data;
	while(data!=-1){
		InsertAtEnd(head,data);
		cin>>data;
	}
	Print(head);
	CreateCycle(head);
	if(isCyclic(head)){
		cout<<"Cycle Present"<<endl;
		BreakCycle(head);
	}

	Print(head);

	// InsertAtEnd(head,1);
	// InsertAtEnd(head,3);
	// InsertAtEnd(head,5);
	// InsertAtEnd(head,7);
	// Print(head);
	// InsertAtEnd(head1,2);
	// InsertAtEnd(head1,4);
	// InsertAtEnd(head1,6);
	// InsertAtEnd(head1,8);
	// InsertAtEnd(head1,9);
	// Print(head1);

	// head=merge(head,head1);
	// head=MergeSort(head);
	// BubbleSort(head);‘
	// Print(head);

	return 0;
}