// Vector_Stack
#include <iostream>
#include <vector>
using namespace std;

class stack{
	vector<int> v;
public:
	void push(int data){
		v.push_back(data);
	}

	void pop(){
		v.pop_back();
	}

	int top(){
		return v[v.size()-1];
	}

	bool empty(){
		return v.size()==0;
	}
};


int main(){
	stack s;

	for(int i=0;i<=5;i++){
		s.push(i);
	}

	while(s.empty()!= true){
		cout<<s.top()<<endl;
		s.pop();
	}



	return 0;
}