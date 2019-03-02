// SUbsequences
#include <iostream>
using namespace std;

void Subsequences(char *in,int i,char *out,int j){
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	// Output array mei ith element lelo
	out[j]=in[i];
	Subsequences(in,i+1,out,j+1);

	// Jab nahi lete ith element
	Subsequences(in,i+1,out,j);

}


int main(){
	char a[100];
	cin>>a;
	char out[100];
	Subsequences(a,0,out,0);


	return 0;
}