// Stack
#include <iostream>
// #include "Stack.h"
#include <stack>
using namespace std;

int main(){
	stack<int> s;
	// s.push('A');
	// s.push('B');
	// s.push('C');
	for(int i=0;i<10;i++){
		s.push(i);
	}

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}


	return 0;
}