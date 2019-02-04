#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int var;
	for(int line=1;line<=n;line++)
	{
        if(line%2)
        {
        	var=1;
        }
        else
        {
        	var=0;
        }

        for(int num=1;num<=line;num++)
        {
        	cout<<var<<" ";
        	var=1-var;
        }
        cout<<endl;
	}
	return 0;
}