// SearchString
#include <iostream>
using namespace std;

bool COMPARE(char *a,char *key){
	int i=0;
	while(a[i]!='\0'){
		if(a[i]!=key[i]){
			return false;
		}
		i++;
	}
	if(key[i]=='\0'){
		return true;
	}
	else{
		return false;
	}

}

int main(){

	char a[][10]={
		"Hello",
		"World",
		"Welcome"
	};
	char key[100];
	cin.getline(key,100);
	int i;
	for(i=0;i<3;i++){
		if(COMPARE(a[i],key)==true){
			cout<<"Found!"<<endl;
			break;
		}
	}
	if(i==3){
		cout<<"Key Not Found"<<endl;
	}







	return 0;
}