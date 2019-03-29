// Queue
#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){}

};

class Queue{
	node* f;
	node* rear;
	int count;
public:
	Queue(){
		f=rear=NULL;
		count=0;
	}

	void push(int data){
		if(f==NULL){
			f=rear=new node(data);
			count++;
		}
		else{
			node* n=new node(data);
			rear->next=n;
			rear=n;
			count++;
		}
	}

	void pop(){
		if(f==NULL){
			return;
		}
		else if(f->next==NULL){
			delete f;
			f=rear=NULL;
			count--;
		}
		else{
			node* temp=f;
			f=f->next;
			delete temp;
			count--;
		}
	}

	int front(){
		return f->data;
	}

	bool empty(){
		return f==NULL; // count==0
	}
};

int main(){

	Queue q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}

	return 0;
}