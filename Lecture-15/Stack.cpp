// Stack
#include <iostream>
#include "Stack.h"
using namespace std;

int main(){
	Stack s;

	for(int i=0;i<6;i++){
		s.push(i);
	}

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}


	return 0;
}