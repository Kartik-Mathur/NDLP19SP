#include<iostream>
using namespace std;

int main()
{
	int init,step,fval;
	cin>>init>>fval>>step;
    int c;
    int f=init;
	while(f<=fval)
	{
        c=(5/9.0)*(f-32);
        cout<<f<<" "<<c<<endl;
		f=f+step;
	}
	return 0;
}