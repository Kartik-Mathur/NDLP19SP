// SumOfArray
#include <iostream>
using namespace std;

int SUM(int a[],int n){
	// base case
	if(n==0){
		return 0;
	}

	int ChotaAns=SUM(a+1,n-1);
	return a[0]+ChotaAns;
}


int main(){
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(int);

	cout<<SUM(a,n)<<endl;
	
	return 0;
}