// Arrays
#include <iostream>
using namespace std;

void print(int *a,int n){

	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
	}
	cout<<endl;
}
void print1(int *a,int n){

	for(int i=n-1;i>=0;i--){
		cout<<*(a+i)<<" ";
	}
	cout<<endl;
}

void Reverse(int a[],int n){
	int i=0;
	int j=n-1;

	while(i<j){
		swap(a[i],a[j]);
		i++;
		j--;
	}
}


int main(){

	int a[]={1,2,3,4,5,6,7,8};
	int n=sizeof(a)/sizeof(int);


	print(a,n);
	Reverse(a,n);
	print(a,n);



	return 0;
}