#include<iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;
	int ans=0;
	int data;
	for(int i=1;i<=n;i++)
	{
       cin>>data;
       ans=ans^data;
	}

	cout<<"ans is "<<ans<<endl;

	return 0;
}