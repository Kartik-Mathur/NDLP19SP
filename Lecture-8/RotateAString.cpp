#include <iostream>
using namespace std;

int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

void RotateString(char *a,int n){
	int l=length(a);
	for(int i=l-1;i>=0;i--){
		a[i+n]=a[i];
	}
	// cout<<a<<endl;
	int i=0;
	int j=l;
	for(int k=1;k<=n;k++){
		a[i]=a[j];
		i++;
		j++;
	}
	// cout<<a<<endl;
	a[l]='\0';
	// cout<<a<<endl;
}


int main(){
	char a[100]="CodingBlocks";

	// cin.getline(a,100);
	int n;
	cin>>n;
	RotateString(a,n);
	cout<<a<<endl;



	return 0;
}