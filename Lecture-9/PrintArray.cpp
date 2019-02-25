// PrintArray
#include <iostream>
using namespace std;
void Print(int a[],int n){
	if(n==0){
		return;
	}

	cout<<a[0]<<" ";
	Print(a+1,n-1);
}

void Print1(int a[],int n,int i){
	if(i==n){
		return;
	}

	cout<<a[i]<<" ";
	Print1(a,n,i+1);
}

void Print2(int a[],int n){
	if(n==0){
		return;
	}

	cout<<a[n-1]<<" ";
	Print2(a,n-1);
}


int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(a)/sizeof(int);
	
	Print(a,n);
	cout<<endl;
	Print1(a,n,0);
	cout<<endl;
	Print2(a,n);
	cout<<endl;


	return 0;
}