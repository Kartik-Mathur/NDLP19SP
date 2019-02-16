// Arrays
#include <iostream>
using namespace std;

int main(){
	int a[]={1,2};
	int n=sizeof(a)/sizeof(int);

	cout<<a<<endl;
	cout<<a+1<<endl;
	cout<<&a[0]<<endl;
	cout<<&a[0]+1<<endl;
	cout<<&a<<endl;
	cout<<&a+1<<endl;

	return 0;
}