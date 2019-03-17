#include <iostream>
// #include "node.h"
using namespace std;
class node{
public:
	int data;
	node* next;
	node(int d):data(d),next(NULL){}
};
class Stack{
	node* head;
	int count;
public:
	Stack(){
		head=NULL;
		count=0;
	}

	void push(int d){
		if(head==NULL){
			head=new node(d);
			count++;
		}
		else{
			node* n=new node(d);
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
		return head->data;
	}

	bool empty(){
		if(count==0){
			return true;
		}
		else{
			return false;
		}
	}
};