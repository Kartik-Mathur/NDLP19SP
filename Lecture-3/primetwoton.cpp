#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	for(int no=2;no<=n;no++)
	{
		for(i=2;i<no;i++)
		{
			if(no%i==0)
			{
				break;
			}
		}
		if(i==no)
		{
			cout<<no<<" ";
		}
	}
	cout<<endl;
	return 0;
}