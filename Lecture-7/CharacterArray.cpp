// CharacterArray
#include <iostream>
using namespace std;

int main(){
	char a[100]={'H','A','R','R','Y','\0'};
	char b[]={'H','A','R','R','Y','\0'};
	char d[5]={'X','Y','C','D','\0'};

	char c[6]="Hello";

	cout<<a<<endl;
	cout<<&a[0]<<endl;
	cout<<&a[1]<<endl;
	cout<<&a[2]<<endl;
	cout<<&a[3]<<endl;
	cout<<a[0]<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<(void*)d<<endl;
	cout<<(void*)a<<endl;
	cout<<(void*)b<<endl;


	return 0;
}