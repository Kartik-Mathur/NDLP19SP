#include<iostream>
using namespace std;
int i=10;

int main()
{

	int a=1;
	int i=2;
	for(int i=1;i<=5;i++)
	{
        int j;
		for(j=0;j<7;j++)
		{

		}
		cout<<j<<endl;
		cout<<i<<endl;

		a++;

	}

	cout<<"outside for loop "<<endl;
	cout<<a<<endl;
	cout<<"main wala "<<i<<endl;
	cout<<"global wala "<<::i++<<endl;
	cout<<"global wala "<<::i<<endl;

	return 0;
}