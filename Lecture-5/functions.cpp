#include<iostream>
using namespace std;

bool prime(int);


void printHello()
{
	cout<<"hello"<<endl;
	return;
}


void sum(int a,int b)
{
   cout<<a+b<<endl;
}


int sum1(int a,int b)
{
	int sum;
	sum=a+b;
	//return sum;
	return (a+b);
}

int main()
{
	printHello();
	printHello();
	sum(3,4);
	int s=sum1(3,4);
	cout<<s<<endl;
	cout<<sum1(4,4)<<endl;
    
    int n=9;
    if(prime(n))
    {
    	cout<<"Prime"<<n<<endl;
    }

    else
    {
    	cout<<"Not Prime "<<n<<endl;
    }



    bool s1=prime(n);
    cout<<s1<<endl;

	return 0;
}




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