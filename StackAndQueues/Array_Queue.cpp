// Array_Queue
#include <iostream>
using namespace std;

class Queue{
	int *arr;
	int n;
	int count;
	int f;
	int r;
public:
	Queue(int s=4){
		n=s;
		count=0;
		f=0;
		r=n-1;
		arr=new int[n];
	}

	void push(int data){
		if(count==n){
			cout<<"OverFlow"<<endl;
			return;
		}
		r=(r+1)%n;
		arr[r]=data;
		count++;
	}

	void pop(){
		if(count==0){
			cout<<"UnderFlow"<<endl;
			return;
		}
		f=(f+1)%n;
		count--;
	}

	bool empty(){
		return count==0;
	}

	int front(){
		return arr[f];
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

	q.pop();


	return 0;
}