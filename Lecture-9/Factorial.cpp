// Factorial
#include <iostream>
using namespace std;

int fact(int n){
	if(n==0){
		return 1;
	}

	int ChotaAns=fact(n-1);
	int BadaAns=n*ChotaAns;

	return BadaAns;
}



int main(){
	int n;
	cin>>n;

	cout<<fact(n)<<endl;
	
	return 0;
}