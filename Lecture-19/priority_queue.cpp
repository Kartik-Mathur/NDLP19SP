#include<iostream>
#include<queue>
#include<functional>

using namespace std;

// class comparator
// {
// public:

// 	bool operator()(int a,int b)
// 	{
// 		return a>b;
// 	}
// };

void print(priority_queue<int,vector<int>,greater<int> > h)
{

  while(!h.empty())
    {
    	cout<<h.top()<<" ";
    	h.pop();
    }

    cout<<endl;
}


int main()
{
	priority_queue<int,vector<int>,greater<int> > h;
    int a[]={5,7,34,12,89,43,0,9,6};
    int n=sizeof(a)/sizeof(int);

    for(int i=0;i<n;i++)
    {
    	h.push(a[i]);
    }

    // while(!h.empty())
    // {
    // 	cout<<h.top()<<" ";
    // 	h.pop();
    // }
    print(h);
    cout<<"inside main()"<<endl;
    cout<<h.top()<<endl;

    return 0;
}