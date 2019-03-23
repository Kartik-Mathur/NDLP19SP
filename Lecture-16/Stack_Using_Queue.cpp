// Stack_Using_Queue
#include <iostream>
#include <queue>
using namespace std;

class stack{
	queue<int> q1;
	queue<int> q2;
public:

	void push(int data){
		if(!q1.empty() && q2.empty()){
			q1.push(data);
		}
		else if(q1.empty() && !q2.empty()){
			q2.push(data);
		}
		else{
			q1.push(data); // you can also write q2.push(data)
		}
	}

	void pop(){
		if(!q1.empty() && q2.empty()){
			while(q1.size()!=1){
				int data=q1.front();
				q1.pop();
				q2.push(data);
			}
			q1.pop();
		}
		else if(q1.empty() && !q2.empty()){
			while(q2.size()!=1){
				int data=q2.front();
				q2.pop();
				q1.push(data);
			}
			q2.pop();
		}
		else{
			return;
		}
	}

	int top(){
		if(!q1.empty() && q2.empty()){
			while(q1.size()!=1){
				int data=q1.front();
				q1.pop();
				q2.push(data);
			}
			int data=q1.front();
			q1.pop();
			q2.push(data);
			return data;
		}
		else{
			while(q2.size()!=1){
				int data=q2.front();
				q2.pop();
				q1.push(data);
			}
			int data=q2.front();
			q2.pop();
			q1.push(data);
			return data;
		}		
	}

	bool empty(){
		return q1.empty() && q2.empty();
	}

};


int main(){
	stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}

	return 0;
}