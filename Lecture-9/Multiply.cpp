// Multiply
#include <iostream>
using namespace std;

int multiply(int a,int b){
	if(b==0){
		return 0;
	}

	int ChotaAns=multiply(a,b-1);
	return a+ChotaAns;
}


int main(){
	int a,b;
	cin>>a>>b;
	cout<<multiply(a,b)<<endl;
	return 0;
}