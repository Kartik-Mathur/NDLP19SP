#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i=2;
	while(i<n)
	{
       if(n%i==0)
       {
          cout<<"Not prime ";
          break;
       
       	}
       	//i++;
       	i=i+1;
    }   	
    if(i==n)
    {
		cout<<"prime"<<endl;
    }
	// else
	// {
 //      cout<<"Not prime "<<endl;
	// }
	cout<<"hello world"<<endl;
	return 0;
}