// Arrays
#include <iostream>
using namespace std;

int main(){
	int a=10;
	float b=10.12;
	char ch='A';

	int *x=&a;
	int *y;
	// *y=&a; WRONG WAY TO DO IT
	y=&a; //RIGHT WAY TO DO IT

	*y=1000;

	cout<<x<<endl;
	cout<<*x<<endl;
	cout<<y<<endl;
	cout<<*y<<endl;


	int *aptr=&a;
	// // float* bptr=&b;
	// char* d=&ch;

	cout<<aptr<<endl;
	cout<<aptr+1<<endl;
	// cout<<(int*)d<<endl;
	// cout<<(int*)(d+1)<<endl;

	// cout<<aptr<<endl;
	// cout<<&a<<endl;

	// cout<<bptr<<endl;
	// cout<<&b<<endl;

	// cout<<(float*)&ch<<endl;
	// cout<<(int*)d<<endl;


	return 0;
}