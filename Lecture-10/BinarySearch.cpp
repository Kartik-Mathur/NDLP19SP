// BinarySearch
#include <iostream>
using namespace std;

// Using Recursion
int BS(int *a,int key,int s,int e){
	// base case
	if(s>e){
		return -1;
	}

	// Recursive case
	int mid=(s+e)/2;
	if(a[mid]==key){
		return mid;
	}
	else if(a[mid]<key){
		s=mid+1;
	}
	else{
		e=mid-1;
	}
	return BS(a,key,s,e);
}


// Without Recursion
int BinarySearch(int *a,int n,int key){
	int s=0;
	int e=n-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(a[mid]==key){
			return mid;
		}
		else if(key>a[mid]){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	return -1;
}


int main(){
	int a[]={1,3,5,6,7,8,9};
	int n=sizeof(a)/sizeof(int);
	int key;
	cin>>key;
	int indx=BS(a,key,0,n-1);
	if(indx==-1){
		cout<<"Key Not Found!"<<endl;
	}
	else{
		cout<<"Key Found at "<<indx<<endl;
	}


	return 0;
}