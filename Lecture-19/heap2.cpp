#include<iostream>
#include<vector>

using namespace std;

class minheap
{
	vector<int>v;

	void heapify(int index)
	{
       int min_index=index;
       int left=2*index;
       int right=2*index+1;
       
       if(left<v.size() && v[min_index]>v[left])
       {
       	  min_index=left;
       }

       if(right<v.size() && v[min_index]>v[right])
       {
       	 min_index=right;
       }

       if(index!=min_index)
       {
       	 swap(v[index],v[min_index]);
       	 heapify(min_index);
       }

	}
public:

	minheap()
	{
       v.push_back(-1);
	}

	void push(int data)
	{
		v.push_back(data);
		int index=v.size()-1;

		int parent=index/2;

		while(v[parent]>v[index])
		{
			swap(v[parent],v[index]);
			index=parent;
			parent=parent/2;
		}
	}
	int search()
	{
		return v[1];
	}  
    void pop()
    {
    	int index=v.size()-1;
    	swap(v[index],v[1]);
    	v.pop_back();
    	heapify(1);
    }



    bool empty()
    {
    	return v.size()==1;
    }

};


int main()
{
	minheap h;
    int a[]={5,7,34,12,89,43,0,9,6};
    int n=sizeof(a)/sizeof(int);

    for(int i=0;i<n;i++)
    {
    	h.push(a[i]);
    }

    while(!h.empty())
    {
    	cout<<h.search()<<" ";
    	h.pop();
    }

    return 0;

}




