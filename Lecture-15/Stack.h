#include <iostream>
#include "node.h"
using namespace std;

template<typename T>
class Stack{
	node<T>* head;
	int count;
public:
	Stack(){
		head=NULL;
		count=0;
	}

	void push(T d){
		if(head==NULL){
			head=new node<T>(d);
			count++;
		}
		else{
			node<T>* n=new node<T>(d);
			n->next=head;
			head=n;
			count++;
		}
	}

	void pop(){
		if(head==NULL){
			return;
		}
		node<T>* temp=head;
		head=head->next;
		delete temp;
		count--;
	}

	T top(){
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