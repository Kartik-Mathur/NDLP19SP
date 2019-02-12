#include<iostream>
using namespace std;

void ftoc(int init,int fval,int step)
{
	int f=init,c;
	while(f<=fval)
	{
        c=(5/9.0)*(f-32);
        cout<<f<<" "<<c<<endl;
		f=f+step;
	}
	return;
}



int main()
{
	int init,fval,step;
	cin>>init>>fval>>step;
	ftoc(init,fval,step);
	return 0;
}