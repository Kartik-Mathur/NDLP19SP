#include<iostream>
#include<climits>

using namespace std;


int main()
{
	int n;
	cin>>n;

	int a[10];
	int largest=INT_MIN;
	for(int i=0;i<=n-1;i++)
	{
       cin>>a[i];
	}
    
    for(int i=0;i<n;i++)
    {
    	if(largest<a[i])
    	{
    		largest=a[i];
    	}
    }

    cout<<"largest is "<<largest<<endl;

    return 0;

}