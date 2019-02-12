#include<iostream>
using namespace std;

int main()
{

	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	//Bubble sort

	for(int itr=0;itr<=n-2;itr++)
	{
		int count=0;
		for(int i=0;i<=n-2-itr;i++)
		{
			if(a[i+1]<a[i])
			{
               swap(a[i+1],a[i]);
               count++;
			}
		}

		if(count==0)
		{
			break;
		}
	}


	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}


	return 0;
}