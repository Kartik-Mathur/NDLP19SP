#include<iostream>
#include<climits>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int largest=INT_MIN;
	int smallest=INT_MAX;
	int sum=0;

	int i=1;
	int no;
	while(i<=n)
	{
       cin>>no;
       if(largest<no)
       {
       	 largest=no;
       }
       if(smallest>no)
       {
       	 smallest=no;
       }
       sum=sum+no;
       i++;
	}

	cout<<"largest is "<<largest<<" smallest is "<<smallest<<" sum is "<<sum<<endl;
	cout<<"avg is "<<sum/n<<endl;
	return 0;
}