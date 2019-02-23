// ReverseAString
#include <iostream>
using namespace std;

int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}


void ReverseAString(char *a){
	int l=length(a);
	int i=0;
	int j=l-1;

	while(i<j){
		swap(a[i],a[j]);
		i++;
		j--;
	}
	return;
}


int main(){
	char a[100];
	cin.getline(a,100);

	ReverseAString(a);
	cout<<a<<endl;


	return 0;
}