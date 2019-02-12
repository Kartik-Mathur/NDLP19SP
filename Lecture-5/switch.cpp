#include<iostream>
using namespace std;

int main()
{
	char ch;
	cin>>ch;

	switch(ch)
	{
		case 'M':
		case 'm':cout<<"monday"<<endl;
		         break;

		case 't':cout<<"tuesday"<<endl;
		         break;

		case 'w':cout<<"wednesday"<<endl;
		         break;

		case 'T':cout<<"thrusday"<<endl;
		         break;

		case 'f':cout<<"friday"<<endl;
		         break;

		case 's':cout<<"saturday"<<endl;
		         break;

		case 'S':cout<<"sunday"<<endl;
		         break;

		 default:cout<<"enter valid character"<<endl;        
	}

	return 0;
}