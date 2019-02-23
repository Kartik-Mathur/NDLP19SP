// InbuiltSTL
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char a[]="Hello";
	char b[100]="World";

	cout<<strlen(a)<<endl;

	// strcpy(b,a);
	// cout<<a<<endl<<b<<endl;

	strcat(a,b);
	cout<<a<<endl;


	return 0;
}