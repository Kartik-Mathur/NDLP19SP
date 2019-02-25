// isSorted
#include <iostream>
using namespace std;

bool isSorted(int a[],int n){
	// base case
	if(n==0||n==1){
		return true;
	}

	bool KyaChotaSortedHai=isSorted(a+1,n-1);
	if(a[0]<=a[1] && KyaChotaSortedHai){
		return true;
	}
	else{
		return false;
	}
}


int main(){
	int a[]={1,3,5,6,8,9};
	int n=sizeof(a)/sizeof(int);

	if(isSorted(a,n)){
		cout<<"Sorted"<<endl;
	}
	else{
		cout<<"Not Sorted"<<endl;
	}



	
	return 0;
}