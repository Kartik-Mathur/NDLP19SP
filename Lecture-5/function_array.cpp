#include<iostream>
using namespace std;


void printArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return;
}


int main()
{
	int a[100];
	for(int i=0;i<10;i++)
	{
		a[i]=i;
	}
    
    printArray(a,10);
	return 0;
}