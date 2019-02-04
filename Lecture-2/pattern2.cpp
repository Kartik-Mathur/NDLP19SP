#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int line=1;
	while(line<=n)
	{

		//spacing loop
       int spaces=1;
       while(spaces<=n-line)
       {
 
           cout<<" ";
       	   spaces++;
       }
       
       //increasing loop
       int j=line;
       int count=1;
       while(count<=line)
       {
       	  cout<<j;
       	  j++;
       	  count++;
       }
       

       //decreasing loop

       j=j-2;
       while(j>=line)
       {
       	  cout<<j;
       	  j--;
       } 

         cout<<endl;
		line++;
	}
	return 0;
}