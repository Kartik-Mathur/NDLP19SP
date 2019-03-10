// Vectors
#include <iostream>
#include <vector> // header
using namespace std;

int main(){
	// vector<data_type> v;
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	v.pop_back();
	v.pop_back();
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	cout<<v.capacity()<<endl;



	return 0;
}