#include<iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;
	for(int line=1;line<=n;line++)
	{
		for(int j=1;j<=line;j++)
		{
			cout<<"*";
		}

		cout<<" ";

		for(int j=1;j<=n-line+1;j++)
		{
			cout<<"*";
		}

		cout<<" ";


		for(int j=1;j<=n-line+1;j++)
		{
			cout<<"*";
		}

		cout<<" ";

		for(int j=1;j<=line;j++)
		{
			cout<<"*";
		}


		cout<<endl;


	}
	return 0;
}