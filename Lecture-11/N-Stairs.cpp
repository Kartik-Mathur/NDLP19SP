// N-Stairs
#include <iostream>
using namespace std;

int Nstair(int n){
	// Base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}

	// Recursive case
	int ans=Nstair(n-1)+Nstair(n-2)+Nstair(n-3);
	return ans;
}

int stairs(int n,int k){
	// base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}	

	// Recursive case
	int ans=0;
	for(int i=1;i<=k;i++){
		ans+=stairs(n-i,k);
	}
	return ans;
}

int main(){
	int n;
	cin>>n;

	cout<<Nstair(n)<<endl;
	cout<<stairs(n,3)<<endl;

	return 0;
}