#include<iostream>
using namespace std;

int main()
{
	int p,q;
	char ch;
	cout<<"hello world"<<endl;
	cin>>p>>q;
	//cin>>ch;
	cout<<p<<q<<endl;
	cout<<"sum is "<<p+q<<endl;
	int sum=p+q;
	cout<<sum<<'\n';
	if(sum%2==0)
	{
		cout<<"sum is even"<<endl;
	}
	else
	{
		cout<<"sum is odd"<<endl;
	}
	cout<<"multiplication is "<<p*q<<endl;
//	cout<<ch;
//	cout<<'\n';
	return 0;
}