#include<iostream>
#include<queue>
#include<functional>

using namespace std;


void print(priority_queue<int,vector<int>,greater<int> >h)
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
	priority_queue<int,vector<int>,greater<int> >h;

	int data;
	int k=3;
	int cs=0;
	while(1)
	{
		cin>>data;
		if(data==-1)
		{
			print(h);
		}

		if(cs<k)
		{
			h.push(data);
			cs++;
		}

		else
		{
			if(h.top()<data)
			{
			   h.pop();
			   h.push(data);
			}
			
		}
  
	}
	return 0;
}









