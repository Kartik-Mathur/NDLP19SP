#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){}
};

// Create a stack class 
class stack{
	node* head;
	int count;
public:

	stack(){
		head=NULL;
		count=0;
	}

	void push(int data){
		// Insert at begining
		if(head==NULL){
			head=new node(data);
			count++;
		}
		else{
			node* n=new node(data);
			n->next=head;
			head=n;
			count++;
		}
	}

	void pop(){
		if(head==NULL){
			return;
		}
		node* temp=head;
		head=head->next;
		delete temp;
		count--;
	}

	int top(){
		// Returns the topmost element of the stack
		return head->data;
	}

	bool empty(){
		if(head==NULL){
			return true;
		}
		else{
			return false;
		}
	}

	int size(){
		return count;
	}
};



int main(){
	stack s;

	for(int i=0;i<5;i++){
		s.push(i);
	}

	while(s.empty()!= true){
		cout<<s.top()<<endl;
		s.pop();
	}



	return 0;
}