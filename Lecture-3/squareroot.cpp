#include<iostream>
using namespace std;

int main()
{
	int n,precision;
	cin>>n>>precision;

	float i=0;
	float inc=1;
	int curr_precision=0;
	while(curr_precision<=precision)
	{
		while(i*i<=n)
		{
			i=i+inc;
		}
		i=i-inc;
		inc=inc/10;
		curr_precision++;
    }
	cout<<"square root "<<i<<endl;
	return 0;
}