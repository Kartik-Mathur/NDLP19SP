// CINGET
#include <iostream>
using namespace std;

void ReadLine(char *a,char delimit){
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
	cout<<a<<endl;
}

int main(){
	char a[100];

	// cin>>a;
	// ReadLine(a,'#');
	// Print(a);


	// cout<<a<<endl;
	cin.getline(a,100,'#');
	cout<<a<<endl;


	return 0;
}