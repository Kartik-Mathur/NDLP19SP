// DMA
#include <iostream>
#include <vector>
using namespace std;

int *FUN(int n){
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		arr[i]=i;
	}

	return arr;
}


int main(){
	// int *a=new int;
	// *a=10;
	// cout<<*a<<endl;	
	// delete a;

	int n;
	int r,c;
	cin>>r>>c;

	int **a=new int*[r];
	for(int i=0;i<r;i++){
		a[i]=new int[c];
	}
	int number=1;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			a[i][j]=number;
			number++;
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	for(int i=0;i<r;i++){
		delete []a[i];
	}
	delete []a;
	a=NULL;

	// cin>>n;
	// int *arr=FUN(n);

	// for(int i=0;i<n;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
	// delete []arr;

	return 0;
}