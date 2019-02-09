#include<iostream>
using namespace std;


int main()
{
	char ch;
	int alpha=0,num=0,spaces=0,extraa=0,newline=0;
	ch=cin.get();
	while(ch!='$')
	{
       if(ch>='a' && ch<='z')
       {
       	 alpha++;
       }
       
       else if(ch>='A' && ch<='Z')
       {
       	 alpha++;
       }


       else if(ch>='0' && ch<='9')
       {
       	 num++;
       }

       else if(ch==' ')
       {
       	 spaces++;
       }
       else if(ch=='\n')
       {
       	  newline++;
       }
       else
       {
       	 extraa++;
       }
       ch=cin.get();
	}

	cout<<"alphabets are "<<alpha<<endl;
    cout<<"numbers are "<<num<<endl;
    cout<<"spaces are "<<spaces<<endl;
    cout<<"extraa are "<<extraa<<endl;
    cout<<"newline are "<<newline<<endl;





	return 0;
}