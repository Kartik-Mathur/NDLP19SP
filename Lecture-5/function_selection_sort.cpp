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



void selectionsort(int a[],int n)
{

	for(int i=0;i<=n-2;i++)
    {
    	int min=i;
    	for(int j=i+1;j<n;j++)
    	{
    		if(a[min]>a[j])
    		{
    			min=j;
    		}
    	}

    	int temp=a[min];
    	a[min]=a[i];
    	a[i]=temp;
    }

}


int main()
{
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    selectionsort(a,n);
    printArray(a,n);
	return 0;
}