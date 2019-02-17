// Functions
#include <iostream>
using namespace std;

void fun(int *a){
	*a=*a+1;
	cout<<"Fun x: "<<*a<<endl; // 11 
	return;
}




int main(){
	int x;
	x=10;

	fun(&x);
	cout<<"Main x: "<<x<<endl; // 10

	return 0;
}