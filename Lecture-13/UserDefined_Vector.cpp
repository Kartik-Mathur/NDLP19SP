// UserDefined_Vector
// Vectors
#include <iostream>
using namespace std;

class Vector{
public:
	int *a;
	int cs;
	int ms;

	Vector(int s=4){
		cs=0;
		ms=s;
		a=new int[ms];
	}

	void push_back(int data){
		if(cs==ms){
			int *olda=a;
			int oldams=ms;

			ms=2*ms;
			a=new int[ms];
			for(int i=0;i<oldams;i++){
				a[i]=olda[i];
			}
			delete []olda;
		}
		a[cs]=data;
		cs++;
	}

	void pop_back(){
		if(cs>0){
			cs--;
		}
	}

	int size(){
		return cs;
	}

	int capacity(){
		return ms;
	}

	int operator[](int i){
		return a[i];
	}

};


int main(){
	// vector<data_type> v;
	Vector v(100);
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