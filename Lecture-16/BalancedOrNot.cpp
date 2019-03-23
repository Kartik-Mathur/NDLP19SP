// BalancedOrNot
#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<int> s;

	// push, pop, top, empty
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