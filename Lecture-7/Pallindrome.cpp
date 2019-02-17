// Pallindrome
#include <iostream>
using namespace std;

void ReadLine(char *a,char delimit='\n'){
	char ch;
	int i=0;
	ch=cin.get();

	while(ch!=delimit){
		a[i]=ch;
		i++;
		ch=cin.get();
	}
	a[i]='\0';
}

void Print(char *a){

	for(int i=0;a[i]!='\0';i++){
		cout<<a[i];
	}
	cout<<endl;
}

int length(char *a){

	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

bool isPallindrome(char *a){
	int i=0;
	int j=length(a)-1;
	while(i<j){
		if(a[i]==a[j]){
			i++;
			j--;
		}
		else{
			return false;
		}
	}
	return true;
}


int main(){
	char a[100];

	ReadLine(a);
	Print(a);
	cout<<length(a)<<endl;

	if(isPallindrome(a)){
		cout<<"Pallindrome"<<endl;
	}
	else{
		cout<<"Not A Pallindrome"<<endl;c
	}


	return 0;
}