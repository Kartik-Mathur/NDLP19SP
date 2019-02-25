// Check7
#include <iostream>
using namespace std;

bool Check7(int a[],int n,int i){
	if(i==n){
		return false;
	}

	if(a[i]==7){
		return true;
	}
	else{
		bool KyaChoteArrayMeiMilla=Check7(a,n,i+1);
		if(KyaChoteArrayMeiMilla){
			return true;
		}
		else{
			return false;
		}
	}
}

int first7(int a[],int n,int i){
	// base case
	if(i==n){
		return -1;
	}

	// recursive case
	if(a[i]==7){
		return i;
	}
	else{
		int indx=first7(a,n,i+1);
		return indx;
	}

}

int last7(int a[],int n,int i){
	// base case
	if(i==n){
		return -1;
	}

	// recursive case
	if(a[i]==7){
		int PuranaIndx=i;
		int AageWalaIndx=last7(a,n,i+1);
		if(AageWalaIndx>PuranaIndx){
			return AageWalaIndx;
		}
		else{
			return PuranaIndx;
		}
	}
	else{
		int indx=last7(a,n,i+1);
		return indx;
	}

}

int main(){
	int a[]={1,2,3,7,7,7,7,7,7,7,7,4,5,8,9,0,7};
	int n=sizeof(a)/sizeof(int);
	int i=last7(a,n,0);
	if(i!=-1){
		cout<<"Exists at "<<i<<endl;
	}
	else{
		cout<<"Does not Exists"<<endl;
	}
	
	return 0;
}