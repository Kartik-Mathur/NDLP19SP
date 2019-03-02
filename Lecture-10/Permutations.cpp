// Permutations
#include <iostream>
using namespace std;

void Permutations(char *a,int i){
	if(a[i]=='\0'){
		cout<<a<<endl;
		return;
	}
	for(int j=i;a[j]!='\0';j++){
		swap(a[i],a[j]);
		Permutations(a,i+1);
		swap(a[i],a[j]);
	}
}


int main(){
	char a[100];
	cin>>a;

	Permutations(a,0);


	return 0;
}