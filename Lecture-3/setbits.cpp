#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int setbits=0;
	for(int i=n;i>0;i=i>>1)
	{
       setbits+=(i&1);
	}
	cout<<setbits<<endl;
	return 0;
}