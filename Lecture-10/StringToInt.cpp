// StringToInt
#include <iostream>
#include <cstring>
using namespace std;

int StringToInt(char *a,int n){
	// base case
	if(n==0){
		return 0;
	}

	// Recursive case
	int last_digit=a[n-1]-'0';
	int ans=StringToInt(a,n-1)*10+last_digit;
	return ans;
}


int main(){
	char a[100];
	cin>>a;
	int n=strlen(a);	

	cout<<StringToInt(a,n)*100<<endl;


	return 0;
}