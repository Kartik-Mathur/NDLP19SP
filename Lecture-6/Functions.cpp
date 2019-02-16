#include <iostream>
using namespace std;

// SYNTAX :
// datatype function_name(parameter){

// }

void PrintHello(){
	cout<<"Hello World!"<<endl;

	return;	
}

void SUM1(int x,int y){

	cout<<"SUM is :"<<x+y<<endl;
}

int SUM2(int a,int b){
	// return (a+b);
	int ans=a+b;
	return ans;
}

// void checkPrime(int); // FORWARD DECLARATION

bool checkPrime(int n){
	int i;
	for(i=2;i<=n-1;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void PrintPrime(int n){

	for(int i=2;i<=n;i++){
		if(checkPrime(i)){
			cout<<i<<" ";
		}
	}
	cout<<endl;

	return;
}

int factorial(int n){
	int ans=1;
	for(int i=1;i<=n;i++){
		ans = ans*i;
	}
	return ans;
}

int nCr(int n,int r){
	int ans=factorial(n)/(factorial(r)*factorial(n-r));
	return ans;
}

int main(){
	int a,b;
	int n,r;
	cin>>n>>r;
	cout<<factorial(n)<<endl;
	int ans=nCr(n,r);
	cout<<ans<<endl;
	// cout<<nCr(n,r)<<endl;

	cout<<endl;
	return 0;
}



