#include<iostream>
using namespace std;


//pass by value

// void swap1(int a,int b)
// {
// 	int temp=a;
// 	a=b;
// 	b=temp;
// 	cout<<"inside function a and b "<<a<<" "<<b<<endl;
// }


//pass by reference
void swap1(int &p,int &q)
{
	int temp=p;
	p=q;
	q=temp;
	cout<<"inside function a and b "<<p<<" "<<q<<endl;
}


int main()
{
	int a=4,b=5;
	swap1(a,b);
	cout<<"after swapping "<<a<<" "<<b<<endl;
	return 0;
}