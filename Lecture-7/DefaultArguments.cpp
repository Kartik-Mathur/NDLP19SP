// DefaultArguments
#include <iostream>
using namespace std;

int sum1(int a=0,int b=0,int c=0){
	return a+b+c;
}


int main(){
	cout<<sum1(1,2,3)<<endl;
	cout<<sum1(1,2)<<endl;
	cout<<sum1(1)<<endl;
	cout<<sum1()<<endl;

	return 0;
}