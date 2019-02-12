#include<iostream>
using namespace std;


bool prime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}

	return true;
}


void isPrime(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(prime(i))
		{
			cout<<i<<" ";
		}
	}
	return;
}

int main()
{
    isPrime(10);
	return 0;
}












