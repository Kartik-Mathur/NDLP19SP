#include<iostream>
using namespace std;

int main()
{
	int a[10];
	int i;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int data;
	cin>>data;

	for(i=0;i<n;i++)
	{
		if(a[i]==data)
		{
			cout<<"data found at "<<i<<endl;
			break;
		}
	}

	if(i==n)
	{ 
       cout<<"not found "<<endl;
	}

	return 0;
}