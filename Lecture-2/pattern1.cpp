#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int line=1;
	int count=1;
	while(line<=n)
	{
		int no=1;
		while(no<=line)
		{
            cout<<count<<" ";
            count=count+1;

			no++;
		}
		line++;
		cout<<endl;
	}
	return 0;
}