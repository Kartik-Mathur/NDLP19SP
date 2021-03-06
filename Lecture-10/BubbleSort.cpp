#include <iostream>
using namespace std;

void BubbleSort(int *a,int n,int i){
	// base case
	if(i==n-1){
		return;
	}

	// Recursive case
	for(int j=0;j<=n-2-i;j++){
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		}
	}
	BubbleSort(a,n,i+1);
}


int main(){
	int a[]={5,6,7,4,3,2,1};
	int n=sizeof(a)/sizeof(int);

	BubbleSort(a,n,0);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;


	return 0;
}