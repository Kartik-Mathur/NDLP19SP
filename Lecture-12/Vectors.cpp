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
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;



	return 0;
}