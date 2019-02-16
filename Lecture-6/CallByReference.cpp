// CallByReference
#include <iostream>
using namespace std;

void swap1(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;

	cout<<"In swap a : "<<a<<" b: "<<b<<endl; // 20 10
}
int main(){
	int x,y;
	x=10;
	y=20;

	swap1(x,y);

	cout<<"In Main a: "<<x<<" b: "<<y<<endl; // 10 20 




	return 0;
}