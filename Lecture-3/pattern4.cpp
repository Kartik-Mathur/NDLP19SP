#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char ch;
	for(int line=1;line<=n;line++)
	{
       ch='A';

       //increasing loop
       for(int c=1;c<=n-line+1;c++)
       {
       	  cout<<ch<<" ";
       	  ch++;
       }

       ch--;

       //decreasing loop
       for(int c=1;c<=n-line+1;c++)
       {
          cout<<ch<<" ";
          ch--;
       }

       cout<<endl;
	}
	return 0;
}